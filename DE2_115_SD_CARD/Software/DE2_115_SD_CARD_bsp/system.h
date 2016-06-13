/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'DE2_115_SD_CARD_NIOS'
 * SOPC Builder design path: C:/Users/Mitch/Dropbox/385_SD_Card/DE2_115_SD_CARD/DE2_115_SD_CARD_NIOS.sopcinfo
 *
 * Generated: Mon Jun 13 12:46:30 CDT 2016
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x02080820
#define ALT_CPU_CPU_FREQ 100000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1a
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x02040020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 100000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x1a
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_RESET_ADDR 0x02040000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x02080820
#define NIOS2_CPU_FREQ 100000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1a
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x02040020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x1a
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_RESET_ADDR 0x02040000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_GENERIC_TRISTATE_CONTROLLER
#define __ALTERA_NIOS2_QSYS
#define __ALTPLL
#define __SEG7_IF


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x2081050
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x2081050
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x2081050
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "DE2_115_SD_CARD_NIOS"


/*
 * altpll configuration
 *
 */

#define ALTPLL_BASE 0x2081020
#define ALTPLL_IRQ -1
#define ALTPLL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ALTPLL_NAME "/dev/altpll"
#define ALTPLL_SPAN 16
#define ALTPLL_TYPE "altpll"
#define ALT_MODULE_CLASS_altpll altpll


/*
 * cfi_flash configuration
 *
 */

#define ALT_MODULE_CLASS_cfi_flash altera_generic_tristate_controller
#define CFI_FLASH_BASE 0x1800000
#define CFI_FLASH_HOLD_VALUE 60
#define CFI_FLASH_IRQ -1
#define CFI_FLASH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CFI_FLASH_NAME "/dev/cfi_flash"
#define CFI_FLASH_SETUP_VALUE 60
#define CFI_FLASH_SIZE 8388608u
#define CFI_FLASH_SPAN 8388608
#define CFI_FLASH_TIMING_UNITS "ns"
#define CFI_FLASH_TYPE "altera_generic_tristate_controller"
#define CFI_FLASH_WAIT_VALUE 160


/*
 * epp_i2c_scl configuration
 *
 */

#define ALT_MODULE_CLASS_epp_i2c_scl altera_avalon_pio
#define EPP_I2C_SCL_BASE 0xc0
#define EPP_I2C_SCL_BIT_CLEARING_EDGE_REGISTER 0
#define EPP_I2C_SCL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define EPP_I2C_SCL_CAPTURE 0
#define EPP_I2C_SCL_DATA_WIDTH 1
#define EPP_I2C_SCL_DO_TEST_BENCH_WIRING 0
#define EPP_I2C_SCL_DRIVEN_SIM_VALUE 0
#define EPP_I2C_SCL_EDGE_TYPE "NONE"
#define EPP_I2C_SCL_FREQ 100000000
#define EPP_I2C_SCL_HAS_IN 0
#define EPP_I2C_SCL_HAS_OUT 1
#define EPP_I2C_SCL_HAS_TRI 0
#define EPP_I2C_SCL_IRQ -1
#define EPP_I2C_SCL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define EPP_I2C_SCL_IRQ_TYPE "NONE"
#define EPP_I2C_SCL_NAME "/dev/epp_i2c_scl"
#define EPP_I2C_SCL_RESET_VALUE 0
#define EPP_I2C_SCL_SPAN 16
#define EPP_I2C_SCL_TYPE "altera_avalon_pio"


/*
 * epp_i2c_sda configuration
 *
 */

