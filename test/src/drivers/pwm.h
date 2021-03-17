/**
 * @file pwm.h

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
 * $Module: PWM             $
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
#ifndef PWM_H
#define PWM_H

#include "drivers_cfg.h"

/*##############################################################################
* Constant area
##############################################################################*/
/* File version information */
#define PWM_MAJOR_VERSION  1
#define PWM_MINOR_VERSION  0
#define PWM_PATCH_VERSION  0

#ifdef MCUPKG_EP100
#define MAX_PWM       8             /* Max PWM channels */
#endif
#ifdef MCUPKG_F512
#define MAX_PWM       6             /* Max PWM channels */
#endif

/**************** PWM memory map ***********************/
#define PWM_E                0x00      /* PWM Enable Register                 */
#define PWM_POL              0x01      /* PWM Polarity Register               */
#define PWM_CLK              0x02      /* PWM Clock Select Register           */
#define PWM_PRCLK            0x03      /* PWM Prescale Clock Select Register  */
#define PWM_CAE              0x04      /* PWM Center Align Enable Register    */
#define PWM_CTL              0x05      /* PWM Control Register                */
#define PWM_TST              0x06      /* Reserved Register                   */
#define PWM_PRSC             0x07      /* Reserved Register                   */
#define PWM_SCLA             0x08      /* PWM Scale A Register                */
#define PWM_SCLB             0x09      /* PWM Scale B Register                */
#define PWM_SCNTA            0x0A      /* Reserved Registers                  */
#define PWM_SCNTB            0x0B      /* Reserved Registers                  */
#define PWM_CNT0             0x0C      /* PWM Channel Counter 0 Registers     */
#define PWM_CNT1             0x0D      /* PWM Channel Counter 1 Registers     */
#define PWM_CNT2             0x0E      /* PWM Channel Counter 2 Registers     */
#define PWM_CNT3             0x0F      /* PWM Channel Counter 3 Registers     */
#define PWM_CNT4             0x10      /* PWM Channel Counter 4 Registers     */
#define PWM_CNT5             0x11      /* PWM Channel Counter 5 Registers     */
#define PWM_CNT6             0x12      /* PWM Channel Counter 6 Registers     */
#define PWM_CNT7             0x13      /* PWM Channel Counter 7 Registers     */
#define PWM_PER0             0x14      /* PWM Channel Period 0 Registers      */
#define PWM_PER1             0x15      /* PWM Channel Period 1 Registers      */
#define PWM_PER2             0x16      /* PWM Channel Period 2 Registers      */
#define PWM_PER3             0x17      /* PWM Channel Period 3 Registers      */
#define PWM_PER4             0x18      /* PWM Channel Period 4 Registers      */
#define PWM_PER5             0x19      /* PWM Channel Period 5 Registers      */
#define PWM_PER6             0x1A      /* PWM Channel Period 6 Registers      */
#define PWM_PER7             0x1B      /* PWM Channel Period 7 Registers      */
#define PWM_DTY0             0x1C      /* PWM Channel Duty 0 Registers        */
#define PWM_DTY1             0x1D      /* PWM Channel Duty 1 Registers        */
#define PWM_DTY2             0x1E      /* PWM Channel Duty 2 Registers        */
#define PWM_DTY3             0x1F      /* PWM Channel Duty 3 Registers        */
#define PWM_DTY4             0x20      /* PWM Channel Duty 4 Registers        */
#define PWM_DTY5             0x21      /* PWM Channel Duty 5 Registers        */
#define PWM_DTY6             0x22      /* PWM Channel Duty 6 Registers        */
#define PWM_DTY7             0x23      /* PWM Channel Duty 7 Registers        */
#define PWM_SDN              0x24      /* PWM Shutdown Register               */

/**************** PMF memory map ***********************/
#define PMF_CFG0             0x00      /* PMF Configure 0 Register            */
#define PMF_CFG1             0x01      /* PMF Configure 1 Register            */
#define PMF_CFG2             0x02      /* PMF Configure 2 Register            */
#define PMF_CFG3             0x03      /* PMF Configure 3 Register            */
#define PMF_FCTL             0x04      /* PMF Fault Control Register          */
#define PMF_FPIN             0x05      /* PMF Fault Pin Enable Register       */
#define PMF_FSTA             0x06      /* PMF Fault Status Register           */
#define PMF_QSMP             0x07      /* PMF Fault Qualifying Samples        */
#define PMF_DMPA             0x08      /* PMF Disable Mapping A Registers     */
#define PMF_DMPB             0x09      /* PMF Disable Mapping B Registers     */
#define PMF_DMPC             0x0A      /* PMF Disable Mapping C Registers     */
#define PMF_OUTC             0x0C      /* PMF Output Control Register         */
#define PMF_OUTB             0x0D      /* PMF Output Control Bit Register     */
#define PMF_DTMS             0x0E      /* PMF Deadtime Sample Register        */
#define PMF_CCTL             0x0F      /* PMF Correction Control Register     */
#define PMF_VAL0             0x10      /* PMF Value 0 Register                */
#define PMF_VAL1             0x12      /* PMF Value 1 Register                */
#define PMF_VAL2             0x14      /* PMF Value 2 Register                */
#define PMF_VAL3             0x16      /* PMF Value 3 Register                */
#define PMF_VAL4             0x18      /* PMF Value 4 Register                */
#define PMF_VAL5             0x1A      /* PMF Value 5 Register                */

#define PMF_ENCA             0x20      /* PMF Enable Control A Register       */
#define PMF_FQCA             0x21      /* PMF Frequency Control A Register    */
#define PMF_CNTA             0x22      /* PMF Counter A Register              */
#define PMF_MODA             0x24      /* PMF Counter Modulo A Register       */
#define PMF_DTMA             0x26      /* PMF Deadtime A Register             */

#define PMF_ENCB             0x28      /* PMF Enable Control B Register       */
#define PMF_FQCB             0x29      /* PMF Frequency Control B Register    */
#define PMF_CNTB             0x2A      /* PMF Counter B Register              */
#define PMF_MODB             0x2C      /* PMF Counter Modulo B Register       */
#define PMF_DTMB             0x2E      /* PMF Deadtime B Register             */

#define PMF_ENCC             0x30      /* PMF Enable Control C Register       */
#define PMF_FQCC             0x31      /* PMF Frequency Control C Register    */
#define PMF_CNTC             0x32      /* PMF Counter C Register              */
#define PMF_MODC             0x34      /* PMF Counter Modulo C Register       */
#define PMF_DTMC             0x36      /* PMF Deadtime C Register             */

/*##############################################################################
* Type area
##############################################################################*/
typedef enum
{
    PWM_0 = 0,
    PWM_1,
    PWM_2,
    PWM_3,
    PWM_4,
    PWM_5,
    PWM_6,
    PWM_7
} pwm_ch;

/*##############################################################################
* Global variable area
##############################################################################*/

/*##############################################################################
* Global function declaration area
##############################################################################*/
extern void Pwm_Init(pwm_ch pwm_num);
extern void Pwm_SetDutyCycle(pwm_ch pwm_num, UINT16 DutyCycle);
extern void Pwm_SetPeriodAndDuty(pwm_ch pwm_num,UINT16 Period,UINT16 DutyCycle);
extern void Pwm_Enable(pwm_ch pwm_num);
extern void Pwm_Disable(pwm_ch pwm_num);

#endif /* PWM_H */
