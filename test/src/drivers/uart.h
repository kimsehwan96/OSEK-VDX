/**
 * @file uart.h

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
 * $Module: UART            $
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
#ifndef UART_H
#define UART_H

#include "drivers_cfg.h"

/*##############################################################################
* Constant area
##############################################################################*/
/* File version information */
#define UART_MAJOR_VERSION  1
#define UART_MINOR_VERSION  0
#define UART_PATCH_VERSION  0

#ifdef MCUPKG_EP100
#define MAX_UART      8             /* Max UART channels */
#endif
#ifdef MCUPKG_F512
#define MAX_UART      2             /* Max UART channels */
#endif

#define UART_PARITY_NONE    0
#define UART_PARITY_ODD     1
#define UART_PARITY_EVEN    2

/*##############################################################################
* Type area
##############################################################################*/
/* SCI CHANNEL */
typedef enum
{
#ifdef MCUPKG_EP100
    SCI_0 = 0,
    SCI_1,
    SCI_2,
    SCI_3,
    SCI_4,
    SCI_5,
    SCI_6,
    SCI_7
#endif /* MCUPKG_EP100 */
#ifdef MCUPKG_F512
    SCI_0 = 0,
    SCI_1
#endif /* MCUPKG_F512 */
} sci_ch;

typedef enum
{
	UART_OVERRUN = 0,
	UART_COMMON,
	UART_CHAR_IN_RX,
	UART_FULL_TX
} Uart_StatusType;

typedef enum
{
    UART_TX_INSTANT = 0,
    UART_TX_BUFFERED
} Uart_TxModeType;

/*##############################################################################
* Global variable area
##############################################################################*/

/*##############################################################################
* Global function declaration area
##############################################################################*/
extern void Uart_Init(sci_ch sci_num);
extern void Uart_SendChar(sci_ch sci_num, UINT8 Chr);
extern UINT8 Uart_SendChar_Mode(sci_ch sci_num, UINT8 Chr, Uart_TxModeType mode);
extern UINT8 Uart_RecvChar(sci_ch sci_num, UINT8 *Chr);
extern void Uart_DecTran(sci_ch sci_num, UINT16 data);
extern void Uart_HexTran(sci_ch sci_num, UINT16 data);
extern void Uart_String(sci_ch sci_num, UINT8 *string);
extern void Uart_SetCallback(sci_ch sci_num, void (*fptr)(void));
extern UINT8 Uart_CfgPort(sci_ch sci_num, UINT32 baud,UINT8 bits,UINT8 parity);

#endif /* UART_H */
