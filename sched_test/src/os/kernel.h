 /**
 * @file kernel.h

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
2008-09-16   V1.0.0    Blue     Initial version

********************************************************************************/


#ifndef KERNEL_H_
#define KERNEL_H_

/*******************************************************************************
* Includes
*******************************************************************************/
#include "osek_os_types.h"
#include "common_types.h"

#include "machine.h"
#include "initial.h"

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define KERNEL_MAJOR_VERSION  1
#define KERNEL_MINOR_VERSION  0
#define KERNEL_PATCH_VERSION  0

/*----------------------------------------------------------------------------*/
/*  			  						  		CONSTANT - application                     */
/*----------------------------------------------------------------------------*/
#ifdef NUM_OF_OS
#if (NUM_OF_OS == 0)
    #define NO_OS
#endif
#else
    #define NO_OS
#endif

#ifdef NUM_OF_TASK
#if (NUM_OF_TASK == 0)
		#define NO_TASK
		/*#error "NO_TASK! Application must define TASKs!" */
#endif
#else
    #define NO_TASK
#endif

#ifdef NUM_OF_ISR
#if (NUM_OF_ISR == 0)
		#define NO_ISR
#endif
#else
    #define NO_ISR
#endif

#ifdef NUM_OF_COUNTER
#if (NUM_OF_COUNTER == 0)
		#define NO_COUNTER
#endif
#else
    #define NO_COUNTER
#endif

#ifdef NUM_OF_ALARM
#if (NUM_OF_ALARM == 0)
		#define NO_ALARM
#endif
#else
    #define NO_ALARM
#endif

#ifdef NUM_OF_EVENT
#if (NUM_OF_EVENT == 0)     /* ljw0625 : removed last ')' ... ? */
		#define NO_EVENT
#endif
#else
    #define NO_EVENT
#endif

#ifdef NUM_OF_COM
#if (NUM_OF_COM == 0)
    #define NO_COM
#endif
#else
    #define NO_COM
#endif

#ifdef NUM_OF_MESSAGE
#if (NUM_OF_MESSAGE == 0)
    #define NO_MESSAGE
#endif
#else
    #define NO_MESSAGE
#endif

#ifdef NUM_OF_NETWORK_MESSAGE
#if (NUM_OF_NETWORK_MESSAGE == 0)
    #define NO_NETWORK_MESSAGE
#endif
#else
    #define NO_NETWORK_MESSAGE
#endif

#ifdef NUM_OF_IPDU
#if (NUM_OF_IPDU == 0)
    #define NO_IPDU
#endif
#else
    #define NO_IPDU
#endif

/**
 * @def NEOS_VERSION
 *
 * identifies Qplus-Auto version
 *
 */
#define KRT_VERSION                    "Qplus-Auto 1.0"
/**
 * @def ANEOS_VERSION
 *
 * identifies OSEK version of ANEOS
 *
 */
#define KRT_OSEK_OS_VERSION            "OSEK OS 2.2.3"

/**
 * @def MIN_REQ_of CC
 *
 * identifies minimum requirement for conformance class
 *
 */
#ifdef OS_BCC1
#define MIN_NUM_OF_TASK_NOT_SUSPENDING   8
#define MIN_NUM_OF_TASK_PRIORITY         8
#define MIN_NUM_OF_RESOURCE              1
#define MIN_NUM_OF_INTERNAL_RESOURCE     2
#define MIN_NUM_OF_ALARM                 1
#define MIN_NUM_OF_APPMODE               1
#endif

#ifdef OS_BCC2
#define MIN_NUM_OF_TASK_NOT_SUSPENDING   8
#define MIN_NUM_OF_TASK_PRIORITY         8
#define MIN_NUM_OF_RESOURCE              8
#define MIN_NUM_OF_INTERNAL_RESOURCE     2
#define MIN_NUM_OF_ALARM                 1
#define MIN_NUM_OF_APPMODE               1
#endif

#ifdef OS_ECC1
#define MIN_NUM_OF_TASK_NOT_SUSPENDING   16
#define MIN_NUM_OF_TASK_PRIORITY         16
#define MIN_NUM_OF_RESOURCE              8
#define MIN_NUM_OF_INTERNAL_RESOURCE     2
#define MIN_NUM_OF_ALARM                 1
#define MIN_NUM_OF_APPMODE               1
#endif

#ifdef OS_ECC2
#define MIN_NUM_OF_TASK_NOT_SUSPENDING   16
#define MIN_NUM_OF_TASK_PRIORITY         16
#define MIN_NUM_OF_RESOURCE              8
#define MIN_NUM_OF_INTERNAL_RESOURCE     2
#define MIN_NUM_OF_ALARM                 1
#define MIN_NUM_OF_APPMODE               1
#endif

/**
 * @def MAX_NUM_OF_PRIORITY
 *
 * identifies maximum number of priority allowed
 *
 */

#define MAX_NUM_OF_PRIORITY          MAX_NUM_OF_TASK_AND_PRIO
/**
 * @def MAX_NUM_OF_TASK
 *
 * identifies maximum number of task allowed
 *
 */
