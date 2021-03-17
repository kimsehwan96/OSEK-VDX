/**
 * @file rit.h

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
 * $Module: RTI             $
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
#ifndef RTI_H
#define RTI_H

#include "drivers_cfg.h"

/*##############################################################################
* Constant area
##############################################################################*/
/* File version information */
#define RTI_SW_MAJOR_VERSION  1
#define RTI_SW_MINOR_VERSION  0
#define RTI_SW_PATCH_VERSION  0

/*##############################################################################
* Type area
##############################################################################*/
typedef enum
{
    PERIOD_5MS = 0,
    PERIOD_10MS,
    PERIOD_15MS,
    PERIOD_20MS,
    PERIOD_25MS,
    PERIOD_30MS,
    PERIOD_35MS,
    PERIOD_40MS,
    PERIOD_45MS,
    PERIOD_50MS,
    PERIOD_55MS,
    PERIOD_60MS,
    PERIOD_65MS,
    PERIOD_70MS,
    PERIOD_75MS,
    PERIOD_80MS,
    PERIOD_1MS,
    PERIOD_3MS
} PeriodType;

/*##############################################################################
* Global variable area
##############################################################################*/

/*##############################################################################
* Global function declaration area
##############################################################################*/
extern void Rti_Init(void);
extern void Rti_Enable(void);
extern void Rti_Disable(void);
extern void Rti_Program(PeriodType period);
extern void Rti_SetCallback(void (*fptr)(void));

#endif /* RTI_H */

