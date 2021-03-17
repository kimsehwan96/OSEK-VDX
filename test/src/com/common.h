/**
 * @file common.h

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
 * $System: QPLUS_AUTO.            $
 * $Block: OS/COM.              $
 * $Module: COM Definition  @n    $
 * $Filename: common.h    $
 * $Date: 2008.9.8             $
 * $Rev: ver 1.2             $
 * $Creator: Kim DongHyun    $
 * $Owner: Kim DongHyun     $
 * $URL: www.etri.re.kr     $
 *
 */

#ifndef HEADER_COM_COMMON
#define HEADER_COM_COMMON

#include "osek_os_types.h"

#if 0 /* Platform dependency */
#error deny access
#else
/* CPU, H/W type dependence */
#define FIX_MEMORY const
#define ACCESS_MEMORY volatile
#define FAST_MEMORY register

/* Value define */
/* #define false	0 */
/* #define true	(!false) */
/* 081117 ljw: conflict*/

#if 0 /*for compile */
#ifndef bool_typedef
    #define bool_typedef
    typedef unsigned char bool ;
    /*#define true ((bool)1)*/
    /*#define false ((bool)0)*/
#endif
#endif

/*#ifndef FALSE*/
/*#define FALSE	false*/
/*#endif*/
/*#ifndef TRUE*/
/*#define TRUE	true*/
/*#endif*/
/* 081117 ljw: conflict*/

#if defined(__HCS12X__)
#define FEATURE_NOT_SUPPORT_64BIT
#endif

/* Developer define */
#define DEVELOP_MODE

#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else /* __cplusplus */
#define NULL    ((void *)0)
#endif /* __cplusplus */
#endif /* NULL */

#endif

#ifndef BYTE
typedef UINT8 BYTE;
#endif

/*  CATATYPE*/   /*ysjeong del */ 
/*
#define	CHARTYPE		0x01
#define	SHORTTYPE		0x02
#define	LONGTYPE		0x03
#define	LONGLONGTYPE	0x04
*/
/* Message ID Index ; ID is started from 1 */
/*#define IdxMsgId(ID) ((ID) - 0x01)*/ /*ysjeong del*/

/* required OIL definition */

/*#define MAX_ID_COUNT	IdxMsgId(MSG_ID_MAX)*/  /*ysjeong del*/

/*#include "oil_config.h"*/

#define BITSPERBYTE 8

#define COM_BIT64	64
#define COM_BIT32	32
#define COM_BIT16	16
#define COM_BIT8	8

/* CCCA:
	Unqueued messages, Notification Class 1
*/
#define FEATURE_CCCA

/* CCCB:
	Unqueued messages, Notification Class 1, Queued messages, Message status information
*/
#define FEATURE_CCCB

/* CCC0:
	Unqueued messages, 	Notification Class 1, External communication, Triggered Transfer Property
	Notification Class 2, Byte order conversion, Direct Transmission Mode
*/

/*#define FEATURE_CCC0*/

/* CCC1:
	Filtering, Pending Transfer Property, Zero-length messages, Dynamic-length messages
	Periodic Transmission Mode, Mixed Transmission Mode, Minimum delay time
	Deadline Monitoring, Notification Class 3, Notification Class 4, Callouts
*/
/*#define FEATURE_CCC1*/

/*typedef UINT8 TaskType;*/ /* I am temporary */ /*ysjeong*/
/*typedef UINT64 EventMaskType;*/ /* I am temporary */ /*ysjeong*/

#define MAX_BYTE_IPDU_SEND	128  /*temporary for compile*/

#define MAX_BYTE_IPDU_RECV		128 /*temporary for compile*/

typedef UINT16 MessageIdentifier; /* OIL Limited Range */
/*typedef SINT8 MessageIdentifier; */ /* OIL Limited Range */
typedef SINT16 COMApplicationModeType; /* OIL Limited Range */
typedef UINT32 COMShutdownModeType; /* OIL Limited Range */
typedef UINT32 COMLengthType; /* OIL Limited Range */
typedef UINT32 LengthRef; /* OIL Limited Range */

/*--> ysjeong del */
/*
#if (CATATYPE==LONGLONGTYPE)
typedef UINT64 * ApplicationDataRef;
#elif (CATATYPE==LONGTYPE)
typedef UINT32 * ApplicationDataRef;
#elif (CATATYPE==SHORTTYPE)
typedef UINT16 * ApplicationDataRef;
#elif (CATATYPE==CHARTYPE)
typedef UINT8 * ApplicationDataRef;
#else 
#error code not present yet
#endif
*/ 
/*<-- ysjeong del */
typedef void* ApplicationDataRef;

