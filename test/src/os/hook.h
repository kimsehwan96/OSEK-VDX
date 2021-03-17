/**
 * @file hooks.h

 * @section descr File description
 *
 * This header file provides data types for task.
 *
 * @section Copyright Copyright
 *
 * Copyright (c) 2008 Electronics and Telecommunications Research Institute (ETRI) All Rights Reserved.
 *
 * Following acts are STRICTLY PROHIBITED except when a specific prior written permission is
 * obtained from ETRI or a separate written agreement with ETRI stipulates such permission specifically:
 * a) Selling, distributing, sublicensing, renting, leasing, transmitting, redistributing or otherwise
 *    transferring this software to a third party;
 * b) Copying, transforming, modifying, creating any derivatives of, reverse engineering, decompiling,
 *    disassembling, translating, making any attempt to discover the source code of, the whole or part
 *    of this software in source or binary form;
 * c) Making any copy of the whole or part of this software other than one copy for backup purposes only; and
 * d) Using the name, trademark or logo of ETRI or the names of contributors in order to endorse or
 *    promote products derived from this software.
 *
 * This software is provided "AS IS," without a warranty of any kind. ALL EXPRESS OR IMPLIED CONDITIONS,
 * REPRESENTATIONS AND WARRANTIES, INCLUDING ANY IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE OR NON-INFRINGEMENT, ARE HEREBY EXCLUDED. IN NO EVENT WILL ETRI (OR ITS LICENSORS,
 * IF ANY) BE LIABLE FOR ANY LOST REVENUE, PROFIT OR DATA, OR FOR DIRECT, INDIRECT, SPECIAL, CONSEQUENTIAL,
 * INCIDENTAL OR PUNITIVE DAMAGES, HOWEVER CAUSED AND REGARDLESS OF THE THEORY OF LIABILITY, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE USE OF OR INABILITY TO USE THIS SOFTWARE, EVEN IF ETRI HAS BEEN ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGES.
 *
 * Any permitted redistribution of this software must retain the copyright notice, conditions,
 * and disclaimer as specified above.
 *
 * @section infos File informations
 *
 * $System: 	QPLUS_AUTO$
 * $Block:    OS$
 * $Module:   TASK$
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

#ifndef HOOKS_H_
#define HOOKS_H_

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define HOOKS_SW_MAJOR_VERSION  1
#define HOOKS_SW_MINOR_VERSION  0
#define HOOKS_SW_PATCH_VERSION  0


/*******************************************************************************
* Includes
*******************************************************************************/
#include "osek_os_types.h"
#include "machine.h"
#include "ll_std_app_oil.h"

/*******************************************************************************
* Extern
*******************************************************************************/

/*******************************************************************************
* Types
*******************************************************************************/


/*******************************************************************************
* Global variables
*******************************************************************************/
/*
extern void (* fn_startup_hook)(void);
extern void (* fn_shutdown_hook)(StatusType error);
extern void (* fn_pretask_hook)(void);
extern void (* fn_posttask_hook)(void);
extern void (* fn_error_hook)(StatusType error);

*/

/*******************************************************************************
* Global functions
*******************************************************************************/

void call_startup_hook(void);
void call_shutdown_hook(StatusType error);
void call_pre_task_hook(void);
void call_post_task_hook(void);
void call_error_hook(StatusType error);


/*******************************************************************************
* Internal functions
*******************************************************************************/


/*******************************************************************************
* Inline functions
*******************************************************************************/

/**
 * @def CALL_STARTUP_HOOK
 *
 * called after by the OS start up
 *
 * @see #HOOK routine
 */
#define CALL_STARTUP_HOOK()                                                    \
{                                                                              \
    if (OS_USE_START_UP_HOOK == obTRUE) call_startup_hook();                             \
}                                                                              \
/**
 * @def CALL_SHUTDOWN_HOOK
 *
 * called before by the OS shut down
 *
 * @see #HOOK routine
 */
#define CALL_SHUTDOWN_HOOK(error)                                              \
{                                                                              \
    if (OS_USE_SHUT_DOWN_HOOK == obTRUE) call_shutdown_hook(error);                      \
}                                                                              \


