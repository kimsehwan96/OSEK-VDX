/*
 * event.h
 *
 *  Created on: 2009. 6. 1
 *      Author: moondifafa
 */

#ifndef _EVENT_H_
#define _EVENT_H_

// Includes ////////////////////////////////////////////////////////////////////
#include "osek_os_api.h"
#include "machine.h"  /* arch/s12x/machine.h */
#include "ll_std_app_oil.h"

#include "error.h"
#include "hook.h"

// reference error data block - core //////////////////////////////////////////
extern SYSTEM_SVC_BLK SystemSvcBlk ;


// interfacing System Generation Result(OIL 2.5) ///////////////////////////////
UINT8 KRT_EVENT_COUNT ;

// runtime kernel resource module data blcok - resource ////////////////////////
/* contained in task.c, task.h */
typedef OIL_EVENT_MASK  KRT_EVENT_MASK ;
typedef OIL_EVENT_ID KRT_EVENT_ID ;


typedef struct KRT_EVENT_t{
    KRT_EVENT_MASK mask ;
    /* other optional attribute */
} KRT_EVENT;

extern KRT_EVENT      krt_event_list [];  /* optional */
extern KRT_EVENT_MASK krt_evmask_list[];  /* necessary ?? */

// runtime kernel data block

// OSEK 2.2.3 Data types - already defined in osek_os_types.h //////////////////
// typedef KRT_EVENT_MASK EventType ;

/*
typedef uint64 EventMaskType ;
typedef EventMaskType *EventMaskRefType ;
*/

// OSEK 2.2.3 - constructional elements ////////////////////////////////////////
//#define DeclareEvent(name)  extern const EventMaskType EventMaskName


// OSEK 2.2.3 api's ////////////////////////////////////////////////////////////
StatusType SetEvent(TaskType TaskId, EventMaskType Mask) ;        /* sender's sending */
StatusType WaitEvent(EventMaskType Mask);                         /* receiver's waiting to receive */
StatusType ClearEvent(EventMaskType Mask);                        /* receiver's ack */
StatusType GetEvent(TaskType TaskID, EventMaskRefType EventRef) ; /* Info query */

// internal functions //////////////////////////////////////////////////////////
void     event_initialize(void);

// interface func to TASK module ///////////////////////////////////////////////
// (!) the data struct for these func should be provided by this module ////////////
// in the future ///////////////////////////////////////////////////////////////
#include "are_taskutil.h"

void     task_set_owned_evmask   (KRT_TASK_ID tid, KRT_EVENT_MASK evmask) ;
void     task_set_current_evmask    (KRT_TASK_ID tid, KRT_EVENT_MASK evmask) ;
void     task_set_waiting_evmask (KRT_TASK_ID tid, KRT_EVENT_MASK evmask) ;

KRT_EVENT_MASK   task_get_owned_evmask   (KRT_TASK_ID tid) ;
KRT_EVENT_MASK   task_get_current_evmask    (KRT_TASK_ID tid) ;
KRT_EVENT_MASK   task_get_waiting_evmask (KRT_TASK_ID tid) ;

StatusType set_event(TaskType tid, EventMaskType evms);
#endif  /* _EVENT_H_ */

