/**
 * @file communication_service.h

 * @section descr File description
 *
 * This file is for testing doxygen.
 *
 * @section Copyright Copyright
 *
 * <h2>Copyright (c)</h2> @b 2008 Electronics and @e Telecommunications Research Institute (ETRI) All Rights Reserved.
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
 * $System: QPLUS_AUTO.			$
 * $Block: OS/COM.  			$
 * $Module: COM Communication Service  @n	$
 * $Filename: communication_service.h	$
 * $Date: 2008.9.24 			$
 * $Rev: ver 1.2 			$
 * $Creator: Kim DongHyun	$
 * $Owner: Kim DongHyun 	$
 * $URL: www.etri.re.kr 	$
 *
 */

#ifndef COM_COMMUNICATION_SERVICE_H
#define COM_COMMUNICATION_SERVICE_H
#include "struct_type.h"
#include "com_msg_init.h"

#ifdef FEATURE_IPDU_PROC
#define STATE_BASE 0x0000

#if defined(FEATURE_CCC1)
#define STATE_INIT		(STATE_BASE		+ 0x0001)	/* 0x0001 */
#define STATE_IDLE		(STATE_INIT		+ 0x0001)	/* 0x0002 */
#define STATE_FIND		(STATE_IDLE		+ 0x0002)	/* 0x0004 */
#define STATE_EXIT		(STATE_IDLE		+ 0x0004)	/* 0x0008 */

#define STATE_READY		(STATE_EXIT		+ 0x0008)	/* 0x0010 */
#define STATE_NOREADY	(STATE_READY	+ 0x0010)	/* 0x0020 */
#define STATE_BUSY		(STATE_NOREADY	+ 0x0020)	/* 0x0040 */
#define STATE_COMPLETE	(STATE_BUSY		+ 0x0040)	/* 0x0080 */

#define STATE_SEND		(STATE_COMPLETE	+ 0x0080)	/* 0x0100 */
#define STATE_RECEIVE	(STATE_SEND		+ 0x0100)	/* 0x0200 */
#define STATE_SUCCESS	(STATE_RECEIVE	+ 0x0200)	/* 0x0400 */
#define STATE_FAILURE	(STATE_SUCCESS	+ 0x0400)	/* 0x0800 */

#define STATE_TEMP0		(STATE_FAILURE	+ 0x0800)	/* 0x1000 */
#define STATE_TEMP1		(STATE_TEMP0	+ 0x1000)	/* 0x2000 */
#define STATE_TEMP2		(STATE_TEMP1	+ 0x2000)	/* 0x4000 */
#define STATE_TEMP3		(STATE_TEMP2	+ 0x4000)	/* 0x8000 */
#elif defined(FEATURE_CCC0) /* External communication */
/* Basic IPDU */
#define STATE_IDLE		(STATE_BASE		+ 0x0001)	/* 0x0001 */
#define STATE_SEND		(STATE_IDLE		+ 0x0001)	/* 0x0002 */
#define STATE_RECEIVE	(STATE_SEND		+ 0x0002)	/* 0x0004 */
#define STATE_COMPLETE	(STATE_RECEIVE	+ 0x0004)	/* 0x0008 */
#define STATE_EXIT		(STATE_COMPLETE	+ 0x0008)	/* 0x0010 */
#endif /* FEATURE_CCC1 */
#endif /* FEATURE_IPDU_PROC */

/* Common COM API */
extern StatusType SendMessage(MessageIdentifier msgid, ApplicationDataRef data);
extern StatusType ReceiveMessage(MessageIdentifier msgid, ApplicationDataRef data);
/*--> ysjeong del*/
/* 
#ifdef FEATURE_COMSTATUS_INFO
#if (FEATURE_COMUSEGETSERVICEID==TRUE)
*/ 
/* <-- ysjeong del*/
#ifdef FEATURE_COMERRORHOOK
#ifdef FEATURE_COMUSEGETSERVICEID
extern COMServiceIdType COMErrorGetServiceId(void);
#endif	/*FEATURE_COMUSEGETSERVICEID*/
#endif	/*FEATURE_COMERRORHOOK*/
/*--> ysjeong del*/
/*#endif*/ /* FEATURE_COMUSEGETSERVICEID*/
/*#endif*/ /* FEATURE_COMSTATUS_INFO*/

/*<-- ysjeong del*/
#ifdef FEATURE_COMSTATUS_INFO
static msg_recv_func_ptr MatchRecvFuncPtr(SINT32 funcID, _Direction_Type type);
extern StatusType ChkMessageStatus(MessageIdentifier msgid);
extern StatusType GetMessageStatus(MessageIdentifier msgid);
#endif /* FEATURE_COMSTATUS_INFO */
#ifdef FEATURE_DYNAMIC_LENGTH_MESSAGES
#error code not present yet
extern StatusType SendDynamicMessage(
	MessageIdentifier msgid,
	ApplicationDataRef data,
	LengthRef lenref
);
extern StatusType ReceiveDynamicMessage(
	MessageIdentifier msgid, 
	ApplicationDataRef data,
	LengthRef* lenref
);
#endif /* FEATURE_DYNAMIC_LENGTH_MESSAGES */
#ifdef FEATURE_ZERO_LENGTH_MESSAGES
#error code not present yet
extern StatusType SendZeroMessage(MessageIdentifier);
#endif /* FEATURE_ZERO_LENGTH_MESSAGES */

/* Internal process functions ; External reference impossibility */

#endif /* COM_COMMUNICATION_SERVICE_H */