#define ALT_MODULE_CLASS_epp_i2c_sda altera_avalon_pio
#define EPP_I2C_SDA_BASE 0xd0
#define EPP_I2C_SDA_BIT_CLEARING_EDGE_REGISTER 0
#define EPP_I2C_SDA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define EPP_I2C_SDA_CAPTURE 0
#define EPP_I2C_SDA_DATA_WIDTH 1
#define EPP_I2C_SDA_DO_TEST_BENCH_WIRING 0
#define EPP_I2C_SDA_DRIVEN_SIM_VALUE 0
#define EPP_I2C_SDA_EDGE_TYPE "NONE"
#define EPP_I2C_SDA_FREQ 100000000
#define EPP_I2C_SDA_HAS_IN 0
#define EPP_I2C_SDA_HAS_OUT 0
#define EPP_I2C_SDA_HAS_TRI 1
#define EPP_I2C_SDA_IRQ -1
#define EPP_I2C_SDA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define EPP_I2C_SDA_IRQ_TYPE "NONE"
#define EPP_I2C_SDA_NAME "/dev/epp_i2c_sda"
#define EPP_I2C_SDA_RESET_VALUE 0
#define EPP_I2C_SDA_SPAN 16
#define EPP_I2C_SDA_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER
#define ALT_TIMESTAMP_CLK none


/*
 * i2c_scl configuration
 *
 */

#define ALT_MODULE_CLASS_i2c_scl altera_avalon_pio
#define I2C_SCL_BASE 0xf0
#define I2C_SCL_BIT_CLEARING_EDGE_REGISTER 0
#define I2C_SCL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define I2C_SCL_CAPTURE 0
#define I2C_SCL_DATA_WIDTH 1
#define I2C_SCL_DO_TEST_BENCH_WIRING 0
#define I2C_SCL_DRIVEN_SIM_VALUE 0
#define I2C_SCL_EDGE_TYPE "NONE"
#define I2C_SCL_FREQ 100000000
#define I2C_SCL_HAS_IN 0
#define I2C_SCL_HAS_OUT 1
#define I2C_SCL_HAS_TRI 0
#define I2C_SCL_IRQ -1
#define I2C_SCL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define I2C_SCL_IRQ_TYPE "NONE"
#define I2C_SCL_NAME "/dev/i2c_scl"
#define I2C_SCL_RESET_VALUE 0
#define I2C_SCL_SPAN 16
#define I2C_SCL_TYPE "altera_avalon_pio"


/*
 * i2c_sda configuration
 *
 */

#define ALT_MODULE_CLASS_i2c_sda altera_avalon_pio
#define I2C_SDA_BASE 0x100
#define I2C_SDA_BIT_CLEARING_EDGE_REGISTER 0
#define I2C_SDA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define I2C_SDA_CAPTURE 0
#define I2C_SDA_DATA_WIDTH 1
#define I2C_SDA_DO_TEST_BENCH_WIRING 0
#define I2C_SDA_DRIVEN_SIM_VALUE 0
#define I2C_SDA_EDGE_TYPE "NONE"
#define I2C_SDA_FREQ 100000000
#define I2C_SDA_HAS_IN 0
#define I2C_SDA_HAS_OUT 0
#define I2C_SDA_HAS_TRI 1
#define I2C_SDA_IRQ -1
#define I2C_SDA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define I2C_SDA_IRQ_TYPE "NONE"
#define I2C_SDA_NAME "/dev/i2c_sda"
#define I2C_SDA_RESET_VALUE 0
#define I2C_SDA_SPAN 16
#define I2C_SDA_TYPE "altera_avalon_pio"


/*
 * ir configuration
 *
 */

#define ALT_MODULE_CLASS_ir altera_avalon_pio
#define IR_BASE 0x130
#define IR_BIT_CLEARING_EDGE_REGISTER 0
#define IR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define IR_CAPTURE 0
#define IR_DATA_WIDTH 1
#define IR_DO_TEST_BENCH_WIRING 0
#define IR_DRIVEN_SIM_VALUE 0
#define IR_EDGE_TYPE "NONE"
#define IR_FREQ 100000000
#define IR_HAS_IN 1
#define IR_HAS_OUT 0
#define IR_HAS_TRI 0
#define IR_IRQ -1
#define IR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define IR_IRQ_TYPE "NONE"
#define IR_NAME "/dev/ir"
#define IR_RESET_VALUE 0
#define IR_SPAN 16
#define IR_TYPE "altera_avalon_pio"


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x2081050
#define JTAG_UART_IRQ 0
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * key configuration
 *
 */

