/**
 * @file startup.h

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
 * $Module: COM Startup Routine  @n	$
 * $Filename: startup.h	$
 * $Date: 2008.9.8 			$
 * $Rev: ver 1.2 			$
 * $Creator: Kim DongHyun	$
 * $Owner: Kim DongHyun 	$
 * $URL: www.etri.re.kr 	$
 *
 */

#ifndef HEADER_COM_STARTUP
#define HEADER_COM_STARTUP
#include "struct_type.h"
#include "external_service.h"

/* API Service Function */
#ifdef FEATURE_CCCA
extern StatusType StartCOM(COMApplicationModeType appmodetype);
extern StatusType StopCOM(COMShutdownModeType shutdownmodetype);
extern COMApplicationModeType GetCOMApplicationMode(void);
extern StatusType DefaultInitMessage(MessageIdentifier msgid);
extern StatusType InitMessage(MessageIdentifier msgid, ApplicationDataRef data);
#endif /* FEATURE_CCCA */

#ifdef FEATURE_CCC1
#error code not present yet
extern StatusType StartPeriodic(void);
extern StatusType StopPeriodic(void);

#endif /* FEATURE_CCC1 */

#endif /* HEADER_COM_STARTUP */

