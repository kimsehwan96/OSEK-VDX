 /**
 * @file common_types.h

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

#ifndef COMMON_TYPES_H_
#define COMMON_TYPES_H_

/*******************************************************************************
* Includes
*******************************************************************************/
#include "osek_os_types.h"
#include "machine.h"

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define COMMON_TYPE_MAJOR_VERSION  1
#define COMMON_TYPE_MINOR_VERSION  0
#define COMMON_TYPE_PATCH_VERSION  0

/*******************************************************************************
* Types
*******************************************************************************/
/**
 * @typedef KRT_ID
 *
 * This structure is for id of Qplus-Auto object
 */
typedef TaskType                    KRT_ID;              /*  0..255  */
/**
 * @typedef KRT_TYPE
 *
 * This structure is for type of KRT_TYPE object
 */

typedef enum { IDLE_TASK            = 0x00,
               TSK_TYPE_MASK        = 0x10,
               TSK_TYPE_BASIC       = 0x11,
               TSK_TYPE_EXTENDED    = 0x12,
               ISR_TYPE_MASK        = 0x20,
               ISR_TYPE_CAT1        = 0x21,
               ISR_TYPE_CAT2        = 0x22
}KRT_TYPE;


/**
 * @typedef KRT_ACT_COUNT
 *
 * This structure is for activation count of Qplus-Auto object
 */
typedef UINT8 					         KRT_ACT_COUNT;       /* IN OIL 2.5,  uint32*/

/**
 * @typedef KRT_STATE
 *
 * This structure is for state of Qplus-Auto object
 */
typedef TaskStateType            KRT_STATE;

/**
 * @typedef KRT_PRIORITY
 *
 * This structure is for priority of Qplus-Auto object
 */
typedef UINT8                    KRT_PRIORITY;        /* IN OIL 2.5,  uint32*/

/**
 * @def KRT_ISR_TYPE
 *
 * identifies ISR_CAT_TYPE of ISR object
 *
 * @see #OS state
 */
//typedef UINT8                    KRT_ISR_TYPE;

/**
 * @enum KRNS_SCHEDULE_TYPE
 *
 * This structure is for OS Scheduling Policy
 */
/*
enum    _KRT_SCHEDULE_TYPE           {NON, FULL};
typedef enum _KRT_SCHEDULE_TYPE 		 KRT_SCHEDULE_TYPE;
*/

typedef enum   {NON, FULL}          KRT_SCHEDULE_TYPE;

/**
 * @def KRT_COMMON_STATIC_CB
 *
 * identifies common description of task/isr
 *
 * @see #OS state
 */
typedef struct _KRT_COMMON_STATIC_CB{

  KRT_CONTEXT	          *csc_context;
  KRT_STACK 	          *csc_stack;
  KRT_FN_POINTER          csc_entry;

  KRT_TYPE      	      csc_type;         /*MAIN, TSK_TYPE_BASIC, TSK_TYPE_EXTENDED, ISR_TYPE_CAT1, ISR_TYPE_CAT2*/
  KRT_SCHEDULE_TYPE       csc_schedule_type;  /* NON, FULL */

  KRT_PRIORITY	          csc_init_priority;

}KRT_COMMON_STATIC_CB;

/**
 * @def KRT_COMMON_DYNAMIC_CB
 *
 * identifies dynamic description of task/isr
 *
 * @see #OS state
 */
typedef struct _KRT_COMMON_DYNAMIC_CB{

  KRT_STATE			        cdc_state;


  KRT_PRIORITY	        cdc_curr_priority;

  BOOL                  cdc_interrupted;

}KRT_COMMON_DYNAMIC_CB;


/*******************************************************************************
* Global functions
*******************************************************************************/
extern void init_common_table(TaskType integrated_id);

extern StatusType CHECK_INTEGRATED_ID_IF_VALID(TaskType id);
extern BOOL CHECK_IF_TASK_TYPE(TaskType task_id);
extern BOOL CHECK_IF_TASK_SCHEDULE_TYPE_IS_NON(TaskType task_id);

/*******************************************************************************
* Inline functions
*******************************************************************************/

/******************************************************************************/
/**
 *  @brief This macro check assertion.
 */
/******************************************************************************/
#define ASSERT(i)           assert(i)

#endif /* COMMON_TYPES_H_ */

