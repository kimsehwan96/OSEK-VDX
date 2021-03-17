/**
 * @file param_type_definition.h

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
 * $Module: COM Parameter  @n	$
 * $Filename: param_type_definition.h	$
 * $Date: 2008.9.1 			$
 * $Rev: ver 1.2 			$
 * $Creator: Kim DongHyun	$
 * $Owner: Kim DongHyun 	$
 * $URL: www.etri.re.kr 	$
 *
 */

#ifndef HEADER_COM_PARAM_TYPE
#define HEADER_COM_PARAM_TYPE
#include "osek_os_types.h"
#include "common.h"
#if 0
#ifndef FEATURE_STATUSTYPE_ENUM
/* Error codes */
#ifndef STATUSTYPEDEFINED 
#define STATUSTYPEDEFINED 
#define E_OK 					0          /* Service call has succeeded. */
#endif
#define E_NOT_OK	0x01 /* Service call has failed. */

enum
{
	E_COM_ID = E_OK + 0x10, /* Given message or mode identifier is out of range or invalid. */
	E_COM_LENGTH, /* Given data length is out of range. */
	E_COM_LIMIT, /* Overflow of message queue. */
	E_COM_NOMSG, /* Message queue is empty. */
	E_COM_SYS_CONNECTED,
	E_COM_SYS_DISCONNECTED,
	E_COM_SENDING, /* Already send object while performing */
	E_COM_RECEIVING,
	E_COM_FILTERED,
	E_COM_UNKNOWN,
	E_COM_NOT_SUPPORT,
	E_COM_INIT_ERROR,
	E_COM_ERROR /* Error of suspense */
};

typedef BYTE StatusType;
#else /* FEATURE_STATUSTYPE_ENUM */
typedef enum _StatusType
{
	E_OK = 0x00,
	E_NOT_OK,
	E_COM_ID = E_OK + 0x100, /* Given message or mode identifier is out of range or invalid. */
	E_COM_LENGTH, /* Given data length is out of range. */
	E_COM_LIMIT, /* Overflow of message queue. */
	E_COM_NOMSG, /* Message queue is empty. */
	E_COM_SYS_CONNECTED,
	E_COM_SYS_DISCONNECTED,
	E_COM_SENDING, /* Already send object while performing */
	E_COM_RECEIVING,
	E_COM_FILTERED,
	E_COM_UNKNOWN,
	E_COM_NOT_SUPPORT,
	E_COM_INIT_ERROR,
	E_COM_ERROR /* Error of suspense */
} StatusType;
#endif /* FEATURE_STATUSTYPE_ENUM */
#endif

#define	E_NOT_OK 1
#define	E_COM_ID 2
#define	E_COM_LENGTH 3
#define	E_COM_LIMIT 4
#define	E_COM_NOMSG 5
#define	E_COM_SYS_CONNECTED 6
#define	E_COM_SYS_DISCONNECTED 7
#define	E_COM_SENDING 8
#define	E_COM_RECEIVING 9
#define	E_COM_FILTERED 10
#define	E_COM_UNKNOWN 11
#define	E_COM_NOT_SUPPORT 12
#define	E_COM_INIT_ERROR 13
#define	E_COM_ERROR 14


typedef enum
{
	COM_FALSE = 0x00,
	COM_TRUE
} FlagValue, CalloutReturnType;


typedef enum _COMServiceIdType
{
	COMSID_StartCOM = 0x20,
	COMSID_StopCOM,
	COMSID_GetCOMApplicationMode,
	COMSID_InitMessage,
	COMSID_StartPeriodic,
	COMSID_StopPeriodic,
	COMSID_SendMessage,
	COMSID_ReceiveMessage,
	COMSID_SendDynamicMessage,
	COMSID_ReceiveDynamicMessage,
	COMSID_SendZeroMessage,
	COMSID_ReceiveZeroMessage,
	COMSID_GetMessageStatus,
	COMSID_StartCOMExtension
} COMServiceIdType;

/* Message object enumeration type definition */
typedef enum
{
	COMSTANDARD,
	COMEXTENDED
} _COMStatus_Type;

typedef enum
{
	SENT,
	RECEIVED
} _IPDUProperty_Type, _Direction_Type;

typedef enum
{
    COM_DIRECT,
    COM_PERIODIC,
    COM_MIXED
} _Transmission_Type;

typedef enum
{
	STATIC,
	DYNAMIC,
	ZERO
} _Messageproperty_Type;

typedef enum
{
	LITTLEENDIAN,
	BIGENDIAN
} _Bitordering_Type;

typedef enum
{
	UNSIGNEDINTEGER,
	BYTEARRAY
} _Datainterpretation_Type;

typedef enum
{
	TRIGGERED,
	PENDING
} _Transferproperty_Type;

