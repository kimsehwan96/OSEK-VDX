/**
 * @file errorhook.h

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
 * $Module: COM Hook  @n	$
 * $Filename: errorhook.h	$
 * $Date: 2008.10.2 			$
 * $Rev: ver 1.2 			$
 * $Creator: Kim DongHyun	$
 * $Owner: Kim DongHyun 	$
 * $URL: www.etri.re.kr 	$
 *
 */

#ifndef HEADER_COM_ERROR_HOOK
#define HEADER_COM_ERROR_HOOK

#include "struct_type.h"
#include "com_msg_init.h"

/*#if (FEATURE_COMERRORHOOK==TRUE)  */ /*ysjeong del*/
typedef struct _COM_element_block
{
	COMApplicationModeType appmode;
	COMShutdownModeType shutdownmode;
	MessageIdentifier msgid;
} COM_element_block;

typedef struct _COM_element_data_block
{
	ApplicationDataRef dataref;
	LengthRef lengthref;
	struct _COM_element_block key;
} COM_element_data_block;

typedef struct _COM_call_service_delineation
{
	BYTE svcid;
	struct _COM_element_data_block param;
} COM_call_service_delineation;

extern COM_call_service_delineation com_service;


COMApplicationModeType COMGetApplicationMode(void);
#ifdef FEATURE_COMERRORHOOK
#ifdef FEATURE_COMUSEGETSERVICEID
BYTE ErrorGetServiceId();
#endif /*FEATURE_COMUSEGETSERVICEID*/

#ifdef FEATURE_COMUSEPARAMETERACCESS
COMApplicationModeType COMError_StartCOM_Mode(void);
COMShutdownModeType COMError_StopCOM_Mode(void); 
MessageIdentifier COMError_InitMessage_Message(void); 
ApplicationDataRef COMError_InitMessage_DataRef(void); 
MessageIdentifier COMError_SendMessage_Message(void); 
ApplicationDataRef COMError_SendMessage_DataRef(void); 
MessageIdentifier COMError_ReceiveMessage_Message(void); 
ApplicationDataRef COMError_ReceiveMessage_DataRef(void); 
MessageIdentifier COMError_SendDynamicMessage_Message(void); 
ApplicationDataRef COMError_SendDynamicMessage_DataRef(void);
LengthRef COMError_SendDynamicMessage_LengthRef(void); 
MessageIdentifier COMError_ReceiveDynamicMessage_Message(void); 
ApplicationDataRef COMError_ReceiveDynamicMessage_DataRef(void);
LengthRef COMError_ReceiveDynamicMessage_LengthRef(void);
MessageIdentifier COMError_SendZeroMessage_Message(void); 
MessageIdentifier COMError_GetMessageStatus_Message(void);
#endif /*FEATURE_COMUSEPARAMETERACCESS*/
extern void COMErrorHook(StatusType errval);
#endif /* FEATURE_COMERRORHOOK */

#endif /* HEADER_COM_ERROR_HOOK */

