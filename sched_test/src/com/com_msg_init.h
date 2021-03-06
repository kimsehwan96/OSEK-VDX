/**
 * @file com_msg_init.h

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
 * $Module: COM Message init  @n	$
 * $Filename: com_msg_init.h	$
 * $Date: 2009.7.2 			$
 * $Rev: ver 1.0 			$
 * $Creator: Jeong YongSeok	$
 * $Owner: Jeong YongSeok 	$
 * $URL: www.etri.re.kr 	$
 *
 */

#ifndef COM_MSG_INIT_H_
#define COM_MSG_INIT_H_

#include "ll_app_oil.h"
#include "struct_type.h"
#include "osek_os_types.h"


typedef OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_STATIC_INTERNAL MSG_SEND_STATIC_INTERNAL;

typedef OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_STATIC_EXTERNAL MSG_SEND_STATIC_EXTERNAL;

typedef OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_STATIC_EXTERNAL_FILTER_MASKEDNEWEQUALSX MSG_SEND_STATIC_EXTERNAL_FILTER_MASKEDNEWEQUALSX;

typedef OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_STATIC_EXTERNAL_FILTER_MASKEDNEWDIFFERSX MSG_SEND_STATIC_EXTERNAL_FILTER_MASKEDNEWDIFFERSX;

