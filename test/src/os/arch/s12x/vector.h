 /**
 * @file vector.h

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
 * $System:   ECO-OS$
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

#ifndef VECTOR_H_
#define VECTOR_H_

/*******************************************************************************
* Includes
*******************************************************************************/

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define VECTOR_MAJOR_VERSION  1
#define VECTOR_MINOR_VERSION  0
#define VECTOR_PATCH_VERSION  0

#ifdef MCUPKG_EP100
typedef enum {
    /* 0-9 */
	IRQ_SYS_RESET            = 0,
    IRQ_CM_RESET             = 1,
    IRQ_COP_RESET            = 2,
    IRQ_UNIMPL_1             = 3,
    IRQ_SWI                  = 4,
    IRQ_XIRQ                 = 5,
    IRQ_IRQ                  = 6,
    IRQ_RTI                  = 7,
	IRQ_ECTC0                = 8,
	IRQ_ECTC1                = 9,
    /* 10-19 */
	IRQ_ECTC2                = 10,
	IRQ_ECTC3                = 11,
	IRQ_ECTC4                = 12,
	IRQ_ECTC5                = 13,
	IRQ_ECTC6                = 14,
	IRQ_ECTC7                = 15,
	IRQ_ECT_OVERFLOW         = 16,
	IRQ_PAA_OVERFLOW         = 17,
	IRQ_PA_IE                = 18,
	IRQ_SPI0                 = 19,
    /* 20-29 */
	IRQ_SCI0                 = 20,
	IRQ_SCI1                 = 21,
	IRQ_ATD0                 = 22,
	IRQ_ATD1                 = 23,
	IRQ_PORT_J               = 24,
	IRQ_PORT_H               = 25,
	IRQ_MDC_UNDERFLOW        = 26,
	IRQ_PAB_OVERFLOW         = 27,
	IRQ_CRG_PLL              = 28,
	IRQ_CRG_SCM              = 29,
    /* 30-39 */
	IRQ_SCI6                 = 30,
	IRQ_IIC0_BUS             = 31,
	IRQ_SPI1                 = 32,
	IRQ_SPI2                 = 33,
	IRQ_FLASH_FAULT          = 34,
	IRQ_FLASH                = 35,
	IRQ_CAN0_W               = 36,
	IRQ_CAN0_ERROR           = 37,
	IRQ_CAN0_RCV             = 38,
	IRQ_CAN0_TRSM            = 39,
    /* 40-49 */
	IRQ_CAN1_W               = 40,
	IRQ_CAN1_ERROR           = 41,
	IRQ_CAN1_RCV             = 42,
	IRQ_CAN1_TRSM            = 43,
	IRQ_CAN2_W               = 44,
	IRQ_CAN2_ERROR           = 45,
	IRQ_CAN2_RCV             = 46,
	IRQ_CAN2_TRSM            = 47,
	IRQ_CAN3_W               = 48,
	IRQ_CAN3_ERROR           = 49,
    /* 50-59 */
	IRQ_CAN3_RCV             = 50,
	IRQ_CAN3_TRSM            = 51,
	IRQ_CAN4_W               = 52,
	IRQ_CAN4_ERROR           = 53,
	IRQ_CAN4_RCV             = 54,
	IRQ_CAN4_TRSM            = 55,
	IRQ_PORT_P               = 56,
	IRQ_PWM_ES               = 57,
	IRQ_SCI2                 = 58,
	IRQ_SCI3                 = 59,
    /* 60-69 */
	IRQ_SCI4                 = 60,
	IRQ_SCI5                 = 61,
	IRQ_IIC1_BUS             = 62,
	IRQ_LVI                  = 63,
	IRQ_API                  = 64,
	IRQ_HTI                  = 65,
	IRQ_PIT0                 = 66,
    IRQ_PIT1                 = 67,
    IRQ_PIT2                 = 68,
    IRQ_PIT3                 = 69,
    /* 70-79 */
	IRQ_XGATE_ST0            = 70,
	IRQ_XGATE_ST1            = 71,
	IRQ_XGATE_ST2            = 72,
	IRQ_XGATE_ST3            = 73,
	IRQ_XGATE_ST4            = 74,
	IRQ_XGATE_ST5            = 75,
	IRQ_XGATE_ST6            = 76,
	IRQ_XGATE_ST7            = 77,
	IRQ_RESERVE_0            = 78,
	IRQ_RESERVE_1            = 79,
    /* 80-89 */
    IRQ_PIT4                 = 80,
    IRQ_PIT5                 = 81,
    IRQ_PIT6                 = 82,
    IRQ_PIT7                 = 83,
	IRQ_SCI7                 = 84,
	IRQ_TIM_TC0              = 85,
	IRQ_TIM_TC1              = 86,
	IRQ_TIM_TC2              = 87,
	IRQ_TIM_TC3              = 88,
	IRQ_TIM_TC4              = 89,
    /* 90-99 */
	IRQ_TIM_TC5              = 90,
	IRQ_TIM_TC6              = 91,
	IRQ_TIM_TC7              = 92,
	IRQ_TIM_T_OVERFLOW       = 93,
	IRQ_TIM_PAA_OVERFLOW     = 94,
	IRQ_TIM_PA_IE            = 95,
	IRQ_ATD0_CI              = 96,
	IRQ_ATD1_CI              = 97,
	IRQ_RESERVE_3            =98,
	IRQ_RESERVE_4            = 99,
    /* 100-109 */
	IRQ_RESERVE_5            = 100,
	IRQ_RESERVE_6            = 101,
	IRQ_RESERVE_7            = 102,
	IRQ_RESERVE_8            = 103,
	IRQ_RESERVE_9            = 104,
	IRQ_RESERVE_10           = 105,
	IRQ_RESERVE_11           = 106,
	IRQ_RESERVE_12           = 107,
	IRQ_RESERVE_13           = 108,
	IRQ_RESERVE_14           = 109,
    /* 110-119 */
	IRQ_RESERVE_15           = 110,
	IRQ_RESERVE_16           = 111,
	IRQ_RESERVE_17           = 112,
	IRQ_RESERVE_18           = 113,
	IRQ_RESERVE_19           = 114,
	IRQ_RESERVE_20           = 115,
	IRQ_XGATE_SW_ERROR       = 116,
	IRQ_MPU_A_ERROR          = 117,
	IRQ_SYS                  = 118,
	IRQ_SI                   = 119
}S12_VECTOR;

