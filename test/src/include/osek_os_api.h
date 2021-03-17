/**
 * @file osek_os_api.h

 * @section descr File description
 *
 * This header file includes data types of OSEK/VDX OS.
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

#ifndef OSEK_OS_API_H_
#define OSEK_OS_API_H_

/*******************************************************************************
* Include
*******************************************************************************/
#include "osek_os_types.h"

/*******************************************************************************
* OSEK Standard API
*******************************************************************************/

/*------------------------------------------------------------------------------
* Kernel
*------------------------------------------------------------------------------*/
extern AppModeType GetActiveApplicationMode (void);
extern void StartOS (const AppModeType app_mode);
extern void ShutdownOS (const StatusType error);

/*------------------------------------------------------------------------------
* Task
*------------------------------------------------------------------------------*/
#define DeclareTask(TaskName)        void TASK_CNAME(TaskName)(void)

extern StatusType ActivateTask (TaskType task_id);
extern StatusType TerminateTask (void);
extern StatusType ChainTask (TaskType task_id);
extern StatusType Schedule (void);
extern StatusType GetTaskID (TaskRefType tid_ref);
extern StatusType GetTaskState (TaskType task_id, TaskStateRefType state_ref);


/*------------------------------------------------------------------------------
* Interrupt
*------------------------------------------------------------------------------*/
#define DeclareIsr(IsrName)          void ISR_CNAME(name)(void)

/* This functions are defined differently, depending on hardware. */
/** @defgroup OSEKService_Interrupt
 *  @brief OSEK/VDX OS 2.2.3 Standard Service
 */
/*@{*/


/**
 *  @brief It enables all interrupts.
 *  @param  [IN]NULL
 *  @return Standard : NONE @n
 *          Extended : NONE
 *
 *  Conformance class : BCC1, BCC2, ECC1, ECC2@n
 *  see paragraph 13.3.2.1 page 54 of OSEK/VDX 2.2.3 spec
 */
extern void EnableAllInterrupts(void);
/**
 *  @brief It disables all interrupts.
 *  @param  [IN]NULL
 *  @return Standard : NONE @n
 *          Extended : NONE
 *
 *  Conformance class : BCC1, BCC2, ECC1, ECC2@n
 *  see paragraph 13.3.2.2 page 55 of OSEK/VDX 2.2.3 spec
 */
extern void DisableAllInterrupts(void);
/**
 *  @brief It resume all interrupts.
 *  @param  [IN]NULL
 *  @return Standard : NONE @n
 *          Extended : NONE
 *
 *  Conformance class : BCC1, BCC2, ECC1, ECC2@n
 *  see paragraph 13.3.2.3 page 55 of OSEK/VDX 2.2.3 spec
 */
extern void ResumeAllInterrupts(void);
/**
 *  @brief It suspend all interrupts.
 *  @param  [IN]NULL
 *  @return Standard : NONE @n
 *          Extended : NONE
 *
 *  Conformance class : BCC1, BCC2, ECC1, ECC2@n
 *  see paragraph 13.3.2.4 page 56 of OSEK/VDX 2.2.3 spec
 */
extern void SuspendAllInterrupts(void);
/**  *  @brief It resume OS category 2 interrupts.
 *  @param  [IN]NULL
 *  @return Standard : NONE @n
 *          Extended : NONE
 *
 *  Conformance class : BCC1, BCC2, ECC1, ECC2@n
 *  see paragraph 13.3.2.5 page 56 of OSEK/VDX 2.2.3 spec
 */
extern void ResumeOSInterrupts(void);
/**
 *  @brief It suspend OS category 2 interrupts.
 *  @param  [IN]NULL
 *  @return Standard : NONE @n
 *          Extended : NONE
 *
 *  Conformance class : BCC1, BCC2, ECC1, ECC2@n
 *  see paragraph 13.3.2.6 page 57 of OSEK/VDX 2.2.3 spec
 */
extern void SuspendOSInterrupts(void);
/*------------------------------------------------------------------------------
* Alarm
*------------------------------------------------------------------------------*/
#define DeclareAlarm(AlarmName);

extern StatusType GetAlarmBase(AlarmType aid, AlarmBaseRefType p_abase) ;
extern StatusType GetAlarm(AlarmType aid, TickRefType p_tk) ;
extern StatusType SetRelAlarm(AlarmType aid, TickType incr, TickType cycle) ;
extern StatusType SetAbsAlarm(AlarmType aid, TickType start, TickType cycle) ;
extern StatusType CancelAlarm (AlarmType aid) ;

/*------------------------------------------------------------------------------
* Event
*------------------------------------------------------------------------------*/
#define DeclareEvent(EventName);

extern StatusType SetEvent(TaskType tid, EventMaskType evmsk);
extern StatusType ClearEvent(EventMaskType evmsk);
extern StatusType GetEvent(TaskType tid, EventMaskRefType ev_ref) ;
extern StatusType WaitEvent(EventMaskType evmsk);

/*------------------------------------------------------------------------------
* Resource
*------------------------------------------------------------------------------*/
#define DeclareResource(ResourceName);

extern StatusType GetResource(ResourceType rid);
extern StatusType ReleaseResource(ResourceType rid) ;

/*------------------------------------------------------------------------------
* Hook
*------------------------------------------------------------------------------*/
/* User have to define this functions. */
extern void ErrorHook (StatusType error);
extern void PreTaskHook (void);
extern void PostTaskHook (void);
extern void StartupHook (void);
extern void ShutdownHook (StatusType error);

#endif /* OSEK_OS_API_H_ */
