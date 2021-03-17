/**
 * @file spi.h

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
 * $Module: SPI             $
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
#ifndef SPI_H
#define SPI_H

#include "drivers_cfg.h"

/*##############################################################################
* Constant area
##############################################################################*/
/* File version information */
#define SPI_MAJOR_VERSION  1
#define SPI_MINOR_VERSION  0
#define SPI_PATCH_VERSION  0

#ifdef MCUPKG_EP100
#define MAX_SPI       3             /* Max SPI channels */
#endif
#ifdef MCUPKG_F512
#define MAX_SPI       2             /* Max SPI channels */
#endif

/**************** SPI memory map ***********************/
#define SPICR1 	            0x00       		/* SPI Control 1    */
#define SPICR2              0x01            /* SPI Control 2    */
#define SPIBR               0x02            /* SPI Baud Rate    */
#define SPISR               0x03            /* SPI Status       */
#define SPIDRH              0x04            /* SPI Data (High)  */
#define SPIDRL              0x05            /* SPI Data (Low)   */

/*##############################################################################
* Type area
##############################################################################*/
typedef enum
{
#ifdef MCUPKG_EP100
    SPI_0 = 0,
    SPI_1,
    SPI_2
#endif /* MCUPKG_EP100 */
#ifdef MCUPKG_F512
    SPI_0 = 0,
    SPI_1
#endif /* MCUPKG_F512 */
} spi_ch;

typedef enum
{
    SPI_MASTER = 0,
    SPI_SLAVE
} spi_sync_type;

/*##############################################################################
* Global variable area
##############################################################################*/

/*##############################################################################
* Global function declaration area
##############################################################################*/
extern void Spi_Init(spi_ch spi_num, spi_sync_type spi_mode);
extern UINT8 Spi_RecvChar(spi_ch spi_num, UINT16 *Chr);
extern UINT8 Spi_SendChar(spi_ch spi_num, UINT16 Chr);
extern void Spi_SetCallback(spi_ch spi_num, void (*fptr)(void));

#endif /* SPI_H */