#define ALT_MODULE_CLASS_key altera_avalon_pio
#define KEY_BASE 0x60
#define KEY_BIT_CLEARING_EDGE_REGISTER 0
#define KEY_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEY_CAPTURE 1
#define KEY_DATA_WIDTH 4
#define KEY_DO_TEST_BENCH_WIRING 0
#define KEY_DRIVEN_SIM_VALUE 0
#define KEY_EDGE_TYPE "FALLING"
#define KEY_FREQ 100000000
#define KEY_HAS_IN 1
#define KEY_HAS_OUT 0
#define KEY_HAS_TRI 0
#define KEY_IRQ 1
#define KEY_IRQ_INTERRUPT_CONTROLLER_ID 0
#define KEY_IRQ_TYPE "EDGE"
#define KEY_NAME "/dev/key"
#define KEY_RESET_VALUE 0
#define KEY_SPAN 16
#define KEY_TYPE "altera_avalon_pio"


/*
 * ledg configuration
 *
 */

#define ALT_MODULE_CLASS_ledg altera_avalon_pio
#define LEDG_BASE 0x110
#define LEDG_BIT_CLEARING_EDGE_REGISTER 0
#define LEDG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDG_CAPTURE 0
#define LEDG_DATA_WIDTH 9
#define LEDG_DO_TEST_BENCH_WIRING 0
#define LEDG_DRIVEN_SIM_VALUE 0
#define LEDG_EDGE_TYPE "NONE"
#define LEDG_FREQ 100000000
#define LEDG_HAS_IN 0
#define LEDG_HAS_OUT 1
#define LEDG_HAS_TRI 0
#define LEDG_IRQ -1
#define LEDG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDG_IRQ_TYPE "NONE"
#define LEDG_NAME "/dev/ledg"
#define LEDG_RESET_VALUE 0
#define LEDG_SPAN 16
#define LEDG_TYPE "altera_avalon_pio"


/*
 * ledr configuration
 *
 */

#define ALT_MODULE_CLASS_ledr altera_avalon_pio
#define LEDR_BASE 0x120
#define LEDR_BIT_CLEARING_EDGE_REGISTER 0
#define LEDR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDR_CAPTURE 0
#define LEDR_DATA_WIDTH 18
#define LEDR_DO_TEST_BENCH_WIRING 0
#define LEDR_DRIVEN_SIM_VALUE 0
#define LEDR_EDGE_TYPE "NONE"
#define LEDR_FREQ 100000000
#define LEDR_HAS_IN 0
#define LEDR_HAS_OUT 1
#define LEDR_HAS_TRI 0
#define LEDR_IRQ -1
#define LEDR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDR_IRQ_TYPE "NONE"
#define LEDR_NAME "/dev/ledr"
#define LEDR_RESET_VALUE 0
#define LEDR_SPAN 16
#define LEDR_TYPE "altera_avalon_pio"


/*
 * onchip_memory2 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_BASE 0x2040000
#define ONCHIP_MEMORY2_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_DUAL_PORT 0
#define ONCHIP_MEMORY2_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_INIT_CONTENTS_FILE "DE2_115_SD_CARD_NIOS_onchip_memory2"
#define ONCHIP_MEMORY2_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_IRQ -1
#define ONCHIP_MEMORY2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_NAME "/dev/onchip_memory2"
#define ONCHIP_MEMORY2_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_SIZE_VALUE 262144
#define ONCHIP_MEMORY2_SPAN 262144
#define ONCHIP_MEMORY2_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_WRITABLE 1


/*
 * rs232 configuration
 *
 */

#define ALT_MODULE_CLASS_rs232 altera_avalon_uart
#define RS232_BASE 0x40
#define RS232_BAUD 115200
#define RS232_DATA_BITS 8
#define RS232_FIXED_BAUD 1
#define RS232_FREQ 100000000
#define RS232_IRQ 3
#define RS232_IRQ_INTERRUPT_CONTROLLER_ID 0
#define RS232_NAME "/dev/rs232"
#define RS232_PARITY 'N'
#define RS232_SIM_CHAR_STREAM ""
#define RS232_SIM_TRUE_BAUD 0
#define RS232_SPAN 32
#define RS232_STOP_BITS 1
#define RS232_SYNC_REG_DEPTH 2
#define RS232_TYPE "altera_avalon_uart"
#define RS232_USE_CTS_RTS 1
#define RS232_USE_EOP_REGISTER 0


