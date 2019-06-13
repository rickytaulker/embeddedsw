/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc. All rights reserved.
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
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMANGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
*
*
******************************************************************************/
/*****************************************************************************/
/**
*
* @file xil_exception.h
*
* @addtogroup microblaze_exception_apis Microblaze Exception APIs
*
* The xil_exception.h file contains Microblaze specific exception
* related APIs and macros. Application programs can use these APIs/Macros
* for various exception related operations (i.e. enable exception, disable
* exception, register exception hander etc.)
*
* @{
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who  Date     Changes
* ----- ---- -------- -------------------------------------------------------
* 1.00  hbm  07/28/09 Initial release
*
* </pre>
*
* @note
*  To use exception related functions, the xil_exception.h file must be added in
*  source code
*
******************************************************************************/

#ifndef XIL_EXCEPTION_H /* prevent circular inclusions */
#define XIL_EXCEPTION_H /* by using protection macros */

#include "xil_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/************************** Constant Definitions *****************************/

/*
 * These constants are specific to Microblaze processor.
 */

#define XIL_EXCEPTION_ID_FIRST                0U
#define XIL_EXCEPTION_ID_FSL                  0U
#define XIL_EXCEPTION_ID_UNALIGNED_ACCESS     1U
#define XIL_EXCEPTION_ID_ILLEGAL_OPCODE       2U
#define XIL_EXCEPTION_ID_M_AXI_I_EXCEPTION    3U
#define XIL_EXCEPTION_ID_IPLB_EXCEPTION       3U
#define XIL_EXCEPTION_ID_M_AXI_D_EXCEPTION    4U
#define XIL_EXCEPTION_ID_DPLB_EXCEPTION       4U
#define XIL_EXCEPTION_ID_DIV_BY_ZERO          5U
#define XIL_EXCEPTION_ID_FPU                  6U
#define XIL_EXCEPTION_ID_STACK_VIOLATION      7U
#define XIL_EXCEPTION_ID_MMU                  7U
#define XIL_EXCEPTION_ID_LAST		      XIL_EXCEPTION_ID_MMU

/*
 * XIL_EXCEPTION_ID_INT is defined for all processors, but with different value.
 */
#define XIL_EXCEPTION_ID_INT		      16U /**
						  * exception ID for interrupt
						  */

/**************************** Type Definitions *******************************/

/**
 * This typedef is the exception handler function.
 */
typedef void (*Xil_ExceptionHandler)(void *Data);

/**
 * This data type defines an interrupt handler for a device.
 * The argument points to the instance of the component
 */
typedef void (*XInterruptHandler) (void *InstancePtr);

/***************** Macros (Inline Functions) Definitions *********************/


/************************** Function Prototypes ******************************/

extern void Xil_ExceptionRegisterHandler(u32 Id,
					 Xil_ExceptionHandler Handler,
					 void *Data);

extern void Xil_ExceptionRemoveHandler(u32 Id);

extern void Xil_ExceptionInit(void);
extern void Xil_ExceptionEnable(void);
extern void Xil_ExceptionDisable(void);

#ifdef __cplusplus
}
#endif

#endif
/**
* @} End of "addtogroup microblaze_exception_apis".
*/