 /**
 * @file isr.h

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

#ifndef ISR_H_
#define ISR_H_

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
#define ISR_MAJOR_VERSION  1
#define ISR_MINOR_VERSION  0
#define ISR_PATCH_VERSION  0

/*----------------------------------------------------------------------------*/
/*     		   		   		   		    ISR TYPE 	  	 		   		   		 	        */
/*----------------------------------------------------------------------------*/

/**
 * @def ISR_CAT1
 *
 * identifies ISR_CAT1 type of ISR
 *
 * @see #TASK TYPE
 */
/*#define ISR_TYPE_CAT1                 0x21 */

/**
 * @def ISR_CAT2
 *
 * identifies ISR_CAT2 type of ISR
 *
 * @see #TASK TYPE
 */
/*#define ISR_TYPE_CAT2                 0x22 */

/*----------------------------------------------------------------------------*/
/* 	   		   		   		    CHECK  ISR TYPE 	  	 		   		   		 	        */
/*----------------------------------------------------------------------------*/
/**
 * @def ISR_MASK
 *
 * identifies mask for ISR
 *
 * @see #TASK TYPE
 */
//#define ISR_TYPE_MASK                 0x20

/*******************************************************************************
* Types
*******************************************************************************/
typedef struct _KRT_ISR_CB{
  /*common*/
	KRT_COMMON_DYNAMIC_CB    *isrc_dynamic_desc;
	KRT_COMMON_STATIC_CB     *isrc_static_desc;

  /*isr specific*/
  KRT_ACT_COUNT    	    	 isrc_max_act_count;
  KRT_ACT_COUNT    	    	 isrc_curr_act_count;
  UINT8                    isrc_irq_num;
  UINT16                     isrc_init_ccr;

}KRT_ISR_CB;


/*******************************************************************************
* Global variables
*******************************************************************************/



/*******************************************************************************
* Global functions
*******************************************************************************/
/*#ifdef CODEWARRIOR_COMPILER
#pragma CODE_SEG __NEAR_SEG NON_BANKED
#endif
*/
extern void init_isr_item(TaskType integrated_id);

extern void interrupt_disable_cat2(void);
extern void interrupt_enable_cat2(void);

extern StatusType activate_isr(const ISRType isr_id);
extern StatusType terminate_isr(void);

extern void os_isr_cat_2_handler(const ISRType isr_id);

/*#ifdef CODEWARRIOR_COMPILER
#pragma CODE_SEG DEFAULT
#endif
*/
/*******************************************************************************
* Inline functions
*******************************************************************************/


#endif /* ISR_H_ */

