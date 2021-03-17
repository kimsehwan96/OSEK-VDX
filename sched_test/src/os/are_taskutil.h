/*
 * are_taskutil.h
 *
 *  Created on: 2009. 7. 22
 *      Author: moondifafa
 */

#ifndef ARE_TASKUTIL_H_
#define ARE_TASKUTIL_H_

#include "osek_os_types.h"
#include "ll_std_app_oil.h"
#include "common_types.h"
#include "kernel.h"

#define KRT_TASK_COUNT ((UINT16)OIL_TASK_COUNT + 1 + (UINT16)OIL_ISR_COUNT)

typedef TaskType KRT_TASK_ID;
#define krttidINVALID ((KRT_TASK_ID)(-1))
    /* (!) check if these are already done
     * in other modules
     */

// interface func to TASK module ///////////////////////////////////////////////

extern BOOL signal_to_idle_task ;
// this can be overwritten. only idle task clears it.

extern KRT_TASK_ID     task_get_self(void) ;
/* retrieve tid of current task */

extern KRT_PROC_LEVEL  task_qry_pl(void) ;
/* returns current processing level */

extern BOOL            task_qry_prmptbl(KRT_TASK_ID tid) ;
/* returns if schd prprty of tid is FUL (-preeamptable) */

extern StatusType      task_block_self(void) ;
/* make task self waiting state and yield control to kernel
 * even if no higher priority task exists.
 * return values:
 *    E_OK : successful blocking has occured
 *    OTHERS : blocking not done
 */

extern StatusType      task_yield(void) ;
/* yield task(self) to (if exists) higher priority task is in ready q
 * return values:
 *    E_OK   : resume after successful yield or no yield
 *    OTHERS : no yield because of resource holding, etc.
 */

extern StatusType      task_resume(KRT_TASK_ID tid) ;
/* make task of tid wake up from waiting state to ready state,
 * even if no higher priority task exists
 */

extern void            task_set_pri(KRT_TASK_ID tid, KRT_PRIORITY pri) ;
/* set current task's pri to p  */

extern KRT_PRIORITY    task_get_pri(KRT_TASK_ID tid) ;
/* get current task's pri value */

extern KRT_PRIORITY    task_get_orgpri(KRT_TASK_ID tid) ;
/* get current task's initial pri value */
/* (i) this is not OIL pri! but inital KRT_PRI */



#endif /* ARE_TASKUTIL_H_ */
