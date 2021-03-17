/**
 * @file drivers_cfg.c

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
 * $Module: Driver          $
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
#include "drivers_cfg.h"

/*##############################################################################
* Constant area
##############################################################################*/

/*##############################################################################
* Type area
##############################################################################*/

/*##############################################################################
* Global variable area
##############################################################################*/
/**********************************UART****************************************/
UINT32 UART_BAUDRATE = 57600; 	/* UART 보레이트 설정*/
UINT8 UART_DATA_BIT_SIZE = 8; 	/* 데이터 포멧 비트 크기 */

/**********************************LIN*****************************************/
UINT16 LIN_BAUDRATE = 9600;   	/* LIN 보레이트 설정 */

/**********************************CAN*****************************************/
/* CAN_BAUDRATE = (OSC_CLOCK / CAN_PRESCALE)/(1 + CAN_TSEG1 + CAN_TSEG2)*/
/* TSEG1 = PROP_SEG + PHASE_SEG1 and TSEG2 = PHASE_SEG2 */
/* Sample Point = (1 + TSEG1) / (1 + TSEG1 + TSEG2) * 100 */
UINT8 CAN_PRESCALE = 2;			/* Prescaler value 	*/
UINT8 CAN_TSEG1 = 9;			/* Time Segment 1 	*/
UINT8 CAN_TSEG2 = 6;			/* Time Segment 2 	*/
/* Default Setting value :
 * CAN_BAUDRATE = (4Mhz/2)/(1+9+6) = 2000kbps/16 = 125kbps
 * Sample Point = (1+9) / (1+9+6) * 100 = 9/16 * 100 = 62.5%
 */

/**********************************FlexRay*************************************/
/**********************************SPI*****************************************/
UINT8 SPI_BR_SPPR = 2;       	/* SPI Baud Rate Preselection Bits */
UINT8 SPI_BR_SPR = 2;       	/* SPI Baud Rate Selection Bits    */

/**********************************ADC*****************************************/
/* if BUS_CLOCK = 40Mhz, 625kHz <= ADC_CLOCK <= 20Mhz */
/* if BUS_CLOCK = 2Mhz,  31.250kHz <= ADC_CLOCK <= 1Mhz*/
UINT32 ADC_CLOCK = 1000000;		/* ADC Clock : 1Mhz */
UINT8 Adc_Channels[16] = {       /* Contents for the device control register */
0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
Adc_ResolutionType ADC_RESOLUTION = ADC_RES_8BIT;            /* ADC Resolution : 8 bit */
Adc_MethodType ADC_CONV_METHOD = ADC_INTERRUPT_METHOD;    /* ADC Interrupt Method */

/**********************************PWM*****************************************/
UINT16 PWM_PERIOD = 10000;      /* Initial PWM Period : 10000 */

/*##############################################################################
* Local variable area
##############################################################################*/

/*##############################################################################
* Local function declaration area
##############################################################################*/

/*##############################################################################
* Global function definition area
##############################################################################*/

/*##############################################################################
* Local function definition area
##############################################################################*/

