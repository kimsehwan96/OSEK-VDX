/**
 * @file osek_os_types.h

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

#ifndef OSEK_OS_TYPES_H_
#define OSEK_OS_TYPES_H_

/*******************************************************************************
* Include
*******************************************************************************/
#include "platform_types.h"

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define OSEK_OS_TYPE_MAJOR_VERSION  1
#define OSEK_OS_TYPE_MINOR_VERSION  0
#define OSEK_OS_TYPE_PATCH_VERSION  0


/*******************************************************************************
* Constants
*******************************************************************************/

/*--------------------------------- resource  -----------------------------------*/
/* special resource for using scheduler  */
/**
 * @def RES_SCHEDULER
 *
 * identifies RES_SCHEDULER
 *
 * @see #RESOURCE
 * @see paragraph 13.4.4 page 59 of OSEK/VDX 2.2.3spec
 */
//#ifdef OS_USE_RES_SCHEDULER
//#define RES_SCHEDULER			                  0
//#endif

/*----------------------------------------------------------------------------*/
/*     			  						  	OSDEFAULTAPPMODE                                */
/*----------------------------------------------------------------------------*/
/* special resource for using scheduler  */
/**
 * @def OSDEFAULTAPPMODE
 *
 * identifies OSDEFAULTAPPMODE
 *
 * @see #APPMODE
 * @see paragraph 13.7.3 page 67 of OSEK/VDX 2.2.3spec
 */
#ifdef OSDEFAULTAPPMODE
  #define OSDEFAULTAPPMODE	                  0
#endif

/*----------------------------------------------------------------------------*/
/*    		   		   	    	  	    INVALID_TASK	   	 		   		   		 	        */
/*----------------------------------------------------------------------------*/
/**
 * @def INVALID_TASK
 *
 * identifies invalid task
 *
 * @see #TASK ID
 * @see paragraph 13.2.4 page 54 of OSEK/VDX 2.2.3 spec
 */

#define INVALID_TASK              ((TaskType)0xFF)

/*----------------------------------------------------------------------------*/
/*     		   		   		    	  	    TASK STATE 	   	 		   		   		 	        */
/*----------------------------------------------------------------------------*/
/**
 * @def SUSPENDED
 *
 * identifies SUSPENED state of task
 *
 * @see #TASK STATE
 * @see paragraph 13.2.4 page 54 of OSEK/VDX 2.2.3 spec
 */
/*#define SUSPENDED			            0x10*/  /*OSEK constant*/
/**
 * @def READY
 *
 * identifies READY state of task
 *
 * @see #TASK STATE
 * @see paragraph 13.2.4 page 54 of OSEK/VDX 2.2.3 spec
 */
/*#define READY					        0x20*/  /*OSEK constant*/
/**
 * @def RUNNING
 *
 * identifies RUNNING state of task
 *
 * @see #TASK STATE
 * @see paragraph 13.2.4 page 54 of OSEK/VDX 2.2.3 spec
 */
/*#define RUNNING				            0x40*/  /*OSEK constant*/
/**
 * @def WAITING
 *
 * identifies WAITING state of task
 *
 * @see #TASK STATE
 * @see paragraph 13.2.4 page 54 of OSEK/VDX 2.2.3 spec
 */
/*#define WAITING				            0x80*/  /*OSEK constant*/

/**
 * @def AUTOSTART_AND_READY
 *
 * identifies AUTOSTART_AND_READY state of task
 *
 * @see #TASK STATE
 */
/*#define INITAIL_AND_READY              0x21*/
/**
 * @def PREEMPTED_AND_READY
 *
 * identifies PREEMPTED_AND_READY state of task
 *
 * @see #TASK STATE
 */
/*#define AUTOSTART_AND_READY            0x22*/
/**
 * @def PREEMPTED_AND_READY
 *
 * identifies PREEMPTED_AND_READY state of task
 *
 * @see #TASK STATE
 */
/*#define PREEMPTED_AND_READY            0x24*/
/**
 * @def PREEMPTED_AND_READY
 *
 * identifies PREEMPTED_AND_READY state of task
 *
 * @see #TASK STATE
 */
/*#define WAIT_AND_READY                 0x28*/

