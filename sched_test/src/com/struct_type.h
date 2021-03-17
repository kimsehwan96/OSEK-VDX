/**
 * @file struct_type.h

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
 * $Module: COM Definition  @n	$
 * $Filename: struct_type.h	$
 * $Date: 2008.10.14 			$
 * $Rev: ver 1.0 			$
 * $Creator: Kim DongHyun	$
 * $Owner: Kim DongHyun 	$
 * $URL: www.etri.re.kr 	$
 *
 */

#ifndef HEADER_COM_STRUCT_TYPE
#define HEADER_COM_STRUCT_TYPE

#include "param_type_definition.h"
#include "osek_os_types.h"


/*#include "typedef.h"*/
/*#include "../../platform/networklayer/neos_nl.h"*/

/* First of all arrangement */
typedef struct _MsgFilter MsgFilter;
typedef struct _SendMsgType SendMsgType;
typedef struct _RecvMsgType RecvMsgType;
typedef struct _MsgType MsgType;
/*-->ysjeong del*/

/* 
#ifdef FEATURE_QUEUED
struct _COMqueueinfo
{
	SINT32 Front, Rear;
	SINT32 Noelement;
#if (CATATYPE==LONGLONGTYPE)
	UINT64 qElement[QUEUE_MAX_COUNT][QUEUE_BUFFER_SIZE];
#elif (CATATYPE==LONGTYPE)
	UINT32 qElement[QUEUE_MAX_COUNT][QUEUE_BUFFER_SIZE];
#elif (CATATYPE==SHORTTYPE)
	UINT16 qElement[QUEUE_MAX_COUNT][QUEUE_BUFFER_SIZE];
#elif (CATATYPE==CHARTYPE)
	UINT8 qElement[QUEUE_MAX_COUNT][QUEUE_BUFFER_SIZE];
#else 
#error code not present yet
#endif
};


typedef struct _COMqueueinfo COMqueue;
#endif 
*/ 
/*<-- ysjeong del*/

typedef UINT32 FLAG_TYPE;

#if 0  /*현재 사용 안함. CCCA,CCCB 인증. ysjeong*/
typedef struct _CDATATYPE_DYNAMIC
{
#if (CATATYPE==LONGLONGTYPE)
	UINT64 MessageData[STATIC_BUFFER_SIZE];
#elif (CATATYPE==LONGTYPE)
	UINT32 MessageData[STATIC_BUFFER_SIZE];
#elif (CATATYPE==SHORTTYPE)
	UINT16 MessageData[STATIC_BUFFER_SIZE];
#elif (CATATYPE==CHARTYPE)
	UINT8 MessageData[STATIC_BUFFER_SIZE];
#else /* CATATYPE */
#error code not present yet
#endif /* CATATYPE */
} CDATATYPE_DYNAMIC;
#endif
typedef UINT32 CDATALENGTH;

/* Function pointer */
typedef StatusType (* msg_func_ptr)(MsgType *mo, ApplicationDataRef data, COMLengthType length);
typedef StatusType (* msg_send_func_ptr)(MessageIdentifier msgid, MsgType * mo, ApplicationDataRef data, COMLengthType length);
typedef StatusType (* msg_recv_func_ptr)(MessageIdentifier msgid,  MsgType * mo, ApplicationDataRef data, COMLengthType *length);

typedef void (* func_ptr)(void);
/*
typedef void (* activatetask_func_ptr)(TaskType);
typedef void (* setevent_func_ptr)(TaskType, EventMaskType);
typedef void (* comcallback_func_ptr)(void); 
typedef void (* flag_func_ptr)(FLAG_TYPE);
typedef void (* inmcallback_func_ptr)(void); 
*/

#if defined(FEATURE_NOT_SUPPORT_64BIT)
typedef BOOL (* filter_func_ptr)(MsgFilter * filterdest, SINT32 old_value, SINT32 new_value);
#else /* FEATURE_NOT_SUPPORT_64BIT */
typedef BOOL (* filter_func_ptr)(MsgFilter *filterdest, SINT64 old_value, SINT64 new_value);
#endif /* FEATURE_NOT_SUPPORT_64BIT */

#ifdef FEATURE_CALLOUTS
 /* Pamameter is not void, must be struct type */
typedef BOOL (* CalloutFuncPtr)(void);

/* CalloutFuncPtr same type */
typedef BOOL (* networkordercallout_func_ptr)(void);
typedef BOOL (* cpuordercallout_func_ptr)(void);
typedef BOOL (*IPDUCallout_func_ptr)(void);
#endif /* FEATURE_CALLOUTS */