/*
 * sd_clk configuration
 *
 */

#define ALT_MODULE_CLASS_sd_clk altera_avalon_pio
#define SD_CLK_BASE 0x80
#define SD_CLK_BIT_CLEARING_EDGE_REGISTER 0
#define SD_CLK_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SD_CLK_CAPTURE 0
#define SD_CLK_DATA_WIDTH 1
#define SD_CLK_DO_TEST_BENCH_WIRING 0
#define SD_CLK_DRIVEN_SIM_VALUE 0
#define SD_CLK_EDGE_TYPE "NONE"
#define SD_CLK_FREQ 100000000
#define SD_CLK_HAS_IN 0
#define SD_CLK_HAS_OUT 1
#define SD_CLK_HAS_TRI 0
#define SD_CLK_IRQ -1
#define SD_CLK_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SD_CLK_IRQ_TYPE "NONE"
#define SD_CLK_NAME "/dev/sd_clk"
#define SD_CLK_RESET_VALUE 0
#define SD_CLK_SPAN 16
#define SD_CLK_TYPE "altera_avalon_pio"


/*
 * sd_cmd configuration
 *
 */

#define ALT_MODULE_CLASS_sd_cmd altera_avalon_pio
#define SD_CMD_BASE 0x90
#define SD_CMD_BIT_CLEARING_EDGE_REGISTER 0
#define SD_CMD_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SD_CMD_CAPTURE 0
#define SD_CMD_DATA_WIDTH 1
#define SD_CMD_DO_TEST_BENCH_WIRING 0
#define SD_CMD_DRIVEN_SIM_VALUE 0
#define SD_CMD_EDGE_TYPE "NONE"
#define SD_CMD_FREQ 100000000
#define SD_CMD_HAS_IN 0
#define SD_CMD_HAS_OUT 0
#define SD_CMD_HAS_TRI 1
#define SD_CMD_IRQ -1
#define SD_CMD_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SD_CMD_IRQ_TYPE "NONE"
#define SD_CMD_NAME "/dev/sd_cmd"
#define SD_CMD_RESET_VALUE 0
#define SD_CMD_SPAN 16
#define SD_CMD_TYPE "altera_avalon_pio"


/*
 * sd_dat configuration
 *
 */

#define ALT_MODULE_CLASS_sd_dat altera_avalon_pio
#define SD_DAT_BASE 0xa0
#define SD_DAT_BIT_CLEARING_EDGE_REGISTER 0
#define SD_DAT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SD_DAT_CAPTURE 0
#define SD_DAT_DATA_WIDTH 4
#define SD_DAT_DO_TEST_BENCH_WIRING 0
#define SD_DAT_DRIVEN_SIM_VALUE 0
#define SD_DAT_EDGE_TYPE "NONE"
#define SD_DAT_FREQ 100000000
#define SD_DAT_HAS_IN 0
#define SD_DAT_HAS_OUT 0
#define SD_DAT_HAS_TRI 1
#define SD_DAT_IRQ -1
#define SD_DAT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SD_DAT_IRQ_TYPE "NONE"
#define SD_DAT_NAME "/dev/sd_dat"
#define SD_DAT_RESET_VALUE 0
#define SD_DAT_SPAN 16
#define SD_DAT_TYPE "altera_avalon_pio"


/*
 * sd_wp_n configuration
 *
 */

