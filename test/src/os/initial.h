 /**
 * @file initial.h

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

#ifndef INITIAL_H_
#define INITIAL_H_

/*******************************************************************************
* Includes
*******************************************************************************/

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define INITIAL_MAJOR_VERSION  1
#define INITIAL_MINOR_VERSION  0
#define INITIAL_PATCH_VERSION  0

//#include "ll_std_app_oil.h"

/******************************************************************************/
/******************************************************************************/
/******************************************************************************/
/*
#define NUM_OF_APPMODE           OIL_APPMODE_COUNT
#define NUM_OF_OS                OIL_OS_COUNT
#define NUM_OF_TASK              (OIL_TASK_COUNT+1)
#define NUM_OF_ISR               OIL_ISR_COUNT
#define NUM_OF_COUNTER           OIL_COUNTER_COUNT
#define NUM_OF_ALARM             OIL_ALARM_COUNT

#define NUM_OF_RESOURCE          OIL_RESOURCE_COUNT
#define NUM_OF_EVENT             OIL_EVENT_COUNT

#define NUM_OF_SEND_MESSAGE      0
#define NUM_OF_RECEIVE_MESSAGE   0

#define NUM_OF_COM               OIL_COM_COUNT
#define NUM_OF_MESSAGE           OIL_MESSAGE_COUNT

#define NUM_OF_NETWORK_MESSAGE   0
#define NUM_OF_IPDU              0
#define NUM_OF_NM                0

#define DEFAULT_STACK_SIZE       256
#define SIZE_OF_IDLE_TASK        256
#define DEFAULT_QUEUE_SIZE       10

#define NUM_OF_PRIORITY          OIL_PRIORITY_COUNT

#define KRN_IDLE_TASK_ID         NUM_OF_TASK
*/


/******************************************************************************/
/******************************************************************************/
/******************************************************************************/
/*
extern volatile KRT_CONTEXT            context_cb[NUM_OF_TASK+NUM_OF_ISR];
extern volatile KRT_STACK              stack_cb[NUM_OF_TASK+NUM_OF_ISR];
extern volatile KRT_FN_POINTER         entry_cb[NUM_OF_TASK+NUM_OF_ISR];

extern volatile KRT_COMMON_STATIC_CB   static_common_cb[NUM_OF_TASK+NUM_OF_ISR];
extern volatile KRT_COMMON_DYNAMIC_CB  dynamic_common_cb[NUM_OF_TASK+NUM_OF_ISR];

extern volatile KRT_TASK_CB            task_table[NUM_OF_TASK];

#if (NUM_OF_ISR != 0)
extern volatile KRT_ISR_CB             isr_table[NUM_OF_ISR];
#endif

extern volatile KRT_READY_TASK_Q       ready_task_Q[NUM_OF_PRIORITY];
*/

/*******************************************************************************
* external function
*******************************************************************************/
extern void init_from_oil(void);

/*******************************************************************************
* internal function
*******************************************************************************/

#endif /* INITIAL_H_ */

