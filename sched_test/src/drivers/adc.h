/**
 * @file adc.h

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
 * $Module: ADC             $
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
#ifndef ADC_H
#define ADC_H

#include "drivers_cfg.h"

/*##############################################################################
* Constant area
##############################################################################*/
/* File version information */
#define ADC_MAJOR_VERSION  1
#define ADC_MINOR_VERSION  0
#define ADC_PATCH_VERSION  0

#define ADC_INTERRUPT

#ifdef MCUPKG_EP100
#define MAX_ADC       2            /* Max ADC channels */
#endif /* MCUPKG_EP100 */
#ifdef MCUPKG_F512
#define MAX_ADC       1            /* Max ADC channels */
#endif /* MCUPKG_F512 */

/**************** MSCAN memory map ***********************/
#define ATD_CTL0	         0x00            /* ATD Control 0                */
#define ATD_CTL1             0x01            /* ATD Control 1                */
#define ATD_CTL2             0x02            /* ATD Control 2                */
#define ATD_CTL3             0x03            /* ATD Control 3                */
#define ATD_CTL4             0x04            /* ATD Control 4                */
#define ATD_CTL5             0x05            /* ATD Control 5                */
#define ATD_STAT0            0x06            /* ATD Status 0                 */
#define ATD_CMPEH            0x08            /* ATD Compare Enable High      */
#define ATD_CMPEL            0x09            /* ATD Compare Enable Low       */
#define ATD_STAT2H           0x0A            /* ATD Status 2 High            */
#define ATD_STAT2L           0x0B            /* ATD Status 2 Low             */
#define ATD_DIENH            0x0C            /* ATD Input Enable High        */
#define ATD_DIENL            0x0D            /* ATD Input Enable Low         */
#define ATD_CMPHTH           0x0E            /* ATD Compare Higher Than High */
#define ATD_CMPHTL           0x0F            /* ATD Compare Higher Than Low  */
#define ATD_DR0              0x10            /* ATD Conversion Result 0      */
#define ATD_DR1              0x12            /* ATD Conversion Result 1      */
#define ATD_DR2              0x14            /* ATD Conversion Result 2      */
#define ATD_DR3              0x16            /* ATD Conversion Result 3      */
#define ATD_DR4              0x18            /* ATD Conversion Result 4      */
#define ATD_DR5              0x1A            /* ATD Conversion Result 5      */
#define ATD_DR6              0x1C            /* ATD Conversion Result 6      */
#define ATD_DR7              0x1E            /* ATD Conversion Result 7      */
#define ATD_DR8              0x20            /* ATD Conversion Result 8      */
#define ATD_DR9              0x22            /* ATD Conversion Result 9      */
#define ATD_DR10             0x24            /* ATD Conversion Result 10     */
#define ATD_DR11             0x26            /* ATD Conversion Result 11     */
#define ATD_DR12             0x28            /* ATD Conversion Result 12     */
#define ATD_DR13             0x2A            /* ATD Conversion Result 13     */
#define ATD_DR14             0x2C            /* ATD Conversion Result 14     */
#define ATD_DR15             0x2E            /* ATD Conversion Result 15     */

/*##############################################################################
* Type area
##############################################################################*/
/* ADC Channel */
typedef enum
{
    ADC_0 = 0,
    ADC_1
} adc_ch;

/* ADC Channel */
typedef enum
{
    ADC_CH0 = 0,
    ADC_CH1,
    ADC_CH2,
    ADC_CH3,
    ADC_CH4,
    ADC_CH5,
    ADC_CH6,
    ADC_CH7,
    ADC_CH8,
    ADC_CH9,
    ADC_CH10,
    ADC_CH11,
    ADC_CH12,
    ADC_CH13,
    ADC_CH14,
    ADC_CH15
} Adc_ChannelType;

typedef enum
{
    ADC_IDLE = 0,
    ADC_BUSY,
    ADC_COMPLETED,
    ADC_STREAM_COMPLETED
} Adc_StatusType;


/*##############################################################################
* Global variable area
##############################################################################*/

/*##############################################################################
* Global function declaration area
##############################################################################*/
extern void Adc_Init(adc_ch adc_num);
extern UINT8 Adc_Measure(adc_ch adc_num, BOOL WaitForResult);
extern UINT8 Adc_GetValue(adc_ch adc_num, UINT16 *Values);
extern void Adc_SetCallback(adc_ch adc_num, void (*fptr)(void));

#endif /* ADC_H */
