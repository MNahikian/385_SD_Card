/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2003 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
*                                                                             *
******************************************************************************/

#ifndef __ALT_UP_CHARACTER_LCD_REGS_H__
#define __ALT_UP_CHARACTER_LCD_REGS_H__

#include <io.h>;

/*
* Control Register (When RS = 0)
* (In the document, we used the name Instruction Register)
*/
#define ALT_UP_CHARACTER_LCD_CONTROL_REG               0
#define IOADDR_ALT_UP_CHARACTER_LCD_CONTROL(base)      \
__IO_CALC_ADDRESS_NATIVE(base, ALT_UP_CHARACTER_LCD_CONTROL_REG)
#define IORD_ALT_UP_CHARACTER_LCD_CONTROL(base)        \
IORD(base, ALT_UP_CHARACTER_LCD_CONTROL_REG)
#define IOWR_ALT_UP_CHARACTER_LCD_CONTROL(base, data)  \
IOWR(base, ALT_UP_CHARACTER_LCD_CONTROL_REG, data)

//#define ALT_UP_CHARACTER_LCD_CONTROL_MSK    (0x000000FF)
//#define ALT_UP_CHARACTER_LCD_CONTROL_OFST    (0x00000000)

// Clear Display
#define ALT_UP_CHARACTER_LCD_CTRL_CLEAR_DISPLAY (0x00000001)
// Return Home
#define ALT_UP_CHARACTER_LCD_CTRL_RETURN_HOME (0x00000002)
//Entry Mode
#define ALT_UP_CHARACTER_LCD_CTRL_ENTRY_DIR_RIGHT (0x00000006)
#define ALT_UP_CHARACTER_LCD_CTRL_ENTRY_DIR_LEFT (0x00000004)
#define ALT_UP_CHARACTER_LCD_CTRL_ENTRY_SHIFT_ENABLE (0x00000005)
#define ALT_UP_CHARACTER_LCD_CTRL_ENTRY_SHIFT_DISABLE (0x00000004)

// Display ON/OFF Control
#define ALT_UP_CHARACTER_LCD_CTRL_DISPLAY_ON (0x0000000C)
#define ALT_UP_CHARACTER_LCD_CTRL_CURSOR_ON (0x0000000E)
#define ALT_UP_CHARACTER_LCD_CTRL_CURSOR_BLINK_ON (0x0000000F)

#define ALT_UP_CHARACTER_LCD_CTRL_DISPLAY_OFF (0x00000008)

#define ALT_UP_CHARACTER_LCD_CTRL_CURSOR_OFF (0x0000000C) //equivalent to ALT_UP_CHARACTER_LCD_CTRL_DISPLAY_ON
#define ALT_UP_CHARACTER_LCD_CTRL_CURSOR_BLINK_OFF (0x0000000E) //equivalent to ALT_UP_CHARACTER_LCD_CTRL_CURSOR_ON

// Cursor/Display Shift
// cause the entire display to move to left or right (the origin of the display is also changed)
#define ALT_UP_CHARACTER_LCD_CTRL_DISPLAY_SHIFT_RIGHT (0x0000001C)
#define ALT_UP_CHARACTER_LCD_CTRL_DISPLAY_SHIFT_LEFT (0x00000018)
// move the cursor to left or right
#define ALT_UP_CHARACTER_LCD_CTRL_CURSOR_SHIFT_RIGHT (0x00000014)
#define ALT_UP_CHARACTER_LCD_CTRL_CURSOR_SHIFT_LEFT (0x00000010)

/*
* Data Register (When RS = 1)
*/
#define ALT_UP_CHARACTER_LCD_DATA_REG                  1
#define IOADDR_ALT_UP_CHARACTER_LCD_DATA(base)         \
__IO_CALC_ADDRESS_NATIVE(base, ALT_UP_CHARACTER_LCD_DATA_REG)
#define IORD_ALT_UP_CHARACTER_LCD_DATA(base)           \
IORD(base, ALT_UP_CHARACTER_LCD_DATA_REG)
#define IOWR_ALT_UP_CHARACTER_LCD_DATA(base, data)     \
IOWR(base, ALT_UP_CHARACTER_LCD_DATA_REG, data)

//#define ALT_UP_CHARACTER_LCD_DATA_MSK             (0x000000FF)
//#define ALT_UP_CHARACTER_LCD_DATA_OFST            (0)


#endif /* __ALT_UP_CHARACTER_LCD_REGS_H__ */
