 /**
 * @file scheduler.h

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

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

/*******************************************************************************
* Includes
*******************************************************************************/
#include "osek_os_types.h"
#include "common_types.h"

#include "machine.h"
#include "initial.h"
#include "kernel.h"

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define SCHEDULER_MAJOR_VERSION  1
#define SCHEDULER_MINOR_VERSION  0
#define SCHEDULER_ATCH_VERSION   0

/*----------------------------------------------------------------------------*/
/*		  						  		CONSTANT - Ready Queue Mask                         */
/*----------------------------------------------------------------------------*/
/**
 * @def Q_INSERT_MASK
 *
 * identifies Q_INSERT_MASK of readyQ operation
 */
#define Q_INSERT_MASK                1

/**
 * @def Q_DELETE_MASK
 *
 * identifies Q_DELETE_MASK of readyQ operation
 */
#define Q_DELETE_MASK                2

/*******************************************************************************
* Types
*******************************************************************************/
/*----------------------------------------------------------------------------
 *		  						  		Ready_task_queue
 *----------------------------------------------------------------------------*/
/**
 * @struct READY_TASK_Q
 *
 * This structure is for ready task queue
 * The index of array is priority.
*/

typedef struct _KRT_READY_TASK_Q{
  UINT16	                        rq_queue_size;
  UINT16                            rq_read_index;
  UINT16                            rq_size;
  TaskType                          *rq_p_queue;
}KRT_READY_TASK_Q;

/*******************************************************************************
* Global functions
*******************************************************************************/
extern void         init_scheduler(void);
extern StatusType   reschedule(BOOL call_from_Schedule, KRT_PROC_LEVEL processing_level); /* ljw 0625: bool -> bool To Compile */

extern void         get_internal_resource(TaskType task_id);
extern void         release_internal_resource(TaskType task_id);

extern StatusType insert_new_item_in_Q(TaskType integrated_id) ;

#endif /* SCHEDULER_H_ */

