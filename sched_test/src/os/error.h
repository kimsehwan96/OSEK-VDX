 /**
 * @file error.h

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

#ifndef ERROR_H_
#define ERROR_H_

/*******************************************************************************
* Includes
*******************************************************************************/
#include "machine.h"
#include "ll_app_oil.h"
/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define ERROR_MAJOR_VERSION  1
#define ERROR_MINOR_VERSION  0
#define ERROR_PATCH_VERSION  0


/*----------------------------------------------------------------------------*/
/*   			  						  		CONSTANT - Error code	                          */
/*----------------------------------------------------------------------------*/
/*******************************************************************************
* Types
*******************************************************************************/

/**
 * @struct SYSTEM_SVC_BLK
 *
 * This structure is for system service block
 */
typedef struct _SYSTEM_SVC_BLK
{
      OSServiceIdType       service_id;
      AppModeType           appmode;
      TaskType              task_id;
      ResourceType          res_id;
      //AlarmIdType           alarm_id;
      AlarmType             alarm_id;
      EventMaskType         mask;
      TickType              tick;
      TickType              increment;
      TickType              cycle;
      TickType              start;
      StatusType            error;
}SYSTEM_SVC_BLK;


/*******************************************************************************
* Global variables
*******************************************************************************/
extern SYSTEM_SVC_BLK                            SystemSvcBlk;



/*******************************************************************************
* Global functions
*******************************************************************************/
extern OSServiceIdType OSErrorGetServiceId();
extern AppModeType OSError_StartOS_Appmode();
extern StatusType OSError_ShutdownOS_Error();
extern TaskType OSError_ActivateTask_TaskID();
extern TaskType OSError_ChainTask_TaskID();
extern TaskType OSError_GetTaskState_TaskID();
extern AlarmType OSError_GetAlarmBase_AlarmID();
extern AlarmType OSError_GetAlarm_AlarmID();
extern AlarmType OSError_SetRelAlarm_AlarmID();
extern TickType OSError_SetRelAlarm_increment();
extern TickType OSError_SetRelAlarm_cycle();
extern AlarmType OSError_SetAbsAlarm_AlarmID();
extern TickType OSError_SetAbsAlarm_start();
extern TickType OSError_SetAbsAlarm_cycle();
extern AlarmType OSError_CancelAlarm_AlarmID();
extern TaskType OSError_SetEvent_TaskID();
extern EventMaskType OSError_SetEvent_Mask();
extern EventMaskType OSError_ClearEvent_Mask();
extern TaskType OSError_GetEvent_TaskID();
extern EventMaskType OSError_WaitEvent_Mask();
extern ResourceType OSError_GetResource_ResID();
extern ResourceType OSError_ReleaseResource_ResID();
/*******************************************************************************
* Internal functions
*******************************************************************************/



/*******************************************************************************
* Inline functions
*******************************************************************************/

/*==================================================
========================= GET ======================
===================================================*/

