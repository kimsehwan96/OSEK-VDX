 /**
 * @file s12x.h

 * @section descr File description
 *
 * This header file includes cpu related data types.
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
 * $Module:   PLATFORM$
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

#ifndef S12X_H_
#define S12X_H_

/*******************************************************************************
* Includes
*******************************************************************************/
#include "platform_types.h"
#include "osek_os_types.h"

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define S12X_MAJOR_VERSION  1
#define S12X_MINOR_VERSION  0
#define S12X_PATCH_VERSION  0

/**
 * @def OS_STACK_GROWTH
 *
 * This structure is for type of OS_STACK_GROWTH
 */


  #define OS_STACK_UPWARD
/*
  #define OS_STACK_DOWNWARD
*/

#define UART_MSG_CH                SCI_0

#define MAX_INTERRUPT_NESTING_CNT  32

/*******************************************************************************
* Types
*******************************************************************************/

/**
 * @typedef function_pointer
 *
 * This structure is for type of function_pointer
 */
typedef void (*KRT_FN_POINTER)(void);

/**
 * @typedef ANEOS_CONTEXT
 *
 * This structure is for type of _h12_context
 */
#pragma pack(1)
typedef struct {
  UINT16                  ccr;                 /* condition code register                */
  UINT16                  d;                   /* double accumulator D (or acc A and B)  */
  UINT16                  x;                   /* index register X                       */
  UINT16                  y;                   /* index register Y                       */

#if defined(GCC_COMPILER)
#ifndef  OMIT_FRAME_POINTER
  UINT16 				  old_frame;
  UINT16                  new_frame;
#endif

  UINT8                   ppage;               /* program page                           */
#endif
  KRT_FN_POINTER          pc;                  /* program counter                        */
  DATA_ADDR_TYPE          sp;                  /* stack pointer                          */
}KRT_CONTEXT;

/**
 * @typedef KRT_STACK
 *
 * This structure is for type of H12_STACK
 */
typedef struct {
  UINT16                  size;                 /* size of stack                  */
  UINT32                  *top_addr;            /* top address of stack           */
  UINT32                  *bottom_addr;         /* bottom address  of stack       */
}KRT_STACK;
#pragma pack()

/*******************************************************************************
* Global variables
*******************************************************************************/
/* All Interrupt */
extern SINT8  all_int_cnt;

/* All Interrupt */
extern SINT8  all_int_nested_cnt;
//extern UINT32  int_CCR_reg;;

/* OS CAT2 Interrupt */
extern SINT8  os_int_nested_cnt;

//extern UINT8  cat2_lock_cnt;
extern BOOL   cat2_isr_enable;

extern SINT8 scheduler_lock_cnt;
extern UINT16  blue_CCR_reg;

/*******************************************************************************
* Global functions
*******************************************************************************/

extern void start_system_timers(void);
extern void system_timer_clear(void);

extern void SET_KERNEL_CAT2_ISR_ENABLE(BOOL enable);
extern BOOL GET_KERNEL_CAT2_ISR_ENABLE(void);

extern StatusType check_stack_pointer(TaskType task_id, DATA_ADDR_TYPE sp, KRT_STACK *stack);
extern UINT16 get_current_stack_pointer(void);

extern void disable_all_interrupt(void);
extern void enable_all_interrupt(void);
extern void lock_scheduler(void);
extern void unlock_scheduler(void);

extern void cat2_isr_reset(UINT8 irq_num);

extern void restart(void);
extern void poweron_reset(void);
extern void low_vlotage_reset(void);
extern void poweroff(void);

extern void init_arch(void);
extern void init_platform(void);
extern void shutdown_platform(void);
extern void shutdown_arch(void);

extern void init_stack(KRT_STACK *stack);
extern void init_context(BOOL is_ISR, KRT_CONTEXT *context, UINT16 ccr, KRT_FN_POINTER entry, KRT_STACK *stack);

extern void context_switch_no_save(KRT_CONTEXT *old_cxt, KRT_CONTEXT *new_cxt);
extern void context_switch(KRT_CONTEXT *old_cxt, KRT_CONTEXT *new_cxt);

extern void EnableAllInterrupts(void);
extern void DisableAllInterrupts(void);
extern void ResumeAllInterrupts(void);
extern void SuspendAllInterrupts(void);
extern void ResumeOSInterrupts(void);
extern void SuspendOSInterrupts(void);

/*******************************************************************************
* Internal functions
*******************************************************************************/


/*******************************************************************************
* Inline functions
*******************************************************************************/
/**
 * @def OS_ENTER_CRITICAL_SECTION()
 *
 * This defines OS_ENTER_CRITICAL_SECTION()
 */
#define OS_ENTER_CRITICAL_SECTION()        lock_scheduler()
/**
 * @def OS_EXIT_CRITICAL_SECTION()
 *
 * This defines OS_EXIT_CRITICAL_SECTION()
 */
#define OS_EXIT_CRITICAL_SECTION()         unlock_scheduler()

//#define DisableAllInterrupts() asm("sei");
//#define EnableAllInterrupts() asm("cli");


#endif /* S12X_H_ */
