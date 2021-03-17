/**
 * @file can.h

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
 * $Module: CAN             $
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
#ifndef CAN_H
#define CAN_H

#include "drivers_cfg.h"

/*##############################################################################
* Constant area
##############################################################################*/
/* File version information */
#define CAN_MAJOR_VERSION  1
#define CAN_MINOR_VERSION  0
#define CAN_PATCH_VERSION  0

#ifdef MCUPKG_EP100
#define MAX_CAN       5             /* Max CAN channels */
#endif
#ifdef MCUPKG_F512
#define MAX_CAN       1             /* Max CAN channels */
#endif

#define CAN_MAX_DATA_LEN 8


/* Extended message ID identifier.  This constant can be used to specify an extended message ID
 * anywhere the message ID is required.
 */
#define CAN_EXTENDED_FRAME_ID           0x80000000UL       /* Extended message ID identifier */


/**************** MSCAN memory map ***********************/
#define CAN_CTL0	         0x00            /* MSCAN Control 0               */
#define CAN_CTL1             0x01            /* MSCAN Control 1               */
#define CAN_BTR0             0x02            /* MSCAN Bus Timing 0            */
#define CAN_BTR1             0x03            /* MSCAN Bus Timing 1            */
#define CAN_RFLG             0x04            /* MSCAN Receiver Flag           */
#define CAN_RIER             0x05            /* MSCAN Receiver Interrupt Enable */
#define CAN_TFLG             0x06            /* MSCAN Transmitter Flag        */
#define CAN_TIER             0x07            /* MSCAN Transmitter Interrupt   */
#define CAN_TARQ             0x08            /* MSCAN Transmitter Message Abort Request */
#define CAN_TAAK             0x09            /* MSCAN Transmitter Message Abort Acknowledge */
#define CAN_TBSEL            0x0A            /* MSCAN Transmit Buffer Selection     */
#define CAN_IDAC             0x0B            /* MSCAN Identifier Acceptance Control */
#define CAN_MISC             0x0D            /* MSCAN Miscellaneous           */
#define CAN_RXERR            0x0E            /* MSCAN Receive Error Counter   */
#define CAN_TXERR            0x0F            /* MSCAN Transmit Error Counter  */
#define CAN_IDAR0            0x10            /* MSCAN Identifier Acceptance 0 */
#define CAN_IDAR1            0x11            /* MSCAN Identifier Acceptance 1 */
#define CAN_IDAR2            0x12            /* MSCAN Identifier Acceptance 2 */
#define CAN_IDAR3            0x13            /* MSCAN Identifier Acceptance 3 */
#define CAN_IDMR0            0x14            /* MSCAN Identifier Mask 0       */
#define CAN_IDMR1            0x15            /* MSCAN Identifier Mask 1       */
#define CAN_IDMR2            0x16            /* MSCAN Identifier Mask 2       */
#define CAN_IDMR3            0x17            /* MSCAN Identifier Mask 3       */
#define CAN_IDAR4            0x18            /* MSCAN Identifier Acceptance 4 */
#define CAN_IDAR5            0x19            /* MSCAN Identifier Acceptance 5 */
#define CAN_IDAR6            0x1A            /* MSCAN Identifier Acceptance 6 */
#define CAN_IDAR7            0x1B            /* MSCAN Identifier Acceptance 7 */
#define CAN_IDMR4            0x1C            /* MSCAN Identifier Mask 4       */
#define CAN_IDMR5            0x1D            /* MSCAN Identifier Mask 5       */
#define CAN_IDMR6            0x1E            /* MSCAN Identifier Mask 6       */
#define CAN_IDMR7            0x1F            /* MSCAN Identifier Mask 7       */
#define CAN_RXIDR0           0x20            /* MSCAN RX Identifier 0         */
#define CAN_RXIDR1           0x21            /* MSCAN RX Identifier 1         */
#define CAN_RXIDR2           0x22            /* MSCAN RX Identifier 2         */
#define CAN_RXIDR3           0x23            /* MSCAN RX Identifier 3         */
#define CAN_RXDSR0           0x24            /* MSCAN RX Data Segment 0       */
#define CAN_RXDSR1           0x25            /* MSCAN RX Data Segment 1       */
#define CAN_RXDSR2           0x26            /* MSCAN RX Data Segment 2       */
#define CAN_RXDSR3           0x27            /* MSCAN RX Data Segment 3       */
#define CAN_RXDSR4           0x28            /* MSCAN RX Data Segment 4       */
#define CAN_RXDSR5           0x29            /* MSCAN RX Data Segment 5       */
#define CAN_RXDSR6           0x2A            /* MSCAN RX Data Segment 6       */
#define CAN_RXDSR7           0x2B            /* MSCAN RX Data Segment 7       */
#define CAN_RXDLR            0x2C            /* MSCAN RX Data Length          */
#define CAN_RXTSRH           0x2E            /* MSCAN RX Time Stamp High      */
#define CAN_RXTSRL           0x2F            /* MSCAN RX Time Stamp Low       */
#define CAN_TXIDR0           0x30            /* MSCAN TX Identifier 0         */
#define CAN_TXIDR1           0x31            /* MSCAN TX Identifier 0         */
#define CAN_TXIDR2           0x32            /* MSCAN TX Identifier 0         */
#define CAN_TXIDR3           0x33            /* MSCAN TX Identifier 0         */
#define CAN_TXDSR0           0x34            /* MSCAN TX Data Segment 0       */
#define CAN_TXDSR1           0x35            /* MSCAN TX Data Segment 0       */
#define CAN_TXDSR2           0x36            /* MSCAN TX Data Segment 0       */
#define CAN_TXDSR3           0x37            /* MSCAN TX Data Segment 0       */
#define CAN_TXDSR4           0x38            /* MSCAN TX Data Segment 0       */
#define CAN_TXDSR5           0x39            /* MSCAN TX Data Segment 0       */
#define CAN_TXDSR6           0x3A            /* MSCAN TX Data Segment 0       */
#define CAN_TXDSR7           0x3B            /* MSCAN TX Data Segment 0       */
#define CAN_TXDLR            0x3C            /* MSCAN TX Data Length          */
#define CAN_TXTBPR           0x3D            /* MSCAN TX Buffer Priority      */
#define CAN_TXTSRH           0x3E            /* MSCAN TX Time Stamp High      */
#define CAN_TXTSRL           0x3F            /* MSCAN TX Time Stamp Low       */