typedef OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_STATIC_EXTERNAL_FILTER_MASKEDNEWEQUALSMASKEDOLD MSG_SEND_STATIC_EXTERNAL_FILTER_MASKEDNEWEQUALSMASKEDOLD;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_STATIC_EXTERNAL_FILTER_MASKEDNEWDIFFERSMASKEDOLD MSG_SEND_STATIC_EXTERNAL_FILTER_MASKEDNEWDIFFERSMASKEDOLD;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_STATIC_EXTERNAL_FILTER_NEWISWITHIN MSG_SEND_STATIC_EXTERNAL_FILTER_NEWISWITHIN;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_STATIC_EXTERNAL_FILTER_NEWISOUTSIDE MSG_SEND_STATIC_EXTERNAL_FILTER_NEWISOUTSIDE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_STATIC_EXTERNAL_FILTER_ONEEVERYN MSG_SEND_STATIC_EXTERNAL_FILTER_ONEEVERYN;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_DYNAMIC_EXTERNAL MSG_SEND_DYNAMIC_EXTERNAL;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_SEND_ZERO_EXTERNAL MSG_SEND_ZERO_EXTERNAL;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_ZERO_INTERNAL MSG_RECEIVE_ZERO_INTERNAL;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_ZERO_EXTERNAL MSG_RECEIVE_ZERO_EXTERNAL;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_INTERNAL MSG_RECEIVE_UNQUEUED_INTERNAL;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_INTERNAL_FILTER_MASKEDNEWEQUALSX MSG_RECEIVE_UNQUEUED_INTERNAL_FILTER_MASKEDNEWEQUALSX;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_INTERNAL_FILTER_MASKEDNEWDIFFERSX MSG_RECEIVE_UNQUEUED_INTERNAL_FILTER_MASKEDNEWDIFFERSX;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_INTERNAL_FILTER_MASKEDNEWEQUALSMASKEDOLD MSG_RECEIVE_UNQUEUED_INTERNAL_FILTER_MASKEDNEWEQUALSMASKEDOLD;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_INTERNAL_FILTER_MASKEDNEWDIFFERSMASKEDOLD MSG_RECEIVE_UNQUEUED_INTERNAL_FILTER_MASKEDNEWDIFFERSMASKEDOLD;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_INTERNAL_FILTER_NEWISWITHIN MSG_RECEIVE_UNQUEUED_INTERNAL_FILTER_NEWISWITHIN;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_INTERNAL_FILTER_NEWISOUTSIDE MSG_RECEIVE_UNQUEUED_INTERNAL_FILTER_NEWISOUTSIDE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_INTERNAL_FILTER_ONEEVERYN MSG_RECEIVE_UNQUEUED_INTERNAL_FILTER_ONEEVERYN;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_INTERNAL MSG_RECEIVE_QUEUED_INTERNAL;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_INTERNAL_FILTER_MASKEDNEWEQUALSX MSG_RECEIVE_QUEUED_INTERNAL_FILTER_MASKEDNEWEQUALSX;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_INTERNAL_FILTER_MASKEDNEWDIFFERSX MSG_RECEIVE_QUEUED_INTERNAL_FILTER_MASKEDNEWDIFFERSX;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_INTERNAL_FILTER_MASKEDNEWEQUALSMASKEDOLD MSG_RECEIVE_QUEUED_INTERNAL_FILTER_MASKEDNEWEQUALSMASKEDOLD;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_INTERNAL_FILTER_MASKEDNEWDIFFERSMASKEDOLD MSG_RECEIVE_QUEUED_INTERNAL_FILTER_MASKEDNEWDIFFERSMASKEDOLD;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_INTERNAL_FILTER_NEWISWITHIN MSG_RECEIVE_QUEUED_INTERNAL_FILTER_NEWISWITHIN;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_INTERNAL_FILTER_NEWISOUTSIDE MSG_RECEIVE_QUEUED_INTERNAL_FILTER_NEWISOUTSIDE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_INTERNAL_FILTER_ONEEVERYN MSG_RECEIVE_QUEUED_INTERNAL_FILTER_ONEEVERYN;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_EXTERNAL MSG_RECEIVE_UNQUEUED_EXTERNAL;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_EXTERNAL_FILTER_MASKEDNEWEQUALSX MSG_RECEIVE_UNQUEUED_EXTERNAL_FILTER_MASKEDNEWEQUALSX;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_EXTERNAL_FILTER_MASKEDNEWDIFFERSX MSG_RECEIVE_UNQUEUED_EXTERNAL_FILTER_MASKEDNEWDIFFERSX;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_EXTERNAL_FILTER_MASKEDNEWEQUALSMASKEDOLD MSG_RECEIVE_UNQUEUED_EXTERNAL_FILTER_MASKEDNEWEQUALSMASKEDOLD;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_EXTERNAL_FILTER_MASKEDNEWDIFFERSMASKEDOLD MSG_RECEIVE_UNQUEUED_EXTERNAL_FILTER_MASKEDNEWDIFFERSMASKEDOLD;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_EXTERNAL_FILTER_NEWISWITHIN MSG_RECEIVE_UNQUEUED_EXTERNAL_FILTER_NEWISWITHIN;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_EXTERNAL_FILTER_NEWISOUTSIDE MSG_RECEIVE_UNQUEUED_EXTERNAL_FILTER_NEWISOUTSIDE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_EXTERNAL_FILTER_ONEEVERYN MSG_RECEIVE_UNQUEUED_EXTERNAL_FILTER_ONEEVERYN;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_EXTERNAL_LINK_TRUE MSG_RECEIVE_UNQUEUED_EXTERNAL_LINK_TRUE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_UNQUEUED_EXTERNAL_LINK_FALSE MSG_RECEIVE_UNQUEUED_EXTERNAL_LINK_FALSE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_EXTERNAL MSG_RECEIVE_QUEUED_EXTERNAL;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_EXTERNAL_FILTER_MASKEDNEWEQUALSX MSG_RECEIVE_QUEUED_EXTERNAL_FILTER_MASKEDNEWEQUALSX;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_EXTERNAL_FILTER_MASKEDNEWDIFFERSX MSG_RECEIVE_QUEUED_EXTERNAL_FILTER_MASKEDNEWDIFFERSX;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_EXTERNAL_FILTER_MASKEDNEWEQUALSMASKEDOLD MSG_RECEIVE_QUEUED_EXTERNAL_FILTER_MASKEDNEWEQUALSMASKEDOLD;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_EXTERNAL_FILTER_MASKEDNEWDIFFERSMASKEDOLD MSG_RECEIVE_QUEUED_EXTERNAL_FILTER_MASKEDNEWDIFFERSMASKEDOLD;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_EXTERNAL_FILTER_NEWISWITHIN MSG_RECEIVE_QUEUED_EXTERNAL_FILTER_NEWISWITHIN;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_EXTERNAL_FILTER_NEWISOUTSIDE MSG_RECEIVE_QUEUED_EXTERNAL_FILTER_NEWISOUTSIDE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_EXTERNAL_FILTER_ONEEVERYN MSG_RECEIVE_QUEUED_EXTERNAL_FILTER_ONEEVERYN;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_EXTERNAL_LINK_TRUE MSG_RECEIVE_QUEUED_EXTERNAL_LINK_TRUE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_QUEUED_EXTERNAL_LINK_FALSE MSG_RECEIVE_QUEUED_EXTERNAL_LINK_FALSE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_DYNAMIC_EXTERNAL MSG_RECEIVE_DYNAMIC_EXTERNAL;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_DYNAMIC_EXTERNAL_LINK_TRUE MSG_RECEIVE_DYNAMIC_EXTERNAL_LINK_TRUE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_DYNAMIC_EXTERNAL_LINK_FALSE MSG_RECEIVE_DYNAMIC_EXTERNAL_LINK_FALSE;

typedef  OIL_CNAB_MESSAGE_MESSAGEPROPERTY_RECEIVE_ZERO_SENDERS MSG_RECEIVE_ZERO_SENDERS;

typedef  OIL_CNAB_MESSAGE_NOTIFICATION_ACTIVATETASK MSG_NOTI_ACTIVATETASK;