typedef enum
{
	SEND_STATIC_INTERNAL,
	SEND_STATIC_EXTERNAL,
	SEND_DYNAMIC_EXTERNAL,
	SEND_ZERO_INTERNAL,
	SEND_ZERO_EXTERNAL,
	RECEIVE_ZERO_INTERNAL,
	RECEIVE_ZERO_EXTERNAL,
	RECEIVE_UNQUEUED_INTERNAL,
	RECEIVE_QUEUED_INTERNAL,
	RECEIVE_UNQUEUED_EXTERNAL,
	RECEIVE_QUEUED_EXTERNAL,
	RECEIVE_DYNAMIC_EXTERNAL,
	RECEIVE_ZERO_SENDERS,
	MAX_FUNC_SIZE
} Messageproperty_Type;

typedef enum
{
	MSEND_STATIC_INTERNAL,
	MSEND_STATIC_EXTERNAL,
	MSEND_DYNAMIC_EXTERNAL,
	MSEND_ZERO_INTERNAL,
	MSEND_ZERO_EXTERNAL,
	MAX_SEND_FUNC_SIZE
} Messageproperty_Send_Type;

typedef enum
{
	MRECEIVE_ZERO_INTERNAL = 5,
	MRECEIVE_ZERO_EXTERNAL,
	MRECEIVE_UNQUEUED_INTERNAL,
	MRECEIVE_QUEUED_INTERNAL,
	MRECEIVE_UNQUEUED_EXTERNAL,
	MRECEIVE_QUEUED_EXTERNAL,
	MRECEIVE_DYNAMIC_EXTERNAL,
	MRECEIVE_ZERO_SENDERS,
	MAX_RECEIVE_FUNC_SIZE
} Messageproperty_Recv_Type;

typedef enum
{
	NONE, 
	ACTIVATETASK, 
	SETEVENT,
	COMCALLBACK, 
	FLAG, 
	INMCALLBACK
} Notify_Type;

typedef enum
{
	ALWAYS,
	NEVER,
	MASKEDNEWEQUALSX,
	MASKEDNEWDIFFERSX,
	NEWISEQUAL,
	NEWISDIFFERENT,
	MASKEDNEWEQUALSMASKEDOLD,
	MASKEDNEWDIFFERSMASKEDOLD,
	NEWISWITHIN,
	NEWISOUTSIDE,
	NEWISGREATER,
	NEWISLESSOREQUAL,
	NEWISLESS,
	NEWISGREATEROREQUAL,
	ONEEVERYN,
	MAX_FILTER_SIZE
} _Filter_Type;

typedef enum
{
	LINK_TRUE,
	LINK_FALSE
} _Link_Type;

typedef enum
{
	TRANSMISSION_REQUEST, /* IPDU Callouts */
	TRANSMISSION_CONFIRMATION, /* Transmission Deadline Monitoring(Notification Class 4), Notification Class 2 */
	TRANSMISSION_ERROR_INDICATION, /* Notification Class 4 */
	RECEPTION_ERROR_INDICATION, /* Notification Class 3 */
	RECEPTION_INDICATION, /* Reception Deadline Monitoring(Notification Class 3) */
	UNKNOWN_ERROR	
} _PDU_Status_Type;

typedef enum
{
	SEND_ONLY, /* it does not know the inside or the outside */
	RECEIVE_ONLY, /* it does not know the inside or the outside */
	INTERNAL_SEND_ONLY,
	INTERNAL_RECEIVE_ONLY,
	EXTERNAL_SEND_ONLY,
	EXTERNAL_RECEIVE_ONLY,
	SEND_RECEIVE, /* it does not know the inside or the outside */
	INTSEND_INTRECEIVE,
	INTSEND_EXTRECEIVE,
	EXTSEND_INTRECEIVE,
	EXTSEND_EXTRECEIVE,
	MAX_TRANS_TYPE
} _Trans_Type;

typedef enum
{
	NORMAL_MODE,
	DEBUG_MODE,
	DIAG_MODE
} _COMAppModeType;

typedef enum
{
	SIGNAL_WAIT  	= 1 << 0,
	SIGNAL_TRANS	= 1 << 1,
	SIGNAL_TEMP2	= 1 << 2,
	SIGNAL_TEMP3    = 1 << 3,
	SIGNAL_TEMP4	= 1 << 4,
	SIGNAL_TEMP5	= 1 << 5,
	SIGNAL_TEMP6    = 1 << 6
} SignalFlag;

#ifdef FEATURE_BYTEORDER
/* Byte ordering macro - short or long type */
#ifdef FEATURE_BYTE_ENDIAN
/* Nothing */
#else /* FEATURE_BYTE_ENDIAN */
#define swaplong(cvt) ((((cvt) & MASKLC) << SHTLIH) + (((cvt >> SHTLIC) & MASKLC) << SHTLIM) + (((cvt >> SHTLIM) & MASKLC) << SHTLIC) + (((cvt >> SHTLIH) & MASKLC)))
#define swapshort(cvt) (((cvt) & MASKLC) << SHTLIC) + (((cvt >> SHTLIC) & MASKLC))

#define htonl swaplong
#define htons swapshort
#define ntohl swaplong
#define ntohs swapshort
#endif /* FEATURE_BYTE_ENDIAN */
#endif /* FEATURE_BYTEORDER */
#endif /* HEADER_COM_PARAM_TYPE */