#define ALT_MODULE_CLASS_sd_wp_n altera_avalon_pio
#define SD_WP_N_BASE 0xb0
#define SD_WP_N_BIT_CLEARING_EDGE_REGISTER 0
#define SD_WP_N_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SD_WP_N_CAPTURE 0
#define SD_WP_N_DATA_WIDTH 1
#define SD_WP_N_DO_TEST_BENCH_WIRING 0
#define SD_WP_N_DRIVEN_SIM_VALUE 0
#define SD_WP_N_EDGE_TYPE "NONE"
#define SD_WP_N_FREQ 100000000
#define SD_WP_N_HAS_IN 1
#define SD_WP_N_HAS_OUT 0
#define SD_WP_N_HAS_TRI 0
#define SD_WP_N_IRQ -1
#define SD_WP_N_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SD_WP_N_IRQ_TYPE "NONE"
#define SD_WP_N_NAME "/dev/sd_wp_n"
#define SD_WP_N_RESET_VALUE 0
#define SD_WP_N_SPAN 16
#define SD_WP_N_TYPE "altera_avalon_pio"


/*
 * seg7 configuration
 *
 */

#define ALT_MODULE_CLASS_seg7 SEG7_IF
#define SEG7_BASE 0x0
#define SEG7_IRQ -1
#define SEG7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_NAME "/dev/seg7"
#define SEG7_SPAN 32
#define SEG7_TYPE "SEG7_IF"


/*
 * sma_in configuration
 *
 */

#define ALT_MODULE_CLASS_sma_in altera_avalon_pio
#define SMA_IN_BASE 0x2081030
#define SMA_IN_BIT_CLEARING_EDGE_REGISTER 0
#define SMA_IN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SMA_IN_CAPTURE 0
#define SMA_IN_DATA_WIDTH 1
#define SMA_IN_DO_TEST_BENCH_WIRING 0
#define SMA_IN_DRIVEN_SIM_VALUE 0
#define SMA_IN_EDGE_TYPE "NONE"
#define SMA_IN_FREQ 100000000
#define SMA_IN_HAS_IN 1
#define SMA_IN_HAS_OUT 0
#define SMA_IN_HAS_TRI 0
#define SMA_IN_IRQ -1
#define SMA_IN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SMA_IN_IRQ_TYPE "NONE"
#define SMA_IN_NAME "/dev/sma_in"
#define SMA_IN_RESET_VALUE 0
#define SMA_IN_SPAN 16
#define SMA_IN_TYPE "altera_avalon_pio"


/*
 * sma_out configuration
 *
 */

#define ALT_MODULE_CLASS_sma_out altera_avalon_pio
#define SMA_OUT_BASE 0x2081040
#define SMA_OUT_BIT_CLEARING_EDGE_REGISTER 0
#define SMA_OUT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SMA_OUT_CAPTURE 0
#define SMA_OUT_DATA_WIDTH 1
#define SMA_OUT_DO_TEST_BENCH_WIRING 0
#define SMA_OUT_DRIVEN_SIM_VALUE 0
#define SMA_OUT_EDGE_TYPE "NONE"
#define SMA_OUT_FREQ 100000000
#define SMA_OUT_HAS_IN 0
#define SMA_OUT_HAS_OUT 1
#define SMA_OUT_HAS_TRI 0
#define SMA_OUT_IRQ -1
#define SMA_OUT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SMA_OUT_IRQ_TYPE "NONE"
#define SMA_OUT_NAME "/dev/sma_out"
#define SMA_OUT_RESET_VALUE 0
#define SMA_OUT_SPAN 16
#define SMA_OUT_TYPE "altera_avalon_pio"


/*
 * sw configuration
 *
 */

#define ALT_MODULE_CLASS_sw altera_avalon_pio
#define SW_BASE 0xe0
#define SW_BIT_CLEARING_EDGE_REGISTER 0
#define SW_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SW_CAPTURE 1
#define SW_DATA_WIDTH 18
#define SW_DO_TEST_BENCH_WIRING 0
#define SW_DRIVEN_SIM_VALUE 0
#define SW_EDGE_TYPE "FALLING"
#define SW_FREQ 100000000
#define SW_HAS_IN 1
#define SW_HAS_OUT 0
#define SW_HAS_TRI 0
#define SW_IRQ 2
#define SW_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SW_IRQ_TYPE "EDGE"
#define SW_NAME "/dev/sw"
#define SW_RESET_VALUE 0
#define SW_SPAN 16
#define SW_TYPE "altera_avalon_pio"


/*
 * timer configuration
 *
 */

