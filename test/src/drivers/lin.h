/**
 * @file lin.h

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
 * $Module: LIN             $
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
#ifndef LIN_H
#define LIN_H

#include "drivers_cfg.h"

/*##############################################################################
* Constant area
##############################################################################*/
/* File version information */
#define LIN_MAJOR_VERSION  1
#define LIN_MINOR_VERSION  0
#define LIN_PATCH_VERSION  0

#ifdef MCUPKG_EP100
#define MAX_LIN       8             /* Max LIN channels */
#endif
#ifdef MCUPKG_F512
#define MAX_LIN       2             /* Max LIN channels */
#endif

#define MAX_DATA      8             /* Max bytes lin frame data */

/* SCI REGISTERS */
#define SCIBDH        0x00
#define SCIBDL        0x01
#define SCICR1        0x02
#define SCIASR1       0x00
#define SCIACR1       0x01
#define SCIACR2       0x02
#define SCICR2        0x03
#define SCISR1        0x04
#define SCISR2        0x05
#define SCIDRH        0x06
#define SCIDRL        0x07

/*##############################################################################
* Type area
##############################################################################*/
/* LIN CHANNEL */
typedef enum
{
#ifdef MCUPKG_EP100
    LIN_0 = 0,
    LIN_1,
    LIN_2,
    LIN_3,
    LIN_4,
    LIN_5,
    LIN_6,
    LIN_7
#endif /* MCUPKG_EP100 */
#ifdef MCUPKG_F512
    LIN_0 = 0,
    LIN_1
#endif /* MCUPKG_F512 */
} lin_ch;


typedef enum
{
    LIN_SLAVE = 0,
    LIN_MASTER
} lin_sync_type;

typedef enum
{
    IDLE,
   	_BREAK,
   	SYNCH,
   	PROTECTED_IDENTIFIER,
   	DATA_0,
   	DATA_1,
    DATA_2,
    DATA_3,
    DATA_4,
    DATA_5,
    DATA_6,
    DATA_7,
    CHECKSUM
} lin_state;

typedef struct
{
  UINT8 identifier;
  UINT8 data_field[MAX_DATA];
} message;

typedef struct
{
  UINT8 protected_id;
  UINT8 data[MAX_DATA];
  UINT8 check;
  lin_state state;
  UINT8 error;
} frame;

/*##############################################################################
* Global variable area
##############################################################################*/

/*##############################################################################
* Global function declaration area
##############################################################################*/
extern void Lin_Init(lin_ch lin_num, lin_sync_type master);
extern BOOL Lin_SendMsg(lin_ch lin_num, lin_sync_type master, BOOL send_data, message msg);
extern BOOL Lin_GetMsg(lin_ch lin_num, BOOL get_data, message *msg);
extern lin_state Lin_CheckState(lin_ch lin_num);
extern void Lin_SetCallback(lin_ch lin_num, void (*fptr)(void));

#endif /* LIN_H */
