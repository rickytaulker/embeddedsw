/******************************************************************************
*
* Copyright (C) 2019 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
*
*
******************************************************************************/

#ifndef _XPM_CLIENT_NODEIDWRAPPER_H_
#define _XPM_CLIENT_NODEIDWRAPPER_H_

#warning This file will be deprecated in future. Please use xpm_nodeid.h.

#include "xpm_nodeid.h"

#define NODE_APU			PM_POWER_ACPU_0
#define NODE_APU_0			PM_DEV_ACPU_0
#define NODE_APU_1			PM_DEV_ACPU_1
#define NODE_RPU			PM_POWER_RPU0_0
#define NODE_RPU_0			PM_DEV_RPU0_0
#define NODE_RPU_1			PM_DEV_RPU0_1
#define NODE_PLD			PM_POWER_PLD
#define NODE_FPD			PM_POWER_FPD
#define NODE_OCM_BANK_0			PM_DEV_OCM_0
#define NODE_OCM_BANK_1			PM_DEV_OCM_1
#define NODE_OCM_BANK_2			PM_DEV_OCM_2
#define NODE_OCM_BANK_3			PM_DEV_OCM_3
#define NODE_TCM_0_A			PM_DEV_TCM_0_A
#define NODE_TCM_0_B			PM_DEV_TCM_0_B
#define NODE_TCM_1_A			PM_DEV_TCM_1_A
#define NODE_TCM_1_B			PM_DEV_TCM_1_B
#define NODE_L2				PM_DEV_L2_BANK_0
#define NODE_USB_0			PM_DEV_USB_0
#define NODE_TTC_0			PM_DEV_TTC_0
#define NODE_TTC_1			PM_DEV_TTC_1
#define NODE_TTC_2			PM_DEV_TTC_2
#define NODE_TTC_3			PM_DEV_TTC_3
#define NODE_ETH_0			PM_DEV_GEM_0
#define NODE_ETH_1			PM_DEV_GEM_1
#define NODE_UART_0			PM_DEV_UART_0
#define NODE_UART_1			PM_DEV_UART_1
#define NODE_SPI_0			PM_DEV_SPI_0
#define NODE_SPI_1			PM_DEV_SPI_1
#define NODE_I2C_0			PM_DEV_I2C_0
#define NODE_I2C_1			PM_DEV_I2C_1
#define NODE_SD_0			PM_DEV_SDIO_0
#define NODE_SD_1			PM_DEV_SDIO_1
#define NODE_ADMA			PM_DEV_ADMA_0
#define NODE_QSPI			PM_DEV_QSPI
#define NODE_GPIO			PM_DEV_GPIO
#define NODE_CAN_0			PM_DEV_CAN_FD_0
#define NODE_CAN_1			PM_DEV_CAN_FD_1
#define NODE_APLL			PM_CLOCK_APLL
#define NODE_RPLL			PM_CLOCK_RPLL
#define NODE_DDR			PM_DEV_DDR_0
#define NODE_RTC			PM_DEV_RTC
#define NODE_LPD			PM_POWER_LPD
#define NODE_PL				PM_DEV_PL_0

#define XILPM_RESET_SWDT_CRF		PM_RST_SWDT_FPD
#define XILPM_RESET_ACPU1_PWRON		PM_RST_ACPU_1_POR
#define XILPM_RESET_ACPU0_PWRON		PM_RST_ACPU_0_POR
#define XILPM_RESET_APU_L2		PM_RST_ACPU_L2
#define XILPM_RESET_ACPU1		PM_RST_ACPU_1
#define XILPM_RESET_ACPU0		PM_RST_ACPU_0
#define XILPM_RESET_GEM0		PM_RST_GEM_0
#define XILPM_RESET_GEM1		PM_RST_GEM_1
#define XILPM_RESET_QSPI		PM_RST_QSPI
#define XILPM_RESET_UART0		PM_RST_UART_0
#define XILPM_RESET_UART1		PM_RST_UART_1
#define XILPM_RESET_SPI0		PM_RST_SPI_0
#define XILPM_RESET_SPI1		PM_RST_SPI_1
#define XILPM_RESET_SDIO0		PM_RST_SDIO_0
#define XILPM_RESET_SDIO1		PM_RST_SDIO_1
#define XILPM_RESET_CAN0		PM_RST_CAN_FD_0
#define XILPM_RESET_CAN1		PM_RST_CAN_FD_1
#define XILPM_RESET_I2C0		PM_RST_I2C_0
#define XILPM_RESET_I2C1		PM_RST_I2C_1
#define XILPM_RESET_TTC0		PM_RST_TTC_0
#define XILPM_RESET_TTC1		PM_RST_TTC_1
#define XILPM_RESET_TTC2		PM_RST_TTC_2
#define XILPM_RESET_TTC3		PM_RST_TTC_3
#define XILPM_RESET_SWDT_CRL		PM_RST_SWDT_LPD
#define XILPM_RESET_ADMA		PM_RST_ADMA
#define XILPM_RESET_GPIO		PM_RST_GPIO_LPD
#define XILPM_RESET_TIMESTAMP		PM_RST_TIMESTAMP
#define XILPM_RESET_RPU_R50		PM_RST_R5_0
#define XILPM_RESET_RPU_R51		PM_RST_R5_1
#define XILPM_RESET_RPU_AMBA		PM_RST_RPU_AMBA
#define XILPM_RESET_OCM			PM_RST_OCM
#define XILPM_RESET_RPU_PGE		PM_RST_RPU_ISLAND
#define XILPM_RESET_IPI			PM_RST_IPI
#define XILPM_RESET_SYSMON		PM_RST_SYSMON_LPD
#define XILPM_RESET_LPD_SWDT		PM_RST_SWDT_LPD
#define XILPM_RESET_FPD			PM_RST_FPD
#define XILPM_RESET_RPU_DBG1		PM_RST_RPU1_DBG
#define XILPM_RESET_RPU_DBG0		PM_RST_RPU0_DBG
#define XILPM_RESET_DBG_LPD		PM_RST_DBG_LPD
#define XILPM_RESET_DBG_FPD		PM_RST_DBG_FPD
#define XILPM_RESET_PS_ONLY		PM_RST_PS_SRST
#define XILPM_RESET_PL			PM_RST_PL_SRST