/*##############################################################################
* Type area
##############################################################################*/
typedef enum
{
#ifdef MCUPKG_EP100
    CAN_0 = 0,
    CAN_1,
    CAN_2,
    CAN_3,
    CAN_4
#endif /* MCUPKG_EP100 */
#ifdef MCUPKG_F512
    CAN_0 = 0
#endif /* MCUPKG_F512 */
} can_ch;

/* Message filterring */
typedef enum
{
    TWO_32_FILTERS = 0,
    FOUR_16_FILTERS,
    EIGHT_8_FILTERS,
    FILTER_CLOSED
} filter_type;

/* Frame formats */
typedef enum
{
    STANDARD_FORMAT = 0,
    EXTENDED_FORMAT
} frame_format_type;

/* Frame types   */
typedef enum
{
    DATA_FRAME = 0,
    REMOTE_FRAME
} frame_type;

/* Message buffer structure */
typedef struct
{
    UINT8 IDR0;
    UINT8 IDR1;
    UINT8 IDR2;
    UINT8 IDR3;
    UINT8 Data[CAN_MAX_DATA_LEN];
    UINT8 DLR;
    UINT8 TBPR;
    UINT8 Reserved;
    UINT8 Reserved2;
}TMsgBuff;

typedef struct
{
    UINT8 b0;
    UINT8 b1;
    UINT8 b2;
    UINT8 b3;
} DwordSwap;

struct can_msg
{
    UINT16 id;
    BOOL RTR;
    UINT8 data[8];
    UINT8 len;
    UINT8 prty;
};

/*##############################################################################
* Global variable area
##############################################################################*/

/*##############################################################################
* Global function declaration area
##############################################################################*/
extern void Can_Init(can_ch can_num);
extern UINT8 Can_SendFrame(can_ch can_num, UINT8 BufferNum,UINT32 MessageID,frame_type FrameType,UINT8 Length,UINT8 *Data);
extern UINT8 Can_SendFrameExt(can_ch can_num, UINT32 MessageID, frame_type FrameType, UINT8 Length, UINT8 *Data);
extern UINT8 Can_ReadFrame(can_ch can_num, UINT32 *MessageID,frame_type *FrameType,frame_format_type *FrameFormat,UINT8 *Length,UINT8 *Data);
extern UINT8 Can_GetStateRX(can_ch can_num);
extern void Can_SetAcceptanceCode(can_ch can_num, UINT32 AccCode1, UINT32 AccCode2);
extern void Can_SetAcceptanceMask(can_ch can_num, UINT32 AccMask1, UINT32 AccMask2);
extern void Can_SetCallback(can_ch can_num, void (*fptr)(void));

#endif /* CAN_H */