typedef BOOL (* q_func_val_ptr)(SINT32 * Front, SINT32 * Rear, SINT32 * NoElement, UINT32 QueueSize);
/* --> ysjeong del*/
/*
#if (CATATYPE==LONGLONGTYPE)
typedef BOOL (* q_func_run_ptr)(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT64 (* Element)[QUEUE_BUFFER_SIZE], UINT64 *, COMLengthType);
#elif (CATATYPE==LONGTYPE)
typedef BOOL (* q_func_run_ptr)(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT32 (* Element)[QUEUE_BUFFER_SIZE], UINT32 *, COMLengthType);
#elif (CATATYPE==SHORTTYPE)
typedef BOOL (* q_func_run_ptr)(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT16 (* Element)[QUEUE_BUFFER_SIZE], UINT16 *, COMLengthType);
#elif (CATATYPE==CHARTYPE)
typedef BOOL (* q_func_run_ptr)(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT8 (* Element)[QUEUE_BUFFER_SIZE], UINT8 *, COMLengthType);
#else 
#error code not present yet
#endif
*/ 
/*<--ysjeong del*/

typedef BOOL (* q_func_run_ptr)(SINT32 * Front, SINT32 * Rear, SINT32 * NoElement, UINT32 QueueSize, void * Qelement, void * data, COMLengthType len, MessageIdentifier msgid); /*ysjeong*/

typedef struct _MNAME_TYPE
{
	BYTE MessageName[BITSPERBYTE];
} MNAME_TYPE;

typedef struct _Filter_Mask_X_Type
{
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	SINT32 Mask;
	SINT32 X;
	SINT32 temp;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	SINT64 Mask;
	SINT64 X;
	SINT64 temp;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
} Filter_Mask_X_Type;

typedef struct _Filter_Min_Max_Type
{
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	SINT32 Min;
	SINT32 Max;
	SINT32 temp;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	SINT64 Min;
	SINT64 Max;
	SINT64 temp;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
} Filter_Min_Max_Type;

typedef struct _Filter_Period_Offset_Type
{
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	SINT32 Period;
	SINT32 Offset;
	SINT32 Occurrence;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	SINT64 Period;
	SINT64 Offset;
	SINT64 Occurrence;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
} Filter_Period_Offset_Type;

typedef union _Filter_Val_Type
{
	struct _Filter_Mask_X_Type MX;
	struct _Filter_Min_Max_Type MM;
	struct _Filter_Period_Offset_Type PO;
} Filter_Val_Type;

typedef union _BitSize_Val_Type
{
	UINT32 BitSize;
	UINT32 MaxBitSize;
} BitSize_Val_Type;

typedef struct _Transmission_Val_Type
{
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	UINT32 MinDelayTime;
	UINT32 TimeOffset;
	UINT32 TimePeriod;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	UINT64 MinDelayTime;
	UINT64 TimeOffset;
	UINT64 TimePeriod;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
} Transmission_Val_Type;

typedef struct _Sent_Type
{
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	UINT32 timeout;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	UINT64 timeout;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
	Transmission_Val_Type transmissinmod_Val;
	_Transmission_Type transmissionmode;
} Sent_Type;

typedef struct _Received_Type
{
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	UINT32 timeout;
	UINT32 firsttimeout;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	UINT64 timeout;
	UINT64 firsttimeout;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
} Received_Type;

typedef struct _IPDUProperty_Val_Type
{
	Sent_Type sent;
	Received_Type receive;
} IPDUProperty_Val_Type;

typedef struct _COM_Type
{
	FLOAT32 comtimebase;
	BOOL comerrorhook;
	BOOL comusegetserviceid;
	BOOL comuseparameteraccess;
	BOOL comstartcomextention;
	COMApplicationModeType comappmode;
	_COMStatus_Type comstatus;
} COM_Type;

typedef struct _DeviceAddress_Type
{
	UINT16 dest; /* CAN/LIN/FLEX... */
	UINT16 medium; /* Select Line */
} DeviceAddress_Type;

/*
	PDU --> AI(Address Information) + PCI(Protocol Control Information) + Data(Data Field) 
	SDU(Service Data Unit) + PCI(Protocol Control Information) = PDU(Protocol Data Unit)
	Interaction PDU = IPDU
	Network Layer = N-PDU(_SF(Single Frame) _FF(First Frame) _CF(Consecutive Frame) _FC(Flow Control)
	Data Link Layer = L-PDU(prefix)
*/