typedef  OIL_CNAB_MESSAGE_NOTIFICATION_SETEVENT MSG_NOTI_SETEVENT;

typedef  OIL_CNAB_MESSAGE_NOTIFICATION_COMCALLBACK MSG_NOTI_COMCALLBACK;

typedef  OIL_CNAB_MESSAGE_NOTIFICATION_FLAG MSG_NOTI_FLAG;

typedef  OIL_CNAB_MESSAGE_NOTIFICATION_INMCALLBACK MSG_NOTI_INMCALLBACK;

typedef  OIL_CNAB_MESSAGE_NOTIFICATIONERROR_ACTIVATETASK MSG_NOTIERROR_ACTIVATETASK;

typedef  OIL_CNAB_MESSAGE_NOTIFICATIONERROR_SETEVENT MSG_NOTIERROR_SETEVENT;

typedef  OIL_CNAB_MESSAGE_NOTIFICATIONERROR_COMCALLBACK MSG_NOTIERROR_COMCALLBACK;

typedef  OIL_CNAB_MESSAGE_NOTIFICATIONERROR_FLAG MSG_NOTIERROR_FLAG;

typedef  OIL_CNAB_MESSAGE_NOTIFICATIONERROR_INMCALLBACK MSG_NOTIERROR_INMCALLBACK;

/*
typedef OIL_NETWORKMESSAGE_TYPE;

typedef OIL_CNAB_NETWORKMESSAGE_MESSAGEPROPERTY_STATIC;

typedef OIL_CNAB_NETWORKMESSAGE_MESSAGEPROPERTY_STATIC_DIRECTION_SENT;

typedef OIL_CNAB_NETWORKMESSAGE_MESSAGEPROPERTY_DYNAMIC;

typedef OIL_CNAB_NETWORKMESSAGE_MESSAGEPROPERTY_DYNAMIC_DIRECTION_SENT;

typedef OIL_IPDU_TYPE;

typedef OIL_CNAB_IPDU_IPDUPROPERTY_SENT;

typedef OIL_CNAB_IPDU_IPDUPROPERTY_SENT_TRANSMISSIONMODE_DIRECT;

typedef OIL_CNAB_IPDU_IPDUPROPERTY_SENT_TRANSMISSIONMODE_PERIODIC;

typedef OIL_CNAB_IPDU_IPDUPROPERTY_SENT_TRANSMISSIONMODE_MIXED;

typedef OIL_CNAB_IPDU_IPDUPROPERTY_RECEIVED;
*/



StatusType InitOilMessage(void);
void InitCommonMessage(CommonMsgType* com, CommonMsgType srcCom);

extern COM_Type COM_Info;

#if OIL_MESSAGE_COUNT != 0
extern Msg_Element msg_list[OIL_MESSAGE_COUNT];
extern MsgType mo_list[OIL_MESSAGE_COUNT];
extern CommonMsgType CommonMsg_list[OIL_MESSAGE_COUNT];
extern Filter_Val_Type FilterValType_list[OIL_MESSAGE_COUNT];
#if OIL_SND_MESSAGE_COUNT !=0
extern SendMsgType SendMsg_list[OIL_SND_MESSAGE_COUNT];
extern RecvMsgType RecvMsg_list[OIL_MESSAGE_COUNT - OIL_SND_MESSAGE_COUNT];
extern NetMsg_Send_Type SendNetMsg_list[OIL_SND_MESSAGE_COUNT];
extern NetMsg_Recv_Type RecvNetMsg_list[OIL_MESSAGE_COUNT - OIL_SND_MESSAGE_COUNT];
#else
extern SendMsgType SendMsg_list[OIL_SND_MESSAGE_COUNT+1];
extern RecvMsgType RecvMsg_list[OIL_MESSAGE_COUNT - OIL_SND_MESSAGE_COUNT];
extern NetMsg_Send_Type SendNetMsg_list[OIL_SND_MESSAGE_COUNT+1];
extern NetMsg_Recv_Type RecvNetMsg_list[OIL_MESSAGE_COUNT - OIL_SND_MESSAGE_COUNT];
#endif

extern MessageIdentifier retMsgID(MessageIdentifier msgid);
extern MsgType* retMessage(MessageIdentifier msgid);
extern SINT16 retDestName(MessageIdentifier msgid);
extern SINT16 retMediumName(MessageIdentifier msgid);
#else /*OIL_MESSAGE_COUNT == 0*/
extern MessageIdentifier retMsgID(MessageIdentifier msgid);
extern MsgType* retMessage(MessageIdentifier msgid);
extern SINT16 retDestName(MessageIdentifier msgid);
extern SINT16 retMediumName(MessageIdentifier msgid);
#endif /*#if OIL_MESSAGE_COUNT != 0*/



#endif
