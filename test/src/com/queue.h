/**
 * @file queue.h

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
 * $Module: COM Queue  @n	$
 * $Filename: queue.h	$
 * $Date: 2008.9.15 			$
 * $Rev: ver 1.2 			$
 * $Creator: Kim DongHyun	$
 * $Owner: Kim DongHyun 	$
 * $URL: www.etri.re.kr 	$
 *
 */

#ifndef HEADER_COM_QUEUE
#define HEADER_COM_QUEUE
#include "struct_type.h"
#include "com_msg_init.h"

extern BOOL Create(SINT32 * Front, SINT32 * Rear, SINT32 * NoElement, UINT32 QueueSize);
extern BOOL IsEmpty(SINT32 * Front, SINT32 * Rear, SINT32 * NoElement, UINT32 QueueSize);
extern BOOL IsFull(SINT32 * Front, SINT32 * Rear, SINT32 * NoElement, UINT32 QueueSize);

extern BOOL InsertQueue(SINT32 * Front, SINT32 * Rear, SINT32 * NoElement, UINT32 QueueSize, void *Qelement, void * data, COMLengthType len, MessageIdentifier msgid);
extern BOOL ReadQueue(SINT32 * Front, SINT32 * Rear, SINT32 * NoElement, UINT32 QueueSize, void *Qelement, void * data, COMLengthType len, MessageIdentifier msgid);
#if 0
#if (CATATYPE==LONGLONGTYPE)
extern BOOL InsertQueue(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT64 (* Element)[QUEUE_BUFFER_SIZE], UINT64 *, COMLengthType);
extern BOOL ReadQueue(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT64 (* Element)[QUEUE_BUFFER_SIZE], UINT64 *, COMLengthType);
#elif (CATATYPE==LONGTYPE)
extern BOOL InsertQueue(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT32 (* Element)[QUEUE_BUFFER_SIZE], UINT32 *, COMLengthType);
extern BOOL ReadQueue(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT32 (* Element)[QUEUE_BUFFER_SIZE], UINT32 *, COMLengthType);
#elif (CATATYPE==SHORTTYPE)
extern BOOL InsertQueue(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT16 (* Element)[QUEUE_BUFFER_SIZE], UINT16 *, COMLengthType);
extern BOOL ReadQueue(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT16 (* Element)[QUEUE_BUFFER_SIZE], UINT16 *, COMLengthType);
#elif (CATATYPE==CHARTYPE)
extern BOOL InsertQueue(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT8 (* Element)[QUEUE_BUFFER_SIZE], UINT8 *, COMLengthType);
extern BOOL ReadQueue(SINT32 *, SINT32 *, SINT32 *, UINT32, UINT8 (* Element)[QUEUE_BUFFER_SIZE], UINT8 *, COMLengthType);
#else 
#error code not present yet
#endif
#endif


#endif /* HEADER_COM_QUEUE */