#endif /* MCUPKG_EP100 */

#ifdef MCUPKG_F512
typedef enum {
    /* 0-9 */
    IRQ_SYS_RESET            = 0,
    IRQ_CM_RESET             = 1,
    IRQ_COP_RESET            = 2,
    IRQ_UNIMPL_1             = 3,
    IRQ_SWI                  = 4,
    IRQ_XIRQ                 = 5,
    IRQ_IRQ                  = 6,
    IRQ_RTI                  = 7,
	IRQ_ECTC0                = 8,
	IRQ_ECTC1                = 9,
    /* 10-19 */
	IRQ_ECTC2                = 10,
	IRQ_ECTC3                = 11,
	IRQ_ECTC4                = 12,
	IRQ_ECTC5                = 13,
	IRQ_ECTC6                = 14,
	IRQ_ECTC7                = 15,
	IRQ_ECT_OVERFLOW         = 16,
	IRQ_PAA_OVERFLOW         = 17,
	IRQ_PA_IE                = 18,
	IRQ_SPI0                 = 19,
    /* 20-29 */
	IRQ_SCI0                 = 20,
	IRQ_SCI1                 = 21,
	IRQ_RESERVE_0            = 22,
	IRQ_ATD                  = 23,
	IRQ_RESERVE_1            = 24,
	IRQ_RESERVE_2            = 25,
	IRQ_MDC_UNDERFLOW        = 26,
	IRQ_PAB_OVERFLOW         = 27,
	IRQ_CRG_PLL              = 28,
	IRQ_CRG_SCM              = 29,
    /* 30-39 */
	IRQ_CGM_IPLL             = 30,
	IRQ_RESERVE_3            = 31,
	IRQ_SPI1                 = 32,
	IRQ_RESERVE_4            = 33,
	IRQ_FLASH_FAULT          = 34,
	IRQ_FLASH                = 35,
	IRQ_CAN_W                = 36,
	IRQ_CAN_ERROR            = 37,
	IRQ_CAN_RCV              = 38,
	IRQ_CAN_TRSM             = 39,
    /* 40-49 */
	IRQ_RESERVE_5            = 40,
	IRQ_RESERVE_6            = 41,
	IRQ_RESERVE_7            = 42,
	IRQ_RESERVE_8            = 43,
	IRQ_FX_TMBI              = 44,
	IRQ_FX_RMBI              = 45,
	IRQ_FX_RCV_FIFO_CH_A     = 46,
	IRQ_FX_RCV_FIFO_CH_B     = 47,
	IRQ_FX_WAKEUP            = 48,
	IRQ_FX_CHI               = 49,
    /* 50-59 */
	IRQ_FX_PROTOCOL          = 50,
	IRQ_PMF_GA_R             = 51,
	IRQ_PMF_GB_R             = 52,
	IRQ_PMF_GV_R             = 53,
	IRQ_PMF_F0               = 54,
	IRQ_PMF_F1               = 55,
	IRQ_PMF_F2               = 56,
	IRQ_PMF_F3               = 57,
	IRQ_RESERVE_9            = 58,
	IRQ_RESERVE_10            = 59,
    /* 60-69 */
	IRQ_RESERVE_11           = 60,
	IRQ_RESERVE_12           = 61,
	IRQ_RESERVE_13           = 62,
	IRQ_LVI                  = 63,
	IRQ_API                  = 64,
	IRQ_RESERVE_14           = 65,
	IRQ_PIT0                 = 66,
    IRQ_PIT1                 = 67,
    IRQ_PIT2                 = 68,
    IRQ_PIT3                 = 69,
    /* 70-79 */
	IRQ_XGATE_ST0            = 70,
	IRQ_XGATE_ST1            = 71,
	IRQ_XGATE_ST2            = 72,
	IRQ_XGATE_ST3            = 73,
	IRQ_XGATE_ST4            = 74,
	IRQ_XGATE_ST5            = 75,
	IRQ_XGATE_ST6            = 76,
	IRQ_XGATE_ST7            = 77,
	IRQ_RESERVE_15           = 78,
	IRQ_RESERVE_16           = 79,
    /* 80-89 */
    IRQ_PIT4                 = 80,
    IRQ_PIT5                 = 81,
    IRQ_PIT6                 = 82,
    IRQ_PIT7                 = 83,
	IRQ_IT                   = 84,
	IRQ_RESERVE_17           = 85,
	IRQ_RESERVE_18           = 86,
	IRQ_RESERVE_19           = 87,
	IRQ_RESERVE_20           = 88,
	IRQ_RESERVE_21           = 89,
    /* 90-99 */
	IRQ_RESERVE_22           = 90,
	IRQ_RESERVE_23           = 91,
	IRQ_RESERVE_24           = 92,
	IRQ_RESERVE_25           = 93,
	IRQ_RESERVE_26           = 94,
	IRQ_RESERVE_27           = 95,
	IRQ_RESERVE_28           = 96,
	IRQ_ATD1_CI              = 97,
	IRQ_RESERVE_29           = 98,
	IRQ_RESERVE_30           = 99,
    /* 100-109 */
	IRQ_RESERVE_31           = 100,
	IRQ_RESERVE_32           = 101,
	IRQ_RESERVE_33           = 102,
	IRQ_RESERVE_34           = 103,
	IRQ_RESERVE_35           = 104,
	IRQ_RESERVE_36           = 105,
	IRQ_RESERVE_37           = 107,
	IRQ_RESERVE_38           = 108,
	IRQ_RESERVE_39           = 109,
    /* 110-119 */
	IRQ_RESERVE_40           = 110,
	IRQ_RESERVE_41           = 111,
	IRQ_RESERVE_42           = 112,
	IRQ_RESERVE_43           = 113,
	IRQ_RESERVE_44           = 114,
	IRQ_RESERVE_45           = 115,
	IRQ_XGATE_SW_ERROR       = 116,
	IRQ_MPU_A_ERROR          = 117,
	IRQ_SYS                  = 118,
	IRQ_SI                   = 119
}S12_VECTOR;

#endif /* MCUPKG_F512 */



#endif /* VECTOR_H_ */