/*--> ysjeong del*/
/*
#if (CATATYPE==LONGLONGTYPE)
typedef UINT64 ApplicationData;
#elif (CATATYPE==LONGTYPE)
typedef UINT32 ApplicationData;
#elif (CATATYPE==SHORTTYPE)
typedef UINT16 ApplicationData;
#elif (CATATYPE==CHARTYPE)
typedef UINT8 ApplicationData;
#else 
#error code not present yet
#endif
*/ 
/*<-- ysjeong del*/

 /*
#if (CATATYPE==LONGLONGTYPE)
#define RETPTR (UINT64 *)
#elif (CATATYPE==LONGTYPE)
#define RETPTR (UINT32 *)
#elif (CATATYPE==SHORTTYPE)
#define RETPTR (UINT16 *)
#elif (CATATYPE==CHARTYPE)
#define RETPTR (UINT8 *)
#else
#error code not present yet
#endif 
*/
#define RETPTR (void *)

/* Internal features */
/*#define FEATURE_STATUSTYPE_ENUM*/

#if defined(FEATURE_CCCA)
#ifndef FEATURE_UNQUEUED
#define FEATURE_UNQUEUED
#endif /* FEATURE_UNQUEUED */        

#ifndef FEATURE_NOTIFY_C1
#define FEATURE_NOTIFY_C1
#endif /* FEATURE_NOTIFY_C1 */
#endif /* FEATURE_CCCA */

#if defined(FEATURE_CCCB)
#ifndef FEATURE_UNQUEUED
#define FEATURE_UNQUEUED
#endif /* FEATURE_UNQUEUED */

#ifndef FEATURE_NOTIFY_C1
#define FEATURE_NOTIFY_C1
#endif /* FEATURE_NOTIFY_C1 */

#ifndef FEATURE_QUEUED
#define FEATURE_QUEUED
#endif /* FEATURE_QUEUED */

#ifndef FEATURE_COMSTATUS_INFO
#define FEATURE_COMSTATUS_INFO
#endif /* FEATURE_COMSTATUS_INFO */
#endif /* FEATURE_CCCB */

#if defined(FEATURE_CCC0)
#ifndef FEATURE_UNQUEUED
#define FEATURE_UNQUEUED
#endif /* FEATURE_UNQUEUED */

#ifndef FEATURE_NOTIFY_C1
#define FEATURE_NOTIFY_C1
#endif /* FEATURE_NOTIFY_C1 */

#ifndef FEATURE_EXTERNAL
#define FEATURE_EXTERNAL
#endif /* FEATURE_EXTERNAL */

#ifndef FEAT_TRIGERED_TRANS_PROPERTY
#define FEAT_TRIGERED_TRANS_PROPERTY
#endif /* FEAT_TRIGERED_TRANS_PROPERTY */

#ifndef FEATURE_NOTIFY_C2
#define FEATURE_NOTIFY_C2
#endif /* FEATURE_NOTIFY_C2 */

#ifndef FEATURE_BYTEORDER
#define FEATURE_BYTEORDER
#endif /* FEATURE_BYTEORDER */

#ifndef FEAT_DIRECT_TRANS_MODE
#define FEAT_DIRECT_TRANS_MODE
#endif /* FEAT_DIRECT_TRANS_MODE */
#endif /* FEATURE_CCC0 */

#if defined(FEATURE_CCC1)
#ifndef FEATURE_UNQUEUED
#define FEATURE_UNQUEUED
#endif /* FEATURE_UNQUEUED */

#ifndef FEATURE_NOTIFY_C1
#define FEATURE_NOTIFY_C1
#endif /* FEATURE_NOTIFY_C1 */

#ifndef FEATURE_QUEUED
#define FEATURE_QUEUED
#endif /* FEATURE_QUEUED */

#ifndef FEATURE_COMSTATUS_INFO
#define FEATURE_COMSTATUS_INFO
#endif /* FEATURE_COMSTATUS_INFO */

#ifndef FEATURE_EXTERNAL
#define FEATURE_EXTERNAL
#endif /* FEATURE_EXTERNAL */

#ifndef FEAT_TRIGERED_TRANS_PROPERTY
#define FEAT_TRIGERED_TRANS_PROPERTY
#endif /* FEAT_TRIGERED_TRANS_PROPERTY */

#ifndef FEATURE_NOTIFY_C2
#define FEATURE_NOTIFY_C2
#endif /* FEATURE_NOTIFY_C2 */

#ifndef FEATURE_BYTEORDER
#define FEATURE_BYTEORDER
#endif /* FEATURE_BYTEORDER */

#ifndef FEAT_DIRECT_TRANS_MODE
#define FEAT_DIRECT_TRANS_MODE
#endif /* FEAT_DIRECT_TRANS_MODE */

#ifndef FEATURE_FILTERING
#define FEATURE_FILTERING
#endif /* FEATURE_FILTERING */

#ifndef FEAT_PENDING_TRANS_PROPERTY
#define FEAT_PENDING_TRANS_PROPERTY
#endif /* FEAT_PENDING_TRANS_PROPERTY */