#define PM_CLOCK_RPLL			PM_CLK_RPLL
#define PM_CLOCK_APLL			PM_CLK_APLL
#define PM_CLOCK_RPLL_TO_FPD		PM_CLK_RPLL_TO_XPD
#define PM_CLOCK_APLL_TO_LPD		PM_CLK_APLL_TO_XPD
#define PM_CLOCK_ACPU			PM_CLK_ACPU
#define PM_CLOCK_DBG_FPD		PM_CLK_DBG_FPD
#define PM_CLOCK_DBG_LPD		PM_CLK_DBG_LPD
#define PM_CLOCK_DBG_TRACE		PM_CLK_DBG_TRACE
#define PM_CLOCK_DBG_TSTMP		PM_CLK_DBG_TSTMP
#define PM_CLOCK_LPD_SWITCH		PM_CLK_LPD_TOP_SWITCH
#define PM_CLOCK_LPD_LSBUS		PM_CLK_LPD_LSBUS
#define PM_CLOCK_USB0_BUS_REF		PM_CLK_USB0_BUS_REF
#define PM_CLOCK_USB0			PM_CLK_USB_SUSPEND
#define PM_CLOCK_IOU_SWITCH		PM_CLK_IOU_SWITCH
#define PM_CLOCK_GEM_TSU_REF		PM_CLK_GEM_TSU_REF
#define PM_CLOCK_GEM_TSU		PM_CLK_GEM_TSU
#define PM_CLOCK_GEM0_TX		PM_CLK_GEM0_TX
#define PM_CLOCK_GEM1_TX		PM_CLK_GEM1_TX
#define PM_CLOCK_GEM0_RX		PM_CLK_GEM0_RX
#define PM_CLOCK_GEM1_RX		PM_CLK_GEM1_RX
#define PM_CLOCK_QSPI_REF		PM_CLK_QSPI_REF
#define PM_CLOCK_SDIO0_REF		PM_CLK_SDIO0_REF
#define PM_CLOCK_SDIO1_REF		PM_CLK_SDIO1_REF
#define PM_CLOCK_UART0_REF		PM_CLK_UART0_REF
#define PM_CLOCK_UART1_REF		PM_CLK_UART1_REF
#define PM_CLOCK_SPI0_REF		PM_CLK_SPI0_REF
#define PM_CLOCK_SPI1_REF		PM_CLK_SPI1_REF
#define PM_CLOCK_I2C0_REF		PM_CLK_I2C0_REF
#define PM_CLOCK_I2C1_REF		PM_CLK_I2C1_REF
#define PM_CLOCK_CAN0_REF		PM_CLK_CAN0_REF
#define PM_CLOCK_CAN1_REF		PM_CLK_CAN1_REF
#define PM_CLOCK_ADMA_REF		PM_CLK_ADMA
#define PM_CLOCK_TIMESTAMP_REF		PM_CLK_TIMESTAMP_REF
#define PM_CLOCK_PL0_REF		PM_CLK_PMC_PL0_REF
#define PM_CLOCK_PL1_REF		PM_CLK_PMC_PL1_REF
#define PM_CLOCK_PL2_REF		PM_CLK_PMC_PL2_REF
#define PM_CLOCK_PL3_REF		PM_CLK_PMC_PL3_REF
#define PM_CLOCK_WDT			PM_CLK_WDT
#define PM_CLOCK_RPLL_INT		PM_CLK_RPU_PLL
#define PM_CLOCK_RPLL_PRE_SRC		PM_CLK_RPU_PRESRC
#define PM_CLOCK_RPLL_INT_MUX		PM_CLK_RPU_PLL_OUT
#define PM_CLOCK_RPLL_POST_SRC		PM_CLK_RPU_POSTCLK
#define PM_CLOCK_APLL_INT		PM_CLK_APU_PLL
#define PM_CLOCK_APLL_PRE_SRC		PM_CLK_APU_PRESRC
#define PM_CLOCK_APLL_INT_MUX		PM_CLK_APU_PLL_OUT
#define PM_CLOCK_APLL_POST_SRC		PM_CLK_RPU_POSTCLK
#define PM_CLOCK_ACPU_FULL		PM_CLK_ACPU
#define PM_CLOCK_GEM0_REF		PM_CLK_GEM0_REF
#define PM_CLOCK_GEM1_REF		PM_CLK_GEM1_REF

#endif /* _XPM_CLIENT_NODEIDWRAPPER_H_ */