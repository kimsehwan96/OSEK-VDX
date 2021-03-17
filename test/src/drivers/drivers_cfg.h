/**
 * @file drivers_cfg.h

 * @section descr File description
 *
 * This file is for testing doxygen.
 *
 * @section Copyright Copyright
 *
 * Copyright (c) 2009 Electronics and Telecommunications Research Institute (ETRI) All Rights Reserved.
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
 * $System: ECO-OS          $
 * $Block:  Driver          $
 * $Module: Driver_Cfg      $
 * $Date: 2009.4.16         $
 * $Rev: ver 1.0.0          $
 * $Creator: Choi, Gwang Ho $
 * $Owner: Choi, Gwang Ho   $
 * $URL: www.etri.re.kr 	$
 *
 */

/*##############################################################################
* Revision history
-----------------------------------------------------------------------------
   Date       Rev.    Author  Description
----------   -------  ------  -----------------------------------------------
2009-04-16   V1.0.0    CGH     Initial version
##############################################################################*/

/*##############################################################################
* Include area
##############################################################################*/
#ifndef DRIVERS_CFG_H
#define DRIVERS_CFG_H

#include "platform_types.h"
#include "dd_error.h"
#include "int.h"


/*##############################################################################
* Constant area
##############################################################################*/
/* File version information */
#define DRIVERS_CFG_SW_MAJOR_VERSION  1
#define DRIVERS_CFG_SW_MINOR_VERSION  0
#define DRIVERS_CFG_SW_PATCH_VERSION  0

#ifdef GCC_COMPILER             /*Compiler specific settings              */
#define _NOP __asm("nop")
#define EnterCritical()     { __asm("pshc"); __asm("sei"); __asm("movb 1,SP+,CCR_reg"); }
#define ExitCritical()  { __asm("movb CCR_reg, 1,-SP"); __asm("pulc"); }
#endif /* GCC_COMPILER */
#ifdef CODEWARRIOR_COMPILER
#define EnterCritical()     { __asm PSHC; __asm SEI; __asm MOVB 1,SP+,CCR_reg; }
#define ExitCritical()  { __asm MOVB CCR_reg, 1,-SP; __asm PULC; }
#endif /* CODEWARRIOR_COMPILER */

#ifdef MCUPKG_EP100
#define OSC_CLOCK_ENABLE
#endif /* MCUPKG_EP100 */
#ifdef MCUPKG_F512
#define PLL_CLOCK_ENABLE
#endif /* MCUPKG_F512 */

/*************************** clock setting ***************************/
#define OSC_CLOCK   4000000             /* Oscillator clock : 4Mhz */
#define PLL_CLOCK   80000000            /* CGMIPLL clock    : 80Mhz */

#if defined(PLL_CLOCK_ENABLE)
  #define SYS_CLOCK   PLL_CLOCK         /* System clocks are derived from PLLCLK */
#elif defined(OSC_CLOCK_ENABLE)
  #define SYS_CLOCK   OSC_CLOCK         /* System clocks are derived from OSCCLK */
#else
  #error  "This is an error case"
#endif

#define BUS_CLOCK   SYS_CLOCK /2      /* Bus clock = Oscillator clock / 2 */

/*##############################################################################
* Type area
##############################################################################*/
/* ADC Resolution type */
typedef enum
{
    ADC_RES_8BIT = 0,
    ADC_RES_10BIT,
    ADC_RES_12BIT
} Adc_ResolutionType;

typedef enum
{
    ADC_POLLING_METHOD = 0,
    ADC_INTERRUPT_METHOD
} Adc_MethodType;

/*##############################################################################
* Global variable area
##############################################################################*/
extern UINT32 UART_BAUDRATE;
extern UINT8 UART_DATA_BIT_SIZE;
extern UINT8 UART_TX_BUF_SIZE;
extern UINT8 UART_RX_BUF_SIZE;
extern UINT16 LIN_BAUDRATE;
extern UINT8 SPI_BR_SPPR;
extern UINT8 SPI_BR_SPR;
extern UINT32 ADC_CLOCK;
extern UINT8 Adc_Channels[16];
extern UINT16 PWM_PERIOD;
extern Adc_ResolutionType ADC_RESOLUTION;
extern Adc_MethodType ADC_CONV_METHOD;
extern UINT8 CAN_PRESCALE;
extern UINT8 CAN_TSEG1;
extern UINT8 CAN_TSEG2;

/*##############################################################################
* Global function declaration area
##############################################################################*/

#endif /* DRIVERS_CFG_H */