/*----------------------------------------------------------------------------*/
/*   			  					  	 	     	ERROR CODE   	 	                            */
/*----------------------------------------------------------------------------*/
/**
 * @def E_OK
 *
 * identifies E_OK
 *
 * @see #StatusType
 * @see paragraph 13.1 page 49 of OSEK/VDX 2.2.3spec
 */
#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
typedef unsigned char StatusType;
#define E_OK 					0
#endif

/**
 * @def E_OS_ACCESS
 *
 * identifies E_OS_ACCESS
 *
 * @see #StatusType
 * @see paragraph 13.1 page 49 of OSEK/VDX 2.2.3spec
 */
#define E_OS_ACCESS                  1     /* OSEK spec */
/**
 * @def E_OS_CALLEVEL
 *
 * identifies E_OS_CALLEVEL
 *
 * @see #StatusType
 * @see paragraph 13.1 page 49 of OSEK/VDX 2.2.3spec
 */
#define E_OS_CALLEVEL                2     /* OSEK spec */
/**
 * @def E_OS_ID
 *
 * identifies E_OS_ID
 *
 * @see #StatusType
 * @see paragraph 13.1 page 49 of OSEK/VDX 2.2.3spec
 */
#define E_OS_ID                      3     /* OSEK spec */
/**
 * @def E_OS_LIMIT
 *
 * identifies E_OS_LIMIT
 *
 * @see #StatusType
 * @see paragraph 13.1 page 49 of OSEK/VDX 2.2.3spec
 */
#define E_OS_LIMIT                   4     /* OSEK spec */
/**
 * @def E_OS_NOFUNC
 *
 * identifies E_OS_NOFUNC
 *
 * @see #StatusType
 * @see paragraph 13.1 page 49 of OSEK/VDX 2.2.3spec
 */
#define E_OS_NOFUNC                  5     /* OSEK spec */
/**
 * @def E_OS_RESOURCE
 *
 * identifies E_OS_RESOURCE
 *
 * @see #StatusType
 * @see paragraph 13.1 page 49 of OSEK/VDX 2.2.3spec
 */
#define E_OS_RESOURCE                6     /* OSEK spec */
/**
 * @def E_OS_STATE
 *
 * identifies E_OS_STATE
 *
 * @see #StatusType
 * @see paragraph 13.1 page 49 of OSEK/VDX 2.2.3spec
 */
#define E_OS_STATE                   7     /* OSEK spec */
/**
 * @def E_OS_VALUE
 *
 * identifies E_OS_VALUE
 *
 * @see #StatusType
 * @see paragraph 13.1 page 49 of OSEK/VDX 2.2.3spec
 */
#define E_OS_VALUE                   8     /* OSEK spec */

/* It can be added by internal errors */
/**
 * @def E_OS_SYS_MAIN_STACK_OVERFLOW
 *
 * identifies E_OS_SYS_MAIN_STACK_OVERFLOW
 */
#define E_OS_SYS_STACK_OVERFLOW                   16
/**
 * @def E_OS_SYS_TASK_STACK_OVERFLOW
 *
 * identifies E_OS_SYS_TASK_STACK_OVERFLOW
 */
#define E_OS_SYS_STACK_UNDERFLOW                  17
/**
 * @def E_OS_SYS_MULTI_ACT
 *
 * identifies E_OS_SYS_MULTI_ACT
 *
 */
#define E_OS_SYS_MULTI_ACT                     18
/**
 * @def E_OS_INVALID_PRIORITY
 *
 * identifies E_OS_INVALID_PRIORITY
 *
 */
#define E_OS_INVALID_PRIORITY                     19
/**
 * @def E_OS_READY_Q_EMPTY
 *
 * identifies E_OS_READY_Q_EMPTY
 *
 */
#define E_OS_READY_Q_EMPTY                        20
/**
 * @def E_OS_READY_Q_FULL
 *
 * identifies E_OS_READY_Q_FULL
 *
 */
#define E_OS_READY_Q_FULL                         21

/**
 * @def E_OS_READY_Q_NULL
 *
 * identifies E_OS_READY_Q_NULL
 *
 */
#define E_OS_READY_Q_NULL                         22

/**
 * @def E_OS_OIL_MISMATCH
 *
 * identifies E_OS_OIL_MISMATCH
 *
 */
