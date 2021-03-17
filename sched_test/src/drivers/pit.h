/**
 * @file pit.h

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
 * $Module: PIT             $
 * $Date: 2009.4.16         $
 * $Rev: ver 1.0.0          $
 * $Creator: Choi, Gwang Ho $
 * $Owner: Choi, Gwang Ho   $
 * $URL: www.etri.re.kr     $
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
#ifndef PIT_H
#define PIT_H

#include "drivers_cfg.h"

/*##############################################################################
* Constant area
##############################################################################*/
/* File version information */
#define PIT_MAJOR_VERSION  1
#define PIT_MINOR_VERSION  0
#define PIT_PATCH_VERSION  0

#define MAX_PIT     8

#define PITTF_PTF0          0x01
#define PITTF_PTF1          0x02
#define PITTF_PTF2          0x04
#define PITTF_PTF3          0x08
#define PITTF_PTF4          0x10
#define PITTF_PTF5          0x20
#define PITTF_PTF6          0x40
#define PITTF_PTF7          0x80

/*##############################################################################
* Type area
##############################################################################*/
typedef enum
{
    PIT_0 = 0,
    PIT_1,
    PIT_2,
    PIT_3,
    PIT_4,
    PIT_5,
    PIT_6,
    PIT_7
} pit_ch ;

/*##############################################################################
* Global variable area
##############################################################################*/

/*##############################################################################
* Global function declaration area
##############################################################################*/
extern void Pit_Init   (void);
extern void Pit_Enable (pit_ch ch);
extern void Pit_EnableAll(void);
extern void Pit_Disable(pit_ch ch);
extern void Pit_DisableAll(void);
extern void Pit_Save(void);
extern void Pit_Load(void);
extern void Pit_Program(pit_ch ch, UINT16 ms_time);
extern UINT8 Pit_SetPeriodUS(pit_ch ch, UINT16 us_time);
extern UINT8 Pit_SetPeriodMS(pit_ch ch, UINT8 ms_time);
extern void Pit_SetCallback(pit_ch ch, void (*fptr)(void));
extern pit_ch Pit_GetCurrTimer(void);

#endif /* GPT_H */
