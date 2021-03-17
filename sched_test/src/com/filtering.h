/**
 * @file filtering.h

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
 * $Module: COM Filtering Service  @n	$
 * $Filename: filtering.h	$
 * $Date: 2008.10.10 			$
 * $Rev: ver 1.2 			$
 * $Creator: Kim DongHyun	$
 * $Owner: Kim DongHyun 	$
 * $URL: www.etri.re.kr 	$
 *
 */

#ifndef HEADER_COM_FILTER
#define HEADER_COM_FILTER
#include "struct_type.h"
#ifdef FEATURE_FILTERING

#if 0
#if (CATATYPE==LONGLONGTYPE)
extern StatusType sendfiltering(
	MessageIdentifier,
	SendMsgType *,
	UINT64 *,
	UINT64 *,
SINT32
);
extern StatusType recvfiltering(
	MessageIdentifier,
	RecvMsgType *,
	UINT64 *,
	UINT64 *,
	SINT32
);
#elif (CATATYPE==LONGTYPE)
extern StatusType sendfiltering(
	MessageIdentifier,
	SendMsgType *,
	UINT32 *,
	UINT32 *,
	SINT32
);
extern StatusType recvfiltering(
	MessageIdentifier,
	RecvMsgType *, 
	UINT32 *,
	UINT32 *,
	SINT32
);
#elif (CATATYPE==SHORTTYPE)
extern StatusType sendfiltering(
	MessageIdentifier, 
	SendMsgType *,
	UINT16 *, 
	UINT16 *, 
	SINT32
);
extern StatusType recvfiltering(
	MessageIdentifier, 
	RecvMsgType *,
	UINT16 *, 
	UINT16 *, 
	SINT32
);
#elif (CATATYPE==CHARTYPE)
extern StatusType sendfiltering(
	MessageIdentifier, 
	SendMsgType *, 
	UINT8 *, 
	UINT8 *, 
	SINT32
);
extern StatusType recvfiltering(
	MessageIdentifier,
	RecvMsgType *,
	UINT8 *, 
	UINT8 *, 
	SINT32
);
#else /* CATATYPE */
#error code not present yet
#endif /* CATATYPE */
#endif

extern StatusType sendfiltering(
	MessageIdentifier,
	SendMsgType *,
	void *,
	void *,
INT32
);
extern StatusType recvfiltering(
	MessageIdentifier,
	RecvMsgType *,
	void *,
	void *,
	INT32
);/*hm.lee cata*/
#if defined(FEATURE_NOT_SUPPORT_64BIT)
extern BOOL filter_always(MsgFilter *, SINT32, SINT32);
extern BOOL filter_never(MsgFilter *, SINT32, SINT32);
extern BOOL filter_masked_new_equals_x(MsgFilter *, SINT32, SINT32);
extern BOOL filter_masked_new_differs_x(MsgFilter *, SINT32, SINT32);
extern BOOL filter_new_is_equal(MsgFilter *, SINT32, SINT32);
extern BOOL filter_new_is_different(MsgFilter *, SINT32, SINT32);
extern BOOL filter_masked_new_equals_masked_old(MsgFilter *, SINT32 , SINT32);
extern BOOL filter_masked_new_differs_masked_old(MsgFilter *, SINT32 , SINT32);
extern BOOL filter_new_is_within(MsgFilter *, SINT32, SINT32);
extern BOOL filter_new_is_outside(MsgFilter *, SINT32, SINT32);
extern BOOL filter_new_is_greater(MsgFilter *, SINT32, SINT32);
extern BOOL filter_new_is_less_or_equal(MsgFilter *, SINT32, SINT32);
extern BOOL filter_new_is_less(MsgFilter *, SINT32, SINT32);
extern BOOL filter_new_is_greater_or_equal(MsgFilter *, SINT32, SINT32);
extern BOOL filter_one_every_n(MsgFilter *, SINT32, SINT32);
#else /* FEATURE_NOT_SUPPORT_64BIT */
extern BOOL filter_always(MsgFilter *, SINT64, SINT64);
extern BOOL filter_never(MsgFilter *, SINT64, SINT64);
extern BOOL filter_masked_new_equals_x(MsgFilter *, SINT64, SINT64);
extern BOOL filter_masked_new_differs_x(MsgFilter *, SINT64, SINT64);
extern BOOL filter_new_is_equal(MsgFilter *, SINT64, SINT64);
extern BOOL filter_new_is_different(MsgFilter *, SINT64, SINT64);
extern BOOL filter_masked_new_equals_masked_old(MsgFilter *, SINT64 , SINT64);
extern BOOL filter_masked_new_differs_masked_old(MsgFilter *, SINT64 , SINT64);
extern BOOL filter_new_is_within(MsgFilter *, SINT64, SINT64);
extern BOOL filter_new_is_outside(MsgFilter *, SINT64, SINT64);
extern BOOL filter_new_is_greater(MsgFilter *, SINT64, SINT64);
extern BOOL filter_new_is_less_or_equal(MsgFilter *, SINT64, SINT64);
extern BOOL filter_new_is_less(MsgFilter *, SINT64, SINT64);
extern BOOL filter_new_is_greater_or_equal(MsgFilter *, SINT64, SINT64);
extern BOOL filter_one_every_n(MsgFilter *, SINT64, SINT64);
#endif /* FEATURE_NOT_SUPPORT_64BIT */
#endif /* FEATURE_FILTERING */
#endif /* HEADER_COM_FILTER */