/**
 * @def CALL_PRE_TASK_HOOK
 *
 * called after new task enters the RUNNING state, when context switching
 by the OS shut down
 *
 * @see #HOOK routine
 */
#define CALL_PRE_TASK_HOOK()                                                   \
{                                                                              \
    if (OS_USE_PRE_TASK_HOOK == obTRUE) call_pre_task_hook();                            \
}                                                                              \
/**
 * @def CALL_POST_TASK_HOOK
 *
 * called before old task leaves the RUNNING state, when context switching
 *
 * @see #HOOK routine
 */
#define CALL_POST_TASK_HOOK()                                                  \
{                                                                              \
    if ( OS_USE_POST_TASK_HOOK == obTRUE ) call_post_task_hook();                        \
}                                                                              \


/**
 * @def CALL_ERROR_HOOK
 *
 * called if a system service returns a StasusType value not equal to E_OK
 *
 * @see #HOOK routine
 */

/* used : 9 */
#define CALL_ERROR_HOOK(error)                        \
   {                                                  \
   if ( OS_USE_ERROR_HOOK == obTRUE )                                    \
   {                                                                           \
       if((error) != E_OK)                                                     \
       {                                                                       \
           if(GET_KERNEL_IN_ERRORHOOK()==FALSE)                                \
           {                                                                   \
               call_error_hook(error);                                         \
           }                                                                   \
       }                                                                       \
   }                                                                           \
   else                                                                        \
   {                                                                           \
       /*NOP*/                                                                 \
   }                                                                           \
}                                                                              \


/**
* @def OSEK_API_RETURN, OSEK_API_RETURN_IF_ERROR
*
* combines calling error_hook and returning.
* OSEK_API_RETURN_IF_ERROR does not return but continues if no error is indicated
* in r.
* handling EXTENDED/STANDARD STATUS.
*
* (i) in STD STS mode, r other than E_OK is substituded to E_OS_SYS_SERVICE
*     if problematic, change E_OS_SYS_SERVICE to E_OK ;
* checking some condition in STD sts mode is up to the caller of this macro
* these 2 macros just works on given r after such checking, if exists;
*
* @see 090630 ljw: added
* @see 090720 ljw: fully revisioned, considering rev in CALL_ERROR_HOOK
*/

#define OSEK_API_RETURN(r) {                                                   \
	     CALL_ERROR_HOOK(r);                                     \
	     OS_EXIT_CRITICAL_SECTION();                             \
         if ( OS_ERROR_STATUS == oeEXTENDED_os_status ){ return (r); }                    \
         else { return (r!=E_OK) ? (E_OS_SYS_SERVICE) : (r) ;    }                  \
	     }


#define OSEK_API_RETURN_IF_ERROR(r) {                                          \
        CALL_ERROR_HOOK(r);                                      \
        if(r != E_OK){                                           \
             OS_EXIT_CRITICAL_SECTION();                         \
             if ( OS_ERROR_STATUS == oeEXTENDED_os_status ) { return (r) ;}               \
             else { return E_OS_SYS_SERVICE ; }                                     \
             }                                                   \
        }


/**
* @def OSEK_API_RAWRETURN, OSEK_API_RAWRETURN_IF_ERROR
*
* special version of above 2 macro funcs which simply return error code unchanged
* in both STANDARD and EXTENDED STATUS
*
* to be used in API, the return value of which is not E_OK in STANDARD STATUS
*
* @see 090630 ljw: added
* @see 090720 ljw: fully revisioned, considering rev in CALL_ERROR_HOOK
*/

#define OSEK_API_RAWRTN(r)                                                     \
{                                                                              \
    CALL_ERROR_HOOK(r);                                                        \
    OS_EXIT_CRITICAL_SECTION();                                                \
    return (r);                                                                \
}                                                                              \


#define OSEK_API_RAWRTN_IF_ERROR(r)                                            \
{                                                                              \
    CALL_ERROR_HOOK(r);                                                        \
    if ((r) != E_OK) {                                                         \
        OS_EXIT_CRITICAL_SECTION();                                            \
        return (r) ;                                                           \
    }                                                                          \
}                                                                              \

#endif /* HOOKS_H_ */

