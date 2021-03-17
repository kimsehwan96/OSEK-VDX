/**
 * @file fr_cfg.h

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
 * $Module: FR              $
 * $Date: 2009.4.16         $
 * $Rev: ver 1.0.0          $
 * $Creator: Choi, Gwang Ho $
 * $Owner: Choi, Gwang Ho   $
 * $URL: www.etri.re.kr     $
 *
 */

/*******************************************************************************
* Revision history
-----------------------------------------------------------------------------
   Date       Rev.    Author  Description
----------   -------  ------  -----------------------------------------------
2009-04-16   V1.0.0    CGH     Initial version

********************************************************************************/

#ifndef FR_CFG_H
#define FR_CFG_H
#ifdef MCUPKG_F512
/******************************************************************************
* Includes
******************************************************************************/
#include "fr_types.h"

/******************************************************************************
* Constants
******************************************************************************/

/* The host can optimize the driver memory consumption by passing the number of the highest */
/* used transmit or receive message buffer index (not shadow and FIFO) - configured */
/* in the instance of the Fr_buffer_info_type structure */
/* Note - it is not necessary to define the FR_NUMBER_TXRX_MB parameter for correct driver operation */
#define FR_NUMBER_TXRX_MB 5     /* The driver will allocate only limited number of elements in an internal array */

/******************************************************************************
* Global variables
******************************************************************************/
extern const Fr_low_level_config_type Fr_low_level_cfg_set_00;
extern const Fr_HW_config_type Fr_HW_cfg_00;
extern const Fr_buffer_info_type Fr_buffer_cfg_00[4];
extern const UINT8 Fr_buffer_cfg_set_00[5];
extern const Fr_timer_config_type * Fr_timers_cfg_00_ptr[2];
extern const Fr_slot_status_config_type Fr_slot_status_cfg_set_00;

#endif /* MCUPKG_F512 */
#endif /* FR_CFG_H */




