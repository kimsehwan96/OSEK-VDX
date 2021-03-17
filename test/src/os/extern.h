 /**
 * @file extern.h

 * @section descr File description
 *
 * This header file includes data types of Qplus-Auto.
 *
 * @section Copyright Copyright
 *
 * Copyright (c) 2008 Electronics and Telecommunications Research Institute
 * (ETRI) All Rights Reserved.
 *
 * Following acts are STRICTLY PROHIBITED except when a specific prior written
 * permission is obtained from ETRI or a separate written agreement with ETRI
 * stipulates such permission specifically:
 * a) Selling, distributing, sublicensing, renting, leasing, transmitting,
 *    redistributing or otherwise transferring this software to a third party;
 * b) Copying, transforming, modifying, creating any derivatives of, reverse
 *    engineering, decompiling, disassembling, translating, making any attempt
 *    to discover the source code of, the whole or part of this software in
 *    source or binary form;
 * c) Making any copy of the whole or part of this software other than one copy
 *    for backup purposes only; and
 * d) Using the name, trademark or logo of ETRI or the names of contributors
 *    in order to endorse or promote products derived from this software.
 *
 * This software is provided "AS IS," without a warranty of any kind. ALL
 * EXPRESS OR IMPLIED CONDITIONS, REPRESENTATIONS AND WARRANTIES, INCLUDING ANY
 * IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NON-INFRINGEMENT, ARE HEREBY EXCLUDED. IN NO EVENT WILL ETRI(OR ITS LICENSORS,
 * IF ANY) BE LIABLE FOR ANY LOST REVENUE, PROFIT OR DATA, OR FOR DIRECT,
 * INDIRECT, SPECIAL, CONSEQUENTIAL, INCIDENTAL OR PUNITIVE DAMAGES, HOWEVER
 * CAUSED AND REGARDLESS OF THE THEORY OF LIABILITY, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE USE OF OR INABILITY TO USE THIS SOFTWARE, EVEN IF ETRI
 * HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 *
 * Any permitted redistribution of this software must retain the copyright
 * notice, conditions, and disclaimer as specified above.
 *
 * @section infos File informations
 *
 * $System:   QPLUS_AUTO$
 * $Block:    OS$
 * $Module:   $
 * $Date:     2008.9.10$
 * $Rev:      ver 1.0$
 * $Creator:  Lee EunRyung$
 * $Owner:    Lee EunRyung$
 * $URL:      www.etri.re.kr$
 *
 */

/*******************************************************************************
* Revision history
-----------------------------------------------------------------------------
   Date       Rev.    Author  Description
----------   -------  ------  -----------------------------------------------
2008-09-16   V1.0.0    BLUE   Initial version

********************************************************************************/

#ifndef EXTERN_H_
#define EXTERN_H_

/*******************************************************************************
* Includes
*******************************************************************************/
#include "error.h"
#include "common_types.h"
#include "task.h"
#include "isr.h"
#include "kernel.h"
#include "scheduler.h"

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define EXTERN_MAJOR_VERSION  1
#define EXTERN_MINOR_VERSION  0
#define EXTERN_PATCH_VERSION  0

/**************************************************************
* Extern
**************************************************************/
/** @brief Qplus-Auto System Service information*/
/*
#ifdef CODEWARRIOR_COMPILER
#pragma DATA_SEG DIRECT
#endif
*/

/*
extern SYSTEM_SVC_BLK                            SystemSvcBlk;

extern KRT_CB                                    kernel_cb;
*/


/*
extern volatile KRT_READY_TASK_Q                 ready_task_Q[NUM_OF_PRIORITY];

extern volatile KRT_COMMON_STATIC_CB             static_common_cb[NUM_OF_TASK+NUM_OF_ISR];
extern volatile KRT_COMMON_DYNAMIC_CB            dynamic_common_cb[NUM_OF_TASK+NUM_OF_ISR];
*/

/** @brief TASK desciption table*/
/*extern volatile KRT_TASK_CB                      task_table[NUM_OF_TASK];*/

/** @brief ISR desciption table*/
/*
#if (NUM_OF_ISR !=0)
extern volatile KRT_ISR_CB                       isr_table[NUM_OF_ISR];
#endif
*/

/*
extern SINT8  os_int_nested_cnt;

extern SINT8  all_int_nested_cnt;
extern UINT32  int_CCR_reg;;

extern UINT8  cat2_lock_cnt;
extern BOOL   cat2_isr_enable;

extern SINT8 scheduler_lock_cnt;
extern UINT16  blue_CCR_reg;
*/

/*
#ifdef CODEWARRIOR_COMPILER
#pragma DATA_SEG DEFAULT
#endif
*/

/**************************************************************
* Extern
**************************************************************/
#endif /* EXTERN_H_ */