#define MAX_NUM_OF_TASK              MAX_NUM_OF_TASK_AND_PRIO

/**
 * @def MAX_STACK_USED_OF_OS_API
 *
 * identifies Stack of idle task
 *
 */
#define MAX_STACK_USED_OF_OS_API     40


/****************************************************/
/*			default value    	  	  	  	  	  	     	*/
/****************************************************/
/* stack size */
#ifndef DEFAULT_STACK_SIZE
#define      DEFAULT_STACK_SIZE                 256
#endif

/* ready_Q */
#ifndef OS_DEFAULT_READY_QUEUE_SIZE
#define      OS_DEFAULT_READY_QUEUE_SIZE         10
#endif

/* values for OS DEBUG level */
#define      ECO_DEBUG_ERROR             0   /* FATAL ERROR */
#define      ECO_DEBUG_1                 1   /* ERROR, but not fatal */
#define      ECO_DEBUG_2                 2
#define      ECO_DEBUG_3                 3
#define      ECO_DEBUG_4                 4
#define      ECO_DEBUG_5                 5
#define      ECO_DEBUG_6                 6
#define      ECO_DEBUG_7                 7
#define      ECO_DEBUG_8                 8
#define      ECO_DEBUG_9                 9
#define      ECO_DEBUG_10                10

/*----------------------------------------------------------------------------*/
/*  			  						  		CONSTANT - processing level                     */
/*----------------------------------------------------------------------------*/
/* values for OS processing level */

typedef enum { PL_NULL           = 0x0000,
               PL_ISR            = 0x0001,
               PL_ISR_1          = 0x0002,
               PL_ISR_2          = 0x0004,
               PL_TASK           = 0x0008,
               PL_ALARM          = 0x0010,
               PL_HOOK           = 0x0020,
               PL_ERROR_HOOK     = 0x0040,
               PL_TASK_HOOK      = 0x0080,
               PL_START_UP_HOOK  = 0x0100,
               PL_SHUT_DOWN_HOOK = 0x0200,
               PL_CALLBACK       = 0x0400,
               PL_ALARM_CALLBACK = 0x0800
} KRT_PROC_LEVEL;
/*----------------------------------------------------------------------------*/
/*     			  						  		CONSTANT - OS status                          */
/*----------------------------------------------------------------------------*/
/* values for OS state */
/**
 * @def OS_IDLE
 *
 * identifies OS_IDLE of OS state
 *
 * @see #OS state
 */
typedef enum { OS_IDLE, OS_INIT, OS_RUNNING, OS_ERROR  } KRT_STATUS;


/*******************************************************************************
* Types
*******************************************************************************/
/**
 * @struct CC_TYPE
 *
 * This structure is for OS Conformance Class
 */
typedef enum { BCC1, BCC2, ECC1, ECC2  } CC_TYPE;


/**
 * @struct OS_KERNEL_BLK
 *
 * This structure is for OS kernel information
 */
typedef struct _KRT_CB{
    AppModeType                      krn_appmode;
    KRT_PROC_LEVEL                   krn_processing_level;
    KRT_STATUS                       krn_status;

    TaskType                         krn_running_exe_id;
//#ifdef OS_READYQ_METHOD_LIST
    KRT_PRIORITY                     krn_highest_prior_in_Q;
//#endif
    UINT8                            krn_int_nesting;
    BOOL                             krn_cat2_executed;
    BOOL                             krn_in_errorhook;
    BOOL                             krn_shutdownos_called;

    BOOL                             krn_activated_isr;

    KRT_CONTEXT	                     krn_context;
}KRT_CB;

/*******************************************************************************
* Global variables
*******************************************************************************/

extern KRT_CB                                    kernel_cb;


/*******************************************************************************
* Global functions
*******************************************************************************/
extern StatusType      CHECK_CALL_LEVEL(KRT_PROC_LEVEL target_level);

extern KRT_PROC_LEVEL  GET_KERNEL_PROCESSING_LEVEL(void);
extern TaskType        GET_KERNEL_RUNNING_EXE_ID(void);
extern TaskType        GET_KERNEL_IN_ERRORHOOK();

extern void            SET_KERNEL_PROCESSING_LEVEL(KRT_PROC_LEVEL proc_level);
extern void            SET_KERNEL_RUNNING_EXE_ID(TaskType integrated_id);

extern void            INCREASE_INTERRUPT_NESTING_CNT(void);
extern void            DECREASE_INTERRUPT_NESTING_CNT(void);

//#ifdef OS_READYQ_METHOD_LIST
extern KRT_PRIORITY    GET_KERNEL_HIGHEST_PRIOR_IN_Q(void);
extern void            SET_KERNEL_HIGHEST_PRIOR_IN_Q(KRT_PRIORITY priority);
//#endif

extern void            Set_IPL(UINT16 irq_num, UINT8 ipl);
extern UINT8           Get_IPL(UINT16 irq_num);


/*******************************************************************************
* Internal functions
*******************************************************************************/

#endif /* KERNEL_H_ */

