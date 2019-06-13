/******************************************************************************
*
* Copyright (C) 2015 Xilinx, Inc.  All rights reserved.
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
* @file xpseudo_asm.h
*
* @addtogroup a53_32_specific Cortex A53 32bit Processor Specific Include Files
*
* The xpseudo_asm.h includes xreg_cortexa53.h and xpseudo_asm_gcc.h.
* The xreg_cortexa53.h file contains definitions for inline assembler code.
* It provides inline definitions for Cortex A53 GPRs, SPRs, co-processor
* registers and floating point registers.
*
* The xpseudo_asm_gcc.h contains the definitions for the most often used inline
* assembler instructions, available as macros. These can be very useful for
* tasks such as setting or getting special purpose registers, synchronization,
* or cache manipulation etc. These inline assembler instructions can be used
* from drivers and user applications written in C.
*
* @{
*
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who  Date     Changes
* ----- ---- -------- -----------------------------------------------
* 5.2	pkp  	28/05/15 First release
* </pre>
*
******************************************************************************/
#ifndef XPSEUDO_ASM_H
#define XPSEUDO_ASM_H

#ifdef __cplusplus
extern "C" {
#endif

#include "xreg_cortexa53.h"
#include "xpseudo_asm_gcc.h"

#ifdef __cplusplus
}
#endif

#endif /* XPSEUDO_ASM_H */
/**
* @} End of "addtogroup a53_32_specific".
*/