#ifndef FEATURE_ZERO_LENGTH_MESSAGES
#define FEATURE_ZERO_LENGTH_MESSAGES
#endif /* FEATURE_ZERO_LENGTH_MESSAGES */

#ifndef FEATURE_DYNAMIC_LENGTH_MESSAGES
#define FEATURE_DYNAMIC_LENGTH_MESSAGES
#endif /* FEATURE_DYNAMIC_LENGTH_MESSAGES */

#ifndef FEATURE_PERIODIC_TRANS_MODE
#define FEATURE_PERIODIC_TRANS_MODE
#endif /* FEATURE_PERIODIC_TRANS_MODE */

#ifndef FEATURE_MIXED_TRANSMISSION_MODE
#define FEATURE_MIXED_TRANSMISSION_MODE
#endif /* FEATURE_MIXED_TRANSMISSION_MODE */

#ifndef FEATURE_DEADLINE_MONITORING
#define FEATURE_DEADLINE_MONITORING
#endif /* FEATURE_DEADLINE_MONITORING */

#ifndef FEATURE_NOTIFY_C3
#define FEATURE_NOTIFY_C3
#endif /* FEATURE_NOTIFY_C3 */

#ifndef FEATURE_NOTIFY_C4
#define FEATURE_NOTIFY_C4
#endif /* FEATURE_NOTIFY_C4 */

#ifndef FEATURE_CALLOUTS
#define FEATURE_CALLOUTS
#endif /* FEATURE_CALLOUTS */
#endif /* FEATURE_CCC1 */

#if defined(FEATURE_NOTIFY_C1) || defined(FEATURE_NOTIFY_C2) || defined(FEATURE_NOTIFY_C3) || defined(FEATURE_NOTIFY_C4)
#define FATURE_NOTIFY_COMMON
#endif

/* Internal defines */
#define FEATURE_IPDU_PROC

#define COM_STANDARD		0
#define COM_EXTENSION		1

#define COM_LITTLEENDIAN	0
#define COM_BIGENDIAN		1

#define COM_SHUTDOWN_IMMEDIATE 0xFFFFFFFE

#define QUEUE_ERROR			-1

#define FILTERING_CNT		4

#define PSPOS				1
#define STPOS 				0 /* Start position */
#define NGPOS				-1

#define ZERO_BYTE			0x00

#if defined(FEATURE_BYTEORDER)
#define FEATURE_BYTE_ENDIAN
/*#define FEATURE_FAST_BD*/
#define FEATURE_UNION_BO
#endif /* FEATURE_BYTEORDER */

#if defined(FATURE_NOTIFY_COMMON)
/* Notify masking variable */
#define NOTI_NONE			0x00
#define NOTI_ACTIVATETASK	0x01
#define NOTI_SETEVENT		0x02
#define NOTI_COMCALLBACK	0x04
#define NOTI_FLAG			0x08
#define NOTI_INMCALLBACK	0x10
#endif /* FATURE_NOTIFY_COMMON */
/*
#define COMCALLBACK(name) void com_callback_##name(void)
#ifdef FEATURE_OSEK_NM
#define INMCALLBACK(name) void inm_callback_##name(void)
#endif*/ /* FEATURE_OSEK_NM */
/*
#define SETFLAG(name) void SetFlag_##name(void)
#define READFLAG(name) void ReadFlag_##name(void)
#define RESETFLAG(name) void ResetFlag_##name(void)
*/
#define SHTLLH 56
#define SHTLLM 48
#define SHTLLC 40
#define SHTLLL 32

#define SHTLIH 24
#define SHTLIM 16
#define SHTLIC 8
#define SHTLIL 0

#define MASKLL 0xFFFFFFFFFFFFFFFF
#define MASKLI 0xFFFFFFFF
#define MASKLS 0xFFFF
#define MASKLC 0xFF

#define MASKNLL  0x0000000000000000
#define MASKNLI  0x00000000
#define MASKNLS 0x0000
#define MASKNLC 0x00

#define MASKNLC_NONE MASKNLC
#define MASKNLC_SEND 0x01
#define MASKNLC_RECV 0x02

/*-->ysjeong del */
/*
#if (CATATYPE==LONGLONGTYPE)
#define CLRBIT MASKNLL
#elif (CATATYPE==LONGTYPE)
#define CLRBIT MASKNLI
#elif (CATATYPE==SHORTTYPE)
#define CLRBIT MASKNLS
#elif (CATATYPE==CHARTYPE)
#define CLRBIT MASKNLC
#else 
#error code not present yet
#endif
*/ /*<-- ysjeong del*/

#define LTYPESIZE 8
#define ITYPESIZE 4
#define STYPESIZE 2
#define CTYPESIZE 1
#endif /* HEADER_COM_COMMON */



