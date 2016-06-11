// --------------------------------------------------------------------
// Copyright (c) 2010 by Terasic Technologies Inc. 
// --------------------------------------------------------------------
//
// Permission:
//
//   Terasic grants permission to use and modify this code for use
//   in synthesis for all Terasic Development Boards and Altera Development 
//   Kits made by Terasic.  Other use of this code, including the selling 
//   ,duplication, or modification of any portion is strictly prohibited.
//
// Disclaimer:
//
//   This VHDL/Verilog or C/C++ source code is intended as a design reference
//   which illustrates how these types of functions can be implemented.
//   It is the user's responsibility to verify their design for
//   consistency and functionality through the use of formal
//   verification methods.  Terasic provides no warranty regarding the use 
//   or functionality of this code.
//
// --------------------------------------------------------------------
//           
//                     Terasic Technologies Inc
//                     356 Fu-Shin E. Rd Sec. 1. JhuBei City,
//                     HsinChu County, Taiwan
//                     302
//
//                     web: http://www.terasic.com/
//                     email: support@terasic.com
//
// --------------------------------------------------------------------
// Last built by: Quartus 9.1 SP2 build 350
// Supported File Format: FAT16 & FAT 32
// Supported SDCARD: SD, HCSD

#include <stdio.h>
#include <unistd.h>
#include ".\terasic_lib\terasic_includes.h"
#include ".\terasic_fat\FatFileSystem.h"

volatile unsigned int *TO_HW_PORT  	= (unsigned int*)0x140; //make a pointer to access the PIO block
volatile unsigned int *TO_HW_SIG   	= (unsigned int*)0x150; //make a pointer to access the PIO block
volatile unsigned int *TO_SW_SIG   	= (unsigned int*)0x160; //make a pointer to access the PIO block
volatile unsigned int *LCD_SCREEN   = (unsigned int*)0x70;



bool Fat_Test(FAT_HANDLE hFat){
	*TO_HW_SIG = 0;
    bool bSuccess;
    int nCount = 0;
    char* pDumpFile[256];
    FAT_BROWSE_HANDLE hBrowse;
    FILE_CONTEXT FileContext;
    
    bSuccess = Fat_FileBrowseBegin(hFat, &hBrowse);
    if (bSuccess){
        while(Fat_FileBrowseNext(&hBrowse, &FileContext)){
            if (FileContext.bLongFilename){
                alt_u16 *pData16;
                alt_u8 *pData8;
                pData16 = (alt_u16 *)FileContext.szName;
                pData8 = FileContext.szName;
                printf("[%d]", nCount);
                while(*pData16){
                    if (*pData8)
                        printf("%c", *pData8);
                    pData8++;
                    if (*pData8)
                        printf("%c", *pData8);
                    pData8++;                    
                    //    
                    pData16++;
                }
                printf("\n");
            }else{
                printf("[%d]%s\n", nCount, FileContext.szName);
            }                
            nCount++;
        }    
        printf("Select file by Name: \n");
        scanf("%s", pDumpFile);
    }


    if (bSuccess && pDumpFile && strlen(pDumpFile)){
        FAT_FILE_HANDLE hFile;
        unsigned int transfer_16bit = 0;
        hFile =  Fat_FileOpen(hFat, pDumpFile);
        if (hFile){
            char szRead[2];
            int nReadSize, nFileSize, nTotalReadSize=0;
            nFileSize = Fat_FileSize(hFile);
            if (nReadSize > sizeof(szRead))
                nReadSize = sizeof(szRead);
            printf("%s dump:\n", pDumpFile);

            //Prepare io_module for data transfer
            *TO_HW_SIG = 1;
            while(*TO_SW_SIG != 1)printf("%c", 0);	//Wait for first prepare

            while(bSuccess && nTotalReadSize < nFileSize){

                nReadSize = sizeof(szRead);
                transfer_16bit = 0;

                //Never read more than what is left in the file
                if (nReadSize > (nFileSize - nTotalReadSize)) nReadSize = (nFileSize - nTotalReadSize);

                if (Fat_FileRead(hFile, szRead, nReadSize)){
                    int i;
                    for(i=0;i<nReadSize;i++){
                        printf("%02x", (alt_u8)szRead[i]);
                        transfer_16bit |= (alt_u8)szRead[i] << i*8;
                    }
                    printf("\n");
                    printf("instruction: %04x\n", transfer_16bit);
                    nTotalReadSize += nReadSize;
                }else{
                    bSuccess = FALSE;
                    printf("\nFaied to read the file \"%s\"\n", pDumpFile);
                }     

                //Transfer 16 bits

                printf("Begin Transfer...\n");
               	*TO_HW_PORT = transfer_16bit;


               	printf("Send 0...\n");
               	*TO_HW_SIG = 0;
               	while(*TO_SW_SIG != 2)printf("%c", 0);		//Wait for set_mem


               	printf("Send 1...\n");
               	*TO_HW_SIG = 1;
               	while(*TO_SW_SIG != 1)printf("%c", 0);		//Wait for prepare

               	//printf("Press Key3 to continue...\n");

               	//Debug: wait for key-press
//               	while ((IORD_ALTERA_AVALON_PIO_DATA(KEY_BASE) & 0x08) == 0x08);
//               	usleep(400*1000); // de-bounce
//               	*TO_HW_PORT &= ~0xFFFF;

            } // while

            printf("Done reading %s to memory.\n", pDumpFile);
            *TO_HW_SIG = 2;
           	while(*TO_SW_SIG != 0)printf("%c", 0);	 //Wait to return to Wait

            if (bSuccess)
                printf("\n");
            Fat_FileClose(hFile);
        }else{            
            bSuccess = FALSE;
            printf("Cannot find the file \"%s\"\n", pDumpFile);
        }            
    }
    
    return bSuccess;
}


int main()
{
    const alt_u32 LED_TEST_PATTERN = 0xF0;
    const alt_u32 LED_NG_PATTERN = 0xFF;
    const alt_u32 LED_PASS_PATTERN = 0x00;
    const char temp[] = "Test String\0";
    FAT_HANDLE hFat;





    printf("========== DE2-115 SDCARD Demo ==========\n");
    
    while(1){
        printf("Processing...\r\n");
        IOWR_ALTERA_AVALON_PIO_DATA(LEDR_BASE, LED_TEST_PATTERN);
        hFat = Fat_Mount(FAT_SD_CARD, 0);
        if (hFat){
            printf("sdcard mount success!\n");
            printf("Root Directory Item Count:%d\n", Fat_FileCount(hFat));
            Fat_Test(hFat);
            Fat_Unmount(hFat);
            IOWR_ALTERA_AVALON_PIO_DATA(LEDR_BASE, LED_PASS_PATTERN);
            
            printf("===== Test Done =====\r\nPress KEY3 to test again.\r\n");
        }else{
            printf("Failed to mount the SDCARD!\r\nPlease insert the SDCARD into DE2-115 board and press KEY3.\r\n");
            IOWR_ALTERA_AVALON_PIO_DATA(LEDR_BASE, LED_NG_PATTERN);
        }
        // wait users to press BUTTON3
        while ((IORD_ALTERA_AVALON_PIO_DATA(KEY_BASE) & 0x08) == 0x08);
        IOWR_ALTERA_AVALON_PIO_DATA(LEDR_BASE, LED_TEST_PATTERN);
        usleep(400*1000); // debounce
    } // while            
  

  return 0;
}
