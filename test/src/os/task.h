 /**
 * @file task.h

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

#ifndef TASK_H_
#define TASK_H_

/*******************************************************************************
* Includes
*******************************************************************************/
#include "osek_os_types.h"
#include "Platform_Types.h" /* ljw 090625: compile */
#include "common_types.h"

#include "oil_types.h"

#include "machine.h"
#include "initial.h"

/**************************************************************
* Extern
**************************************************************/
/*idle_task */
extern UINT32   krn_idle_task_stack[256/sizeof(OIL_UINT32)];

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define TASK_MAJOR_VERSION  1
#define TASK_MINOR_VERSION  0
#define TASK_PATCH_VERSION  0

/*----------------------------------------------------------------------------*/
/*    		   		   	    	  	    IDLE_TASK_ID	   	 		   		   		 	        */
/*----------------------------------------------------------------------------*/
/**
 * @def IDLE_TASK_ID
 *
 * identifies idle task id
 *
 * @see #TASK ID
 * @see paragraph 13.2.4 page 54 of OSEK/VDX 2.2.3 spec
 */

#define IDLE_TASK_ID              0
/*----------------------------------------------------------------------------*/
/*     		   		   		   		    TASK/ISR TYPE 	  	 		   		   		 	        */
/*----------------------------------------------------------------------------*/
/**
 * @def TASK_BASIC
 *
 * identifies TASK_BASIC type of task
 *
 *@see #TASK TYPE
 */
/*#define TSK_TYPE_BASIC               0x11 */
/**
 * @def TASK_EXTENDED
 *
 * identifies TASK_EXTENDED type of task
 *
 * @see #TASK TYPE
 */
/*#define TSK_TYPE_EXTENDED            0x12 */


/*----------------------------------------------------------------------------*/
/* 	   		   		   		    CHECK TASK/ISR TYPE 	  	 		   		   		 	        */
/*----------------------------------------------------------------------------*/
/**
 * @def TASK_MASK
 *
 * identifies mask for task
 *
 * @see #TASK TYPE
 */
//#define TSK_TYPE_MASK                  0x10

/*******************************************************************************
* Types
*******************************************************************************/
/*----------------------------------------------------------------------------*/
/*     		   		   		    	  	    TASK CB   	   	 		   		   		 	        */
/*----------------------------------------------------------------------------*/
typedef struct _KRT_TASK_CB{
  /*common*/
  KRT_COMMON_DYNAMIC_CB       *tskc_dynamic_desc;
  KRT_COMMON_STATIC_CB        *tskc_static_desc;

  /*task specific*/
  BOOL           			   tskc_autostart_flag;
  AppModeType             	   tskc_autostart_appmodes;

  KRT_ACT_COUNT    	    	   tskc_max_act_count;
  KRT_ACT_COUNT    	    	   tskc_curr_act_count;

  EventMaskType				   tskc_own_event;
  EventMaskType				   tskc_set_event;
  EventMaskType				   tskc_wait_event;

}KRT_TASK_CB;


/*******************************************************************************
* Global functions
*******************************************************************************/

extern void               _task_fn_idle_task(void);

extern StatusType         activate_task(BOOL self_activated, TaskType task_id);
extern void               init_task_item(TaskType task_id);

extern StatusType         CHECK_TASK_ACTIVATION_IF_VALID(BOOL self_activated, TaskType task_id);
extern StatusType         CHECK_TASK_IF_VALID(const TaskType task_id );
extern StatusType         CHECK_TASK_PRIORITY_IF_VALID(const KRT_PRIORITY priority);
extern StatusType         CHECK_TASK_IF_EXTENDED(const TaskType task_id);
extern StatusType         CHECK_TASK_IF_NOTSUSPENDED(const TaskType task_id);
extern StatusType         CHECK_TASK_IF_HOLDING_STD_RES(const TaskType task_id);

extern KRT_PRIORITY       GET_TASK_CURR_PRIORITY(const TaskType tid);
extern KRT_PRIORITY       GET_TASK_INIT_PRIORITY(const TaskType tid);
extern KRT_STATE          GET_TASK_STATE(const TaskType tid);
extern EventMaskType      GET_TASK_OWN_EVENT(const TaskType tid);
extern EventMaskType      GET_TASK_CURRENT_EVENT(const TaskType tid);
extern EventMaskType      GET_TASK_WAIT_EVENT(const TaskType tid);

extern void               SET_TASK_CURR_PRIORITY(TaskType tid, KRT_PRIORITY priority);
extern void               SET_TASK_STATE(TaskType tid, KRT_STATE state);
extern void               SET_TASK_OWN_EVENT(TaskType tid, EventMaskType mask);
extern void               SET_TASK_CURRENT_EVENT(TaskType tid, EventMaskType mask);
extern void               SET_TASK_WAIT_EVENT(TaskType tid, EventMaskType mask);

#endif /* TASK_H_ */