typedef struct _IPDU_Send_Type
{
	UINT32 BitSize;
	_Direction_Type DirectType;
	_Transmission_Type TransType;
	Transmission_Val_Type TransVal;
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	UINT32 Timeout;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	UINT64 Timeout;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
	byte * pIPDUCallouts;
	byte * pLayerUsed;
	DeviceAddress_Type TargetAddr;
	MessageIdentifier TargetMsgID;
	MNAME_TYPE TargetName;
} IPDU_Send_Type;

typedef struct _IPDU_Recv_Type
{
	UINT32 BitSize;
	_Direction_Type DirectType;
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	UINT32 Timeout;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	UINT64 Timeout;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
	byte * pIPDUCallouts;
	byte * pLayerUsed;
	DeviceAddress_Type TargetAddr;
	MessageIdentifier TargetMsgID;
	MNAME_TYPE TargetName;
} IPDU_Recv_Type;

typedef struct _NetMsg_Send_Type
{
	IPDU_Send_Type pIPDU;
	_Bitordering_Type BitOrderType;
	UINT32 BitPos;
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	UINT32 InitVal;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	UINT64 InitVal;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
	_Direction_Type DirectType;
	_Transmission_Type TransType;
	union _BitSize_Val_Type BitSizeVal;
} NetMsg_Send_Type;

typedef struct _NetMsg_Recv_Type
{
	IPDU_Recv_Type pIPDU;
	_Bitordering_Type BitOrderType;
	UINT32 BitPos;
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	UINT32 InitVal;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	UINT64 InitVal;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
	_Direction_Type DirectType;
	UINT32 BitSize;
} NetMsg_Recv_Type;

/*
typedef struct _Notification_Type
{
	activatetask_func_ptr notiactivatetask;
	setevent_func_ptr notisetevent;
	comcallback_func_ptr noticomcallback;
	flag_func_ptr notiflag;
	inmcallback_func_ptr notiinmcallback;
} Notification_Type;

typedef struct _NotificationError_Type
{
	activatetask_func_ptr notierractivatetask;
	setevent_func_ptr notierrsetevent;
	comcallback_func_ptr notierrcomcallback;
	flag_func_ptr notierrflag;
	inmcallback_func_ptr notierrinmcallback;
} NotificationError_Type;
*/
struct _MsgFilter
{
	_Filter_Type filter;
	filter_func_ptr filterfunc;
	union _Filter_Val_Type filterval; 
};

typedef struct _MsgQueue
{
	q_func_val_ptr queue_create_func;
	q_func_val_ptr queue_is_empty_func;
	q_func_val_ptr queue_is_full_func;
	q_func_run_ptr queue_insert_func;
	q_func_run_ptr queue_read_func;
} MsgQueue;

typedef struct _Flag_func_Type
{
	func_ptr flag_func;
} Flag_func_Type;

typedef struct _CommonMsgType
{
	MessageIdentifier MsgID;
	SINT16 NotiType;
	TaskType Task;
	EventMaskType Event;
	func_ptr pCallback;
	/*MsgType * pSelfMO; */ /*ysjeong del*/
	func_ptr pFlag;
	func_ptr pResetFlag;
	func_ptr pINMCallback;
	UINT32 IPDUMonitor;
	SINT16 ErrNotiType;
	TaskType ErrTask;
	EventMaskType ErrEvent;
	func_ptr pErrCallback;
	/*MsgType * pErrSelfMO; */ /*ysjeong del*/
	func_ptr pErrFlag;
	func_ptr pErrINMCallback;
	UINT32 ErrIPDUMonitor;
} CommonMsgType;

struct _SendMsgType
{ 
	CommonMsgType Common;
#if 0  /*ysjeong del*/
#if (CATATYPE==LONGLONGTYPE)
	UINT64 * Data;
#elif (CATATYPE==LONGTYPE)
	UINT32 * Data;
#elif (CATATYPE==SHORTTYPE)
	UINT16 * Data;
#elif (CATATYPE==CHARTYPE)
	UINT8 * Data;
#else /* CATATYPE */
#error code not present yet
#endif /* CATATYPE */
#endif
	void* pData;
	CDATALENGTH DataLen;
	CDATALENGTH RealDataLen;
	/*RecvMsgType * pRecvMO;*/

	byte * pNetCallouts;
	byte * pCPUCallouts;
	NetMsg_Send_Type pNetMsg;
	Messageproperty_Send_Type TransType;
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	UINT32 InitVal;
	UINT32 OldVal;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	UINT64 InitVal;
	UINT64 OldVal;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
	_Filter_Type FilterType;
	union _Filter_Val_Type FilterVal; 
};