/* error
#if (OS_USE_GET_SERVICE_ID == obFASLE)
*
 * @def OSErrorGetServiceId()
 *
 * identifies service id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSErrorGetServiceId()           ( SystemSvcBlk.service_id )
#endif  OS_USE_GET_SERVICE_ID

#if (OS_USE_PARAMETER_ACCESS == TRUE)
*
 * @def OSError_StartOS_Appmode()
 *
 * identifies appmode of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_StartOS_Appmode()       ( SystemSvcBlk.appmode   )

*
 * @def OSError_ShutdownOS_Error()
 *
 * identifies ERROR of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_ShutdownOS_Error()         ( SystemSvcBlk.error   )

*
 * @def OSError_ActivateTask_TaskID()
 *
 * identifies task id  of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_ActivateTask_TaskID()   ( SystemSvcBlk.task_id   )

*
 * @def OSError_ChainTask_TaskID()
 *
 * identifies task id  of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_ChainTask_TaskID()      ( SystemSvcBlk.task_id )

*
 * @def OSError_GetTaskState_TaskID()
 *
 * identifies task id  of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_GetTaskState_TaskID()   ( SystemSvcBlk.task_id )

*
 * @def OSError_GetAlarmBase_AlarmID()
 *
 * identifies alarm id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_GetAlarmBase_AlarmID()  ( SystemSvcBlk.alarm_id  )

*
 * @def OSError_GetAlarm_AlarmID()
 *
 * identifies alarm id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_GetAlarm_AlarmID()      ( SystemSvcBlk.alarm_id  )

*
 * @def OSError_SetRelAlarm_AlarmID()
 *
 * identifies alarm id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_SetRelAlarm_AlarmID()   ( SystemSvcBlk.alarm_id )

*
 * @def OSError_SetRelAlarm_increment()
 *
 * identifies increment of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_SetRelAlarm_increment() ( SystemSvcBlk.increment )

*
 * @def OSError_SetRelAlarm_cycle()
 *
 * identifies cycle of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_SetRelAlarm_cycle()    (  SystemSvcBlk.cycle )

*
 * @def OSError_SetAbsAlarm_AlarmID()
 *
 * identifies alarm id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_SetAbsAlarm_AlarmID()   ( SystemSvcBlk.alarm_id )

*
 * @def OSError_SetAbsAlarm_start()
 *
 * identifies start of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_SetAbsAlarm_start()     ( SystemSvcBlk.start  )

*
 * @def OSError_SetAbsAlarm_cycle()
 *
 * identifies cycle of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_SetAbsAlarm_cycle()     ( SystemSvcBlk.cycle  )

*
 * @def OSError_CancelAlarm_AlarmID()
 *
 * identifies alarm id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_CancelAlarm_AlarmID()   ( SystemSvcBlk.alarm_id  )

*
 * @def OSError_SetEvent_TaskID()
 *
 * identifies task id  of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_SetEvent_TaskID()   ( SystemSvcBlk.task_id )

*
 * @def OSError_SetEvent_Mask()
 *
 * identifies event mask of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_SetEvent_Mask()         ( SystemSvcBlk.mask   )

*
 * @def OSError_ClearEvent_Mask()
 *
 * identifies event mask of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_ClearEvent_Mask()       ( SystemSvcBlk.mask )

*
 * @def OSError_GetEvent_TaskID()
 *
 * identifies task id  of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_GetEvent_TaskID()   ( SystemSvcBlk.task_id )

*
 * @def OSError_WaitEvent_Mask()
 *
 * identifies event mask of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_WaitEvent_Mask()        ( SystemSvcBlk.mask   )

*
 * @def OSError_GetResource_ResID()
 *
 * identifies resource id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_GetResource_ResID()     ( SystemSvcBlk.res_id  )

*
 * @def OSError_ReleaseResource_ResID()
 *
 * identifies resource of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec

#define OSError_ReleaseResource_ResID() ( SystemSvcBlk.res_id  )

#endif  OS_USE_PARAMETER_ACCESS */

/*==================================================
========================= SET ======================
===================================================*/

/**
 * @def SET_SYSTEM_SERVICE_ID()
 *
 * set service id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec
 */
#define SET_SYSTEM_SERVICE_ID(id);           { SystemSvcBlk.service_id = (id) ;   }

/**
 * @def SET_SYSTEM_APPMODE()
 *
 * set appmode of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec
 */
#define SET_SYSTEM_APPMODE(app_mode);        {   SystemSvcBlk.appmode = (app_mode)  ;   }

/**
 * @def SET_SYSTEM_TASK_ID()
 *
 * set task id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec
 */
#define SET_SYSTEM_TASK_ID(id);               {   SystemSvcBlk.task_id = (id)  ;   }

/**
 * @def SET_SYSTEM_RESOURCE_ID()
 *
 * set resource id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec
 */
#define SET_SYSTEM_RESOURCE_ID(id);           {   SystemSvcBlk.res_id = (id);   }

/**
 * @def SET_SYSTEM_ALARM_ID()
 *
 * set alarm id of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec
 */
#define SET_SYSTEM_ALARM_ID(id);              {   SystemSvcBlk.alarm_id = (id) ;   }

/**
 * @def SET_SYSTEM_EVENT_MASK()
 *
 * set mask of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec
 */
#define SET_SYSTEM_EVENT_MASK(evmask);         {    SystemSvcBlk.mask = (evmask)  ;   }       /* ljw 0701 */

/**
 * @def SET_SYSTEM_INCREMENT()
 *
 * set increment of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec
 */
#define SET_SYSTEM_INCREMENT(inc);           {    SystemSvcBlk.increment = (inc)  ;   }

/**
 * @def SET_SYSTEM_START()
 *
 * set start of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3 spec
 */
#define SET_SYSTEM_START(st);                 {   SystemSvcBlk.start = (st)  ;   }

/**
 * @def SET_SYSTEM_CYCLE()
 *
 * set cycle of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3spec
 */
#define SET_SYSTEM_CYCLE(cy);                {    SystemSvcBlk.cycle = (cy)    ;   }

/**
 * @def SET_SYSTEM_TICK()
 *
 * set tick of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3spec
 */
#define SET_SYSTEM_TICK(tk);                  {   SystemSvcBlk.tick = (tk)      ;   }


/**
 * @def SET_SYSTEM_ERROR()
 *
 * set error of System Service block
 *
 * @see #System Service
 * @see paragraph 13.8.4 page 69 of OSEK/VDX 2.2.3spec
 */
#define SET_SYSTEM_ERROR(err);                  {   SystemSvcBlk.error = (err)   ;   }

#endif /* ERROR_H_ */