#define E_OS_OIL_MISMATCH                        23

/**
 * @def E_OS_ACT_CNT_ZERO
 *
 * identifies E_OS_ACT_CNT_ZERO
 *
 */
#define E_OS_ACT_CNT_ZERO                        24

/**
 * @def E_OS_SYS_SERVICE
 *
 * (!) ljw: added 090702 -temporary. don't remove
 * Non standard
 * General Std status error not specified in OS223
 * identifies E_OS_SYS_SERVICE
 *
 */
#define E_OS_SYS_SERVICE                          98

/**
 * @def E_OS_UNKNOWN
 *
 * identifies E_OS_UNKNOWN
 *
 */
#define E_OS_UNKNOWN                              99

/*--------------------------------- alarm  -----------------------------------*/
/* alarm */
/* (!)following should be offered by SG  */

/*   	OSMAXALLOWEDVALUE_x			*/
/*  	OSTICKSPERBASE_x		    */
/*		OSMINCYCLE_x			    */

/* following should match alarm module */
#define OSMAXALLOWEDVALUE (99)
#define OSTICKSPERBASE    (10)
#define OSMINCYCLE        (10)

#define OSTICKDURATION    (1000)   /* in nano seconds, ie. equal to 1 milisec */

/****************************************************/
/*     									Data Type										*/
/****************************************************/

/*--------------------------------- task  -----------------------------------*/
/**
 * @typedef TaskType
 *
 * identifies TaskType
 *
 * @see #TASK
 * @see paragraph 13.2 page 49 of OSEK/VDX 2.2.3spec
 * @see It is defined in os_types.h
 */
typedef UINT8     	 	TaskType;
/**
 * @typedef TaskRefType
 *
 * identifies TaskRefType
 *
 * @see #TASK
 * @see paragraph 13.2 page 49 of OSEK/VDX 2.2.3spec
 * @see It is defined in os_types.h
 */
typedef TaskType       *TaskRefType;
/**
 * @typedef TaskStateType
 *
 * identifies TaskStateType
 *
 * @see #TASK
 * @see paragraph 13.2 page 49 of OSEK/VDX 2.2.3spec
 */
typedef enum { SUSPENDED			      = 0x10,
               READY                = 0x20,
               INITAIL_AND_READY    = 0x21,
               AUTOSTART_AND_READY  = 0x22,
               PREEMPTED_AND_READY  = 0x24,
               WAITED_AND_READY     = 0x28,
               INTERRUPED_AND_READY = 0x30,
               RUNNING              = 0x40,
               WAITING              = 0x80
}TaskStateType;
/*typedef UINT8    TaskStateType;*/

/**
 * @typedef TaskStateRefType
 *
 * identifies TaskStateRefType
 *
 * @see #TASK
 * @see paragraph 13.2 page 49 of OSEK/VDX 2.2.3spec
 */
typedef TaskStateType  *TaskStateRefType;

/*--------------------------------- ISR -----------------------------------*/
/**
 * @typedef ISRType
 *
 * identifies ISRType
 *
 * @see #ISR
 * @see paragraph 13.2 page 49 of OSEK/VDX 2.2.3spec
 * @see It is defined in os_types.h
 */
typedef UINT8     	 	ISRType;
/*-------------------------------- appmode ----------------------------------*/
/**
 * @typedef AppModeType
 *
 * identifies AppModeType
 *
 * @see #APPMODE
 * @see paragraph 13.7 page 66 of OSEK/VDX 2.2.3spec
 */
typedef UINT16        AppModeType;


/*--------------------------------- resource  -------------------------------*/
/**
 * @typedef ResourceType
 *
 * identifies ResourceType
 *
 * @see #RESOURCE
 * @see paragraph 13.4 page 58 of OSEK/VDX 2.2.3spec
 * @see It is defined in os_types.h
 */
typedef UINT8     		ResourceType;

/*--------------------------------- alarm  -----------------------------------*/
/**
 * @typedef AlarmIdType
 *
 * identifies AlarmIdType
 *
 * @see #ALARM
 * @see paragraph 13.6 page 62 of OSEK/VDX 2.2.3spec
 */
//typedef UINT8         AlarmIdType;