struct _RecvMsgType
{ 
	CommonMsgType Common;
#if 0 /*ysjeong del*/
#if (CATATYPE==LONGLONGTYPE)
	UINT64 * Data;
#elif (CATATYPE==LONGTYPE)
	UINT32 * Data;
#elif (CATATYPE==SHORTTYPE)
	UINT16 * Data;
#elif (CATATYPE==CHARTYPE)
	UINT8 * Data;
#else /* CATATYPE */
#error code not present yet
#endif /* CATATYPE */
#endif
	void* pData;

	CDATALENGTH DataLen;
	CDATALENGTH RealDataLen;
	/*SendMsgType * pSendMO; */ /*ysjeong del*/

	byte * pNetCallouts;
	byte * pCPUCallouts;
	NetMsg_Recv_Type pNetMsg;
	Messageproperty_Recv_Type TransType;
#if defined(FEATURE_NOT_SUPPORT_64BIT)
	UINT32 InitVal;
	UINT32 OldVal;
#else /* FEATURE_NOT_SUPPORT_64BIT */
	UINT64 InitVal;
	UINT64 OldVal;
#endif /* FEATURE_NOT_SUPPORT_64BIT */
	_Filter_Type FilterType;
	union _Filter_Val_Type FilterVal;
	UINT32 QMatrixSize;
	UINT32 QueueSize;
	SINT32 Front;
	SINT32 Rear;
	SINT32 Noelement;
#if 0 /*ysjeong del*/
#if (CATATYPE==LONGLONGTYPE)
	UINT64 (* Qelement)[QUEUE_BUFFER_SIZE];
#elif (CATATYPE==LONGTYPE)
	UINT32 (* Qelement)[QUEUE_BUFFER_SIZE];
#elif (CATATYPE==SHORTTYPE)
	UINT16 (* Qelement)[QUEUE_BUFFER_SIZE];
#elif (CATATYPE==CHARTYPE)
	UINT8 (* Qelement)[QUEUE_BUFFER_SIZE];
#else /* CATATYPE */
#error code not present yet
#endif /* CATATYPE */
#endif
	void* Qelement;
	BOOL LinkType;
	BOOL QOverFlag;
	/*RecvMsgType * pOtherRecvMO;*/
};

struct _MsgType
{
	SendMsgType * SendMsg;
	RecvMsgType * RecvMsg;
};

/* ysjeong del
typedef struct _Msg_Element
{
	_MsgRefId MsgID;
	MsgType * Message;
	_Trans_Type Trans;
	MNAME_TYPE MsgName;
} Msg_Element;
*/

typedef struct _Msg_Element
{
	MessageIdentifier MsgID;
	MsgType * Message;
} Msg_Element;






#ifdef FEATURE_IPDU_PROC
typedef struct _IPDU_Struct
{
	BYTE IPDU_SendField[MAX_BYTE_IPDU_SEND];
	BYTE IPDU_RecvField[MAX_BYTE_IPDU_RECV];
} IPDU_Struct;

typedef struct _IPDU_Pos
{
	UINT32 SendBitPos;
	UINT32 RecvBitPos;
	UINT32 SendLength;
	UINT32 RecvLength;
} IPDU_Pos;
#endif /* FEATURE_IPDU_PROC */

#if defined(FEATURE_UNION_BO)
#if !defined(FEATURE_NOT_SUPPORT_64BIT)
typedef union
{
	UINT64	datal;
	UINT8	datac[LTYPESIZE];
} L_BL;
#endif /* FEATURE_NOT_SUPPORT_64BIT */

typedef union
{
	UINT32	datai;
	UINT8	datac[ITYPESIZE];
} I_BL;

typedef union
{
	UINT16	datas;
	UINT8	datac[STYPESIZE];
} S_BL;

#if !defined(FEATURE_NOT_SUPPORT_64BIT)
typedef union
{
	UINT64	datal;
	UINT32	datai[STYPESIZE];
} LI_BL;

typedef union
{
	UINT64	datal;
	UINT16	datas[ITYPESIZE];
} LS_BL;
#endif /* FEATURE_NOT_SUPPORT_64BIT */

typedef union
{
	UINT32	datai;
	UINT16	datas[STYPESIZE];
} IS_BL;
#endif /* FEATURE_UNION_BO */


#endif /* HEADER_COM_STRUCT_TYPE */