#define ALT_MODULE_CLASS_timer altera_avalon_timer
#define TIMER_ALWAYS_RUN 0
#define TIMER_BASE 0x20
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 0
#define TIMER_FREQ 100000000
#define TIMER_IRQ 4
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 99999
#define TIMER_MULT 0.001
#define TIMER_NAME "/dev/timer"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "ms"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1000
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_TYPE "altera_avalon_timer"


/*
 * to_hw_port configuration
 *
 */

#define ALT_MODULE_CLASS_to_hw_port altera_avalon_pio
#define TO_HW_PORT_BASE 0x140
#define TO_HW_PORT_BIT_CLEARING_EDGE_REGISTER 0
#define TO_HW_PORT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TO_HW_PORT_CAPTURE 0
#define TO_HW_PORT_DATA_WIDTH 16
#define TO_HW_PORT_DO_TEST_BENCH_WIRING 0
#define TO_HW_PORT_DRIVEN_SIM_VALUE 0
#define TO_HW_PORT_EDGE_TYPE "NONE"
#define TO_HW_PORT_FREQ 50000000
#define TO_HW_PORT_HAS_IN 0
#define TO_HW_PORT_HAS_OUT 1
#define TO_HW_PORT_HAS_TRI 0
#define TO_HW_PORT_IRQ -1
#define TO_HW_PORT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TO_HW_PORT_IRQ_TYPE "NONE"
#define TO_HW_PORT_NAME "/dev/to_hw_port"
#define TO_HW_PORT_RESET_VALUE 0
#define TO_HW_PORT_SPAN 16
#define TO_HW_PORT_TYPE "altera_avalon_pio"


/*
 * to_hw_sig configuration
 *
 */

#define ALT_MODULE_CLASS_to_hw_sig altera_avalon_pio
#define TO_HW_SIG_BASE 0x150
#define TO_HW_SIG_BIT_CLEARING_EDGE_REGISTER 0
#define TO_HW_SIG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TO_HW_SIG_CAPTURE 0
#define TO_HW_SIG_DATA_WIDTH 2
#define TO_HW_SIG_DO_TEST_BENCH_WIRING 0
#define TO_HW_SIG_DRIVEN_SIM_VALUE 0
#define TO_HW_SIG_EDGE_TYPE "NONE"
#define TO_HW_SIG_FREQ 50000000
#define TO_HW_SIG_HAS_IN 0
#define TO_HW_SIG_HAS_OUT 1
#define TO_HW_SIG_HAS_TRI 0
#define TO_HW_SIG_IRQ -1
#define TO_HW_SIG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TO_HW_SIG_IRQ_TYPE "NONE"
#define TO_HW_SIG_NAME "/dev/to_hw_sig"
#define TO_HW_SIG_RESET_VALUE 0
#define TO_HW_SIG_SPAN 16
#define TO_HW_SIG_TYPE "altera_avalon_pio"


/*
 * to_sw_sig configuration
 *
 */

#define ALT_MODULE_CLASS_to_sw_sig altera_avalon_pio
#define TO_SW_SIG_BASE 0x160
#define TO_SW_SIG_BIT_CLEARING_EDGE_REGISTER 0
#define TO_SW_SIG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TO_SW_SIG_CAPTURE 0
#define TO_SW_SIG_DATA_WIDTH 2
#define TO_SW_SIG_DO_TEST_BENCH_WIRING 0
#define TO_SW_SIG_DRIVEN_SIM_VALUE 0
#define TO_SW_SIG_EDGE_TYPE "NONE"
#define TO_SW_SIG_FREQ 50000000
#define TO_SW_SIG_HAS_IN 1
#define TO_SW_SIG_HAS_OUT 0
#define TO_SW_SIG_HAS_TRI 0
#define TO_SW_SIG_IRQ -1
#define TO_SW_SIG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TO_SW_SIG_IRQ_TYPE "NONE"
#define TO_SW_SIG_NAME "/dev/to_sw_sig"
#define TO_SW_SIG_RESET_VALUE 0
#define TO_SW_SIG_SPAN 16
#define TO_SW_SIG_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