/**
 * @typedef TickType
 *
 * identifies TickType
 *
 * @see #ALARM
 * @see paragraph 13.6 page 62 of OSEK/VDX 2.2.3spec
 */
typedef UINT32     		TickType;
/**
 * @typedef TickRefType
 *
 * identifies TickRefType
 *
 * @see #ALARM
 * @see paragraph 13.6 page 62 of OSEK/VDX 2.2.3spec
 */
typedef TickType      *TickRefType;

/**
 * @typedef AlarmBaseType
 *
 * identifies AlarmBaseType
 *
 * @see #ALARM
 * @see paragraph 13.6 page 62 of OSEK/VDX 2.2.3spec
 */
typedef struct _AlarmBaseType
{
    TickType maxallowedvalue;         /* OIL 2.5 uint32.*/
    TickType ticksperbase;            /* OIL 2.5 uint32*/
    TickType mincycle;                /* OIL 2.5 uint32*/
}AlarmBaseType;

/**
 * @typedef AlarmBaseRefType
 *
 * identifies AlarmBaseRefType
 *
 * @see #ALARM
 * @see paragraph 13.6 page 62 of OSEK/VDX 2.2.3spec
 */
typedef AlarmBaseType *AlarmBaseRefType ;

/**
 * @typedef AlarmType
 *
 * identifies AlarmType
 *
 * @see #ALARM
 * @see paragraph 13.6 page 62 of OSEK/VDX 2.2.3spec
 */
typedef UINT8         AlarmType;


/*--------------------------------- event -----------------------------------*/
/**
 * @typedef EventMaskType
 *
 * identifies EventMaskType
 *
 * @see #EVENT
 * @see paragraph 13.5 page 60 of OSEK/VDX 2.2.3spec
 */
typedef UINT64     		EventMaskType;    /* OIL 2.5 uint64*/
/**
 * @typedef EventMaskRefType
 *
 * identifies EventMaskRefType
 *
 * @see #EVENT
 * @see paragraph 13.5 page 60 of OSEK/VDX 2.2.3spec
 */
typedef EventMaskType *EventMaskRefType;


/*------------------------------ system service code -------------------------*/
/**
 * @typedef OSServiceIdType
 *
 * identifies OSServiceIdType
 *
 * @see #ERROR
 * @see paragraph 13.8 page 68 of OSEK/VDX 2.2.3spec
 */
typedef enum _OSServiceIdType{
    OSServiceId_NULL=1,
    OSServiceId_ActivateTask,
    OSServiceId_TerminateTask,
    OSServiceId_ChainTask,
    OSServiceId_Schedule,
    OSServiceId_GetTaskID,
    OSServiceId_GetTaskState,
    OSServiceId_EnableAllInterrupts,
    OSServiceId_DisableAllInterrupts,
    OSServiceId_ResumeAllInterrupts,
    OSServiceId_SuspendAllInterrupts,
    OSServiceId_ResumeOSInterrupts,
    OSServiceId_SuspendOSInterrupts,
    OSServiceId_GetResource,
    OSServiceId_ReleaseResource,
    OSServiceId_SetEvent,
    OSServiceId_ClearEvent,
    OSServiceId_GetEvent,
    OSServiceId_WaitEvent,
    OSServiceId_GetAlarmBase,
    OSServiceId_GetAlarm,
    OSServiceId_SetRelAlarm,
    OSServiceId_SetAbsAlarm,
    OSServiceId_CancelAlarm,
    OSServiceId_GetActiveApplicationMode,
    OSServiceId_StartOS,
    OSServiceId_ShutdownOS
} OSServiceIdType;


/****************************************************/
/*     									MACRO    										*/
/****************************************************/

/* in hook.h */

/*******************************************************************************
* Inline functions
*******************************************************************************/
/**
 * @def TASK(name)
 *
 * macro function for TASK declaration
 *
 * @see #CONFORMANCE_CLASS
 * @see ISR(name) : in platform.h
 */
/* #define TASK(name)               void _task_fn_##name##_(void)  */

/**
 * @def ISR(name)
 *
 * macro function for ISR declaration
 *
 * @see #CONFORMANCE_CLASS
 * @see ISR(name) : in platform.h
 */
/* #define ISR(name)               void _isr_fn_##name##_(void)   */


#endif /* OSEK_OS_TYPES_H_ */
