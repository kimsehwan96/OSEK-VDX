/**
 * @file s12xf512.h
 * @section descr File description
 *
 * definition of MC9S12XF512.
 *
 * @section Copyright Copyright
 *
 * Copyright (c) 2008 Electronics and Telecommunications Research Institute
 * (ETRI) All Rights Reserved.
 *
 * Following acts are STRICTLY PROHIBITED except when a specific prior written
 * permission is obtained from ETRI or a separate written agreement with ETRI
 * stipulates such permission specifically:
 * a) Selling, distributing, sublicensing, renting, leasing, transmitting,
 *    redistributing or otherwise transferring this software to a third party;
 * b) Copying, transforming, modifying, creating any derivatives of, reverse
 *    engineering, decompiling, disassembling, translating, making any attempt
 *    to discover the source code of, the whole or part of this software in
 *    source or binary form;
 * c) Making any copy of the whole or part of this software other than one copy
 *    for backup purposes only; and
 * d) Using the name, trademark or logo of ETRI or the names of contributors
 *    in order to endorse or promote products derived from this software.
 *
 * This software is provided "AS IS," without a warranty of any kind. ALL
 * EXPRESS OR IMPLIED CONDITIONS, REPRESENTATIONS AND WARRANTIES, INCLUDING ANY
 * IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NON-INFRINGEMENT, ARE HEREBY EXCLUDED. IN NO EVENT WILL ETRI(OR ITS LICENSORS,
 * IF ANY) BE LIABLE FOR ANY LOST REVENUE, PROFIT OR DATA, OR FOR DIRECT,
 * INDIRECT, SPECIAL, CONSEQUENTIAL, INCIDENTAL OR PUNITIVE DAMAGES, HOWEVER
 * CAUSED AND REGARDLESS OF THE THEORY OF LIABILITY, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE USE OF OR INABILITY TO USE THIS SOFTWARE, EVEN IF ETRI
 * HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 *
 * Any permitted redistribution of this software must retain the copyright
 * notice, conditions, and disclaimer as specified above.
 *
 * @section infos File informations
 *
 * $System: ECO-OS          $
 * $Block:  Driver          $
 * $Module: MCU_F512_HEADER $
 * $Date: 2009.4.16         $
 * $Rev: ver 1.0.0          $
 * $Creator: Choi, Gwang Ho $
 * $Owner: Choi, Gwang Ho   $
 * $URL: www.etri.re.kr     $
 *
 */

/***************************************/
/* Example instantiation and use:      */
/*                                     */
/*  <REGISTER>.Bits.<BIT> = 1;         */
/*  <REGISTER>.Reg        = 0x01;      */
/*                                     */
/***************************************/

#ifndef S12XF512_H
#define S12XF512_H

#ifdef MCUPKG_F512

#include "compiler.h"

#ifdef CODEWARRIOR_COMPILER
#pragma MESSAGE DISABLE C1106 /* WARNING C1106: Non-standard bitfield type */
#endif

/* Types definition */
typedef unsigned char byte ;
typedef unsigned int word ;
typedef unsigned long dword ;
typedef unsigned long dlong[2] ;

typedef volatile unsigned int HCS12_REG ; /* Hardware register definition */

#define REG_BASE 0x00000000            /* Base address for the I/O register block */

/**************** registers I/O map ****************/
/*0x0000-0x0009 Port Integration Module (PIM) Map 1 of 6*/
/*0x0000 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PA7 :1 ;
        byte PA6 :1 ;
        byte PA5 :1 ;
        byte PA4 :1 ;
        byte PA3 :1 ;
        byte PA2 :1 ;
        byte PA1 :1 ;
        byte PA0 :1 ;
    } Bits ;
} PORTA_Tag ;
/*0x0001 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PB7 :1 ;
        byte PB6 :1 ;
        byte PB5 :1 ;
        byte PB4 :1 ;
        byte PB3 :1 ;
        byte PB2 :1 ;
        byte PB1 :1 ;
        byte PB0 :1 ;
    } Bits ;
} PORTB_Tag ;
/*0x0002 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRA7 :1 ;
        byte DDRA6 :1 ;
        byte DDRA5 :1 ;
        byte DDRA4 :1 ;
        byte DDRA3 :1 ;
        byte DDRA2 :1 ;
        byte DDRA1 :1 ;
        byte DDRA0 :1 ;
    } Bits ;
} DDRA_Tag ;
/*0x0003 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRB7 :1 ;
        byte DDRB6 :1 ;
        byte DDRB5 :1 ;
        byte DDRB4 :1 ;
        byte DDRB3 :1 ;
        byte DDRB2 :1 ;
        byte DDRB1 :1 ;
        byte DDRB0 :1 ;
    } Bits ;
} DDRB_Tag ;
/*0x0004 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PC7 :1 ;
        byte PC6 :1 ;
        byte PC5 :1 ;
        byte PC4 :1 ;
        byte PC3 :1 ;
        byte PC2 :1 ;
        byte PC1 :1 ;
        byte PC0 :1 ;
    } Bits ;
} PORTC_Tag ;
/*0x0005 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PD7 :1 ;
        byte PD6 :1 ;
        byte PD5 :1 ;
        byte PD4 :1 ;
        byte PD3 :1 ;
        byte PD2 :1 ;
        byte PD1 :1 ;
        byte PD0 :1 ;
    } Bits ;
} PORTD_Tag ;
/*0x0006 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRC7 :1 ;
        byte DDRC6 :1 ;
        byte DDRC5 :1 ;
        byte DDRC4 :1 ;
        byte DDRC3 :1 ;
        byte DDRC2 :1 ;
        byte DDRC1 :1 ;
        byte DDRC0 :1 ;
    } Bits ;
} DDRC_Tag ;
/*0x0007 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRD7 :1 ;
        byte DDRD6 :1 ;
        byte DDRD5 :1 ;
        byte DDRD4 :1 ;
        byte DDRD3 :1 ;
        byte DDRD2 :1 ;
        byte DDRD1 :1 ;
        byte DDRD0 :1 ;
    } Bits ;
} DDRD_Tag ;
/*0x0008 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PE7 :1 ;
        byte PE6 :1 ;
        byte PE5 :1 ;
        byte PE4 :1 ;
        byte PE3 :1 ;
        byte PE2 :1 ;
        byte PE1 :1 ;
        byte PE0 :1 ;
    } Bits ;
} PORTE_Tag ;
/*0x0009 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRE7 :1 ;
        byte DDRE6 :1 ;
        byte DDRE5 :1 ;
        byte DDRE4 :1 ;
        byte DDRE3 :1 ;
        byte DDRE2 :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} DDRE_Tag ;
/*0x000A-0x000B Module Mapping Control (S12XMMC) Map 1 of 2*/
/*0x000A */
typedef union
{
    byte Reg ;
    struct
    {
        byte CS3E1 :1 ;
        byte CS2E1 :1 ;
        byte CS1E1 :1 ;
        byte CS0E1 :1 ;
        byte CS3E0 :1 ;
        byte CS2E0 :1 ;
        byte CS1E0 :1 ;
        byte CS0E0 :1 ;
    } Bits ;
} MMCCTL0_Tag ;
/*0x000B */
typedef union
{
    byte Reg ;
    struct
    {
        byte MODC :1 ;
        byte MODB :1 ;
        byte MODA :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} MODE_Tag ;
/*0x000C-0x000D Port Integration Module (PIM) Map 2 of 6*/
/*0x000C */
typedef union
{
    byte Reg ;
    struct
    {
        byte PUPKE :1 ;
        byte BKPUE :1 ;
        byte :1 ;
        byte PUPEE :1 ;
        byte PUPDE :1 ;
        byte PUPCE :1 ;
        byte PUPBE :1 ;
        byte PUPAE :1 ;
    } Bits ;
} PUCR_Tag ;
/*0x000D */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDPK :1 ;
        byte :1 ;
        byte :1 ;
        byte RDPE :1 ;
        byte RDPD :1 ;
        byte RDPC :1 ;
        byte RDPB :1 ;
        byte RDPA :1 ;
    } Bits ;
} RDRIV_Tag ;
/*0x000E-0x000F External Bus Interface (S12XEBI) Map*/
/*0x000E */
typedef union
{
    byte Reg ;
    struct
    {
        byte ITHRS :1 ;
        byte :1 ;
        byte HDBE :1 ;
        byte ASIZ4 :1 ;
        byte ASIZ3 :1 ;
        byte ASIZ2 :1 ;
        byte ASIZ1 :1 ;
        byte ASIZ0 :1 ;
    } Bits ;
} EBICTL0_Tag ;
/*0x000F */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte EXSTR12 :1 ;
        byte EXSTR11 :1 ;
        byte EXSTR10 :1 ;
        byte :1 ;
        byte EXSTR02 :1 ;
        byte EXSTR01 :1 ;
        byte EXSTR00 :1 ;
    } Bits ;
} EBICTL1_Tag ;
/*0x0010-0x0017 Module Mapping Control (S12XMMC) Map 2 of 2*/
/*0x0010 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte GP6 :1 ;
        byte GP5 :1 ;
        byte GP4 :1 ;
        byte GP3 :1 ;
        byte GP2 :1 ;
        byte GP1 :1 ;
        byte GP0 :1 ;
    } Bits ;
} GPAGE_Tag ;
/*0x0011 */
typedef union
{
    byte Reg ;
    struct
    {
        byte GP15 :1 ;
        byte GP14 :1 ;
        byte GP13 :1 ;
        byte GP12 :1 ;
        byte GP11 :1 ;
        byte GP10 :1 ;
        byte GP9 :1 ;
        byte GP8 :1 ;
    } Bits ;
} DIRECT_Tag ;
/*0x0013 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TGMRAMON :1 ;
        byte MGROMON :1 ;
        byte EEEIFRON :1 ;
        byte PGMIFRON :1 ;
        byte RAMHM :1 ;
        byte EROMON :1 ;
        byte ROMHM :1 ;
        byte ROMON :1 ;
    } Bits ;
} MMCCTL1_Tag ;
/*0x0015 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PIX7 :1 ;
        byte PIX6 :1 ;
        byte PIX5 :1 ;
        byte PIX4 :1 ;
        byte PIX3 :1 ;
        byte PIX2 :1 ;
        byte PIX1 :1 ;
        byte PIX0 :1 ;
    } Bits ;
} PPAGE_Tag ;
/*0x0016 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RP7 :1 ;
        byte RP6 :1 ;
        byte RP5 :1 ;
        byte RP4 :1 ;
        byte RP3 :1 ;
        byte RP2 :1 ;
        byte RP1 :1 ;
        byte RP0 :1 ;
    } Bits ;
} RPAGE_Tag ;
/*0x0017 */
typedef union
{
    byte Reg ;
    struct
    {
        byte EP7 :1 ;
        byte EP6 :1 ;
        byte EP5 :1 ;
        byte EP4 :1 ;
        byte EP3 :1 ;
        byte EP2 :1 ;
        byte EP1 :1 ;
        byte EP0 :1 ;
    } Bits ;
} EPAGE_Tag ;
/*0x0018-0x001B Miscellaneous Peripheral*/
/*0x001C-0x001D Port Integration Module (PIM) Map 3 of 6*/
/*0x001C */
typedef union
{
    byte Reg ;
    struct
    {
        byte NECLK :1 ;
        byte NCLKX2 :1 ;
        byte DIV16 :1 ;
        byte EDIV4 :1 ;
        byte EDIV3 :1 ;
        byte EDIV2 :1 ;
        byte EDIV1 :1 ;
        byte EDIV0 :1 ;
    } Bits ;
} ECLKCTL_Tag ;
/*0x001E-0x001F Port Integration Module (PIM) Map 3 of 6*/
/*0x001E */
typedef union
{
    byte Reg ;
    struct
    {
        byte IRQE :1 ;
        byte IRQEN :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} IRQCR_Tag ;
/*0x0020-0x0027 Debug Module (S12XDBG) Map*/
/*0x0020 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ARM :1 ;
        byte TRIG :1 ;
        byte XGSBPE :1 ;
        byte BDM :1 ;
        byte DBGBRK :2 ;
        byte COMRV :2 ;
    } Bits ;
} DBGC1_Tag ;
/*0x0021 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TBF :1 ;
        byte EXTF :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte SSF2 :1 ;
        byte SSF1 :1 ;
        byte SSF0 :1 ;
    } Bits ;
} DBGSR_Tag ;
/*0x0022 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TSOURCE :2 ;
        byte TRANGE :2 ;
        byte TRCMOD :2 ;
        byte TALIGN :2 ;
    } Bits ;
} DBGTCR_Tag ;
/*0x0023 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte CDCM :2 ;
        byte ABCM :2 ;
    } Bits ;
} DBGC2_Tag ;
/*0x0024 */
typedef union
{
    byte Reg ;
    struct
    {
        byte Bit15 :1 ;
        byte Bit14 :1 ;
        byte Bit13 :1 ;
        byte Bit12 :1 ;
        byte Bit11 :1 ;
        byte Bit10 :1 ;
        byte Bit9 :1 ;
        byte Bit8 :1 ;
    } Bits ;
} DBGTBH_Tag ;
/*0x0025 */
typedef union
{
    byte Reg ;
    struct
    {
        byte Bit7 :1 ;
        byte Bit6 :1 ;
        byte Bit5 :1 ;
        byte Bit4 :1 ;
        byte Bit3 :1 ;
        byte Bit2 :1 ;
        byte Bit1 :1 ;
        byte Bit0 :1 ;
    } Bits ;
} DBGTBL_Tag ;
/*0x0026 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte CNT :7 ;
    } Bits ;
} DBGCNT_Tag ;
/*0x0027 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte SC3 :1 ;
        byte SC2 :1 ;
        byte SC1 :1 ;
        byte SC0 :1 ;
    } Bits ;
} DBGSCRX_Tag ;
/*0x0027 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte MC3 :1 ;
        byte MC2 :1 ;
        byte MC1 :1 ;
        byte MC0 :1 ;
    } Bits ;
} DBGMFR_Tag ;
/*0x0028 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte NDB :1 ;
        byte TAG :1 ;
        byte BRK :1 ;
        byte RW :1 ;
        byte RWE :1 ;
        byte SRC :1 ;
        byte COMPE :1 ;
    } Bits ;
} DBGXCTLH_Tag ;
/*0x0028 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SZE :1 ;
        byte SZ :1 ;
        byte TAG :1 ;
        byte BRK :1 ;
        byte RW :1 ;
        byte RWE :1 ;
        byte SRC :1 ;
        byte COMPE :1 ;
    } Bits ;
} DBGXCTLL_Tag ;
/*0x0029 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte BIT22 :1 ;
        byte BIT21 :1 ;
        byte BIT20 :1 ;
        byte BIT19 :1 ;
        byte BIT18 :1 ;
        byte BIT17 :1 ;
        byte BIT16 :1 ;
    } Bits ;
} DBGXAH_Tag ;
/*0x002A */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} DBGXAM_Tag ;
/*0x002B */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} DBGXAL_Tag ;
/*0x002C */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} DBGXDH_Tag ;
/*0x002D */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} DBGXDL_Tag ;
/*0x002E */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} DBGXDHM_Tag ;
/*0x002F */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} DBGXDLM_Tag ;
/*0x0030-0x0031 Reserved Register Space*/
/*0x0032-0x0033 Port Integration Module (PIM) Map 4 of 6*/
/*0x0032 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PK7 :1 ;
        byte PK6 :1 ;
        byte PK5 :1 ;
        byte PK4 :1 ;
        byte PK3 :1 ;
        byte PK2 :1 ;
        byte PK1 :1 ;
        byte PK0 :1 ;
    } Bits ;
} PORTK_Tag ;
/*0x0033 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRK7 :1 ;
        byte DDRK6 :1 ;
        byte DDRK5 :1 ;
        byte DDRK4 :1 ;
        byte DDRK3 :1 ;
        byte DDRK2 :1 ;
        byte DDRK1 :1 ;
        byte DDRK0 :1 ;
    } Bits ;
} DDRK_Tag ;
/*0x0034-0x003F Clock and Reset Generator (CRG) Map*/
/*0x0034 */
typedef union
{
    byte Reg ;
    struct
    {
        byte VCOFRQ1 :1 ;
        byte VCOFRQ0 :1 ;
        byte SYNDIV5 :1 ;
        byte SYNDIV4 :1 ;
        byte SYNDIV3 :1 ;
        byte SYNDIV2 :1 ;
        byte SYNDIV1 :1 ;
        byte SYNDIV0 :1 ;
    } Bits ;
} SYNR_Tag ;
/*0x0035 */
typedef union
{
    byte Reg ;
    struct
    {
        byte REFFRQ1 :1 ;
        byte REFFRQ0 :1 ;
        byte REFDIV :6 ;
    } Bits ;
} REFDV_Tag ;
/*0x0036 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte POSTDIV4 :1 ;
        byte POSTDIV3 :1 ;
        byte POSTDIV2 :1 ;
        byte POSTDIV1 :1 ;
        byte POSTDIV0 :1 ;
    } Bits ;
} POSTDIV_Tag ;
/*0x0037 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RTIF :1 ;
        byte PORF :1 ;
        byte LVRF :1 ;
        byte LOCKIF :1 ;
        byte LOCK :1 ;
        byte ILAF :1 ;
        byte SCMIF :1 ;
        byte SCM :1 ;
    } Bits ;
} CRGFLG_Tag ;
/*0x0038 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RTIE :1 ;
        byte :1 ;
        byte :1 ;
        byte LOCKIE :1 ;
        byte :1 ;
        byte :1 ;
        byte SCMIE :1 ;
        byte :1 ;
    } Bits ;
} CRGINT_Tag ;
/*0x0039 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PLLSEL :1 ;
        byte PSTP :1 ;
        byte XCLKS :1 ;
        byte :1 ;
        byte PLLWAI :1 ;
        byte :1 ;
        byte RTIWAI :1 ;
        byte COPWAI :1 ;
    } Bits ;
} CLKSEL_Tag ;
/*0x003A */
typedef union
{
    byte Reg ;
    struct
    {
        byte CME :1 ;
        byte PLLON :1 ;
        byte FM1 :1 ;
        byte FM0 :1 ;
        byte FSTWKP :1 ;
        byte PRE :1 ;
        byte PCE :1 ;
        byte SCME :1 ;
    } Bits ;
} PLLCTL_Tag ;
/*0x003B */
typedef union
{
    byte Reg ;
    struct
    {
        byte RTDEC :1 ;
        byte RTR6 :1 ;
        byte RTR5 :1 ;
        byte RTR4 :1 ;
        byte RTR3 :1 ;
        byte RTR2 :1 ;
        byte RTR1 :1 ;
        byte RTR0 :1 ;
    } Bits ;
} RTICTL_Tag ;
/*0x003C */
typedef union
{
    byte Reg ;
    struct
    {
        byte WCOP :1 ;
        byte RSBCK :1 ;
        byte WRTMASK :1 ;
        byte :1 ;
        byte :1 ;
        byte CR2 :1 ;
        byte CR1 :1 ;
        byte CR0 :1 ;
    } Bits ;
} COPCTL_Tag ;
/*0x003F */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ARMCOP_Tag ;
/*0x0040-0x007F Enhanced Capture Timer 16-Bit 8-Channels (ECT) Map (Sheet 1 of 3)*/
/*0x0040 */
typedef union
{
    byte Reg ;
    struct
    {
        byte IOS7 :1 ;
        byte IOS6 :1 ;
        byte IOS5 :1 ;
        byte IOS4 :1 ;
        byte IOS3 :1 ;
        byte IOS2 :1 ;
        byte IOS1 :1 ;
        byte IOS0 :1 ;
    } Bits ;
} ECT_TIOS_Tag ;
/*0x0041 */
typedef union
{
    byte Reg ;
    struct
    {
        byte FOC7 :1 ;
        byte FOC6 :1 ;
        byte FOC5 :1 ;
        byte FOC4 :1 ;
        byte FOC3 :1 ;
        byte FOC2 :1 ;
        byte FOC1 :1 ;
        byte FOC0 :1 ;
    } Bits ;
} ECT_CFORC_Tag ;
/*0x0042 */
typedef union
{
    byte Reg ;
    struct
    {
        byte OC7M7 :1 ;
        byte OC7M6 :1 ;
        byte OC7M5 :1 ;
        byte OC7M4 :1 ;
        byte OC7M3 :1 ;
        byte OC7M2 :1 ;
        byte OC7M1 :1 ;
        byte OC7M0 :1 ;
    } Bits ;
} ECT_OC7M_Tag ;
/*0x0043 */
typedef union
{
    byte Reg ;
    struct
    {
        byte OC7D7 :1 ;
        byte OC7D6 :1 ;
        byte OC7D5 :1 ;
        byte OC7D4 :1 ;
        byte OC7D3 :1 ;
        byte OC7D2 :1 ;
        byte OC7D1 :1 ;
        byte OC7D0 :1 ;
    } Bits ;
} ECT_OC7D_Tag ;
/*0x0044 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TCNT15 :1 ;
        byte TCNT14 :1 ;
        byte TCNT13 :1 ;
        byte TCNT12 :1 ;
        byte TCNT11 :1 ;
        byte TCNT10 :1 ;
        byte TCNT9 :1 ;
        byte TCNT8 :1 ;
    } Bits ;
} ECT_TCNTH_Tag ;
/*0x0045 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TCNT7 :1 ;
        byte TCNT6 :1 ;
        byte TCNT5 :1 ;
        byte TCNT4 :1 ;
        byte TCNT3 :1 ;
        byte TCNT2 :1 ;
        byte TCNT1 :1 ;
        byte TCNT0 :1 ;
    } Bits ;
} ECT_TCNTL_Tag ;
/*0x0046 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TEN :1 ;
        byte TSWAI :1 ;
        byte TSFRZ :1 ;
        byte TFFCA :1 ;
        byte PRNT :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} ECT_TSCR1_Tag ;
/*0x0047 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TOV7 :1 ;
        byte TOV6 :1 ;
        byte TOV5 :1 ;
        byte TOV4 :1 ;
        byte TOV3 :1 ;
        byte TOV2 :1 ;
        byte TOV1 :1 ;
        byte TOV0 :1 ;
    } Bits ;
} ECT_TTOV ;

/*0x0048 */
typedef union
{
    byte Reg ;
    struct
    {
        byte OM7 :1 ;
        byte OL7 :1 ;
        byte OM6 :1 ;
        byte OL6 :1 ;
        byte OM5 :1 ;
        byte OL5 :1 ;
        byte OM4 :1 ;
        byte OL4 :1 ;
    } Bits ;
} ECT_TCTL1_Tag ;
/*0x0049 */
typedef union
{
    byte Reg ;
    struct
    {
        byte OM3 :1 ;
        byte OL3 :1 ;
        byte OM2 :1 ;
        byte OL2 :1 ;
        byte OM1 :1 ;
        byte OL1 :1 ;
        byte OM0 :1 ;
        byte OL0 :1 ;
    } Bits ;
} ECT_TCTL2_Tag ;
/*0x004A */
typedef union
{
    byte Reg ;
    struct
    {
        byte EDG7B :1 ;
        byte EDG7A :1 ;
        byte EDG6B :1 ;
        byte EDG6A :1 ;
        byte EDG5B :1 ;
        byte EDG5A :1 ;
        byte EDG4B :1 ;
        byte EDG4A :1 ;
    } Bits ;
} ECT_TCTL3_Tag ;
/*0x004B */
typedef union
{
    byte Reg ;
    struct
    {
        byte EDG3B :1 ;
        byte EDG3A :1 ;
        byte EDG2B :1 ;
        byte EDG2A :1 ;
        byte EDG1B :1 ;
        byte EDG1A :1 ;
        byte EDG0B :1 ;
        byte EDG0A :1 ;
    } Bits ;
} ECT_TCTL4_Tag ;
/*0x004C */
typedef union
{
    byte Reg ;
    struct
    {
        byte C7I :1 ;
        byte C6I :1 ;
        byte C5I :1 ;
        byte C4I :1 ;
        byte C3I :1 ;
        byte C2I :1 ;
        byte C1I :1 ;
        byte C0I :1 ;
    } Bits ;
} ECT_TIE_Tag ;
/*0x004D */
typedef union
{
    byte Reg ;
    struct
    {
        byte TOI :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte TCRE :1 ;
        byte PR2 :1 ;
        byte PR1 :1 ;
        byte PR0 :1 ;
    } Bits ;
} ECT_TSCR2_Tag ;
/*0x004E */
typedef union
{
    byte Reg ;
    struct
    {
        byte C7F :1 ;
        byte C6F :1 ;
        byte C5F :1 ;
        byte C4F :1 ;
        byte C3F :1 ;
        byte C2F :1 ;
        byte C1F :1 ;
        byte C0F :1 ;
    } Bits ;
} ECT_TFLG1_Tag ;
/*0x004F */
typedef union
{
    byte Reg ;
    struct
    {
        byte TOF :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} ECT_TFLG2_Tag ;
/*0x0050 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ECT_TC0H_Tag ;
/*0x0051 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ECT_TC0L_Tag ;
/*0x0052 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ECT_TC1H_Tag ;
/*0x0053 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ECT_TC1L_Tag ;
/*0x0054 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ECT_TC2H_Tag ;
/*0x0055 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ECT_TC2L_Tag ;
/*0x0056 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ECT_TC3H_Tag ;
/*0x0057 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ECT_TC3L_Tag ;
/*0x0058 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ECT_TC4H_Tag ;
/*0x0059 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ECT_TC4L_Tag ;
/*0x005A */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ECT_TC5H_Tag ;
/*0x005B */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ECT_TC5L_Tag ;
/*0x005C */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ECT_TC6H_Tag ;
/*0x005D */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ECT_TC6L_Tag ;
/*0x005E */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ECT_TC7H_Tag ;
/*0x005F */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ECT_TC7L_Tag ;
/*0x0060 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte PAEN :1 ;
        byte PAMOD :1 ;
        byte PEDGE :1 ;
        byte CLK1 :1 ;
        byte CLK0 :1 ;
        byte PAOVI :1 ;
        byte PAI :1 ;
    } Bits ;
} ECT_PACTL_Tag ;
/*0x0061 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PAOVF :1 ;
        byte PAIF :1 ;
    } Bits ;
} ECT_PAFLG_Tag ;
/*0x0062 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PACNT7 :1 ;
        byte PACNT6 :1 ;
        byte PACNT5 :1 ;
        byte PACNT4 :1 ;
        byte PACNT3 :1 ;
        byte PACNT2 :1 ;
        byte PACNT1 :1 ;
        byte PACNT0 :1 ;
    } Bits ;
} ECT_PACN3_Tag ;
/*0x0063 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PACNT7 :1 ;
        byte PACNT6 :1 ;
        byte PACNT5 :1 ;
        byte PACNT4 :1 ;
        byte PACNT3 :1 ;
        byte PACNT2 :1 ;
        byte PACNT1 :1 ;
        byte PACNT0 :1 ;
    } Bits ;
} ECT_PACN2_Tag ;
/*0x0064 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PACNT7 :1 ;
        byte PACNT6 :1 ;
        byte PACNT5 :1 ;
        byte PACNT4 :1 ;
        byte PACNT3 :1 ;
        byte PACNT2 :1 ;
        byte PACNT1 :1 ;
        byte PACNT0 :1 ;
    } Bits ;
} ECT_PACN1_Tag ;
/*0x0065 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PACNT7 :1 ;
        byte PACNT6 :1 ;
        byte PACNT5 :1 ;
        byte PACNT4 :1 ;
        byte PACNT3 :1 ;
        byte PACNT2 :1 ;
        byte PACNT1 :1 ;
        byte PACNT0 :1 ;
    } Bits ;
} ECT_PACN0_Tag ;
/*0x0066 */
typedef union
{
    byte Reg ;
    struct
    {
        byte MCZI :1 ;
        byte MODMC :1 ;
        byte RDMCL :1 ;
        byte ICLAT :1 ;
        byte FLMC :1 ;
        byte MCEN :1 ;
        byte MCPR1 :1 ;
        byte MCPR0 :1 ;
    } Bits ;
} ECT_MCCTL_Tag ;
/*0x0067 */
typedef union
{
    byte Reg ;
    struct
    {
        byte MCZF :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte POLF3 :1 ;
        byte POLF2 :1 ;
        byte POLF1 :1 ;
        byte POLF0 :1 ;
    } Bits ;
} ECT_MCFLG_Tag ;
/*0x0068 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PA3EN :1 ;
        byte PA2EN :1 ;
        byte PA1EN :1 ;
        byte PA0EN :1 ;
    } Bits ;
} ECT_ICPAR_Tag ;
/*0x0069 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DLY7 :1 ;
        byte DLY6 :1 ;
        byte DLY5 :1 ;
        byte DLY4 :1 ;
        byte DLY3 :1 ;
        byte DLY2 :1 ;
        byte DLY1 :1 ;
        byte DLY0 :1 ;
    } Bits ;
} ECT_DLYCT_Tag ;
/*0x006A */
typedef union
{
    byte Reg ;
    struct
    {
        byte NOVW7 :1 ;
        byte NOVW6 :1 ;
        byte NOVW5 :1 ;
        byte NOVW4 :1 ;
        byte NOVW3 :1 ;
        byte NOVW2 :1 ;
        byte NOVW1 :1 ;
        byte NOVW0 :1 ;
    } Bits ;
} ECT_ICOVW_Tag ;
/*0x006B */
typedef union
{
    byte Reg ;
    struct
    {
        byte SH37 :1 ;
        byte SH26 :1 ;
        byte SH15 :1 ;
        byte SH04 :1 ;
        byte TFMOD :1 ;
        byte PACMX :1 ;
        byte BUFEN :1 ;
        byte LATQ :1 ;
    } Bits ;
} ECT_ICSYS_Tag ;
/*0x006C */
typedef union
{
    byte Reg ;
    struct
    {
        byte OCPD7 :1 ;
        byte OCPD6 :1 ;
        byte OCPD5 :1 ;
        byte OCPD4 :1 ;
        byte OCPD3 :1 ;
        byte OCPD2 :1 ;
        byte OCPD1 :1 ;
        byte OCPD0 :1 ;
    } Bits ;
} ECT_OCPD_Tag ;
/*0x006E */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTPS7 :1 ;
        byte PTPS6 :1 ;
        byte PTPS5 :1 ;
        byte PTPS4 :1 ;
        byte PTPS3 :1 ;
        byte PTPS2 :1 ;
        byte PTPS1 :1 ;
        byte PTPS0 :1 ;
    } Bits ;
} ECT_PTPSR_Tag ;
/*0x006F */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTMPS7 :1 ;
        byte PTMPS6 :1 ;
        byte PTMPS5 :1 ;
        byte PTMPS4 :1 ;
        byte PTMPS3 :1 ;
        byte PTMPS2 :1 ;
        byte PTMPS1 :1 ;
        byte PTMPS0 :1 ;
    } Bits ;
} ECT_PTMCPSR_Tag ;
/*0x0070 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte PBEN :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PBOVI :1 ;
        byte :1 ;
    } Bits ;
} ECT_PBCTL_Tag ;
/*0x0071 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PBOVF :1 ;
        byte :1 ;
    } Bits ;
} ECT_PBFLG_Tag ;
/*0x0072 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PA3H7 :1 ;
        byte PA3H6 :1 ;
        byte PA3H5 :1 ;
        byte PA3H4 :1 ;
        byte PA3H3 :1 ;
        byte PA3H2 :1 ;
        byte PA3H1 :1 ;
        byte PA3H0 :1 ;
    } Bits ;
} ECT_PA3H_Tag ;
/*0x0073 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PA2H7 :1 ;
        byte PA2H6 :1 ;
        byte PA2H5 :1 ;
        byte PA2H4 :1 ;
        byte PA2H3 :1 ;
        byte PA2H2 :1 ;
        byte PA2H1 :1 ;
        byte PA2H0 :1 ;
    } Bits ;
} ECT_PA2H_Tag ;
/*0x0074 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PA1H7 :1 ;
        byte PA1H6 :1 ;
        byte PA1H5 :1 ;
        byte PA1H4 :1 ;
        byte PA1H3 :1 ;
        byte PA1H2 :1 ;
        byte PA1H1 :1 ;
        byte PA1H0 :1 ;
    } Bits ;
} ECT_PA1H_Tag ;
/*0x0075 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PA0H7 :1 ;
        byte PA0H6 :1 ;
        byte PA0H5 :1 ;
        byte PA0H4 :1 ;
        byte PA0H3 :1 ;
        byte PA0H2 :1 ;
        byte PA0H1 :1 ;
        byte PA0H0 :1 ;
    } Bits ;
} ECT_PA0H_Tag ;
/*0x0076 */
typedef union
{
    byte Reg ;
    struct
    {
        byte MCCNT15 :1 ;
        byte MCCNT14 :1 ;
        byte MCCNT13 :1 ;
        byte MCCNT12 :1 ;
        byte MCCNT11 :1 ;
        byte MCCNT10 :1 ;
        byte MCCNT9 :1 ;
        byte MCCNT8 :1 ;
    } Bits ;
} ECT_MCCNTH_Tag ;
/*0x0077 */
typedef union
{
    byte Reg ;
    struct
    {
        byte MCCNT7 :1 ;
        byte MCCNT6 :1 ;
        byte MCCNT5 :1 ;
        byte MCCNT4 :1 ;
        byte MCCNT3 :1 ;
        byte MCCNT2 :1 ;
        byte MCCNT1 :1 ;
        byte MCCNT0 :1 ;
    } Bits ;
} ECT_MCCNTL_Tag ;
/*0x0078 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TC15 :1 ;
        byte TC14 :1 ;
        byte TC13 :1 ;
        byte TC12 :1 ;
        byte TC11 :1 ;
        byte TC10 :1 ;
        byte TC9 :1 ;
        byte TC8 :1 ;
    } Bits ;
} ECT_TC0HH_Tag ;
/*0x0079 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TC7 :1 ;
        byte TC6 :1 ;
        byte TC5 :1 ;
        byte TC4 :1 ;
        byte TC3 :1 ;
        byte TC2 :1 ;
        byte TC1 :1 ;
        byte TC0 :1 ;
    } Bits ;
} ECT_TC0HL_Tag ;
/*0x007A */
typedef union
{
    byte Reg ;
    struct
    {
        byte TC15 :1 ;
        byte TC14 :1 ;
        byte TC13 :1 ;
        byte TC12 :1 ;
        byte TC11 :1 ;
        byte TC10 :1 ;
        byte TC9 :1 ;
        byte TC8 :1 ;
    } Bits ;
} ECT_TC1HH_Tag ;
/*0x007B */
typedef union
{
    byte Reg ;
    struct
    {
        byte TC7 :1 ;
        byte TC6 :1 ;
        byte TC5 :1 ;
        byte TC4 :1 ;
        byte TC3 :1 ;
        byte TC2 :1 ;
        byte TC1 :1 ;
        byte TC0 :1 ;
    } Bits ;
} ECT_TC1HL_Tag ;
/*0x007C */
typedef union
{
    byte Reg ;
    struct
    {
        byte TC15 :1 ;
        byte TC14 :1 ;
        byte TC13 :1 ;
        byte TC12 :1 ;
        byte TC11 :1 ;
        byte TC10 :1 ;
        byte TC9 :1 ;
        byte TC8 :1 ;
    } Bits ;
} ECT_TC2HH_Tag ;
/*0x007D */
typedef union
{
    byte Reg ;
    struct
    {
        byte TC7 :1 ;
        byte TC6 :1 ;
        byte TC5 :1 ;
        byte TC4 :1 ;
        byte TC3 :1 ;
        byte TC2 :1 ;
        byte TC1 :1 ;
        byte TC0 :1 ;
    } Bits ;
} ECT_TC2HL_Tag ;
/*0x007E */
typedef union
{
    byte Reg ;
    struct
    {
        byte TC15 :1 ;
        byte TC14 :1 ;
        byte TC13 :1 ;
        byte TC12 :1 ;
        byte TC11 :1 ;
        byte TC10 :1 ;
        byte TC9 :1 ;
        byte TC8 :1 ;
    } Bits ;
} ECT_TC3HH_Tag ;
/*0x007F */
typedef union
{
    byte Reg ;
    struct
    {
        byte TC7 :1 ;
        byte TC6 :1 ;
        byte TC5 :1 ;
        byte TC4 :1 ;
        byte TC3 :1 ;
        byte TC2 :1 ;
        byte TC1 :1 ;
        byte TC0 :1 ;
    } Bits ;
} ECT_TC3HL_Tag ;
/*0x0080.0x00AF Analog-to-Digital Converter 12-bit 16-Channels (ATD) Map (Sheet 1 of 3) */
/*0x0080 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte WRAP3 :1 ;
        byte WRAP2 :1 ;
        byte WRAP1 :1 ;
        byte WRAP0 :1 ;
    } Bits ;
} ATDCTL0_Tag ;
/*0x0081 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ETRIGSEL :1 ;
        byte SRES1 :1 ;
        byte SRES0 :1 ;
        byte SMP_DIS :1 ;
        byte ETRIGCH3 :1 ;
        byte ETRIGCH2 :1 ;
        byte ETRIGCH1 :1 ;
        byte ETRIGCH0 :1 ;
    } Bits ;
} ATDCTL1_Tag ;
/*0x0082 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte AFFC :1 ;
        byte ICLKSTP :1 ;
        byte ETRIGLE :1 ;
        byte ETRIGP :1 ;
        byte ETRIGE :1 ;
        byte ASCIE :1 ;
        byte ACMPIE :1 ;
    } Bits ;
} ATDCTL2_Tag ;
/*0x0083 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DJM :1 ;
        byte S8C :1 ;
        byte S4C :1 ;
        byte S2C :1 ;
        byte S1C :1 ;
        byte FIFO :1 ;
        byte FRZ1 :1 ;
        byte FRZ0 :1 ;
    } Bits ;
} ATDCTL3_Tag ;
/*0x0084 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SMP2 :1 ;
        byte SMP1 :1 ;
        byte SMP0 :1 ;
        byte PRS4 :1 ;
        byte PRS3 :1 ;
        byte PRS2 :1 ;
        byte PRS1 :1 ;
        byte PRS0 :1 ;
    } Bits ;
} ATDCTL4_Tag ;
/*0x0085 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte SC :1 ;
        byte SCAN :1 ;
        byte MULT :1 ;
        byte CD :1 ;
        byte CC :1 ;
        byte CB :1 ;
        byte CA :1 ;
    } Bits ;
} ATDCTL5_Tag ;
/*0x0086 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SCF :1 ;
        byte :1 ;
        byte ETORF :1 ;
        byte FIFOR :1 ;
        byte CC3 :1 ;
        byte CC2 :1 ;
        byte CC1 :1 ;
        byte CC0 :1 ;
    } Bits ;
} ATDSTAT0_Tag ;
/*0x0088 */
typedef union
{
    byte Reg ;
    struct
    {
        byte CMPE15 :1 ;
        byte CMPE14 :1 ;
        byte CMPE13 :1 ;
        byte CMPE12 :1 ;
        byte CMPE11 :1 ;
        byte CMPE10 :1 ;
        byte CMPE9 :1 ;
        byte CMPE8 :1 ;
    } Bits ;
} ATDCMPEH_Tag ;
/*0x0089 */
typedef union
{
    byte Reg ;
    struct
    {
        byte CMPE7 :1 ;
        byte CMPE6 :1 ;
        byte CMPE5 :1 ;
        byte CMPE4 :1 ;
        byte CMPE3 :1 ;
        byte CMPE2 :1 ;
        byte CMPE1 :1 ;
        byte CMPE0 :1 ;
    } Bits ;
} ATDCMPEL_Tag ;
/*0x008A */
typedef union
{
    byte Reg ;
    struct
    {
        byte CCF15 :1 ;
        byte CCF14 :1 ;
        byte CCF13 :1 ;
        byte CCF12 :1 ;
        byte CCF11 :1 ;
        byte CCF10 :1 ;
        byte CCF9 :1 ;
        byte CCF8 :1 ;
    } Bits ;
} ATDSTAT2H_Tag ;
/*0x008B */
typedef union
{
    byte Reg ;
    struct
    {
        byte CCF7 :1 ;
        byte CCF6 :1 ;
        byte CCF5 :1 ;
        byte CCF4 :1 ;
        byte CCF3 :1 ;
        byte CCF2 :1 ;
        byte CCF1 :1 ;
        byte CCF0 :1 ;
    } Bits ;
} ATDSTATL_Tag ;
/*0x008C */
typedef union
{
    byte Reg ;
    struct
    {
        byte IEN15 :1 ;
        byte IEN14 :1 ;
        byte IEN13 :1 ;
        byte IEN12 :1 ;
        byte IEN11 :1 ;
        byte IEN10 :1 ;
        byte IEN9 :1 ;
        byte IEN8 :1 ;
    } Bits ;
} ATDDIENH_Tag ;
/*0x008D */
typedef union
{
    byte Reg ;
    struct
    {
        byte IEN7 :1 ;
        byte IEN6 :1 ;
        byte IEN5 :1 ;
        byte IEN4 :1 ;
        byte IEN3 :1 ;
        byte IEN2 :1 ;
        byte IEN1 :1 ;
        byte IEN0 :1 ;
    } Bits ;
} ATDDIENL_Tag ;
/*0x008E */
typedef union
{
    byte Reg ;
    struct
    {
        byte CMPHT15 :1 ;
        byte CMPHT14 :1 ;
        byte CMPHT13 :1 ;
        byte CMPHT12 :1 ;
        byte CMPHT11 :1 ;
        byte CMPHT10 :1 ;
        byte CMPHT9 :1 ;
        byte CMPHT8 :1 ;
    } Bits ;
} ATDCMPHTH_Tag ;
/*0x008F */
typedef union
{
    byte Reg ;
    struct
    {
        byte CMPHT7 :1 ;
        byte CMPHT6 :1 ;
        byte CMPHT5 :1 ;
        byte CMPHT4 :1 ;
        byte CMPHT3 :1 ;
        byte CMPHT2 :1 ;
        byte CMPHT1 :1 ;
        byte CMPHT0 :1 ;
    } Bits ;
} ATDCMPHTL_Tag ;
/*0x0090 */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR0_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR0H_Tag ;
/*0x0091 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR0L_Tag ;
/*0x0092 */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR1_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR1H_Tag ;
/*0x0093 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR1L_Tag ;
/*0x0094 */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR2_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR2H_Tag ;
/*0x0095 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR2L_Tag ;
/*0x0096 */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR3_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR3H_Tag ;
/*0x0097 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR3L_Tag ;
/*0x0098 */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR4_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR4H_Tag ;
/*0x0099 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR4L_Tag ;
/*0x009A */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR5_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR5H_Tag ;
/*0x009B */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR5L_Tag ;
/*0x009C */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR6_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR6H_Tag ;
/*0x009D */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR6L_Tag ;
/*0x009E */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR7_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR7H_Tag ;
/*0x009F */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR7L_Tag ;
/*0x00A0 */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR8_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR8H_Tag ;
/*0x00A1 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR8L_Tag ;
/*0x00A2 */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR9_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR9H_Tag ;
/*0x00A3 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR9L_Tag ;
/*0x00A4 */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR10_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR10H_Tag ;
/*0x00A5 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR10L_Tag ;
/*0x00A6 */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR11_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR11H_Tag ;
/*0x00A7 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR11L_Tag ;
/*0x00A8 */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR12_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR12H_Tag ;
/*0x00A9 */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR12L_Tag ;
/*0x00AA */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR13_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR13H_Tag ;
/*0x00AB */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR13L_Tag ;
/*0x00AC */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR14_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR14H_Tag ;
/*0x00AD */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR14L_Tag ;
/*0x00AE */
typedef union
{
    word Reg ;
    struct
    {
        word BIT15 :1 ;
        word BIT14 :1 ;
        word BIT13 :1 ;
        word BIT12 :1 ;
        word BIT11 :1 ;
        word BIT10 :1 ;
        word BIT9 :1 ;
        word BIT8 :1 ;
        word BIT7 :1 ;
        word BIT6 :1 ;
        word BIT5 :1 ;
        word BIT4 :1 ;
        word BIT3 :1 ;
        word BIT2 :1 ;
        word BIT1 :1 ;
        word BIT0 :1 ;
    } Bits ;
} ATDDR15_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT15 :1 ;
        byte BIT14 :1 ;
        byte BIT13 :1 ;
        byte BIT12 :1 ;
        byte BIT11 :1 ;
        byte BIT10 :1 ;
        byte BIT9 :1 ;
        byte BIT8 :1 ;
    } Bits ;
} ATDDR15H_Tag ;
/*0x00AF */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT7 :1 ;
        byte BIT6 :1 ;
        byte BIT5 :1 ;
        byte BIT4 :1 ;
        byte BIT3 :1 ;
        byte BIT2 :1 ;
        byte BIT1 :1 ;
        byte BIT0 :1 ;
    } Bits ;
} ATDDR15L_Tag ;

/*0x00C8-0x00CF Asynchronous Serial Interface (SCI0) Map*/
/*0x00C8 */
typedef union
{
    byte Reg ;
    struct
    {
        byte IREN :1 ;
        byte TNP1 :1 ;
        byte TNP0 :1 ;
        byte SBR12 :1 ;
        byte SBR11 :1 ;
        byte SBR10 :1 ;
        byte SBR9 :1 ;
        byte SBR8 :1 ;
    } Bits ;
} SCI0BDH_Tag ;
/*0x00C9 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SBR7 :1 ;
        byte SBR6 :1 ;
        byte SBR5 :1 ;
        byte SBR4 :1 ;
        byte SBR3 :1 ;
        byte SBR2 :1 ;
        byte SBR1 :1 ;
        byte SBR0 :1 ;
    } Bits ;
} SCI0BDL_Tag ;
/*0x00CA */
typedef union
{
    byte Reg ;
    struct
    {
        byte LOOPS :1 ;
        byte SCISWAI :1 ;
        byte RSRC :1 ;
        byte M :1 ;
        byte WAKE :1 ;
        byte ILT :1 ;
        byte PE :1 ;
        byte PT :1 ;
    } Bits ;
} SCI0CR1_Tag ;
/*0x00C8 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RXEDGIF :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte BERRV :1 ;
        byte BERRIF :1 ;
        byte BKDIF :1 ;
    } Bits ;
} SCI0ASR1_Tag ;
/*0x00C9 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RXEDGIE :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte BERRIE :1 ;
        byte BKDIE :1 ;
    } Bits ;
} SCI0ACR1_Tag ;
/*0x00CA */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte BERRM1 :1 ;
        byte BERRM0 :1 ;
        byte BKDFE :1 ;
    } Bits ;
} SCI0ACR2_Tag ;
/*0x00CB */
typedef union
{
    byte Reg ;
    struct
    {
        byte TIE :1 ;
        byte TCIE :1 ;
        byte RIE :1 ;
        byte ILIE :1 ;
        byte TE :1 ;
        byte RE :1 ;
        byte RWU :1 ;
        byte SBK :1 ;
    } Bits ;
} SCI0CR2_Tag ;
/*0x00CC */
typedef union
{
    byte Reg ;
    struct
    {
        byte TDRE :1 ;
        byte TC :1 ;
        byte RDRF :1 ;
        byte IDLE :1 ;
        byte OR :1 ;
        byte NF :1 ;
        byte FE :1 ;
        byte PF :1 ;
    } Bits ;
} SCI0SR1_Tag ;
/*0x00CD */
typedef union
{
    byte Reg ;
    struct
    {
        byte AMAP :1 ;
        byte :1 ;
        byte :1 ;
        byte TXPOL :1 ;
        byte RXPOL :1 ;
        byte BRK13 :1 ;
        byte TXDIR :1 ;
        byte RAF :1 ;
    } Bits ;
} SCI0SC6_Tag ;
/*0x00CE */
typedef union
{
    byte Reg ;
    struct
    {
        byte R8 :1 ;
        byte T8 :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} SCI0DRH_Tag ;
/*0x00CF */
typedef union
{
    byte Reg ;
    struct
    {
        byte R7T7 :1 ;
        byte R6T6 :1 ;
        byte R5T5 :1 ;
        byte R4T4 :1 ;
        byte R3T3 :1 ;
        byte R2T2 :1 ;
        byte R1T1 :1 ;
        byte R0T0 :1 ;
    } Bits ;
} SCI0DRL_Tag ;
/*0x00D0-0x00D7 Asynchronous Serial Interface (SCI1) Map*/
/*0x00D0 */
typedef union
{
    byte Reg ;
    struct
    {
        byte IREN :1 ;
        byte TNP1 :1 ;
        byte TNP0 :1 ;
        byte SBR12 :1 ;
        byte SBR11 :1 ;
        byte SBR10 :1 ;
        byte SBR9 :1 ;
        byte SBR8 :1 ;
    } Bits ;
} SCI1BDH_Tag ;
/*0x00D1 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SBR7 :1 ;
        byte SBR6 :1 ;
        byte SBR5 :1 ;
        byte SBR4 :1 ;
        byte SBR3 :1 ;
        byte SBR2 :1 ;
        byte SBR1 :1 ;
        byte SBR0 :1 ;
    } Bits ;
} SCI1BDL_Tag ;
/*0x00D2 */
typedef union
{
    byte Reg ;
    struct
    {
        byte LOOPS :1 ;
        byte SCISWAI :1 ;
        byte RSRC :1 ;
        byte M :1 ;
        byte WAKE :1 ;
        byte ILT :1 ;
        byte PE :1 ;
        byte PT :1 ;
    } Bits ;
} SCI1CR1_Tag ;
/*0x00D0 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RXEDGIF :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte BERRV :1 ;
        byte BERRIF :1 ;
        byte BKDIF :1 ;
    } Bits ;
} SCI1ASR1_Tag ;
/*0x00D1 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RXEDGIE :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte BERRIE :1 ;
        byte BKDIE :1 ;
    } Bits ;
} SCI1ACR1_Tag ;
/*0x00D2 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte BERRM1 :1 ;
        byte BERRM0 :1 ;
        byte BKDFE :1 ;
    } Bits ;
} SCI1ACR2_Tag ;
/*0x00D3 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TIE :1 ;
        byte TCIE :1 ;
        byte RIE :1 ;
        byte ILIE :1 ;
        byte TE :1 ;
        byte RE :1 ;
        byte RWU :1 ;
        byte SBK :1 ;
    } Bits ;
} SCI1CR2_Tag ;
/*0x00D4 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TDRE :1 ;
        byte TC :1 ;
        byte RDRF :1 ;
        byte IDLE :1 ;
        byte OR :1 ;
        byte NF :1 ;
        byte FE :1 ;
        byte PF :1 ;
    } Bits ;
} SCI1SR1_Tag ;
/*0x00D5 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AMAP :1 ;
        byte :1 ;
        byte :1 ;
        byte TXPOL :1 ;
        byte RXPOL :1 ;
        byte BRK13 :1 ;
        byte TXDIR :1 ;
        byte RAF :1 ;
    } Bits ;
} SCI1SC6_Tag ;
/*0x00D6 */
typedef union
{
    byte Reg ;
    struct
    {
        byte R8 :1 ;
        byte T8 :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} SCI1DRH_Tag ;
/*0x00D7 */
typedef union
{
    byte Reg ;
    struct
    {
        byte R7T7 :1 ;
        byte R6T6 :1 ;
        byte R5T5 :1 ;
        byte R4T4 :1 ;
        byte R3T3 :1 ;
        byte R2T2 :1 ;
        byte R1T1 :1 ;
        byte R0T0 :1 ;
    } Bits ;
} SCI1DRL_Tag ;
/*0x00D8-0x00DF Serial Peripheral Interface (SPI0) Map*/
/*0x00D8 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SPIE :1 ;
        byte SPE :1 ;
        byte SPTIE :1 ;
        byte MSTR :1 ;
        byte CPOL :1 ;
        byte CPHA :1 ;
        byte SSOE :1 ;
        byte LSBFE :1 ;
    } Bits ;
} SPI0CR1_Tag ;
/*0x00D9 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte XFRW :1 ;
        byte :1 ;
        byte MODFEN :1 ;
        byte BIDIROE :1 ;
        byte :1 ;
        byte SPISWAI :1 ;
        byte SPC0 :1 ;
    } Bits ;
} SPI0CR2_Tag ;
/*0x00DA */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte SPPR0 :1 ;
        byte SPPR1 :1 ;
        byte SPPR2 :1 ;
        byte :1 ;
        byte SPR0 :1 ;
        byte SPR1 :1 ;
        byte SPR2 :1 ;
    } Bits ;
} SPI0BR_Tag ;
/*0x00DB */
typedef union
{
    byte Reg ;
    struct
    {
        byte SPIF :1 ;
        byte :1 ;
        byte SPTEF :1 ;
        byte MODF :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} SPI0SR_Tag ;
/*0x00DC */
typedef union
{
    word Reg ;
    struct
    {
        byte R15T15 :1 ;
        byte R14T14 :1 ;
        byte R13T13 :1 ;
        byte R12T12 :1 ;
        byte R11T11 :1 ;
        byte R10T10 :1 ;
        byte R9T9 :1 ;
        byte R8T8 :1 ;
        byte R7T7 :1 ;
        byte R6T6 :1 ;
        byte R5T5 :1 ;
        byte R4T4 :1 ;
        byte R3T3 :1 ;
        byte R2T2 :1 ;
        byte R1T1 :1 ;
        byte R0T0 :1 ;
    } Bits ;
} SPI0DR_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte R15T15 :1 ;
        byte R14T14 :1 ;
        byte R13T13 :1 ;
        byte R12T12 :1 ;
        byte R11T11 :1 ;
        byte R10T10 :1 ;
        byte R9T9 :1 ;
        byte R8T8 :1 ;
    } Bits ;
} SPI0DRH_Tag ;
/*0x00DD */
typedef union
{
    byte Reg ;
    struct
    {
        byte R7T7 :1 ;
        byte R6T6 :1 ;
        byte R5T5 :1 ;
        byte R4T4 :1 ;
        byte R3T3 :1 ;
        byte R2T2 :1 ;
        byte R1T1 :1 ;
        byte R0T0 :1 ;
    } Bits ;
} SPI0DRL_Tag ;

/*0x00F0-0x00F7 Serial Peripheral Interface (SPI1) Map*/
/*0x00F0 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SPIE :1 ;
        byte SPE :1 ;
        byte SPTIE :1 ;
        byte MSTR :1 ;
        byte CPOL :1 ;
        byte CPHA :1 ;
        byte SSOE :1 ;
        byte LSBFE :1 ;
    } Bits ;
} SPI1CR1_Tag ;
/*0x00F1 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte XFRW :1 ;
        byte :1 ;
        byte MODFEN :1 ;
        byte BIDIROE :1 ;
        byte :1 ;
        byte SPISWAI :1 ;
        byte SPC0 :1 ;
    } Bits ;
} SPI1CR2_Tag ;
/*0x00F2 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte SPPR2 :1 ;
        byte SPPR1 :1 ;
        byte SPPR0 :1 ;
        byte :1 ;
        byte SPR2 :1 ;
        byte SPR1 :1 ;
        byte SPR0 :1 ;
    } Bits ;
} SPI1BR_Tag ;
/*0x00F3 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SPIF :1 ;
        byte :1 ;
        byte SPTEF :1 ;
        byte MODF :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} SPI1SR_Tag ;
/*0x00F4 */
typedef union
{
    word Reg ;
    struct
    {
        byte R15T15 :1 ;
        byte R14T14 :1 ;
        byte R13T13 :1 ;
        byte R12T12 :1 ;
        byte R11T11 :1 ;
        byte R10T10 :1 ;
        byte R9T9 :1 ;
        byte R8T8 :1 ;
        byte R7T7 :1 ;
        byte R6T6 :1 ;
        byte R5T5 :1 ;
        byte R4T4 :1 ;
        byte R3T3 :1 ;
        byte R2T2 :1 ;
        byte R1T1 :1 ;
        byte R0T0 :1 ;
    } Bits ;
} SPI1DR_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte R15T15 :1 ;
        byte R14T14 :1 ;
        byte R13T13 :1 ;
        byte R12T12 :1 ;
        byte R11T11 :1 ;
        byte R10T10 :1 ;
        byte R9T9 :1 ;
        byte R8T8 :1 ;
    } Bits ;
} SPI1DRH_Tag ;
/*0x00F5 */
typedef union
{
    byte Reg ;
    struct
    {
        byte R7T7 :1 ;
        byte R6T6 :1 ;
        byte R5T5 :1 ;
        byte R4T4 :1 ;
        byte R3T3 :1 ;
        byte R2T2 :1 ;
        byte R1T1 :1 ;
        byte R0T0 :1 ;
    } Bits ;
} SPI1DRL_Tag ;

/*0x0100-0x0113 NVM Control Register (FTM) Map*/
/*0x0100 */
typedef union
{
    byte Reg ;
    struct
    {
        byte FDIVLD :1 ;
        byte FDIV6 :1 ;
        byte FDIV5 :1 ;
        byte FDIV4 :1 ;
        byte FDIV3 :1 ;
        byte FDIV2 :1 ;
        byte FDIV1 :1 ;
        byte FDIV0 :1 ;
    } Bits ;
} FCLKDIV_Tag ;
/*0x0101 */
typedef union
{
    byte Reg ;
    struct
    {
        byte KEYEN1 :1 ;
        byte KEYEN0 :1 ;
        byte RNV5 :1 ;
        byte RNV4 :1 ;
        byte RNV3 :1 ;
        byte RNV2 :1 ;
        byte SEC1 :1 ;
        byte SEC0 :1 ;
    } Bits ;
} FSEC_Tag ;
/*0x0102 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte CCOBIX2 :1 ;
        byte CCOBIX1 :1 ;
        byte CCOBIX0 :1 ;
    } Bits ;
} FCCOBIX_Tag ;
/*0x0103 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte ECCRIX2 :1 ;
        byte ECCRIX1 :1 ;
        byte ECCRIX0 :1 ;
    } Bits ;
} FECCRIX_Tag ;
/*0x0104 */
typedef union
{
    byte Reg ;
    struct
    {
        byte CCIE :1 ;
        byte :1 ;
        byte :1 ;
        byte IGNSF :1 ;
        byte :1 ;
        byte :1 ;
        byte FDFD :1 ;
        byte FSFD :1 ;
    } Bits ;
} FCNFG_Tag ;
/*0x0105 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ERSERIE :1 ;
        byte PGMERIE :1 ;
        byte EACCEIE :1 ;
        byte EPVIOLIE :1 ;
        byte ERSVIE1 :1 ;
        byte ERSVIE0 :1 ;
        byte DFDIE :1 ;
        byte SFDIE :1 ;
    } Bits ;
} FERCNFG_Tag ;
/*0x0106 */
typedef union
{
    byte Reg ;
    struct
    {
        byte CCIF :1 ;
        byte :1 ;
        byte ACCERR :1 ;
        byte FPVIOL :1 ;
        byte MGBUSY :1 ;
        byte RSVD :1 ;
        byte MGSTAT1 :1 ;
        byte MGSTAT0 :1 ;
    } Bits ;
} FSTAT_Tag ;
/*0x0107 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ERSERIF :1 ;
        byte PGMERIF :1 ;
        byte :1 ;
        byte EPVIOLIF :1 ;
        byte ERSVIF1 :1 ;
        byte ERSVIF0 :1 ;
        byte DFDIF :1 ;
        byte SFDIF :1 ;
    } Bits ;
} FERSTAT_Tag ;
/*0x0108 */
typedef union
{
    byte Reg ;
    struct
    {
        byte FPOPEN :1 ;
        byte RNV6 :1 ;
        byte FPHDIS :1 ;
        byte FPHS1 :1 ;
        byte FPHS0 :1 ;
        byte FPLDIS :1 ;
        byte FPLS1 :1 ;
        byte FPLS0 :1 ;
    } Bits ;
} FPROT_Tag ;
/*0x0109 */
typedef union
{
    byte Reg ;
    struct
    {
        byte EPOPEN :1 ;
        byte RNV6 :1 ;
        byte RNV5 :1 ;
        byte RNV4 :1 ;
        byte EPDIS :1 ;
        byte EPS2 :1 ;
        byte EPS1 :1 ;
        byte EPS0 :1 ;
    } Bits ;
} EPROT_Tag ;
/*0x010A */
typedef union
{
    byte Reg ;
    struct
    {
        byte CCOB15 :1 ;
        byte CCOB14 :1 ;
        byte CCOB13 :1 ;
        byte CCOB12 :1 ;
        byte CCOB11 :1 ;
        byte CCOB10 :1 ;
        byte CCOB9 :1 ;
        byte CCOB8 :1 ;
    } Bits ;
} FCCOBHI_Tag ;
/*0x010B */
typedef union
{
    byte Reg ;
    struct
    {
        byte CCOB7 :1 ;
        byte CCOB6 :1 ;
        byte CCOB5 :1 ;
        byte CCOB4 :1 ;
        byte CCOB3 :1 ;
        byte CCOB2 :1 ;
        byte CCOB1 :1 ;
        byte CCOB0 :1 ;
    } Bits ;
} FCCOBLO_Tag ;
/*0x010C */
typedef union
{
    byte Reg ;
    struct
    {
        byte ETA15 :1 ;
        byte ETA14 :1 ;
        byte ETA13 :1 ;
        byte ETA12 :1 ;
        byte ETA11 :1 ;
        byte ETA10 :1 ;
        byte ETA9 :1 ;
        byte ETA8 :1 ;
    } Bits ;
} ETAGHI_Tag ;
/*0x010D */
typedef union
{
    byte Reg ;
    struct
    {
        byte ETA7 :1 ;
        byte ETA6 :1 ;
        byte ETA5 :1 ;
        byte ETA4 :1 ;
        byte ETA3 :1 ;
        byte ETA2 :1 ;
        byte ETA1 :1 ;
        byte ETA0 :1 ;
    } Bits ;
} ETAGLO_Tag ;
/*0x010E */
typedef union
{
    byte Reg ;
    struct
    {
        byte ECCR15 :1 ;
        byte ECCR14 :1 ;
        byte ECCR13 :1 ;
        byte ECCR12 :1 ;
        byte ECCR11 :1 ;
        byte ECCR10 :1 ;
        byte ECCR9 :1 ;
        byte ECCR8 :1 ;
    } Bits ;
} FECCRHI_Tag ;
/*0x010F */
typedef union
{
    byte Reg ;
    struct
    {
        byte ECCR7 :1 ;
        byte ECCR6 :1 ;
        byte ECCR5 :1 ;
        byte ECCR4 :1 ;
        byte ECCR3 :1 ;
        byte ECCR2 :1 ;
        byte ECCR1 :1 ;
        byte ECCR0 :1 ;
    } Bits ;
} FECCRLO_Tag ;
/*0x0110 */
typedef union
{
    byte Reg ;
    struct
    {
        byte NV7 :1 ;
        byte NV6 :1 ;
        byte NV5 :1 ;
        byte NV4 :1 ;
        byte NV3 :1 ;
        byte NV2 :1 ;
        byte NV1 :1 ;
        byte NV0 :1 ;
    } Bits ;
} FOPT_Tag ;
/*0x0114-0x011F Memory Protection Unit (MPU) Map*/
/*0x0114 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AEF :1 ;
        byte WPF :1 ;
        byte NEXF :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte SVSF :1 ;
    } Bits ;
} MPUFLG_Tag ;
/*0x0115 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte ADDR22 :1 ;
        byte ADDR21 :1 ;
        byte ADDR20 :1 ;
        byte ADDR19 :1 ;
        byte ADDR18 :1 ;
        byte ADDR17 :1 ;
        byte ADDR16 :1 ;
    } Bits ;
} MPUASTAT0_Tag ;
/*0x0116 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ADDR15 :1 ;
        byte ADDR14 :1 ;
        byte ADDR13 :1 ;
        byte ADDR12 :1 ;
        byte ADDR11 :1 ;
        byte ADDR10 :1 ;
        byte ADDR9 :1 ;
        byte ADDR8 :1 ;
    } Bits ;
} MPUASTAT1_Tag ;
/*0x0117 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ADDR7 :1 ;
        byte ADDR6 :1 ;
        byte ADDR5 :1 ;
        byte ADDR4 :1 ;
        byte ADDR3 :1 ;
        byte ADDR2 :1 ;
        byte ADDR1 :1 ;
        byte ADDR0 :1 ;
    } Bits ;
} MPUASTAT2_Tag ;
/*0x0119 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SVSEN :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte SEL :3 ;
    } Bits ;
} MPUSEL_Tag ;
/*0x011A */
typedef union
{
    byte Reg ;
    struct
    {
        byte MSTR0 :1 ;
        byte MSTR1 :1 ;
        byte MSTR2 :1 ;
        byte MSTR3 :1 ;
        byte LOW_ADDR22 :1 ;
        byte LOW_ADDR21 :1 ;
        byte LOW_ADDR20 :1 ;
        byte LOW_ADDR19 :1 ;
    } Bits ;
} MPUDESC0_Tag ;
/*0x011B */
typedef union
{
    byte Reg ;
    struct
    {
        byte LOW_ADDR18 :1 ;
        byte LOW_ADDR17 :1 ;
        byte LOW_ADDR16 :1 ;
        byte LOW_ADDR15 :1 ;
        byte LOW_ADDR14 :1 ;
        byte LOW_ADDR13 :1 ;
        byte LOW_ADDR12 :1 ;
        byte LOW_ADDR11 :1 ;
    } Bits ;
} MPUDESC1_Tag ;
/*0x011C */
typedef union
{
    byte Reg ;
    struct
    {
        byte LOW_ADDR10 :1 ;
        byte LOW_ADDR9 :1 ;
        byte LOW_ADDR8 :1 ;
        byte LOW_ADDR7 :1 ;
        byte LOW_ADDR6 :1 ;
        byte LOW_ADDR5 :1 ;
        byte LOW_ADDR4 :1 ;
        byte LOW_ADDR3 :1 ;
    } Bits ;
} MPUDESC2_Tag ;
/*0x011D */
typedef union
{
    byte Reg ;
    struct
    {
        byte WP :1 ;
        byte NEX :1 ;
        byte :1 ;
        byte :1 ;
        byte HIGH_ADDR22 :1 ;
        byte HIGH_ADDR21 :1 ;
        byte HIGH_ADDR20 :1 ;
        byte HIGH_ADDR19 :1 ;
    } Bits ;
} MPUDESC3_Tag ;
/*0x011E */
typedef union
{
    byte Reg ;
    struct
    {
        byte HIGH_ADDR18 :1 ;
        byte HIGH_ADDR17 :1 ;
        byte HIGH_ADDR16 :1 ;
        byte HIGH_ADDR15 :1 ;
        byte HIGH_ADDR14 :1 ;
        byte HIGH_ADDR13 :1 ;
        byte HIGH_ADDR12 :1 ;
        byte HIGH_ADDR11 :1 ;
    } Bits ;
} MPUDESC4_Tag ;
/*0x011F */
typedef union
{
    byte Reg ;
    struct
    {
        byte HIGH_ADDR10 :1 ;
        byte HIGH_ADDR9 :1 ;
        byte HIGH_ADDR8 :1 ;
        byte HIGH_ADDR7 :1 ;
        byte HIGH_ADDR6 :1 ;
        byte HIGH_ADDR5 :1 ;
        byte HIGH_ADDR4 :1 ;
        byte HIGH_ADDR3 :1 ;
    } Bits ;
} MPUDESC5_Tag ;
/*0x0120-0x012F Interrupt Module (S12XINT) Map*/
/*0x0121 */
typedef union
{
    byte Reg ;
    struct
    {
        byte IVB_ADDR :8 ;
    } Bits ;
} IVBR_Tag ;
/*0x0126 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte XILVL :3 ;
    } Bits ;
} INT_XGPRIO_Tag ;
/*0x0127 */
typedef union
{
    byte Reg ;
    struct
    {
        byte INT_CFADDR :4 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} INT_CFADDR_Tag ;
/*0x0128 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RQST :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PRIOLVL :3 ;
    } Bits ;
} INT_CFDATA0_Tag ;
/*0x0129 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RQST :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PRIOLVL :3 ;
    } Bits ;
} INT_CFDATA1_Tag ;
/*0x012A */
typedef union
{
    byte Reg ;
    struct
    {
        byte RQST :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PRIOLVL :3 ;
    } Bits ;
} INT_CFDATA2_Tag ;
/*0x012B */
typedef union
{
    byte Reg ;
    struct
    {
        byte RQST :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PRIOLVL :3 ;
    } Bits ;
} INT_CFDATA3_Tag ;
/*0x012C */
typedef union
{
    byte Reg ;
    struct
    {
        byte RQST :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PRIOLVL :3 ;
    } Bits ;
} INT_CFDATA4_Tag ;
/*0x012D */
typedef union
{
    byte Reg ;
    struct
    {
        byte RQST :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PRIOLVL :3 ;
    } Bits ;
} INT_CFDATA5_Tag ;
/*0x012E */
typedef union
{
    byte Reg ;
    struct
    {
        byte RQST :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PRIOLVL :3 ;
    } Bits ;
} INT_CFDATA6_Tag ;
/*0x012F */
typedef union
{
    byte Reg ;
    struct
    {
        byte RQST :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PRIOLVL :3 ;
    } Bits ;
} INT_CFDATA7_Tag ;

/*0x0140-0x017F MSCAN (CAN0) */
/*0x0140 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RXFRM :1 ;
        byte RXACT :1 ;
        byte CSWAI :1 ;
        byte SYNCH :1 ;
        byte TIME :1 ;
        byte WUPE :1 ;
        byte SLPRQ :1 ;
        byte INITRQ :1 ;
    } Bits ;
} CAN0CTL0_Tag ;
/*0x0141 */
typedef union
{
    byte Reg ;
    struct
    {
        byte CANE :1 ;
        byte CLKSRC :1 ;
        byte LOOPB :1 ;
        byte LISTEN :1 ;
        byte BORM :1 ;
        byte WUPM :1 ;
        byte SLPAK :1 ;
        byte INITAK :1 ;
    } Bits ;
} CAN0CTL1_Tag ;
/*0x0142 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SJW1 :1 ;
        byte SJW0 :1 ;
        byte BRP5 :1 ;
        byte BRP4 :1 ;
        byte BRP3 :1 ;
        byte BRP2 :1 ;
        byte BRP1 :1 ;
        byte BRP0 :1 ;
    } Bits ;
} CAN0BTR0_Tag ;
/*0x0143 */
typedef union
{
    byte Reg ;
    struct
    {
        byte SAMP :1 ;
        byte TSEG22 :1 ;
        byte TSEG21 :1 ;
        byte TSEG20 :1 ;
        byte TSEG13 :1 ;
        byte TSEG12 :1 ;
        byte TSEG11 :1 ;
        byte TSEG10 :1 ;
    } Bits ;
} CAN0BTR1_Tag ;
/*0x0144 */
typedef union
{
    byte Reg ;
    struct
    {
        byte WUPIE :1 ;
        byte CSCIF :1 ;
        byte RSTAT1 :1 ;
        byte RSTAT0 :1 ;
        byte TSTAT1 :1 ;
        byte TSTAT0 :1 ;
        byte OVRIF :1 ;
        byte RXF :1 ;
    } Bits ;
} CAN0RFLG_Tag ;
/*0x0145 */
typedef union
{
    byte Reg ;
    struct
    {
        byte WUPIE :1 ;
        byte CSCIE :1 ;
        byte RSTATE1 :1 ;
        byte RSTATE0 :1 ;
        byte TSTATE1 :1 ;
        byte TSTATE0 :1 ;
        byte OVRIE :1 ;
        byte RXFIE :1 ;
    } Bits ;
} CAN0RIER_Tag ;
/*0x0146 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte TXE2 :1 ;
        byte TXE1 :1 ;
        byte TXE0 :1 ;
    } Bits ;
} CAN0TFLG_Tag ;
/*0x0147 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte TXEIE2 :1 ;
        byte TXEIE1 :1 ;
        byte TXEIE0 :1 ;
    } Bits ;
} CAN0TIER_Tag ;
/*0x0148 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte ABTRQ2 :1 ;
        byte ABTRQ1 :1 ;
        byte ABTRQ0 :1 ;
    } Bits ;
} CAN0TARQ_Tag ;
/*0x0149 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte ABTAK2 :1 ;
        byte ABTAK1 :1 ;
        byte ABTAK0 :1 ;
    } Bits ;
} CAN0TAAK_Tag ;
/*0x014A */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte TX2 :1 ;
        byte TX1 :1 ;
        byte TX0 :1 ;
    } Bits ;
} CAN0TBSEL_Tag ;
/*0x014B */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte IDAM1 :1 ;
        byte IDAM0 :1 ;
        byte :1 ;
        byte IDHIT2 :1 ;
        byte IDHIT1 :1 ;
        byte IDHIT0 :1 ;
    } Bits ;
} CAN0IDAC_Tag ;
/*0x014D */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte BOHOLD :1 ;
    } Bits ;
} CAN0MISC_Tag ;
/*0x014E */
typedef union
{
    byte Reg ;
    struct
    {
        byte RXERR7 :1 ;
        byte RXERR6 :1 ;
        byte RXERR5 :1 ;
        byte RXERR4 :1 ;
        byte RXERR3 :1 ;
        byte RXERR2 :1 ;
        byte RXERR1 :1 ;
        byte RXERR0 :1 ;
    } Bits ;
} CAN0RXERR_Tag ;
/*0x014F */
typedef union
{
    byte Reg ;
    struct
    {
        byte TXERR7 :1 ;
        byte TXERR6 :1 ;
        byte TXERR5 :1 ;
        byte TXERR4 :1 ;
        byte TXERR3 :1 ;
        byte TXERR2 :1 ;
        byte TXERR1 :1 ;
        byte TXERR0 :1 ;
    } Bits ;
} CAN0TXERR_Tag ;
/*0x0150 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AC7 :1 ;
        byte AC6 :1 ;
        byte AC5 :1 ;
        byte AC4 :1 ;
        byte AC3 :1 ;
        byte AC2 :1 ;
        byte AC1 :1 ;
        byte AC0 :1 ;
    } Bits ;
} CAN0IDAR0_Tag ;
/*0x0151 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AC7 :1 ;
        byte AC6 :1 ;
        byte AC5 :1 ;
        byte AC4 :1 ;
        byte AC3 :1 ;
        byte AC2 :1 ;
        byte AC1 :1 ;
        byte AC0 :1 ;
    } Bits ;
} CAN0IDAR1_Tag ;
/*0x0152 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AC7 :1 ;
        byte AC6 :1 ;
        byte AC5 :1 ;
        byte AC4 :1 ;
        byte AC3 :1 ;
        byte AC2 :1 ;
        byte AC1 :1 ;
        byte AC0 :1 ;
    } Bits ;
} CAN0IDAR2_Tag ;
/*0x0153 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AC7 :1 ;
        byte AC6 :1 ;
        byte AC5 :1 ;
        byte AC4 :1 ;
        byte AC3 :1 ;
        byte AC2 :1 ;
        byte AC1 :1 ;
        byte AC0 :1 ;
    } Bits ;
} CAN0IDAR3_Tag ;
/*0x0154 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AM7 :1 ;
        byte AM6 :1 ;
        byte AM5 :1 ;
        byte AM4 :1 ;
        byte AM3 :1 ;
        byte AM2 :1 ;
        byte AM1 :1 ;
        byte AM0 :1 ;
    } Bits ;
} CAN0IDMR0_Tag ;
/*0x0155 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AM7 :1 ;
        byte AM6 :1 ;
        byte AM5 :1 ;
        byte AM4 :1 ;
        byte AM3 :1 ;
        byte AM2 :1 ;
        byte AM1 :1 ;
        byte AM0 :1 ;
    } Bits ;
} CAN0IDMR1_Tag ;
/*0x0156 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AM7 :1 ;
        byte AM6 :1 ;
        byte AM5 :1 ;
        byte AM4 :1 ;
        byte AM3 :1 ;
        byte AM2 :1 ;
        byte AM1 :1 ;
        byte AM0 :1 ;
    } Bits ;
} CAN0IDMR2_Tag ;
/*0x0157 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AM7 :1 ;
        byte AM6 :1 ;
        byte AM5 :1 ;
        byte AM4 :1 ;
        byte AM3 :1 ;
        byte AM2 :1 ;
        byte AM1 :1 ;
        byte AM0 :1 ;
    } Bits ;
} CAN0IDMR3_Tag ;
/*0x0158 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AC7 :1 ;
        byte AC6 :1 ;
        byte AC5 :1 ;
        byte AC4 :1 ;
        byte AC3 :1 ;
        byte AC2 :1 ;
        byte AC1 :1 ;
        byte AC0 :1 ;
    } Bits ;
} CAN0IDAR4_Tag ;
/*0x0159 */
typedef union
{
    byte Reg ;
    struct
    {
        byte AC7 :1 ;
        byte AC6 :1 ;
        byte AC5 :1 ;
        byte AC4 :1 ;
        byte AC3 :1 ;
        byte AC2 :1 ;
        byte AC1 :1 ;
        byte AC0 :1 ;
    } Bits ;
} CAN0IDAR5_Tag ;
/*0x015A */
typedef union
{
    byte Reg ;
    struct
    {
        byte AC7 :1 ;
        byte AC6 :1 ;
        byte AC5 :1 ;
        byte AC4 :1 ;
        byte AC3 :1 ;
        byte AC2 :1 ;
        byte AC1 :1 ;
        byte AC0 :1 ;
    } Bits ;
} CAN0IDAR6_Tag ;
/*0x015B */
typedef union
{
    byte Reg ;
    struct
    {
        byte AC7 :1 ;
        byte AC6 :1 ;
        byte AC5 :1 ;
        byte AC4 :1 ;
        byte AC3 :1 ;
        byte AC2 :1 ;
        byte AC1 :1 ;
        byte AC0 :1 ;
    } Bits ;
} CAN0IDAR7_Tag ;
/*0x015C */
typedef union
{
    byte Reg ;
    struct
    {
        byte AM7 :1 ;
        byte AM6 :1 ;
        byte AM5 :1 ;
        byte AM4 :1 ;
        byte AM3 :1 ;
        byte AM2 :1 ;
        byte AM1 :1 ;
        byte AM0 :1 ;
    } Bits ;
} CAN0IDMR4_Tag ;
/*0x015D */
typedef union
{
    byte Reg ;
    struct
    {
        byte AM7 :1 ;
        byte AM6 :1 ;
        byte AM5 :1 ;
        byte AM4 :1 ;
        byte AM3 :1 ;
        byte AM2 :1 ;
        byte AM1 :1 ;
        byte AM0 :1 ;
    } Bits ;
} CAN0IDMR5_Tag ;
/*0x015E */
typedef union
{
    byte Reg ;
    struct
    {
        byte AM7 :1 ;
        byte AM6 :1 ;
        byte AM5 :1 ;
        byte AM4 :1 ;
        byte AM3 :1 ;
        byte AM2 :1 ;
        byte AM1 :1 ;
        byte AM0 :1 ;
    } Bits ;
} CAN0IDMR6_Tag ;
/*0x015F */
typedef union
{
    byte Reg ;
    struct
    {
        byte AM7 :1 ;
        byte AM6 :1 ;
        byte AM5 :1 ;
        byte AM4 :1 ;
        byte AM3 :1 ;
        byte AM2 :1 ;
        byte AM1 :1 ;
        byte AM0 :1 ;
    } Bits ;
} CAN0IDMR7_Tag ;
/*0x0160 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ID28 :1 ;
        byte ID27 :1 ;
        byte ID26 :1 ;
        byte ID25 :1 ;
        byte ID24 :1 ;
        byte ID23 :1 ;
        byte ID22 :1 ;
        byte ID21 :1 ;
    } Bits ;
} CAN0RXIDR0_Tag ;
/*0x0161 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ID20 :1 ;
        byte ID19 :1 ;
        byte ID18 :1 ;
        byte SRR :1 ;
        byte IDE :1 ;
        byte ID17 :1 ;
        byte ID16 :1 ;
        byte ID15 :1 ;
    } Bits ;
} CAN0RXIDR1_Tag ;
/*0x0162 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ID14 :1 ;
        byte ID13 :1 ;
        byte ID12 :1 ;
        byte ID11 :1 ;
        byte ID10 :1 ;
        byte ID9 :1 ;
        byte ID8 :1 ;
        byte ID7 :1 ;
    } Bits ;
} CAN0RXIDR2_Tag ;
/*0x0163 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ID6 :1 ;
        byte ID5 :1 ;
        byte ID4 :1 ;
        byte ID3 :1 ;
        byte ID2 :1 ;
        byte ID1 :1 ;
        byte ID0 :1 ;
        byte RTR :1 ;
    } Bits ;
} CAN0RXIDR3_Tag ;
/*0x0164 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0RXDSR0_Tag ;
/*0x0165 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0RXDSR1_Tag ;
/*0x0166 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0RXDSR2_Tag ;
/*0x0167 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0RXDSR3_Tag ;
/*0x0168 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0RXDSR4_Tag ;
/*0x0169 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0RXDSR5_Tag ;
/*0x016A */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0RXDSR6_Tag ;
/*0x016B */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0RXDSR7_Tag ;
/*0x016C */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte DLC3 :1 ;
        byte DLC2 :1 ;
        byte DLC1 :1 ;
        byte DLC0 :1 ;
    } Bits ;
} CAN0RXDLR_Tag ;
/*0x016E */
typedef union
{
    byte Reg ;
    struct
    {
        byte TSR15 :1 ;
        byte TSR14 :1 ;
        byte TSR13 :1 ;
        byte TSR12 :1 ;
        byte TSR11 :1 ;
        byte TSR10 :1 ;
        byte TSR9 :1 ;
        byte TSR8 :1 ;
    } Bits ;
} CAN0RXTSRH_Tag ;
/*0x016F */
typedef union
{
    byte Reg ;
    struct
    {
        byte TSR7 :1 ;
        byte TSR6 :1 ;
        byte TSR5 :1 ;
        byte TSR4 :1 ;
        byte TSR3 :1 ;
        byte TSR2 :1 ;
        byte TSR1 :1 ;
        byte TSR0 :1 ;
    } Bits ;
} CAN0RXTSRL_Tag ;
/*0x0170 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ID28 :1 ;
        byte ID27 :1 ;
        byte ID26 :1 ;
        byte ID25 :1 ;
        byte ID24 :1 ;
        byte ID23 :1 ;
        byte ID22 :1 ;
        byte ID21 :1 ;
    } Bits ;
} CAN0TXIDR0_Tag ;
/*0x0171 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ID20 :1 ;
        byte ID19 :1 ;
        byte ID18 :1 ;
        byte SRR :1 ;
        byte IDE :1 ;
        byte ID17 :1 ;
        byte ID16 :1 ;
        byte ID15 :1 ;
    } Bits ;
} CAN0TXIDR1_Tag ;
/*0x0172 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ID14 :1 ;
        byte ID13 :1 ;
        byte ID12 :1 ;
        byte ID11 :1 ;
        byte ID10 :1 ;
        byte ID9 :1 ;
        byte ID8 :1 ;
        byte ID7 :1 ;
    } Bits ;
} CAN0TXIDR2_Tag ;
/*0x0173 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ID6 :1 ;
        byte ID5 :1 ;
        byte ID4 :1 ;
        byte ID3 :1 ;
        byte ID2 :1 ;
        byte ID1 :1 ;
        byte ID0 :1 ;
        byte RTR :1 ;
    } Bits ;
} CAN0TXIDR3_Tag ;
/*0x0174 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0TXDSR0_Tag ;
/*0x0175 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0TXDSR1_Tag ;
/*0x0176 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0TXDSR2_Tag ;
/*0x0177 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0TXDSR3_Tag ;
/*0x0178 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0TXDSR4_Tag ;
/*0x0179 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0TXDSR5_Tag ;
/*0x017A */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0TXDSR6_Tag ;
/*0x017B */
typedef union
{
    byte Reg ;
    struct
    {
        byte DB7 :1 ;
        byte DB6 :1 ;
        byte DB5 :1 ;
        byte DB4 :1 ;
        byte DB3 :1 ;
        byte DB2 :1 ;
        byte DB1 :1 ;
        byte DB0 :1 ;
    } Bits ;
} CAN0TXDSR7_Tag ;
/*0x017C */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte DLC3 :1 ;
        byte DLC2 :1 ;
        byte DLC1 :1 ;
        byte DLC0 :1 ;
    } Bits ;
} CAN0TXDLR_Tag ;
/*0x017D */
typedef union
{
    byte Reg ;
    struct
    {
        byte PRIO7 :1 ;
        byte PRIO6 :1 ;
        byte PRIO5 :1 ;
        byte PRIO4 :1 ;
        byte PRIO3 :1 ;
        byte PRIO2 :1 ;
        byte PRIO1 :1 ;
        byte PRIO0 :1 ;
    } Bits ;
} CAN0TXTBPR_Tag ;
/*0x017E */
typedef union
{
    byte Reg ;
    struct
    {
        byte TSR15 :1 ;
        byte TSR14 :1 ;
        byte TSR13 :1 ;
        byte TSR12 :1 ;
        byte TSR11 :1 ;
        byte TSR10 :1 ;
        byte TSR9 :1 ;
        byte TSR8 :1 ;
    } Bits ;
} CAN0TXTSRH_Tag ;
/*0x017F */
typedef union
{
    byte Reg ;
    struct
    {
        byte TSR7 :1 ;
        byte TSR6 :1 ;
        byte TSR5 :1 ;
        byte TSR4 :1 ;
        byte TSR3 :1 ;
        byte TSR2 :1 ;
        byte TSR1 :1 ;
        byte TSR0 :1 ;
    } Bits ;
} CAN0TXTSRL_Tag ;

/*0x0200-0x023F PMF */
/*0x0200 */
typedef union
{
    byte Reg ;
    struct
    {
        byte WP :1 ;
        byte MTG :1 ;
        byte EDGEC :1 ;
        byte EDGEB :1 ;
        byte EDGEA :1 ;
        byte INDEPC :1 ;
        byte INDEPB :1 ;
        byte INDEPA :1 ;
    } Bits ;
} PMFCFG0_Tag ;
/*0x0201 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ENHA :1 ;
        byte :1 ;
        byte BOTNEGC :1 ;
        byte TOPNEGC :1 ;
        byte BOTNEGB :1 ;
        byte TOPNEGB :1 ;
        byte BOTNEGA :1 ;
        byte TOPNEGA :1 ;
    } Bits ;
} PMFCFG1_Tag ;
/*0x0202 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte MSK5 :1 ;
        byte MSK4 :1 ;
        byte MSK3 :1 ;
        byte MSK2 :1 ;
        byte MSK1 :1 ;
        byte MSK0 :1 ;
    } Bits ;
} PMFCFG2_Tag ;
/*0x0203 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PMFWAI :1 ;
        byte PMFFRZ :1 ;
        byte :1 ;
        byte VLMODE :2 ;
        byte SWAPC :1 ;
        byte SWAPB :1 ;
        byte SWAPA :1 ;
    } Bits ;
} PMFCFG3_Tag ;
/*0x0204 */
typedef union
{
    byte Reg ;
    struct
    {
        byte FMODE3 :1 ;
        byte FIE3 :1 ;
        byte FMODE2 :1 ;
        byte FIE2 :1 ;
        byte FMODE1 :1 ;
        byte FIE1 :1 ;
        byte FMODE0 :1 ;
        byte FIE0 :1 ;
    } Bits ;
} PMFFCTL_Tag ;
/*0x0205 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte FPINE3 :1 ;
        byte :1 ;
        byte FPINE2 :1 ;
        byte :1 ;
        byte FPINE1 :1 ;
        byte :1 ;
        byte FPINE0 :1 ;
    } Bits ;
} PMFFPIN_Tag ;
/*0x0206 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte FFLAG3 :1 ;
        byte :1 ;
        byte FFLAG2 :1 ;
        byte :1 ;
        byte FFLAG1 :1 ;
        byte :1 ;
        byte FFLAG0 :1 ;
    } Bits ;
} PMFFSTA_Tag ;
/*0x0207 */
typedef union
{
    byte Reg ;
    struct
    {
        byte QSMP3 :2 ;
        byte QSMP2 :2 ;
        byte QSMP1 :2 ;
        byte QSMP0 :2 ;
    } Bits ;
} PMFQSMP_Tag ;
/*0x0208 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DMP13 :1 ;
        byte DMP12 :1 ;
        byte DMP11 :1 ;
        byte DMP10 :1 ;
        byte DMP03 :1 ;
        byte DMP02 :1 ;
        byte DMP01 :1 ;
        byte DMP00 :1 ;
    } Bits ;
} PMFDMPA_Tag ;
/*0x0209 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DMP33 :1 ;
        byte DMP32 :1 ;
        byte DMP31 :1 ;
        byte DMP30 :1 ;
        byte DMP23 :1 ;
        byte DMP22 :1 ;
        byte DMP21 :1 ;
        byte DMP20 :1 ;
    } Bits ;
} PMFDMPB_Tag ;
/*0x020A */
typedef union
{
    byte Reg ;
    struct
    {
        byte DMP53 :1 ;
        byte DMP52 :1 ;
        byte DMP51 :1 ;
        byte DMP50 :1 ;
        byte DMP43 :1 ;
        byte DMP42 :1 ;
        byte DMP41 :1 ;
        byte DMP40 :1 ;
    } Bits ;
} PMFDMPC_Tag ;
/*0x020C */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte OUTCTL5 :1 ;
        byte OUTCTL4 :1 ;
        byte OUTCTL3 :1 ;
        byte OUTCTL2 :1 ;
        byte OUTCTL1 :1 ;
        byte OUTCTL0 :1 ;
    } Bits ;
} PMFOUTC_Tag ;
/*0x020D */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte OUT5 :1 ;
        byte OUT4 :1 ;
        byte OUT3 :1 ;
        byte OUT2 :1 ;
        byte OUT1 :1 ;
        byte OUT0 :1 ;
    } Bits ;
} PMFOUTB_Tag ;
/*0x020E */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte DT5 :1 ;
        byte DT4 :1 ;
        byte DT3 :1 ;
        byte DT2 :1 ;
        byte DT1 :1 ;
        byte DT0 :1 ;
    } Bits ;
} PMFDTMS_Tag ;
/*0x020F */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte ISENS :2 ;
        byte :1 ;
        byte IPOLC :1 ;
        byte IPOLB :1 ;
        byte IPOLA :1 ;
    } Bits ;
} PMFCCTL_Tag ;
/*0x0210 */
typedef union
{
    word Reg ;
} PMFVAL0_Tag ;
/*0x0212 */
typedef union
{
    word Reg ;
} PMFVAL1_Tag ;
/*0x0214 */
typedef union
{
    word Reg ;
} PMFVAL2_Tag ;
/*0x0216 */
typedef union
{
    word Reg ;
} PMFVAL3_Tag ;
/*0x0218 */
typedef union
{
    word Reg ;
} PMFVAL4_Tag ;
/*0x021A */
typedef union
{
    word Reg ;
} PMFVAL5_Tag ;
/*0x0220 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PWMENA :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte LDOKA :1 ;
        byte PWMRIEA :1 ;
    } Bits ;
} PMFENCA_Tag ;
/*0x0221 */
typedef union
{
    byte Reg ;
    struct
    {
        byte LDFQA :4 ;
        byte HALFA :1 ;
        byte PRSCA :2 ;
        byte PWMRFA :1 ;
    } Bits ;
} PMFFQCA_Tag ;
/*0x0222 */
typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word PMFCNTA :15 ;
    } Bits ;
} PMFCNTA_Tag ;
/*0x0224 */
typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word PMFMODA :15 ;
    } Bits ;
} PMFMODA_Tag ;
/*0x0226 */
typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word PMFDTMA :12 ;
    } Bits ;
} PMFDTMA_Tag ;
/*0x0228 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PWMENB :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte LDOKB :1 ;
        byte PWMRIEB :1 ;
    } Bits ;
} PMFENCB_Tag ;
/*0x0229 */
typedef union
{
    byte Reg ;
    struct
    {
        byte LDFQB :1 ;
        byte HALFB :1 ;
        byte PRSCB :1 ;
        byte PWMRFB :1 ;
    } Bits ;
} PMFFQCB_Tag ;
/*0x022A */
typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word PMFCNTB :15 ;
    } Bits ;
} PMFCNTB_Tag ;
/*0x022C */
typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word PMFMODB :15 ;
    } Bits ;
} PMFMODB_Tag ;
/*0x022E */
typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word PMFDTMB :12 ;
    } Bits ;
} PMFDTMB_Tag ;
/*0x0230 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PWMENC :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte LDOKC :1 ;
        byte PWMRIEC :1 ;
    } Bits ;
} PMFENCC_Tag ;
/*0x0231 */
typedef union
{
    byte Reg ;
    struct
    {
        byte LDFQC :1 ;
        byte HALFC :1 ;
        byte PRSCC :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PWMRFC :1 ;
    } Bits ;
} PMFFQCC_Tag ;
/*0x0232 */
typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word PMFCNTC :15 ;
    } Bits ;
} PMFCNTC_Tag ;
/*0x0234 */
typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word PMFMODC :15 ;
    } Bits ;
} PMFMODC_Tag ;
/*0x0236 */
typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word PMFDTMC :12 ;
    } Bits ;
} PMFDTMC_Tag ;

/*0x0240-0x027F Port Integration Module (PIM) */
/*0x0240 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTT7 :1 ;
        byte PTT6 :1 ;
        byte PTT5 :1 ;
        byte PTT4 :1 ;
        byte PTT3 :1 ;
        byte PTT2 :1 ;
        byte PTT1 :1 ;
        byte PTT0 :1 ;
    } Bits ;
} PTT_Tag ;
/*0x0241 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTIT7 :1 ;
        byte PTIT6 :1 ;
        byte PTIT5 :1 ;
        byte PTIT4 :1 ;
        byte PTIT3 :1 ;
        byte PTIT2 :1 ;
        byte PTIT1 :1 ;
        byte PTIT0 :1 ;
    } Bits ;
} PTIT_Tag ;
/*0x0242 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRT7 :1 ;
        byte DDRT6 :1 ;
        byte DDRT5 :1 ;
        byte DDRT4 :1 ;
        byte DDRT3 :1 ;
        byte DDRT2 :1 ;
        byte DDRT1 :1 ;
        byte DDRT0 :1 ;
    } Bits ;
} DDRT_Tag ;
/*0x0243 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDRT7 :1 ;
        byte RDRT6 :1 ;
        byte RDRT5 :1 ;
        byte RDRT4 :1 ;
        byte RDRT3 :1 ;
        byte RDRT2 :1 ;
        byte RDRT1 :1 ;
        byte RDRT0 :1 ;
    } Bits ;
} RDRT_Tag ;
/*0x0244 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PERT7 :1 ;
        byte PERT6 :1 ;
        byte PERT5 :1 ;
        byte PERT4 :1 ;
        byte PERT3 :1 ;
        byte PERT2 :1 ;
        byte PERT1 :1 ;
        byte PERT0 :1 ;
    } Bits ;
} PERT_Tag ;
/*0x0245 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PPST7 :1 ;
        byte PPST6 :1 ;
        byte PPST5 :1 ;
        byte PPST4 :1 ;
        byte PPST3 :1 ;
        byte PPST2 :1 ;
        byte PPST1 :1 ;
        byte PPST0 :1 ;
    } Bits ;
} PPST_Tag ;
/*0x0248 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTS7 :1 ;
        byte PTS6 :1 ;
        byte PTS5 :1 ;
        byte PTS4 :1 ;
        byte PTS3 :1 ;
        byte PTS2 :1 ;
        byte PTS1 :1 ;
        byte PTS0 :1 ;
    } Bits ;
} PTS_Tag ;
/*0x0249 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTIS7 :1 ;
        byte PTIS6 :1 ;
        byte PTIS5 :1 ;
        byte PTIS4 :1 ;
        byte PTIS3 :1 ;
        byte PTIS2 :1 ;
        byte PTIS1 :1 ;
        byte PTIS0 :1 ;
    } Bits ;
} PTIS_Tag ;
/*0x024A */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRS7 :1 ;
        byte DDRS6 :1 ;
        byte DDRS5 :1 ;
        byte DDRS4 :1 ;
        byte DDRS3 :1 ;
        byte DDRS2 :1 ;
        byte DDRS1 :1 ;
        byte DDRS0 :1 ;
    } Bits ;
} DDRS_Tag ;
/*0x024B */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDRS7 :1 ;
        byte RDRS6 :1 ;
        byte RDRS5 :1 ;
        byte RDRS4 :1 ;
        byte RDRS3 :1 ;
        byte RDRS2 :1 ;
        byte RDRS1 :1 ;
        byte RDRS0 :1 ;
    } Bits ;
} RDRS_Tag ;
/*0x024C */
typedef union
{
    byte Reg ;
    struct
    {
        byte PERS7 :1 ;
        byte PERS6 :1 ;
        byte PERS5 :1 ;
        byte PERS4 :1 ;
        byte PERS3 :1 ;
        byte PERS2 :1 ;
        byte PERS1 :1 ;
        byte PERS0 :1 ;
    } Bits ;
} PERS_Tag ;
/*0x024D */
typedef union
{
    byte Reg ;
    struct
    {
        byte PPSS7 :1 ;
        byte PPSS6 :1 ;
        byte PPSS5 :1 ;
        byte PPSS4 :1 ;
        byte PPSS3 :1 ;
        byte PPSS2 :1 ;
        byte PPSS1 :1 ;
        byte PPSS0 :1 ;
    } Bits ;
} PPSS_Tag ;
/*0x024E */
typedef union
{
    byte Reg ;
    struct
    {
        byte WOMS7 :1 ;
        byte WOMS6 :1 ;
        byte WOMS5 :1 ;
        byte WOMS4 :1 ;
        byte WOMS3 :1 ;
        byte WOMS2 :1 ;
        byte WOMS1 :1 ;
        byte WOMS0 :1 ;
    } Bits ;
} WOMS_Tag ;
/*0x0250 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTM7 :1 ;
        byte PTM6 :1 ;
        byte PTM5 :1 ;
        byte PTM4 :1 ;
        byte PTM3 :1 ;
        byte PTM2 :1 ;
        byte PTM1 :1 ;
        byte PTM0 :1 ;
    } Bits ;
} PTM_Tag ;
/*0x0251 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTIM7 :1 ;
        byte PTIM6 :1 ;
        byte PTIM5 :1 ;
        byte PTIM4 :1 ;
        byte PTIM3 :1 ;
        byte PTIM2 :1 ;
        byte PTIM1 :1 ;
        byte PTIM0 :1 ;
    } Bits ;
} PTIM_Tag ;
/*0x0252 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRM7 :1 ;
        byte DDRM6 :1 ;
        byte DDRM5 :1 ;
        byte DDRM4 :1 ;
        byte DDRM3 :1 ;
        byte DDRM2 :1 ;
        byte DDRM1 :1 ;
        byte DDRM0 :1 ;
    } Bits ;
} DDRM_Tag ;
/*0x0253 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDRM7 :1 ;
        byte RDRM6 :1 ;
        byte RDRM5 :1 ;
        byte RDRM4 :1 ;
        byte RDRM3 :1 ;
        byte RDRM2 :1 ;
        byte RDRM1 :1 ;
        byte RDRM0 :1 ;
    } Bits ;
} RDRM_Tag ;
/*0x0254 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PERM7 :1 ;
        byte PERM6 :1 ;
        byte PERM5 :1 ;
        byte PERM4 :1 ;
        byte PERM3 :1 ;
        byte PERM2 :1 ;
        byte PERM1 :1 ;
        byte PERM0 :1 ;
    } Bits ;
} PERM_Tag ;
/*0x0255 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PPSM7 :1 ;
        byte PPSM6 :1 ;
        byte PPSM5 :1 ;
        byte PPSM4 :1 ;
        byte PPSM3 :1 ;
        byte PPSM2 :1 ;
        byte PPSM1 :1 ;
        byte PPSM0 :1 ;
    } Bits ;
} PPSM_Tag ;
/*0x0256 */
typedef union
{
    byte Reg ;
    struct
    {
        byte WOMM7 :1 ;
        byte WOMM6 :1 ;
        byte WOMM5 :1 ;
        byte WOMM4 :1 ;
        byte WOMM3 :1 ;
        byte WOMM2 :1 ;
        byte WOMM1 :1 ;
        byte WOMM0 :1 ;
    } Bits ;
} WOMM_Tag ;
/*0x0258 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTP7 :1 ;
        byte PTP6 :1 ;
        byte PTP5 :1 ;
        byte PTP4 :1 ;
        byte PTP3 :1 ;
        byte PTP2 :1 ;
        byte PTP1 :1 ;
        byte PTP0 :1 ;
    } Bits ;
} PTP_Tag ;
/*0x0259 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTIP7 :1 ;
        byte PTIP6 :1 ;
        byte PTIP5 :1 ;
        byte PTIP4 :1 ;
        byte PTIP3 :1 ;
        byte PTIP2 :1 ;
        byte PTIP1 :1 ;
        byte PTIP0 :1 ;
    } Bits ;
} PTIP_Tag ;
/*0x025A */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRP7 :1 ;
        byte DDRP6 :1 ;
        byte DDRP5 :1 ;
        byte DDRP4 :1 ;
        byte DDRP3 :1 ;
        byte DDRP2 :1 ;
        byte DDRP1 :1 ;
        byte DDRP0 :1 ;
    } Bits ;
} DDRP_Tag ;
/*0x025B */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDRP7 :1 ;
        byte RDRP6 :1 ;
        byte RDRP5 :1 ;
        byte RDRP4 :1 ;
        byte RDRP3 :1 ;
        byte RDRP2 :1 ;
        byte RDRP1 :1 ;
        byte RDRP0 :1 ;
    } Bits ;
} RDRP_Tag ;
/*0x025C */
typedef union
{
    byte Reg ;
    struct
    {
        byte PERP7 :1 ;
        byte PERP6 :1 ;
        byte PERP5 :1 ;
        byte PERP4 :1 ;
        byte PERP3 :1 ;
        byte PERP2 :1 ;
        byte PERP1 :1 ;
        byte PERP0 :1 ;
    } Bits ;
} PERP_Tag ;
/*0x025D */
typedef union
{
    byte Reg ;
    struct
    {
        byte PPSP7 :1 ;
        byte PPSP6 :1 ;
        byte PPSP5 :1 ;
        byte PPSP4 :1 ;
        byte PPSP3 :1 ;
        byte PPSP2 :1 ;
        byte PPSP1 :1 ;
        byte PPSP0 :1 ;
    } Bits ;
} PPSP_Tag ;
/*0x0260 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTH7 :1 ;
        byte PTH6 :1 ;
        byte PTH5 :1 ;
        byte PTH4 :1 ;
        byte PTH3 :1 ;
        byte PTH2 :1 ;
        byte PTH1 :1 ;
        byte PTH0 :1 ;
    } Bits ;
} PTH_Tag ;
/*0x0261 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTIH7 :1 ;
        byte PTIH6 :1 ;
        byte PTIH5 :1 ;
        byte PTIH4 :1 ;
        byte PTIH3 :1 ;
        byte PTIH2 :1 ;
        byte PTIH1 :1 ;
        byte PTIH0 :1 ;
    } Bits ;
} PTIH_Tag ;
/*0x0262 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRH7 :1 ;
        byte DDRH6 :1 ;
        byte DDRH5 :1 ;
        byte DDRH4 :1 ;
        byte DDRH3 :1 ;
        byte DDRH2 :1 ;
        byte DDRH1 :1 ;
        byte DDRH0 :1 ;
    } Bits ;
} DDRH_Tag ;
/*0x0263 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDRH7 :1 ;
        byte RDRH6 :1 ;
        byte RDRH5 :1 ;
        byte RDRH4 :1 ;
        byte RDRH3 :1 ;
        byte RDRH2 :1 ;
        byte RDRH1 :1 ;
        byte RDRH0 :1 ;
    } Bits ;
} RDRH_Tag ;
/*0x0264 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PERH7 :1 ;
        byte PERH6 :1 ;
        byte PERH5 :1 ;
        byte PERH4 :1 ;
        byte PERH3 :1 ;
        byte PERH2 :1 ;
        byte PERH1 :1 ;
        byte PERH0 :1 ;
    } Bits ;
} PERH_Tag ;
/*0x0265 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PPSH7 :1 ;
        byte PPSH6 :1 ;
        byte PPSH5 :1 ;
        byte PPSH4 :1 ;
        byte PPSH3 :1 ;
        byte PPSH2 :1 ;
        byte PPSH1 :1 ;
        byte PPSH0 :1 ;
    } Bits ;
} PPSH_Tag ;
/*0x0268 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTJ7 :1 ;
        byte PTJ6 :1 ;
        byte PTJ5 :1 ;
        byte PTJ4 :1 ;
        byte PTJ3 :1 ;
        byte PTJ2 :1 ;
        byte PTJ1 :1 ;
        byte PTJ0 :1 ;
    } Bits ;
} PTJ_Tag ;
/*0x0269 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTIJ7 :1 ;
        byte PTIJ6 :1 ;
        byte PTIJ5 :1 ;
        byte PTIJ4 :1 ;
        byte PTIJ3 :1 ;
        byte PTIJ2 :1 ;
        byte PTIJ1 :1 ;
        byte PTIJ0 :1 ;
    } Bits ;
} PTIJ_Tag ;
/*0x026A */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRJ7 :1 ;
        byte DDRJ6 :1 ;
        byte DDRJ5 :1 ;
        byte DDRJ4 :1 ;
        byte DDRJ3 :1 ;
        byte DDRJ2 :1 ;
        byte DDRJ1 :1 ;
        byte DDRJ0 :1 ;
    } Bits ;
} DDRJ_Tag ;
/*0x026B */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDRJ7 :1 ;
        byte RDRJ6 :1 ;
        byte RDRJ5 :1 ;
        byte RDRJ4 :1 ;
        byte RDRJ3 :1 ;
        byte RDRJ2 :1 ;
        byte RDRJ1 :1 ;
        byte RDRJ0 :1 ;
    } Bits ;
} RDRJ_Tag ;
/*0x026C */
typedef union
{
    byte Reg ;
    struct
    {
        byte PERJ7 :1 ;
        byte PERJ6 :1 ;
        byte PERJ5 :1 ;
        byte PERJ4 :1 ;
        byte PERJ3 :1 ;
        byte PERJ2 :1 ;
        byte PERJ1 :1 ;
        byte PERJ0 :1 ;
    } Bits ;
} PERJ_Tag ;
/*0x026D */
typedef union
{
    byte Reg ;
    struct
    {
        byte PPSJ7 :1 ;
        byte PPSJ6 :1 ;
        byte PPSJ5 :1 ;
        byte PPSJ4 :1 ;
        byte PPSJ3 :1 ;
        byte PPSJ2 :1 ;
        byte PPSJ1 :1 ;
        byte PPSJ0 :1 ;
    } Bits ;
} PPSJ_Tag ;
/*0x0270 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PT0AD15 :1 ;
        byte PT0AD14 :1 ;
        byte PT0AD13 :1 ;
        byte PT0AD12 :1 ;
        byte PT0AD11 :1 ;
        byte PT0AD10 :1 ;
        byte PT0AD9 :1 ;
        byte PT0AD8 :1 ;
    } Bits ;
} PT0AD_Tag ;
/*0x0271 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PT1AD7 :1 ;
        byte PT1AD6 :1 ;
        byte PT1AD5 :1 ;
        byte PT1AD4 :1 ;
        byte PT1AD3 :1 ;
        byte PT1AD2 :1 ;
        byte PT1AD1 :1 ;
        byte PT1AD0 :1 ;
    } Bits ;
} PT1AD_Tag ;
/*0x0272 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDR0AD15 :1 ;
        byte DDR0AD14 :1 ;
        byte DDR0AD13 :1 ;
        byte DDR0AD12 :1 ;
        byte DDR0AD11 :1 ;
        byte DDR0AD10 :1 ;
        byte DDR0AD9 :1 ;
        byte DDR0AD8 :1 ;
    } Bits ;
} DDR0AD_Tag ;
/*0x0273 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDR1AD7 :1 ;
        byte DDR1AD6 :1 ;
        byte DDR1AD5 :1 ;
        byte DDR1AD4 :1 ;
        byte DDR1AD3 :1 ;
        byte DDR1AD2 :1 ;
        byte DDR1AD1 :1 ;
        byte DDR1AD0 :1 ;
    } Bits ;
} DDR1AD_Tag ;
/*0x0274 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDR0AD15 :1 ;
        byte RDR0AD14 :1 ;
        byte RDR0AD13 :1 ;
        byte RDR0AD12 :1 ;
        byte RDR0AD11 :1 ;
        byte RDR0AD10 :1 ;
        byte RDR0AD9 :1 ;
        byte RDR0AD8 :1 ;
    } Bits ;
} RDR0AD_Tag ;
/*0x0275 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDR1AD7 :1 ;
        byte RDR1AD6 :1 ;
        byte RDR1AD5 :1 ;
        byte RDR1AD4 :1 ;
        byte RDR1AD3 :1 ;
        byte RDR1AD2 :1 ;
        byte RDR1AD1 :1 ;
        byte RDR1AD0 :1 ;
    } Bits ;
} RDR1AD_Tag ;
/*0x0276 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PER0AD15 :1 ;
        byte PER0AD14 :1 ;
        byte PER0AD13 :1 ;
        byte PER0AD12 :1 ;
        byte PER0AD11 :1 ;
        byte PER0AD10 :1 ;
        byte PER0AD9 :1 ;
        byte PER0AD8 :1 ;
    } Bits ;
} PER0AD_Tag ;
/*0x0277 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PER1AD7 :1 ;
        byte PER1AD6 :1 ;
        byte PER1AD5 :1 ;
        byte PER1AD4 :1 ;
        byte PER1AD3 :1 ;
        byte PER1AD2 :1 ;
        byte PER1AD1 :1 ;
        byte PER1AD0 :1 ;
    } Bits ;
} PER1AD_Tag ;

/*0x02F0-0x02F7 Voltage Regulator (VREG_3V3) */
/*0x02F0 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte VSEL :1 ;
        byte VAE :1 ;
        byte HTEN :1 ;
        byte HTDS :1 ;
        byte HTIE :1 ;
        byte HTIF :1 ;
    } Bits ;
} VREGHTCL_Tag ;
/*0x02F1 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte LVDS :1 ;
        byte LVIE :1 ;
        byte LVIF :1 ;
    } Bits ;
} VREGCTRL_Tag ;
/*0x02F2 */
typedef union
{
    byte Reg ;
    struct
    {
        byte APICLK :1 ;
        byte :1 ;
        byte :1 ;
        byte APIFES :1 ;
        byte APIEA :1 ;
        byte APIFE :1 ;
        byte APIE :1 ;
        byte APIF :1 ;
    } Bits ;
} VREGAPICL_Tag ;
/*0x02F3 */
typedef union
{
    byte Reg ;
    struct
    {
        byte APITR5 :1 ;
        byte APITR4 :1 ;
        byte APITR3 :1 ;
        byte APITR2 :1 ;
        byte APITR1 :1 ;
        byte APITR0 :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} VREGAPITR_Tag ;
/*0x02F4 */
typedef union
{
    byte Reg ;
    struct
    {
        byte APIR15 :1 ;
        byte APIR14 :1 ;
        byte APIR13 :1 ;
        byte APIR12 :1 ;
        byte APIR11 :1 ;
        byte APIR10 :1 ;
        byte APIR9 :1 ;
        byte APIR8 :1 ;
    } Bits ;
} VREGAPIRH_Tag ;
/*0x02F5 */
typedef union
{
    byte Reg ;
    struct
    {
        byte APIR7 :1 ;
        byte APIR6 :1 ;
        byte APIR5 :1 ;
        byte APIR4 :1 ;
        byte APIR3 :1 ;
        byte APIR2 :1 ;
        byte APIR1 :1 ;
        byte APIR0 :1 ;
    } Bits ;
} VREGAPIRL_Tag ;
/*0x02F7 */
typedef union
{
    byte Reg ;
    struct
    {
        byte HTOEN :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte HTTR3 :1 ;
        byte HTTR2 :1 ;
        byte HTTR1 :1 ;
        byte HTTR0 :1 ;
    } Bits ;
} VREGHTTR ;

/*0x0300-0x0307 CGMIPLL (IPLL for FlexRay) */
/*0x0300 */
typedef union
{
    byte Reg ;
    struct
    {
        byte VCOFRQ :2 ;
        byte SYNDIV :6 ;
    } Bits ;
} CGMSYNR_Tag ;
/*0x0301 */
typedef union
{
    byte Reg ;
    struct
    {
        byte REFFRQ :2 ;
        byte REFDIV :6 ;
    } Bits ;
} CGMREFDV_Tag ;
/*0x0303 */
typedef union
{
    byte Reg ;
    struct
    {
        byte LOCKIE :1 ;
        byte :1 ;
        byte :1 ;
        byte LOCKIF :1 ;
        byte LOCK :1 ;
        byte :1 ;
        byte :1 ;
        byte UNLOCKF :1 ;
    } Bits ;
} CGMFLG_Tag ;
/*0x0304 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte DIV2 :1 ;
        byte FM1 :1 ;
        byte FM0 :1 ;
        byte PLLON :1 ;
    } Bits ;
} CGMCTL_Tag ;
/*0x0305 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} CGMTEST0_Tag ;
/*0x0306 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} CGMTEST1_Tag ;
/*0x0307 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} PWMPRSC_Tag ;
/*0x0308-0x033F Reserved*/

/*0x0340-0x036F Enhanced Periodic Interrupt Timer (EPIT) */
/*0x0340 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PITE :1 ;
        byte PITSWAI :1 ;
        byte PITFRZ :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte PFLMT1 :1 ;
        byte PFLMT0 :1 ;
    } Bits ;
} PITCFLMT_Tag ;
/*0x0341 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PFLT7 :1 ;
        byte PFLT6 :1 ;
        byte PFLT5 :1 ;
        byte PFLT4 :1 ;
        byte PFLT3 :1 ;
        byte PFLT2 :1 ;
        byte PFLT1 :1 ;
        byte PFLT0 :1 ;
    } Bits ;
} PITFLT_Tag ;
/*0x0342 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCE7 :1 ;
        byte PCE6 :1 ;
        byte PCE5 :1 ;
        byte PCE4 :1 ;
        byte PCE3 :1 ;
        byte PCE2 :1 ;
        byte PCE1 :1 ;
        byte PCE0 :1 ;
    } Bits ;
} PITCE_Tag ;
/*0x0343 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PMUX7 :1 ;
        byte PMUX6 :1 ;
        byte PMUX5 :1 ;
        byte PMUX4 :1 ;
        byte PMUX3 :1 ;
        byte PMUX2 :1 ;
        byte PMUX1 :1 ;
        byte PMUX0 :1 ;
    } Bits ;
} PITMUX_Tag ;
/*0x0344 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PINTE7 :1 ;
        byte PINTE6 :1 ;
        byte PINTE5 :1 ;
        byte PINTE4 :1 ;
        byte PINTE3 :1 ;
        byte PINTE2 :1 ;
        byte PINTE1 :1 ;
        byte PINTE0 :1 ;
    } Bits ;
} PITINTE_Tag ;
/*0x0345 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTF7 :1 ;
        byte PTF6 :1 ;
        byte PTF5 :1 ;
        byte PTF4 :1 ;
        byte PTF3 :1 ;
        byte PTF2 :1 ;
        byte PTF1 :1 ;
        byte PTF0 :1 ;
    } Bits ;
} PITTF_Tag ;
/*0x0346 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PMTLD7 :1 ;
        byte PMTLD6 :1 ;
        byte PMTLD5 :1 ;
        byte PMTLD4 :1 ;
        byte PMTLD3 :1 ;
        byte PMTLD2 :1 ;
        byte PMTLD1 :1 ;
        byte PMTLD0 :1 ;
    } Bits ;
} PITMTLD0_Tag ;
/*0x0347 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PMTLD7 :1 ;
        byte PMTLD6 :1 ;
        byte PMTLD5 :1 ;
        byte PMTLD4 :1 ;
        byte PMTLD3 :1 ;
        byte PMTLD2 :1 ;
        byte PMTLD1 :1 ;
        byte PMTLD0 :1 ;
    } Bits ;
} PITMTLD1_Tag ;
/*0x0348 */
typedef union
{
    word Reg ;
    struct
    {
        word PLD15 :1 ;
        word PLD14 :1 ;
        word PLD13 :1 ;
        word PLD12 :1 ;
        word PLD11 :1 ;
        word PLD10 :1 ;
        word PLD9 :1 ;
        word PLD8 :1 ;
        word PLD7 :1 ;
        word PLD6 :1 ;
        word PLD5 :1 ;
        word PLD4 :1 ;
        word PLD3 :1 ;
        word PLD2 :1 ;
        word PLD1 :1 ;
        word PLD0 :1 ;
    } Bits ;
} PITLD0_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD15 :1 ;
        byte PLD14 :1 ;
        byte PLD13 :1 ;
        byte PLD12 :1 ;
        byte PLD11 :1 ;
        byte PLD10 :1 ;
        byte PLD9 :1 ;
        byte PLD8 :1 ;
    } Bits ;
} PITLD0H_Tag ;
/*0x0349 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD7 :1 ;
        byte PLD6 :1 ;
        byte PLD5 :1 ;
        byte PLD4 :1 ;
        byte PLD3 :1 ;
        byte PLD2 :1 ;
        byte PLD1 :1 ;
        byte PLD0 :1 ;
    } Bits ;
} PITLD0L_Tag ;
/*0x034A */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT15 :1 ;
        byte PCNT14 :1 ;
        byte PCNT13 :1 ;
        byte PCNT12 :1 ;
        byte PCNT11 :1 ;
        byte PCNT10 :1 ;
        byte PCNT9 :1 ;
        byte PCNT8 :1 ;
    } Bits ;
} PITCNT0H_Tag ;
/*0x034B */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT7 :1 ;
        byte PCNT6 :1 ;
        byte PCNT5 :1 ;
        byte PCNT4 :1 ;
        byte PCNT3 :1 ;
        byte PCNT2 :1 ;
        byte PCNT1 :1 ;
        byte PCNT0 :1 ;
    } Bits ;
} PITCNT0L_Tag ;
/*0x034C */
typedef union
{
    word Reg ;
    struct
    {
        word PLD15 :1 ;
        word PLD14 :1 ;
        word PLD13 :1 ;
        word PLD12 :1 ;
        word PLD11 :1 ;
        word PLD10 :1 ;
        word PLD9 :1 ;
        word PLD8 :1 ;
        word PLD7 :1 ;
        word PLD6 :1 ;
        word PLD5 :1 ;
        word PLD4 :1 ;
        word PLD3 :1 ;
        word PLD2 :1 ;
        word PLD1 :1 ;
        word PLD0 :1 ;
    } Bits ;
} PITLD1_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD15 :1 ;
        byte PLD14 :1 ;
        byte PLD13 :1 ;
        byte PLD12 :1 ;
        byte PLD11 :1 ;
        byte PLD10 :1 ;
        byte PLD9 :1 ;
        byte PLD8 :1 ;
    } Bits ;
} PITLD1H_Tag ;
/*0x034D */
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD7 :1 ;
        byte PLD6 :1 ;
        byte PLD5 :1 ;
        byte PLD4 :1 ;
        byte PLD3 :1 ;
        byte PLD2 :1 ;
        byte PLD1 :1 ;
        byte PLD0 :1 ;
    } Bits ;
} PITLD1L_Tag ;
/*0x034E */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT15 :1 ;
        byte PCNT14 :1 ;
        byte PCNT13 :1 ;
        byte PCNT12 :1 ;
        byte PCNT11 :1 ;
        byte PCNT10 :1 ;
        byte PCNT9 :1 ;
        byte PCNT8 :1 ;
    } Bits ;
} PITCNT1H_Tag ;
/*0x034F */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT7 :1 ;
        byte PCNT6 :1 ;
        byte PCNT5 :1 ;
        byte PCNT4 :1 ;
        byte PCNT3 :1 ;
        byte PCNT2 :1 ;
        byte PCNT1 :1 ;
        byte PCNT0 :1 ;
    } Bits ;
} PITCNT1L_Tag ;
/*0x0350 */
typedef union
{
    word Reg ;
    struct
    {
        word PLD15 :1 ;
        word PLD14 :1 ;
        word PLD13 :1 ;
        word PLD12 :1 ;
        word PLD11 :1 ;
        word PLD10 :1 ;
        word PLD9 :1 ;
        word PLD8 :1 ;
        word PLD7 :1 ;
        word PLD6 :1 ;
        word PLD5 :1 ;
        word PLD4 :1 ;
        word PLD3 :1 ;
        word PLD2 :1 ;
        word PLD1 :1 ;
        word PLD0 :1 ;
    } Bits ;
} PITLD2_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD15 :1 ;
        byte PLD14 :1 ;
        byte PLD13 :1 ;
        byte PLD12 :1 ;
        byte PLD11 :1 ;
        byte PLD10 :1 ;
        byte PLD9 :1 ;
        byte PLD8 :1 ;
    } Bits ;
} PITLD2H_Tag ;
/*0x0351 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD7 :1 ;
        byte PLD6 :1 ;
        byte PLD5 :1 ;
        byte PLD4 :1 ;
        byte PLD3 :1 ;
        byte PLD2 :1 ;
        byte PLD1 :1 ;
        byte PLD0 :1 ;
    } Bits ;
} PITLD2L_Tag ;
/*0x0352 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT15 :1 ;
        byte PCNT14 :1 ;
        byte PCNT13 :1 ;
        byte PCNT12 :1 ;
        byte PCNT11 :1 ;
        byte PCNT10 :1 ;
        byte PCNT9 :1 ;
        byte PCNT8 :1 ;
    } Bits ;
} PITCNT2H_Tag ;
/*0x0353 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT7 :1 ;
        byte PCNT6 :1 ;
        byte PCNT5 :1 ;
        byte PCNT4 :1 ;
        byte PCNT3 :1 ;
        byte PCNT2 :1 ;
        byte PCNT1 :1 ;
        byte PCNT0 :1 ;
    } Bits ;
} PITCNT2L_Tag ;
/*0x0354 */
typedef union
{
    word Reg ;
    struct
    {
        word PLD15 :1 ;
        word PLD14 :1 ;
        word PLD13 :1 ;
        word PLD12 :1 ;
        word PLD11 :1 ;
        word PLD10 :1 ;
        word PLD9 :1 ;
        word PLD8 :1 ;
        word PLD7 :1 ;
        word PLD6 :1 ;
        word PLD5 :1 ;
        word PLD4 :1 ;
        word PLD3 :1 ;
        word PLD2 :1 ;
        word PLD1 :1 ;
        word PLD0 :1 ;
    } Bits ;
} PITLD3_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD15 :1 ;
        byte PLD14 :1 ;
        byte PLD13 :1 ;
        byte PLD12 :1 ;
        byte PLD11 :1 ;
        byte PLD10 :1 ;
        byte PLD9 :1 ;
        byte PLD8 :1 ;
    } Bits ;
} PITLD3H_Tag ;
/*0x0355 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD7 :1 ;
        byte PLD6 :1 ;
        byte PLD5 :1 ;
        byte PLD4 :1 ;
        byte PLD3 :1 ;
        byte PLD2 :1 ;
        byte PLD1 :1 ;
        byte PLD0 :1 ;
    } Bits ;
} PITLD3L_Tag ;
/*0x0356 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT15 :1 ;
        byte PCNT14 :1 ;
        byte PCNT13 :1 ;
        byte PCNT12 :1 ;
        byte PCNT11 :1 ;
        byte PCNT10 :1 ;
        byte PCNT9 :1 ;
        byte PCNT8 :1 ;
    } Bits ;
} PITCNT3H_Tag ;
/*0x0357 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT7 :1 ;
        byte PCNT6 :1 ;
        byte PCNT5 :1 ;
        byte PCNT4 :1 ;
        byte PCNT3 :1 ;
        byte PCNT2 :1 ;
        byte PCNT1 :1 ;
        byte PCNT0 :1 ;
    } Bits ;
} PITCNT3L_Tag ;
/*0x0358 */
typedef union
{
    word Reg ;
    struct
    {
        word PLD15 :1 ;
        word PLD14 :1 ;
        word PLD13 :1 ;
        word PLD12 :1 ;
        word PLD11 :1 ;
        word PLD10 :1 ;
        word PLD9 :1 ;
        word PLD8 :1 ;
        word PLD7 :1 ;
        word PLD6 :1 ;
        word PLD5 :1 ;
        word PLD4 :1 ;
        word PLD3 :1 ;
        word PLD2 :1 ;
        word PLD1 :1 ;
        word PLD0 :1 ;
    } Bits ;
} PITLD4_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD15 :1 ;
        byte PLD14 :1 ;
        byte PLD13 :1 ;
        byte PLD12 :1 ;
        byte PLD11 :1 ;
        byte PLD10 :1 ;
        byte PLD9 :1 ;
        byte PLD8 :1 ;
    } Bits ;
} PITLD4H_Tag ;
/*0x0359 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD7 :1 ;
        byte PLD6 :1 ;
        byte PLD5 :1 ;
        byte PLD4 :1 ;
        byte PLD3 :1 ;
        byte PLD2 :1 ;
        byte PLD1 :1 ;
        byte PLD0 :1 ;
    } Bits ;
} PITLD4L_Tag ;
/*0x035A */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT15 :1 ;
        byte PCNT14 :1 ;
        byte PCNT13 :1 ;
        byte PCNT12 :1 ;
        byte PCNT11 :1 ;
        byte PCNT10 :1 ;
        byte PCNT9 :1 ;
        byte PCNT8 :1 ;
    } Bits ;
} PITCNT4H_Tag ;
/*0x035B */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT7 :1 ;
        byte PCNT6 :1 ;
        byte PCNT5 :1 ;
        byte PCNT4 :1 ;
        byte PCNT3 :1 ;
        byte PCNT2 :1 ;
        byte PCNT1 :1 ;
        byte PCNT0 :1 ;
    } Bits ;
} PITCNT4L_Tag ;
/*0x035C */
typedef union
{
    word Reg ;
    struct
    {
        word PLD15 :1 ;
        word PLD14 :1 ;
        word PLD13 :1 ;
        word PLD12 :1 ;
        word PLD11 :1 ;
        word PLD10 :1 ;
        word PLD9 :1 ;
        word PLD8 :1 ;
        word PLD7 :1 ;
        word PLD6 :1 ;
        word PLD5 :1 ;
        word PLD4 :1 ;
        word PLD3 :1 ;
        word PLD2 :1 ;
        word PLD1 :1 ;
        word PLD0 :1 ;
    } Bits ;
} PITLD5_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD15 :1 ;
        byte PLD14 :1 ;
        byte PLD13 :1 ;
        byte PLD12 :1 ;
        byte PLD11 :1 ;
        byte PLD10 :1 ;
        byte PLD9 :1 ;
        byte PLD8 :1 ;
    } Bits ;
} PITLD5H_Tag ;
/*0x035D */
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD7 :1 ;
        byte PLD6 :1 ;
        byte PLD5 :1 ;
        byte PLD4 :1 ;
        byte PLD3 :1 ;
        byte PLD2 :1 ;
        byte PLD1 :1 ;
        byte PLD0 :1 ;
    } Bits ;
} PITLD5L_Tag ;
/*0x035E */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT15 :1 ;
        byte PCNT14 :1 ;
        byte PCNT13 :1 ;
        byte PCNT12 :1 ;
        byte PCNT11 :1 ;
        byte PCNT10 :1 ;
        byte PCNT9 :1 ;
        byte PCNT8 :1 ;
    } Bits ;
} PITCNT5H_Tag ;
/*0x035F */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT7 :1 ;
        byte PCNT6 :1 ;
        byte PCNT5 :1 ;
        byte PCNT4 :1 ;
        byte PCNT3 :1 ;
        byte PCNT2 :1 ;
        byte PCNT1 :1 ;
        byte PCNT0 :1 ;
    } Bits ;
} PITCNT5L_Tag ;
/*0x0360 */
typedef union
{
    word Reg ;
    struct
    {
        word PLD15 :1 ;
        word PLD14 :1 ;
        word PLD13 :1 ;
        word PLD12 :1 ;
        word PLD11 :1 ;
        word PLD10 :1 ;
        word PLD9 :1 ;
        word PLD8 :1 ;
        word PLD7 :1 ;
        word PLD6 :1 ;
        word PLD5 :1 ;
        word PLD4 :1 ;
        word PLD3 :1 ;
        word PLD2 :1 ;
        word PLD1 :1 ;
        word PLD0 :1 ;
    } Bits ;
} PITLD6_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD15 :1 ;
        byte PLD14 :1 ;
        byte PLD13 :1 ;
        byte PLD12 :1 ;
        byte PLD11 :1 ;
        byte PLD10 :1 ;
        byte PLD9 :1 ;
        byte PLD8 :1 ;
    } Bits ;
} PITLD6H_Tag ;
/*0x0361 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD7 :1 ;
        byte PLD6 :1 ;
        byte PLD5 :1 ;
        byte PLD4 :1 ;
        byte PLD3 :1 ;
        byte PLD2 :1 ;
        byte PLD1 :1 ;
        byte PLD0 :1 ;
    } Bits ;
} PITLD6L_Tag ;
/*0x0362 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT15 :1 ;
        byte PCNT14 :1 ;
        byte PCNT13 :1 ;
        byte PCNT12 :1 ;
        byte PCNT11 :1 ;
        byte PCNT10 :1 ;
        byte PCNT9 :1 ;
        byte PCNT8 :1 ;
    } Bits ;
} PITCNT6H_Tag ;
/*0x0363 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT7 :1 ;
        byte PCNT6 :1 ;
        byte PCNT5 :1 ;
        byte PCNT4 :1 ;
        byte PCNT3 :1 ;
        byte PCNT2 :1 ;
        byte PCNT1 :1 ;
        byte PCNT0 :1 ;
    } Bits ;
} PITCNT6L ;
/*0x0364 */
typedef union
{
    word Reg ;
    struct
    {
        word PLD15 :1 ;
        word PLD14 :1 ;
        word PLD13 :1 ;
        word PLD12 :1 ;
        word PLD11 :1 ;
        word PLD10 :1 ;
        word PLD9 :1 ;
        word PLD8 :1 ;
        word PLD7 :1 ;
        word PLD6 :1 ;
        word PLD5 :1 ;
        word PLD4 :1 ;
        word PLD3 :1 ;
        word PLD2 :1 ;
        word PLD1 :1 ;
        word PLD0 :1 ;
    } Bits ;
} PITLD7_Tag ;
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD15 :1 ;
        byte PLD14 :1 ;
        byte PLD13 :1 ;
        byte PLD12 :1 ;
        byte PLD11 :1 ;
        byte PLD10 :1 ;
        byte PLD9 :1 ;
        byte PLD8 :1 ;
    } Bits ;
} PITLD7H_Tag ;
/*0x0365 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PLD7 :1 ;
        byte PLD6 :1 ;
        byte PLD5 :1 ;
        byte PLD4 :1 ;
        byte PLD3 :1 ;
        byte PLD2 :1 ;
        byte PLD1 :1 ;
        byte PLD0 :1 ;
    } Bits ;
} PITLD7L_Tag ;
/*0x0366 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT15 :1 ;
        byte PCNT14 :1 ;
        byte PCNT13 :1 ;
        byte PCNT12 :1 ;
        byte PCNT11 :1 ;
        byte PCNT10 :1 ;
        byte PCNT9 :1 ;
        byte PCNT8 :1 ;
    } Bits ;
} PITCNT7H_Tag ;
/*0x0367 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCNT7 :1 ;
        byte PCNT6 :1 ;
        byte PCNT5 :1 ;
        byte PCNT4 :1 ;
        byte PCNT3 :1 ;
        byte PCNT2 :1 ;
        byte PCNT1 :1 ;
        byte PCNT0 :1 ;
    } Bits ;
} PITCNT7L_Tag ;
/*0x0368 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PITCSTP7 :1 ;
        byte PITCSTP6 :1 ;
        byte PITCSTP5 :1 ;
        byte PITCSTP4 :1 ;
        byte PITCSTP3 :1 ;
        byte PITCSTP2 :1 ;
        byte PITCSTP1 :1 ;
        byte PITCSTP0 :1 ;
    } Bits ;
} PITCSTP_Tag ;
/*0x0369 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PITCOTE7 :1 ;
        byte PITCOTE6 :1 ;
        byte PITCOTE5 :1 ;
        byte PITCOTE4 :1 ;
        byte PITCOTE3 :1 ;
        byte PITCOTE2 :1 ;
        byte PITCOTE1 :1 ;
        byte PITCOTE0 :1 ;
    } Bits ;
} PITTRIGOUT_Tag ;
/*0x036A */
typedef union
{
    byte Reg ;
    struct
    {
        byte PITTRIGIE :1 ;
        byte :1 ;
        byte PITTRIGEDGE :2 ;
        byte :1 ;
        byte :1 ;
        byte PITTRIGSRC :2 ;
    } Bits ;
} PITTRIGCTL_Tag ;
/*0x036B */
typedef union
{
    byte Reg ;
    struct
    {
        byte PITTRIGIF :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} PITTRIGSTAT_Tag ;
/*0x036C */
typedef union
{
    byte Reg ;
    struct
    {
        byte PITTRIGE7 :1 ;
        byte PITTRIGE6 :1 ;
        byte PITTRIGE5 :1 ;
        byte PITTRIGE4 :1 ;
        byte PITTRIGE3 :1 ;
        byte PITTRIGE2 :1 ;
        byte PITTRIGE1 :1 ;
        byte PITTRIGE0 :1 ;
    } Bits ;
} PITTRIGE_Tag ;

/*0x0380-0x03BF XGATE Map */
/*0x0380 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGEM :1 ;
        byte XGFRZM :1 ;
        byte XGDBGM :1 ;
        byte XGSSM :1 ;
        byte XGFACTM :1 ;
        byte :1 ;
        byte XGSWEFM :1 ;
        byte XGIEM :1 ;
    } Bits ;
} XGMCTLH_Tag ;
/*0x0381 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGE :1 ;
        byte XGFRZ :1 ;
        byte XGDBG :1 ;
        byte XGSS :1 ;
        byte XGFACT :1 ;
        byte :1 ;
        byte XGSWEF :1 ;
        byte XGIE :1 ;
    } Bits ;
} XGMCTLL_Tag ;
/*0x0382 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte XGCHID :7 ;
    } Bits ;
} XGCHID_Tag ;
/*0x0383 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte XGCHPL :3 ;
    } Bits ;
} XGCHPL_Tag ;
/*0x0385 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte XGISPSEL :2 ;
    } Bits ;
} XGISPSEL_Tag ;
/*0x0386 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGVBR15 :1 ;
        byte XGVBR14 :1 ;
        byte XGVBR13 :1 ;
        byte XGVBR12 :1 ;
        byte XGVBR11 :1 ;
        byte XGVBR10 :1 ;
        byte XGVBR9 :1 ;
        byte XGVBR8 :1 ;
    } Bits ;
} XGVBRH_Tag ;
/*0x0387 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGVBR7 :1 ;
        byte XGVBR6 :1 ;
        byte XGVBR5 :1 ;
        byte XGVBR4 :1 ;
        byte XGVBR3 :1 ;
        byte XGVBR2 :1 ;
        byte XGVBR1 :1 ;
        byte :1 ;
    } Bits ;
} XGVBRL_Tag ;
/*0x0388 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte XGIF_78 :1 ;
    } Bits ;
} XGIF0_Tag ;
/*0x0389 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_77 :1 ;
        byte XGIF_76 :1 ;
        byte XGIF_75 :1 ;
        byte XGIF_74 :1 ;
        byte XGIF_73 :1 ;
        byte XGIF_72 :1 ;
        byte XGIF_71 :1 ;
        byte XGIF_70 :1 ;
    } Bits ;
} XGIF1_Tag ;
/*0x038A */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_6F :1 ;
        byte XGIF_6E :1 ;
        byte XGIF_6D :1 ;
        byte XGIF_6C :1 ;
        byte XGIF_6B :1 ;
        byte XGIF_6A :1 ;
        byte XGIF_69 :1 ;
        byte XGIF_68 :1 ;
    } Bits ;
} XGIF2_Tag ;
/*0x038B */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_67 :1 ;
        byte XGIF_66 :1 ;
        byte XGIF_65 :1 ;
        byte XGIF_64 :1 ;
        byte XGIF_63 :1 ;
        byte XGIF_62 :1 ;
        byte XGIF_61 :1 ;
        byte XGIF_60 :1 ;
    } Bits ;
} XGIF3_Tag ;
/*0x038C */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_5F :1 ;
        byte XGIF_5E :1 ;
        byte XGIF_5D :1 ;
        byte XGIF_5C :1 ;
        byte XGIF_5B :1 ;
        byte XGIF_5A :1 ;
        byte XGIF_59 :1 ;
        byte XGIF_58 :1 ;
    } Bits ;
} XGIF4_Tag ;
/*0x038D */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_57 :1 ;
        byte XGIF_56 :1 ;
        byte XGIF_55 :1 ;
        byte XGIF_54 :1 ;
        byte XGIF_53 :1 ;
        byte XGIF_52 :1 ;
        byte XGIF_51 :1 ;
        byte XGIF_50 :1 ;
    } Bits ;
} XGIF5_Tag ;
/*0x038E */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_4F :1 ;
        byte XGIF_4E :1 ;
        byte XGIF_4D :1 ;
        byte XGIF_4C :1 ;
        byte XGIF_4B :1 ;
        byte XGIF_4A :1 ;
        byte XGIF_49 :1 ;
        byte XGIF_48 :1 ;
    } Bits ;
} XGIF6_Tag ;
/*0x038F */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_47 :1 ;
        byte XGIF_46 :1 ;
        byte XGIF_45 :1 ;
        byte XGIF_44 :1 ;
        byte XGIF_43 :1 ;
        byte XGIF_42 :1 ;
        byte XGIF_41 :1 ;
        byte XGIF_40 :1 ;
    } Bits ;
} XGIF7_Tag ;
/*0x0390 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_3F :1 ;
        byte XGIF_3E :1 ;
        byte XGIF_3D :1 ;
        byte XGIF_3C :1 ;
        byte XGIF_3B :1 ;
        byte XGIF_3A :1 ;
        byte XGIF_39 :1 ;
        byte XGIF_38 :1 ;
    } Bits ;
} XGIF8_Tag ;
/*0x0391 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_37 :1 ;
        byte XGIF_36 :1 ;
        byte XGIF_35 :1 ;
        byte XGIF_34 :1 ;
        byte XGIF_33 :1 ;
        byte XGIF_32 :1 ;
        byte XGIF_31 :1 ;
        byte XGIF_30 :1 ;
    } Bits ;
} XGIF9_Tag ;
/*0x0392 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_2F :1 ;
        byte XGIF_2E :1 ;
        byte XGIF_2D :1 ;
        byte XGIF_2C :1 ;
        byte XGIF_2B :1 ;
        byte XGIF_2A :1 ;
        byte XGIF_29 :1 ;
        byte XGIF_28 :1 ;
    } Bits ;
} XGIFA_Tag ;
/*0x0393 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_27 :1 ;
        byte XGIF_26 :1 ;
        byte XGIF_25 :1 ;
        byte XGIF_24 :1 ;
        byte XGIF_23 :1 ;
        byte XGIF_22 :1 ;
        byte XGIF_21 :1 ;
        byte XGIF_20 :1 ;
    } Bits ;
} XGIFB_Tag ;
/*0x0394 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_1F :1 ;
        byte XGIF_1E :1 ;
        byte XGIF_1D :1 ;
        byte XGIF_1C :1 ;
        byte XGIF_1B :1 ;
        byte XGIF_1A :1 ;
        byte XGIF_19 :1 ;
        byte XGIF_18 :1 ;
    } Bits ;
} XGIFC_Tag ;
/*0x0395 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGIF_17 :1 ;
        byte XGIF_16 :1 ;
        byte XGIF_15 :1 ;
        byte XGIF_14 :1 ;
        byte XGIF_13 :1 ;
        byte XGIF_12 :1 ;
        byte XGIF_11 :1 ;
        byte XGIF_10 :1 ;
    } Bits ;
} XGIFD_Tag ;
/*0x0396 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte XGIF_0F :1 ;
        byte XGIF_0E :1 ;
        byte XGIF_0D :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} XGIFE_Tag ;
/*0x0397 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} XGIFF_Tag ;
/*0x0398 */
typedef union
{
    word Reg ;
    struct
    {
        word XGSWTM7 :1 ;
        word XGSWTM6 :1 ;
        word XGSWTM5 :1 ;
        word XGSWTM4 :1 ;
        word XGSWTM3 :1 ;
        word XGSWTM2 :1 ;
        word XGSWTM1 :1 ;
        word XGSWTM0 :1 ;
        word XGSWT7 :1 ;
        word XGSWT6 :1 ;
        word XGSWT5 :1 ;
        word XGSWT4 :1 ;
        word XGSWT3 :1 ;
        word XGSWT2 :1 ;
        word XGSWT1 :1 ;
        word XGSWT0 :1 ;
    } Bits ;
} XGSWT_Tag ;
/*0x039A */
typedef union
{
    word Reg ;
    struct
    {
        word XGSEMM7 :1 ;
        word XGSEMM6 :1 ;
        word XGSEMM5 :1 ;
        word XGSEMM4 :1 ;
        word XGSEMM3 :1 ;
        word XGSEMM2 :1 ;
        word XGSEMM1 :1 ;
        word XGSEMM0 :1 ;
        word XGSEM7 :1 ;
        word XGSEM6 :1 ;
        word XGSEM5 :1 ;
        word XGSEM4 :1 ;
        word XGSEM3 :1 ;
        word XGSEM2 :1 ;
        word XGSEM1 :1 ;
        word XGSEM0 :1 ;
    } Bits ;
} XGSEM_Tag ;
/*0x039D */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte XGN :1 ;
        byte XGZ :1 ;
        byte XGV :1 ;
        byte XGC :1 ;
    } Bits ;
} XGCCR_Tag ;
/*0x039E */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGPC15 :1 ;
        byte XGPC14 :1 ;
        byte XGPC13 :1 ;
        byte XGPC12 :1 ;
        byte XGPC11 :1 ;
        byte XGPC10 :1 ;
        byte XGPC9 :1 ;
        byte XGPC8 :1 ;
    } Bits ;
} XGPCH_Tag ;
/*0x039F */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGPC7 :1 ;
        byte XGPC6 :1 ;
        byte XGPC5 :1 ;
        byte XGPC4 :1 ;
        byte XGPC3 :1 ;
        byte XGPC2 :1 ;
        byte XGPC1 :1 ;
        byte XGPC0 :1 ;
    } Bits ;
} XGPCL_Tag ;
/*0x03A2 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR1_15 :1 ;
        byte XGR1_14 :1 ;
        byte XGR1_13 :1 ;
        byte XGR1_12 :1 ;
        byte XGR1_11 :1 ;
        byte XGR1_10 :1 ;
        byte XGR1_9 :1 ;
        byte XGR1_8 :1 ;
    } Bits ;
} XGR1H_Tag ;
/*0x03A3 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR1_7 :1 ;
        byte XGR1_6 :1 ;
        byte XGR1_5 :1 ;
        byte XGR1_4 :1 ;
        byte XGR1_3 :1 ;
        byte XGR1_2 :1 ;
        byte XGR1_1 :1 ;
        byte XGR1_0 :1 ;
    } Bits ;
} XGR1L_Tag ;
/*0x03A4 */
typedef union
{
    struct
    {
        byte XGR2_15 :1 ;
        byte XGR2_14 :1 ;
        byte XGR2_13 :1 ;
        byte XGR2_12 :1 ;
        byte XGR2_11 :1 ;
        byte XGR2_10 :1 ;
        byte XGR2_9 :1 ;
        byte XGR2_8 :1 ;
    } Bits ;
} XGR2H_Tag ;
/*0x03A5 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR2_7 :1 ;
        byte XGR2_6 :1 ;
        byte XGR2_5 :1 ;
        byte XGR2_4 :1 ;
        byte XGR2_3 :1 ;
        byte XGR2_2 :1 ;
        byte XGR2_1 :1 ;
        byte XGR2_0 :1 ;
    } Bits ;
} XGR2L_Tag ;
/*0x03A6 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR3_15 :1 ;
        byte XGR3_14 :1 ;
        byte XGR3_13 :1 ;
        byte XGR3_12 :1 ;
        byte XGR3_11 :1 ;
        byte XGR3_10 :1 ;
        byte XGR3_9 :1 ;
        byte XGR3_8 :1 ;
    } Bits ;
} XGR3H_Tag ;
/*0x03A7 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR3_7 :1 ;
        byte XGR3_6 :1 ;
        byte XGR3_5 :1 ;
        byte XGR3_4 :1 ;
        byte XGR3_3 :1 ;
        byte XGR3_2 :1 ;
        byte XGR3_1 :1 ;
        byte XGR3_0 :1 ;
    } Bits ;
} XGR3L_Tag ;
/*0x03A8 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR4_15 :1 ;
        byte XGR4_14 :1 ;
        byte XGR4_13 :1 ;
        byte XGR4_12 :1 ;
        byte XGR4_11 :1 ;
        byte XGR4_10 :1 ;
        byte XGR4_9 :1 ;
        byte XGR4_8 :1 ;
    } Bits ;
} XGR4H_Tag ;
/*0x03A9 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR4_7 :1 ;
        byte XGR4_6 :1 ;
        byte XGR4_5 :1 ;
        byte XGR4_4 :1 ;
        byte XGR4_3 :1 ;
        byte XGR4_2 :1 ;
        byte XGR4_1 :1 ;
        byte XGR4_0 :1 ;
    } Bits ;
} XGR4L_Tag ;
/*0x03AA */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR5_15 :1 ;
        byte XGR5_14 :1 ;
        byte XGR5_13 :1 ;
        byte XGR5_12 :1 ;
        byte XGR5_11 :1 ;
        byte XGR5_10 :1 ;
        byte XGR5_9 :1 ;
        byte XGR5_8 :1 ;
    } Bits ;
} XGR5H_Tag ;
/*0x03AB */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR5_7 :1 ;
        byte XGR5_6 :1 ;
        byte XGR5_5 :1 ;
        byte XGR5_4 :1 ;
        byte XGR5_3 :1 ;
        byte XGR5_2 :1 ;
        byte XGR5_1 :1 ;
        byte XGR5_0 :1 ;
    } Bits ;
} XGR5L_Tag ;
/*0x03AC */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR6_15 :1 ;
        byte XGR6_14 :1 ;
        byte XGR6_13 :1 ;
        byte XGR6_12 :1 ;
        byte XGR6_11 :1 ;
        byte XGR6_10 :1 ;
        byte XGR6_9 :1 ;
        byte XGR6_8 :1 ;
    } Bits ;
} XGR6H_Tag ;
/*0x03AD */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR6_7 :1 ;
        byte XGR6_6 :1 ;
        byte XGR6_5 :1 ;
        byte XGR6_4 :1 ;
        byte XGR6_3 :1 ;
        byte XGR6_2 :1 ;
        byte XGR6_1 :1 ;
        byte XGR6_0 :1 ;
    } Bits ;
} XGR6L_Tag ;
/*0x03AE */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR7_15 :1 ;
        byte XGR7_14 :1 ;
        byte XGR7_13 :1 ;
        byte XGR7_12 :1 ;
        byte XGR7_11 :1 ;
        byte XGR7_10 :1 ;
        byte XGR7_9 :1 ;
        byte XGR7_8 :1 ;
    } Bits ;
} XGR7H_Tag ;
/*0x03AF */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGR7_7 :1 ;
        byte XGR7_6 :1 ;
        byte XGR7_5 :1 ;
        byte XGR7_4 :1 ;
        byte XGR7_3 :1 ;
        byte XGR7_2 :1 ;
        byte XGR7_1 :1 ;
        byte XGR7_0 :1 ;
    } Bits ;
} XGR7L_Tag ;

/*0x0400-0x05FF FlexRayRegister Space */
/*0x0400 */
typedef union
{
    word Reg ;
    struct
    {
        word CHIVER :8 ;
        word PEVER :8 ;
    } Bits ;
} MVR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MEN :1 ;
        word :1 ;
        word SCM :1 ;
        word CHB :1 ;
        word CHA :1 ;
        word SFFE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word CLKSEL_bit :1 ;
        word BITRATE :3 ;
        word :1 ;
    } Bits ;
} MCR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word SYS_MEM_BASE_ADDR22 :1 ;
        word SYS_MEM_BASE_ADDR21 :1 ;
        word SYS_MEM_BASE_ADDR20 :1 ;
        word SYS_MEM_BASE_ADDR19 :1 ;
        word SYS_MEM_BASE_ADDR18 :1 ;
        word SYS_MEM_BASE_ADDR17 :1 ;
        word SYS_MEM_BASE_ADDR16 :1 ;

    } Bits ;
} SYMBADHR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word SYS_MEM_BASE_ADDR15 :1 ;
        word SYS_MEM_BASE_ADDR14 :1 ;
        word SYS_MEM_BASE_ADDR13 :1 ;
        word SYS_MEM_BASE_ADDR12 :1 ;
        word SYS_MEM_BASE_ADDR11 :1 ;
        word SYS_MEM_BASE_ADDR10 :1 ;
        word SYS_MEM_BASE_ADDR9 :1 ;
        word SYS_MEM_BASE_ADDR8 :1 ;
        word SYS_MEM_BASE_ADDR7 :1 ;
        word SYS_MEM_BASE_ADDR6 :1 ;
        word SYS_MEM_BASE_ADDR5 :1 ;
        word SYS_MEM_BASE_ADDR4 :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
    } Bits ;
} SYMBADLR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word WMD :1 ;
        word SEL :7 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word ENB :1 ;
        word :1 ;
        word :1 ;
        word STBPSEL :2 ;
    } Bits ;
} STBSCR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word STB3EN :1 ;
        word STB2EN :1 ;
        word STB1EN :1 ;
        word STB0EN :1 ;
    } Bits ;
} STBPCR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MBSEG2DS :7 ;
        word :1 ;
        word MBSEG1DS :7 ;
    } Bits ;
} MBDSR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word LAST_MB_SEG1 :5 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word LAST_MB_UTIL :5 ;
    } Bits ;
} MBSSUTR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word WME :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word EOC_AP :2 ;
        word ERC_AP :2 ;
        word BSY_WMC :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word POCCMD :4 ;
    } Bits ;
} POCR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MIF :1 ;
        word PRIF :1 ;
        word CHIF :1 ;
        word WUPIF :1 ;
        word FNEBIF :1 ;
        word FNEAIF :1 ;
        word RBIF :1 ;
        word TBIF :1 ;
        word MIE :1 ;
        word PRIE :1 ;
        word CHIE :1 ;
        word WUPIE :1 ;
        word FNEBIE :1 ;
        word FNEAIE :1 ;
        word RBIE :1 ;
        word TBIE :1 ;
    } Bits ;
} GIFER_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word FATL_IF :1 ;
        word INTL_IF :1 ;
        word ILCF_IF :1 ;
        word CSA_IF :1 ;
        word MRC_IF :1 ;
        word MOC_IF :1 ;
        word CCL_IF :1 ;
        word MXS_IF :1 ;
        word MTX_IF :1 ;
        word LTXB_IF :1 ;
        word LTXA_IF :1 ;
        word TBVB_IF :1 ;
        word TBVA_IF :1 ;
        word TI2_IF :1 ;
        word TI1_IF :1 ;
        word CYS_IF :1 ;
    } Bits ;
} PIFR0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word EMC_IF :1 ;
        word IPC_IF :1 ;
        word PECF_IF :1 ;
        word PSC_IF :1 ;
        word SSI3_IF :1 ;
        word SSI2_IF :1 ;
        word SSI1_IF :1 ;
        word SSI0_IF :1 ;
        word :1 ;
        word :1 ;
        word EVT_IF :1 ;
        word ODT_IF :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
    } Bits ;
} PIFR1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word FATL_IE :1 ;
        word INTL_IE :1 ;
        word ILCF_IE :1 ;
        word CSA_IE :1 ;
        word MRC_IE :1 ;
        word MOC_IE :1 ;
        word CCL_IE :1 ;
        word MXS_IE :1 ;
        word MTX_IE :1 ;
        word LTXB_IE :1 ;
        word LTXA_IE :1 ;
        word TBVB_IE :1 ;
        word TBVA_IE :1 ;
        word TI2_IE :1 ;
        word TI1_IE :1 ;
        word CYS_IE :1 ;
    } Bits ;
} PIER0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word EMC_IE :1 ;
        word IPC_IE :1 ;
        word PECF_IE :1 ;
        word PSC_IE :1 ;
        word SSI3_IE :1 ;
        word SSI2_IE :1 ;
        word SSI1_IE :1 ;
        word SSI0_IE :1 ;
        word :1 ;
        word :1 ;
        word EVT_IE :1 ;
        word ODT_IE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
    } Bits ;
} PIER1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word FRLB_EF :1 ;
        word FRLA_EF :1 ;
        word PCMI_EF :1 ;
        word FOVB_EF :1 ;
        word FOVA_EF :1 ;
        word MBS_EF :1 ;
        word MBU_EF :1 ;
        word LCK_EF :1 ;
        word DBL_EF :1 ;
        word SBCF_EF :1 ;
        word FID_EF :1 ;
        word DPL_EF :1 ;
        word SPL_EF :1 ;
        word NML_EF :1 ;
        word NMF_EF :1 ;
        word ILSA_EF :1 ;
    } Bits ;
} CHIERFR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word TBIVEC :5 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word RBIVEC :5 ;
    } Bits ;
} MBIVEC_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word STATUS_ERR_CNT :16 ;
    } Bits ;
} CASERCR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word STATUS_ERR_CNT :16 ;
    } Bits ;
} CBSERCR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word ERRMODE :2 ;
        word SLOTMODE :2 ;
        word :1 ;
        word PROTSTATE :3 ;
        word STARTUPSTATE :4 ;
        word :1 ;
        word WAKEUPSTATUS :3 ;
    } Bits ;
} PSR0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word CSAA :1 ;
        word CSP :1 ;
        word :1 ;
        word REMCSAT :5 ;
        word CPN :1 ;
        word HHR :1 ;
        word FRZ :1 ;
        word APTAC :5 ;
    } Bits ;
} PSR1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word NBVB :1 ;
        word NSEB :1 ;
        word STCB :1 ;
        word SBVB :1 ;
        word SSEB :1 ;
        word MTB :1 ;
        word NBVA :1 ;
        word NSEA :1 ;
        word STCA :1 ;
        word SBVA :1 ;
        word SSEA :1 ;
        word MTA :1 ;
        word CLKCORRFAILCNT :4 ;
    } Bits ;
} PSR2_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word WUB :1 ;
        word ABVB :1 ;
        word AACB :1 ;
        word ACEB :1 ;
        word ASEB :1 ;
        word AVFB :1 ;
        word :1 ;
        word :1 ;
        word WUA :1 ;
        word ABVA :1 ;
        word AACA :1 ;
        word ACEA :1 ;
        word ASEA :1 ;
        word AVFA :1 ;
    } Bits ;
} PSR3_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word MTCT :14 ;
    } Bits ;
} MTCTR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word CYCCNT :6 ;
    } Bits ;
} CYCTR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word SLOTCNTA :11 ;
    } Bits ;
} SLTCTAR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word SLOTCNTB :11 ;
    } Bits ;
} SLTCTBR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word RATECORR :16 ;
    } Bits ;
} RTCORVR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word OFFSETCORR :16 ;
    } Bits ;
} OFCORVR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MIF :1 ;
        word PRIF :1 ;
        word CHIF :1 ;
        word WUPIF :1 ;
        word FNEBIF :1 ;
        word FNEAIF :1 ;
        word RBIF :1 ;
        word TBIF :1 ;
    } Bits ;
} CIFRR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word TIMEOUT :5 ;
    } Bits ;
} SYMATOR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word SFEVB :4 ;
        word SFEVA :4 ;
        word SFODB :4 ;
        word SFODA :4 ;
    } Bits ;
} SFCNTR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word SFT_OFFSET15 :1 ;
        word SFT_OFFSET14 :1 ;
        word SFT_OFFSET13 :1 ;
        word SFT_OFFSET12 :1 ;
        word SFT_OFFSET11 :1 ;
        word SFT_OFFSET10 :1 ;
        word SFT_OFFSET9 :1 ;
        word SFT_OFFSET8 :1 ;
        word SFT_OFFSET7 :1 ;
        word SFT_OFFSET6 :1 ;
        word SFT_OFFSET5 :1 ;
        word SFT_OFFSET4 :1 ;
        word SFT_OFFSET3 :1 ;
        word SFT_OFFSET2 :1 ;
        word SFT_OFFSET1 :1 ;
        word :1 ;
    } Bits ;
} SFTOR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word ELKT :1 ;
        word OLKT :1 ;
        word CYCNUM :6 ;
        word ELKS :1 ;
        word OLKS :1 ;
        word EVAL :1 ;
        word OVAL :1 ;
        word :1 ;
        word OPT :1 ;
        word SDVEN :1 ;
        word SIDEN :1 ;
    } Bits ;
} SFTCCSR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word SYNFRID :10 ;
    } Bits ;
} SFIDRFR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FVAL :10 ;
    } Bits ;
} SFIDAFVR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FMSK :10 ;
    } Bits ;
} SFIDAFMR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word NMVP :16 ;
    } Bits ;
} NMVR0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word NMVP :16 ;
    } Bits ;
} NMVR1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word NMVP :16 ;
    } Bits ;
} NMVR2_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word NMVP :16 ;
    } Bits ;
} NMVR3_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word NMVP :16 ;
    } Bits ;
} NMVR4_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word NMVP :16 ;
    } Bits ;
} NMVR5_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word NMVL :4 ;
    } Bits ;
} NMVLR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word T2_CFG :1 ;
        word T2_REP :1 ;
        word :1 ;
        word T2SP :1 ;
        word T2TR :1 ;
        word T2ST :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word T1_REP :1 ;
        word :1 ;
        word T1SP :1 ;
        word T1TR :1 ;
        word T1ST :1 ;
    } Bits ;
} TICCR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word T1_CYC_VAL :6 ;
        word :1 ;
        word :1 ;
        word T1_CYC_MSK :6 ;
    } Bits ;
} TI1CYSR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word T1_MTOFFSET :14 ;
    } Bits ;
} TI1MTOR_Tag ;

typedef union
{
    word Reg ;
    union
    {
        union
        {

            struct
            {
                word :1 ;
                word :1 ;
                word T2_CYC_MSK :6 ;
                word :1 ;
                word :1 ;
                word T2_CYC_VAL :6 ;
            }

            Bits ;
        } TI2CR0_CYC_Tag ;
        union
        {

            struct
            {
                word T2_MTCNT :16 ;
            }

            Bits ;
        } TI2CR0_MTCNT_Tag ;
    } SameAddr_Tag ;
} TI2CR0_MTCNT_Tag ;

typedef union
{
    word Reg ;
    union
    {
        union
        {

            struct
            {
                word :1 ;
                word :1 ;
                word T2_MTOFFSET :14 ;
            }

            Bits ;
        } TI2CR1_MTOFFSET_Tag ;
        union
        {

            struct
            {
                word T2_MTCNT :16 ;
            }

            Bits ;
        } TI2CR1_MTCNT_Tag ;
    } SameAddr_Tag ;
} TI2CR1_MTOFFSET_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word WMD :1 ;
        word :1 ;
        word SEL :2 ;
        word :1 ;
        word SLOTNUMBER :11 ;
    } Bits ;
} SSSR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word WMD :1 ;
        word :1 ;
        word SEL :2 ;
        word :1 ;
        word CNTCFG :2 ;
        word MCY :1 ;
        word VFR :1 ;
        word SYF :1 ;
        word NUF :1 ;
        word SUF :1 ;
        word STATUSMASK :4 ;
    } Bits ;
} SSCCR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word VFB :1 ;
        word SYB :1 ;
        word NFB :1 ;
        word SUB :1 ;
        word SEB :1 ;
        word CEB :1 ;
        word BVB :1 ;
        word TCB :1 ;
        word VFA :1 ;
        word SYA :1 ;
        word NFA :1 ;
        word SUA :1 ;
        word SEA :1 ;
        word CEA :1 ;
        word BVA :1 ;
        word TCA :1 ;
    } Bits ;
} SSR0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word VFB :1 ;
        word SYB :1 ;
        word NFB :1 ;
        word SUB :1 ;
        word SEB :1 ;
        word CEB :1 ;
        word BVB :1 ;
        word TCB :1 ;
        word VFA :1 ;
        word SYA :1 ;
        word NFA :1 ;
        word SUA :1 ;
        word SEA :1 ;
        word CEA :1 ;
        word BVA :1 ;
        word TCA :1 ;
    } Bits ;
} SSR1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word VFB :1 ;
        word SYB :1 ;
        word NFB :1 ;
        word SUB :1 ;
        word SEB :1 ;
        word CEB :1 ;
        word BVB :1 ;
        word TCB :1 ;
        word VFA :1 ;
        word SYA :1 ;
        word NFA :1 ;
        word SUA :1 ;
        word SEA :1 ;
        word CEA :1 ;
        word BVA :1 ;
        word TCA :1 ;
    } Bits ;
} SSR2_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word VFB :1 ;
        word SYB :1 ;
        word NFB :1 ;
        word SUB :1 ;
        word SEB :1 ;
        word CEB :1 ;
        word BVB :1 ;
        word TCB :1 ;
        word VFA :1 ;
        word SYA :1 ;
        word NFA :1 ;
        word SUA :1 ;
        word SEA :1 ;
        word CEA :1 ;
        word BVA :1 ;
        word TCA :1 ;
    } Bits ;
} SSR3_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word VFB :1 ;
        word SYB :1 ;
        word NFB :1 ;
        word SUB :1 ;
        word SEB :1 ;
        word CEB :1 ;
        word BVB :1 ;
        word TCB :1 ;
        word VFA :1 ;
        word SYA :1 ;
        word NFA :1 ;
        word SUA :1 ;
        word SEA :1 ;
        word CEA :1 ;
        word BVA :1 ;
        word TCA :1 ;
    } Bits ;
} SSR4_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word VFB :1 ;
        word SYB :1 ;
        word NFB :1 ;
        word SUB :1 ;
        word SEB :1 ;
        word CEB :1 ;
        word BVB :1 ;
        word TCB :1 ;
        word VFA :1 ;
        word SYA :1 ;
        word NFA :1 ;
        word SUA :1 ;
        word SEA :1 ;
        word CEA :1 ;
        word BVA :1 ;
        word TCA :1 ;
    } Bits ;
} SSR5_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word VFB :1 ;
        word SYB :1 ;
        word NFB :1 ;
        word SUB :1 ;
        word SEB :1 ;
        word CEB :1 ;
        word BVB :1 ;
        word TCB :1 ;
        word VFA :1 ;
        word SYA :1 ;
        word NFA :1 ;
        word SUA :1 ;
        word SEA :1 ;
        word CEA :1 ;
        word BVA :1 ;
        word TCA :1 ;
    } Bits ;
} SSR6_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word VFB :1 ;
        word SYB :1 ;
        word NFB :1 ;
        word SUB :1 ;
        word SEB :1 ;
        word CEB :1 ;
        word BVB :1 ;
        word TCB :1 ;
        word VFA :1 ;
        word SYA :1 ;
        word NFA :1 ;
        word SUA :1 ;
        word SEA :1 ;
        word CEA :1 ;
        word BVA :1 ;
        word TCA :1 ;
    } Bits ;
} SSR7_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word SLOTSTATUSCNT :16 ;
    } Bits ;
} SSCR0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word SLOTSTATUSCNT :16 ;
    } Bits ;
} SSCR1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word SLOTSTATUSCNT :16 ;
    } Bits ;
} SSCR2_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word SLOTSTATUSCNT :16 ;
    } Bits ;
} SSCR3_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTE :1 ;
        word :1 ;
        word CYCCNTMSK :6 ;
        word :1 ;
        word :1 ;
        word CYCCNTVAL :6 ;
    } Bits ;
} MTSACFR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTE :1 ;
        word :1 ;
        word CYCCNTMSK :6 ;
        word :1 ;
        word :1 ;
        word CYCCNTVAL :6 ;
    } Bits ;
} MTSBCFR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word WMD :1 ;
        word :1 ;
        word SEL :2 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word RSBIDX :6 ;
    } Bits ;
} RSBIR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word SEL :1 ;
    } Bits ;
} RFSR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word SIDX :10 ;
    } Bits ;
} RFSIR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word FIFO_DEPTH :8 ;
        word :1 ;
        word ENTRY_SIZE :7 ;
    } Bits ;
} RFDSR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word RDIDX :10 ;
    } Bits ;
} RFARIR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word RDIDX :10 ;
    } Bits ;
} RFBRIR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MIDAFVAL :16 ;
    } Bits ;
} RFMIDAFVR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MIDAFMSK :16 ;
    } Bits ;
} RFMIAFMR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FIDRFVAL :11 ;
    } Bits ;
} RFFIDRFVR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FIDRFMSK :11 ;
    } Bits ;
} RFFIDRFMR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word WMD :1 ;
        word IBD :1 ;
        word SEL :2 ;
        word :1 ;
        word SID :11 ;
    } Bits ;
} RFRFCFR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word F3MD :1 ;
        word F2MD :1 ;
        word F1MD :1 ;
        word F0MD :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word F3EN :1 ;
        word F2EN :1 ;
        word F1EN :1 ;
        word F0EN :1 ;
    } Bits ;
} RFRFCTR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word LASTDYNTXSLOTA :11 ;
    } Bits ;
} LDTXSLAR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word LASTDYNTXSLOTB :11 ;
    } Bits ;
} LDTXSLBR_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word action_point_offset :6 ;
        word static_slot_length :10 ;
    } Bits ;
} PCR0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word macro_after_first_static_slot :14 ;
    } Bits ;
} PCR1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word wakeup_symbol_rx_low :6 ;
        word minislot_action_point_offset :5 ;
        word coldstart_attempts :5 ;
    } Bits ;
} PCR3_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word cas_rx_low_max :7 ;
        word wakeup_symbol_rx_window :9 ;
    } Bits ;
} PCR4_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word tss_transmitter :4 ;
        word wakeup_symbol_tx_low :6 ;
        word wakeup_symbol_rx_idle :6 ;
    } Bits ;
} PCR5_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word symbol_window_after_action_point :8 ;
        word macro_initial_offset_a :7 ;
    } Bits ;
} PCR6_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word decoding_correction_b :9 ;
        word micro_per_macro_nom_half :7 ;
    } Bits ;
} PCR7_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word max_without_clock_correction_fatal :4 ;
        word max_without_clock_correction_passive :4 ;
        word wakeup_symbol_tx_idle :8 ;
    } Bits ;
} PCR8_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word minislot_exists :1 ;
        word symbol_window_exists :1 ;
        word offset_correction_out :14 ;
    } Bits ;
} PCR9_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word single_slot_enabled :1 ;
        word wakeup_channel :1 ;
        word macro_per_cycle :14 ;
    } Bits ;
} PCR10_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word key_slot_used_for_startup :1 ;
        word key_slot_used_for_sync :1 ;
        word offset_correction_start :14 ;
    } Bits ;
} PCR11_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word allow_passive_to_active :5 ;
        word key_slot_header_crc :11 ;
    } Bits ;
} PCR12_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word first_minislot_action_point_offset :6 ;
        word static_slot_after_action_point :10 ;
    } Bits ;
} PCR13_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word rate_correction_out :11 ;
        word listen_timeout :5 ;
    } Bits ;
} PCR14_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word listen_timeout :16 ;
    } Bits ;
} PCR15_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word macro_initial_offset_b :7 ;
        word noise_listen_timeout :9 ;
    } Bits ;
} PCR16_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word noise_listen_timeout :16 ;
    } Bits ;
} PCR17_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word wakeup_pattern :6 ;
        word key_slot_id :10 ;
    } Bits ;
} PCR18_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word decoding_correction_a :9 ;
        word payload_length_static :7 ;
    } Bits ;
} PCR19_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word micro_initial_offset_b :8 ;
        word micro_initial_offset_a :8 ;
    } Bits ;
} PCR20_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word extern_rate_correction :3 ;
        word latest_tx :13 ;
    } Bits ;
} PCR21_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word comp_accepted_startup_range_a :11 ;
        word micro_per_cycle :4 ;
    } Bits ;
} PCR22_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word micro_per_cycle :16 ;
    } Bits ;
} PCR23_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word cluster_drift_damping :5 ;
        word max_payload_length_dynamic :7 ;
        word micro_per_cycle_min :4 ;
    } Bits ;
} PCR24_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word micro_per_cycle_min :16 ;
    } Bits ;
} PCR25_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word allow_halt_due_to_clock :1 ;
        word comp_accepted_startup_range_b :11 ;
        word micro_per_cycle_max :4 ;
    } Bits ;
} PCR26_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word micro_per_cycle_max :16 ;
    } Bits ;
} PCR27_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word dynamic_slot_idle_phase :2 ;
        word macro_after_offset_correction :14 ;
    } Bits ;
} PCR28_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word extern_offset_correction :3 ;
        word minislots_max :13 ;
    } Bits ;
} PCR29_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word sync_node_max :4 ;
    } Bits ;
} PCR30_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR0_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR1_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR2_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR2_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR2_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR2_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR3_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR3_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR3_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR3_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR4_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR4_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR4_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR4_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR5_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR5_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR5_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR5_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR6_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR6_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR6_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR6_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR7_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR7_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR7_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR7_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR8_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR8_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR8_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR8_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR9_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR9_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR9_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR9_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR10_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR10_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR10_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR10_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR11_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR11_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR11_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR11_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR12_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR12_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR12_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR12_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR13_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR13_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR13_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR13_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR14_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR14_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR14_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR14_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR15_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR15_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR15_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR15_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR16_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR16_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR16_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR16_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR17_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR17_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR17_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR17_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR18_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR18_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR18_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR18_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR19_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR19_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR19_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR19_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR20_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR20_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR20_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR20_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR21_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR21_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR21_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR21_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR22_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR22_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR22_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR22_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR23_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR23_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR23_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR23_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR24_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR24_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR24_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR24_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR25_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR25_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR25_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR25_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR26_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR26_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR26_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR26_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR27_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR27_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR27_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR27_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR28_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR28_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR28_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR28_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR29_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR29_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR29_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR29_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR30_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR30_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR30_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR30_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word MCM :1 ;
        word MBT :1 ;
        word MTD :1 ;
        word CMT :1 ;
        word EDT :1 ;
        word LCKT :1 ;
        word MBIE :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word DUP :1 ;
        word DVAL :1 ;
        word EDS :1 ;
        word LCKS :1 ;
        word MBIF :1 ;
    } Bits ;
} MBCCSR31_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word MTM :1 ;
        word CHA :1 ;
        word CHB :1 ;
        word CCFE :1 ;
        word CCFMSK :6 ;
        word CCFVAL :6 ;
    } Bits ;
} MBCCFR31_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word FID :11 ;
    } Bits ;
} MBFIDR31_Tag ;

typedef union
{
    word Reg ;
    struct
    {
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word :1 ;
        word MBIDX :6 ;
    } Bits ;
} MBIDXR31_Tag ;

/************************************************************************************************************************/
/************************************************************************************************************************/
/************************************************************************************************************************/
/************************************************************************************************************************/
/************************************************************************************************************************/
/************************************************************************************************************************/

/* Define instances of modules */
/* 0x0000-0x0009 Port Integration Module (PIM) Map 1 of 6 */
#define PORTA           (*(volatile PORTA_Tag *) (REG_BASE + 0x0000))
#define PORTB           (*(volatile PORTB_Tag *) (REG_BASE + 0x0001))
#define DDRA            (*(volatile DDRA_Tag *) (REG_BASE + 0x0002))
#define DDRB            (*(volatile DDRB_Tag *) (REG_BASE + 0x0003))
#define PORTC           (*(volatile PORTC_Tag *) (REG_BASE + 0x0004))
#define PORTD           (*(volatile PORTD_Tag *) (REG_BASE + 0x0005))
#define DDRC            (*(volatile DDRC_Tag *) (REG_BASE + 0x0006))
#define DDRD            (*(volatile DDRD_Tag *) (REG_BASE + 0x0007))
#define PORTE           (*(volatile PORTE_Tag *) (REG_BASE + 0x0008))
#define DDRE            (*(volatile DDRE_Tag *) (REG_BASE + 0x0009))
/* 0x000A-0x000B Module Mapping Control (S12XMMC) Map 1 of 2 */
#define MMCCTL0         (*(volatile MMCCTL0_Tag *) (REG_BASE + 0x000A))
#define MODE            (*(volatile MODE_Tag *) (REG_BASE + 0x000B))
/* 0x000C-0x000D Port Integration Module (PIM) Map 2 of 6 */
#define PUCR            (*(volatile PUCR_Tag *) (REG_BASE + 0x000C))
#define RDRIV           (*(volatile RDRIV_Tag *) (REG_BASE + 0x000D))
/* 0x000E-0x000F External Bus Interface (S12XEBI) Map */
#define EBICTL0         (*(volatile EBICTL0_Tag *) (REG_BASE + 0x000E))
#define EBICTL1         (*(volatile EBICTL1_Tag *) (REG_BASE + 0x000F))
/* 0x0010-0x0017 Module Mapping Control (S12XMMC) Map 2 of 2 */
#define GPAGE           (*(volatile GPAGE_Tag *) (REG_BASE + 0x0010))
#define DIRECT          (*(volatile DIRECT_Tag *) (REG_BASE + 0x0011))
#define MMCCTL1         (*(volatile MMCCTL1_Tag *) (REG_BASE + 0x0013))
#define PPAGE           (*(volatile PPAGE_Tag *) (REG_BASE + 0x0015))
#define RPAGE           (*(volatile RPAGE_Tag *) (REG_BASE + 0x0016))
#define EPAGE           (*(volatile EPAGE_Tag *) (REG_BASE + 0x0017))
/* 0x001C-0x001D Port Integration Module (PIM) Map 3 of 6 */
#define ECLKCTL         (*(volatile ECLKCTL_Tag *) (REG_BASE + 0x001C))
#define IRQCR           (*(volatile IRQCR_Tag *) (REG_BASE + 0x001E))
/* 0x0020-0x0027 Debug Module (S12XDBG) Map */
#define DBGC1           (*(volatile DBGC1_Tag *) (REG_BASE + 0x0020))
#define DBGSR           (*(volatile DBGSR_Tag *) (REG_BASE + 0x0021))
#define DBGTCR          (*(volatile DBGTCR_Tag *) (REG_BASE + 0x0022))
#define DBGC2           (*(volatile DBGC2_Tag *) (REG_BASE + 0x0023))
#define DBGTBH          (*(volatile DBGTBH_Tag *) (REG_BASE + 0x0024))
#define DBGTBL          (*(volatile DBGTBL_Tag *) (REG_BASE + 0x0025))
#define DBGCNT          (*(volatile DBGCNT_Tag *) (REG_BASE + 0x0026))
#define DBGSCRX         (*(volatile DBGSCRX_Tag *) (REG_BASE + 0x0027))
#define DBGMFR          (*(volatile DBGMFR_Tag *) (REG_BASE + 0x0027))
#define DBGXAH          (*(volatile DBGXAH_Tag *) (REG_BASE + 0x0029))
#define DBGXAM          (*(volatile DBGXAM_Tag *) (REG_BASE + 0x002A))
#define DBGXAL          (*(volatile DBGXAL_Tag *) (REG_BASE + 0x002B))
#define DBGXDH          (*(volatile DBGXDH_Tag *) (REG_BASE + 0x002C))
#define DBGXDL          (*(volatile DBGXDL_Tag *) (REG_BASE + 0x002D))
#define DBGXDHM         (*(volatile DBGXDHM_Tag *) (REG_BASE + 0x002E))
#define DBGXDLM         (*(volatile DBGXDLM_Tag *) (REG_BASE + 0x002F))
/* 0x0032-0x0033 Port Integration Module (PIM) Map 4 of 6 */
#define PORTK           (*(volatile PORTK_Tag *) (REG_BASE + 0x0032))
#define DDRK            (*(volatile DDRK_Tag *) (REG_BASE + 0x0033))
/* 0x0034-0x003F Clock and Reset Generator (CRG) Map */
#define SYNR            (*(volatile SYNR_Tag *) (REG_BASE + 0x0034))
#define REFDV           (*(volatile REFDV_Tag *) (REG_BASE + 0x0035))
#define POSTDIV         (*(volatile POSTDIV_Tag *) (REG_BASE + 0x0036))
#define CRGFLG          (*(volatile CRGFLG_Tag *) (REG_BASE + 0x0037))
#define CRGINT          (*(volatile CRGINT_Tag *) (REG_BASE + 0x0038))
#define CLKSEL          (*(volatile CLKSEL_Tag *) (REG_BASE + 0x0039))
#define PLLCTL          (*(volatile PLLCTL_Tag *) (REG_BASE + 0x003A))
#define RTICTL          (*(volatile RTICTL_Tag *) (REG_BASE + 0x003B))
#define COPCTL          (*(volatile COPCTL_Tag *) (REG_BASE + 0x003C))
#define FORBYP          (*(volatile FORBYP_Tag *) (REG_BASE + 0x003D))
#define CTCTL           (*(volatile CTCTL_Tag *) (REG_BASE + 0x003E))
#define ARMCOP          (*(volatile ARMCOP_Tag *) (REG_BASE + 0x003F))
/* 0x0040-0x007F Enhanced Capture Timer 16-Bit 8-Channels (ECT) Map*/
#define ECT_TIOS        (*(volatile ECT_TIOS_Tag *) (REG_BASE + 0x0040))
#define ECT_CFORC       (*(volatile ECT_CFORC_Tag *) (REG_BASE + 0x0041))
#define ECT_OC7M        (*(volatile ECT_OC7M_Tag *) (REG_BASE + 0x0042))
#define ECT_OC7D        (*(volatile ECT_OC7D_Tag *) (REG_BASE + 0x0043))
#define ECT_TCNTH       (*(volatile ECT_TCNTH_Tag *) (REG_BASE + 0x0044))
#define ECT_TCNTL        (*(volatile ECT_TCNTL_Tag *) (REG_BASE + 0x0045))
#define ECT_TSCR1       (*(volatile ECT_TSCR1_Tag *) (REG_BASE + 0x0046))
#define ECT_TTOV        (*(volatile ECT_TTOV_Tag *) (REG_BASE + 0x0047))
#define ECT_TCTL1       (*(volatile ECT_TCTL1_Tag *) (REG_BASE + 0x0048))
#define ECT_TCTL2       (*(volatile ECT_TCTL2_Tag *) (REG_BASE + 0x0049))
#define ECT_TCTL3       (*(volatile ECT_TCTL3_Tag *) (REG_BASE + 0x004A))
#define ECT_TCTL4       (*(volatile ECT_TCTL4_Tag *) (REG_BASE + 0x004B))
#define ECT_TIE         (*(volatile ECT_TIE_Tag *) (REG_BASE + 0x004C))
#define ECT_TSCR2       (*(volatile ECT_TSCR2_Tag *) (REG_BASE + 0x004D))
#define ECT_TFLG1       (*(volatile ECT_TFLG1_Tag *) (REG_BASE + 0x004E))
#define ECT_TFLG2       (*(volatile ECT_TFLG2_Tag *) (REG_BASE + 0x004F))
#define ECT_TC0H        (*(volatile ECT_TC0H_Tag *) (REG_BASE + 0x0050))
#define ECT_TC0L        (*(volatile ECT_TC0L_Tag *) (REG_BASE + 0x0051))
#define ECT_TC1H        (*(volatile ECT_TC1H_Tag *) (REG_BASE + 0x0052))
#define ECT_TC1L        (*(volatile ECT_TC1L_Tag *) (REG_BASE + 0x0053))
#define ECT_TC2H        (*(volatile ECT_TC2H_Tag *) (REG_BASE + 0x0054))
#define ECT_TC2L        (*(volatile ECT_TC2L_Tag *) (REG_BASE + 0x0055))
#define ECT_TC3H        (*(volatile ECT_TC3H_Tag *) (REG_BASE + 0x0056))
#define ECT_TC3L        (*(volatile ECT_TC3L_Tag *) (REG_BASE + 0x0057))
#define ECT_TC4H        (*(volatile ECT_TC4H_Tag *) (REG_BASE + 0x0058))
#define ECT_TC4L        (*(volatile ECT_TC4L_Tag *) (REG_BASE + 0x0059))
#define ECT_TC5H        (*(volatile ECT_TC5H_Tag *) (REG_BASE + 0x005A))
#define ECT_TC5L        (*(volatile ECT_TC5L_Tag *) (REG_BASE + 0x005B))
#define ECT_TC6H        (*(volatile ECT_TC6H_Tag *) (REG_BASE + 0x005C))
#define ECT_TC6L        (*(volatile ECT_TC6L_Tag *) (REG_BASE + 0x005D))
#define ECT_TC7H        (*(volatile ECT_TC7H_Tag *) (REG_BASE + 0x005E))
#define ECT_TC7L        (*(volatile ECT_TC7L_Tag *) (REG_BASE + 0x005F))
#define ECT_PACTL       (*(volatile ECT_PACTL_Tag *) (REG_BASE + 0x0060))
#define ECT_PAFLG       (*(volatile ECT_PAFLG_Tag *) (REG_BASE + 0x0061))
#define ECT_PACN3       (*(volatile ECT_PACN3_Tag *) (REG_BASE + 0x0062))
#define ECT_PACN2       (*(volatile ECT_PACN2_Tag *) (REG_BASE + 0x0063))
#define ECT_PACN1       (*(volatile ECT_PACN1_Tag *) (REG_BASE + 0x0064))
#define ECT_PACN0       (*(volatile ECT_PACN0_Tag *) (REG_BASE + 0x0065))
#define ECT_MCCTL       (*(volatile ECT_MCCTL_Tag *) (REG_BASE + 0x0066))
#define ECT_MCFLG       (*(volatile ECT_MCFLG_Tag *) (REG_BASE + 0x0067))
#define ECT_ICPAR       (*(volatile ECT_ICPAR_Tag *) (REG_BASE + 0x0068))
#define ECT_DLYCT       (*(volatile ECT_DLYCT_Tag *) (REG_BASE + 0x0069))
#define ECT_ICOVW       (*(volatile ECT_ICOVW_Tag *) (REG_BASE + 0x006A))
#define ECT_ICSYS       (*(volatile ECT_ICSYS_Tag *) (REG_BASE + 0x006B))
#define ECT_OCPD        (*(volatile ECT_OCPD_Tag *) (REG_BASE + 0x006C))
#define ECT_TIMTST      (*(volatile ECT_TIMTST_Tag *) (REG_BASE + 0x006D))
#define ECT_PTPSR       (*(volatile ECT_PTPSR_Tag *) (REG_BASE + 0x006E))
#define ECT_PTMCPSR     (*(volatile ECT_PTMCPSR_Tag *) (REG_BASE + 0x006F))
#define ECT_PBCTL       (*(volatile ECT_PBCTL_Tag *) (REG_BASE + 0x0070))
#define ECT_PBFLG       (*(volatile ECT_PBFLG_Tag *) (REG_BASE + 0x0071))
#define ECT_PA3H        (*(volatile ECT_PA3H_Tag *) (REG_BASE + 0x0072))
#define ECT_PA2H        (*(volatile ECT_PA2H_Tag *) (REG_BASE + 0x0073))
#define ECT_PA1H        (*(volatile ECT_PA1H_Tag *) (REG_BASE + 0x0074))
#define ECT_PA0H        (*(volatile ECT_PA0H_Tag *) (REG_BASE + 0x0075))
#define ECT_MCCNTH      (*(volatile ECT_MCCNTH_Tag *) (REG_BASE + 0x0076))
#define ECT_MCCNTL      (*(volatile ECT_MCCNTL_Tag *) (REG_BASE + 0x0077))
#define ECT_TC0HH       (*(volatile ECT_TC0HH_Tag *) (REG_BASE + 0x0078))
#define ECT_TC0HL       (*(volatile ECT_TC0HL_Tag *) (REG_BASE + 0x0079))
#define ECT_TC1HH       (*(volatile ECT_TC1HH_Tag *) (REG_BASE + 0x007A))
#define ECT_TC1HL       (*(volatile ECT_TC1HL_Tag *) (REG_BASE + 0x007B))
#define ECT_TC2HH       (*(volatile ECT_TC2HH_Tag *) (REG_BASE + 0x007C))
#define ECT_TC2HL       (*(volatile ECT_TC2HL_Tag *) (REG_BASE + 0x007D))
#define ECT_TC3HH       (*(volatile ECT_TC3HH_Tag *) (REG_BASE + 0x007E))
#define ECT_TC3HL       (*(volatile ECT_TC3HL_Tag *) (REG_BASE + 0x007F))
/* 0x0080-0x00AF Analog-to-Digital Converter 12-bit 16-Channels (ATD) Map */
#define ATDCTL0         (*(volatile ATDCTL0_Tag *) (REG_BASE + 0x0080))
#define ATDCTL1         (*(volatile ATDCTL1_Tag *) (REG_BASE + 0x0081))
#define ATDCTL2         (*(volatile ATDCTL2_Tag *) (REG_BASE + 0x0082))
#define ATDCTL3         (*(volatile ATDCTL3_Tag *) (REG_BASE + 0x0083))
#define ATDCTL4         (*(volatile ATDCTL4_Tag *) (REG_BASE + 0x0084))
#define ATDCTL5         (*(volatile ATDCTL5_Tag *) (REG_BASE + 0x0085))
#define ATDSTAT0        (*(volatile ATDSTAT0_Tag *) (REG_BASE + 0x0086))
#define ATDCMPEH        (*(volatile ATDCMPEH_Tag *) (REG_BASE + 0x0088))
#define ATDCMPEL        (*(volatile ATDCMPEL_Tag *) (REG_BASE + 0x0089))
#define ATDSTAT2H       (*(volatile ATDSTAT2H_Tag *) (REG_BASE + 0x008A))
#define ATDSTATL        (*(volatile ATDSTATL_Tag *) (REG_BASE + 0x008B))
#define ATDDIENH        (*(volatile ATDDIENH_Tag *) (REG_BASE + 0x008C))
#define ATDDIENL        (*(volatile ATDDIENL_Tag *) (REG_BASE + 0x008D))
#define ATDCMPHTH       (*(volatile ATDCMPHTH_Tag *) (REG_BASE + 0x008E))
#define ATDCMPHTL       (*(volatile ATDCMPHTL_Tag *) (REG_BASE + 0x008F))
#define ATDDR0          (*(volatile ATDDR0_Tag *) (REG_BASE + 0x0090))
#define ATDDR0H         (*(volatile ATDDR0H_Tag *) (REG_BASE + 0x0090))
#define ATDDR0L         (*(volatile ATDDR0L_Tag *) (REG_BASE + 0x0091))
#define ATDDR1          (*(volatile ATDDR1_Tag *) (REG_BASE + 0x0092))
#define ATDDR1H         (*(volatile ATDDR1H_Tag *) (REG_BASE + 0x0092))
#define ATDDR1L         (*(volatile ATDDR1L_Tag *) (REG_BASE + 0x0093))
#define ATDDR2          (*(volatile ATDDR2_Tag *) (REG_BASE + 0x0094))
#define ATDDR2H         (*(volatile ATDDR2H_Tag *) (REG_BASE + 0x0094))
#define ATDDR2L         (*(volatile ATDDR2L_Tag *) (REG_BASE + 0x0095))
#define ATDDR3          (*(volatile ATDDR3_Tag *) (REG_BASE + 0x0096))
#define ATDDR3H         (*(volatile ATDDR3H_Tag *) (REG_BASE + 0x0096))
#define ATDDR3L         (*(volatile ATDDR3L_Tag *) (REG_BASE + 0x0097))
#define ATDDR4          (*(volatile ATDDR4_Tag *) (REG_BASE + 0x0098))
#define ATDDR4H         (*(volatile ATDDR4H_Tag *) (REG_BASE + 0x0098))
#define ATDDR4L         (*(volatile ATDDR4L_Tag *) (REG_BASE + 0x0099))
#define ATDDR5          (*(volatile ATDDR5_Tag *) (REG_BASE + 0x009A))
#define ATDDR5H         (*(volatile ATDDR5H_Tag *) (REG_BASE + 0x009A))
#define ATDDR5L         (*(volatile ATDDR5L_Tag *) (REG_BASE + 0x009B))
#define ATDDR6          (*(volatile ATDDR6_Tag *) (REG_BASE + 0x009C))
#define ATDDR6H         (*(volatile ATDDR6H_Tag *) (REG_BASE + 0x009C))
#define ATDDR6L         (*(volatile ATDDR6L_Tag *) (REG_BASE + 0x009D))
#define ATDDR7          (*(volatile ATDDR7_Tag *) (REG_BASE + 0x009E))
#define ATDDR7H         (*(volatile ATDDR7H_Tag *) (REG_BASE + 0x009E))
#define ATDDR7L         (*(volatile ATDDR7L_Tag *) (REG_BASE + 0x009F))
#define ATDDR8          (*(volatile ATDDR8_Tag *) (REG_BASE + 0x00A0))
#define ATDDR8H         (*(volatile ATDDR8H_Tag *) (REG_BASE + 0x00A0))
#define ATDDR8L         (*(volatile ATDDR8L_Tag *) (REG_BASE + 0x00A1))
#define ATDDR9          (*(volatile ATDDR9_Tag *) (REG_BASE + 0x00A2))
#define ATDDR9H         (*(volatile ATDDR9H_Tag *) (REG_BASE + 0x00A2))
#define ATDDR9L         (*(volatile ATDDR9L_Tag *) (REG_BASE + 0x00A3))
#define ATDDR10         (*(volatile ATDDR10_Tag *) (REG_BASE + 0x00A4))
#define ATDDR10H        (*(volatile ATDDR10H_Tag *) (REG_BASE + 0x00A4))
#define ATDDR10L        (*(volatile ATDDR10L_Tag *) (REG_BASE + 0x00A5))
#define ATDDR11         (*(volatile ATDDR11_Tag *) (REG_BASE + 0x00A6))
#define ATDDR11H        (*(volatile ATDDR11H_Tag *) (REG_BASE + 0x00A6))
#define ATDDR11L        (*(volatile ATDDR11L_Tag *) (REG_BASE + 0x00A7))
#define ATDDR12         (*(volatile ATDDR12_Tag *) (REG_BASE + 0x00A8))
#define ATDDR12H        (*(volatile ATDDR12H_Tag *) (REG_BASE + 0x00A8))
#define ATDDR12L        (*(volatile ATDDR12L_Tag *) (REG_BASE + 0x00A9))
#define ATDDR13         (*(volatile ATDDR13_Tag *) (REG_BASE + 0x00AA))
#define ATDDR13H        (*(volatile ATDDR13H_Tag *) (REG_BASE + 0x00AA))
#define ATDDR13L        (*(volatile ATDDR13L_Tag *) (REG_BASE + 0x00AB))
#define ATDDR14         (*(volatile ATDDR14_Tag *) (REG_BASE + 0x00AC))
#define ATDDR14H        (*(volatile ATDDR14H_Tag *) (REG_BASE + 0x00AC))
#define ATDDR14L        (*(volatile ATDDR14L_Tag *) (REG_BASE + 0x00AD))
#define ATDDR15         (*(volatile ATDDR15_Tag *) (REG_BASE + 0x00AE))
#define ATDDR15H        (*(volatile ATDDR15H_Tag *) (REG_BASE + 0x00AE))
#define ATDDR15L        (*(volatile ATDDR15L_Tag *) (REG_BASE + 0x00AF))
/* 0x00C8-0x00CF Asynchronous Serial Interface (SCI0) Map */
#define SCI0BDH         (*(volatile SCI0BDH_Tag *) (REG_BASE + 0x00C8))
#define SCI0BDL         (*(volatile SCI0BDL_Tag *) (REG_BASE + 0x00C9))
#define SCI0CR1         (*(volatile SCI0CR1_Tag *) (REG_BASE + 0x00CA))
#define SCI0ASR1        (*(volatile SCI0ASR1_Tag *) (REG_BASE + 0x00C8))
#define SCI0ACR1        (*(volatile SCI0ACR1_Tag *) (REG_BASE + 0x00C9))
#define SCI0ACR2        (*(volatile SCI0ACR2_Tag *) (REG_BASE + 0x00CA))
#define SCI0CR2         (*(volatile SCI0CR2_Tag *) (REG_BASE + 0x00CB))
#define SCI0SR1         (*(volatile SCI0SR1_Tag *) (REG_BASE + 0x00CC))
#define SCI0SR2         (*(volatile SCI0SR2_Tag *) (REG_BASE + 0x00CD))
#define SCI0DRH         (*(volatile SCI0DRH_Tag *) (REG_BASE + 0x00CE))
#define SCI0DRL         (*(volatile SCI0DRL_Tag *) (REG_BASE + 0x00CF))
/* 0x00D0-0x00D7 Asynchronous Serial Interface (SCI1) Map */
#define SCI1BDH         (*(volatile SCI1BDH_Tag *) (REG_BASE + 0x00D0))
#define SCI1BDL         (*(volatile SCI1BDL_Tag *) (REG_BASE + 0x00D1))
#define SCI1CR1         (*(volatile SCI1CR1_Tag *) (REG_BASE + 0x00D2))
#define SCI1ASR1        (*(volatile SCI1ASR1_Tag *) (REG_BASE + 0x00D0))
#define SCI1ACR1        (*(volatile SCI1ACR1_Tag *) (REG_BASE + 0x00D1))
#define SCI1ACR2        (*(volatile SCI1ACR2_Tag *) (REG_BASE + 0x00D2))
#define SCI1CR2         (*(volatile SCI1CR2_Tag *) (REG_BASE + 0x00D3))
#define SCI1SR1         (*(volatile SCI1SR1_Tag *) (REG_BASE + 0x00D4))
#define SCI1SR2         (*(volatile SCI1SR2_Tag *) (REG_BASE + 0x00D5))
#define SCI1DRH         (*(volatile SCI1DRH_Tag *) (REG_BASE + 0x00D6))
#define SCI1DRL         (*(volatile SCI1DRL_Tag *) (REG_BASE + 0x00D7))
/* 0x00D8-0x00DF Serial Peripheral Interface (SPI0) Map */
#define SPI0CR1         (*(volatile SPI0CR1_Tag *) (REG_BASE + 0x00D8))
#define SPI0CR2         (*(volatile SPI0CR2_Tag *) (REG_BASE + 0x00D9))
#define SPI0BR          (*(volatile SPI0BR_Tag *) (REG_BASE + 0x00DA))
#define SPI0SR          (*(volatile SPI0SR_Tag *) (REG_BASE + 0x00DB))
#define SPI0DR          (*(volatile SPI0DR_Tag *) (REG_BASE + 0x00DC))
#define SPI0DRH         (*(volatile SPI0DRH_Tag *) (REG_BASE + 0x00DC))
#define SPI0DRL         (*(volatile SPI0DRL_Tag *) (REG_BASE + 0x00DD))
/* 0x00F0-0x00F7 Serial Peripheral Interface (SPI1) Map */
#define SPI1CR1         (*(volatile SPI1CR1_Tag *) (REG_BASE + 0x00F0))
#define SPI1CR2         (*(volatile SPI1CR2_Tag *) (REG_BASE + 0x00F1))
#define SPI1BR          (*(volatile SPI1BR_Tag *) (REG_BASE + 0x00F2))
#define SPI1SR          (*(volatile SPI1SR_Tag *) (REG_BASE + 0x00F3))
#define SPI1DR          (*(volatile SPI1DR_Tag *) (REG_BASE + 0x00F4))
#define SPI1DRH         (*(volatile SPI1DRH_Tag *) (REG_BASE + 0x00F4))
#define SPI1DRL         (*(volatile SPI1DRL_Tag *) (REG_BASE + 0x00F5))
/* 0x0100-0x0113 NVM Control Register (FTM) Map */
#define FCLKDIV         (*(volatile FCLKDIV_Tag *) (REG_BASE + 0x0100))
#define FSEC            (*(volatile FSEC_Tag *) (REG_BASE + 0x0101))
#define FCCOBIX         (*(volatile FCCOBIX_Tag *) (REG_BASE + 0x0102))
#define FECCRIX         (*(volatile FECCRIX_Tag *) (REG_BASE + 0x0103))
#define FCNFG           (*(volatile FCNFG_Tag *) (REG_BASE + 0x0104))
#define FERCNFG         (*(volatile FERCNFG_Tag *) (REG_BASE + 0x0105))
#define FSTAT           (*(volatile FSTAT_Tag *) (REG_BASE + 0x0106))
#define FERSTAT         (*(volatile FERSTAT_Tag *) (REG_BASE + 0x0107))
#define FPROT           (*(volatile FPROT_Tag *) (REG_BASE + 0x0108))
#define EPROT           (*(volatile EPROT_Tag *) (REG_BASE + 0x0109))
#define FCCOBHI         (*(volatile FCCOBHI_Tag *) (REG_BASE + 0x010A))
#define FCCOBLO         (*(volatile FCCOBLO_Tag *) (REG_BASE + 0x010B))
#define ETAGHI          (*(volatile ETAGHI_Tag *) (REG_BASE + 0x010C))
#define ETAGLO          (*(volatile ETAGLO_Tag *) (REG_BASE + 0x010D))
#define FECCRHI         (*(volatile FECCRHI_Tag *) (REG_BASE + 0x010E))
#define FECCRLO         (*(volatile FECCRLO_Tag *) (REG_BASE + 0x010F))
#define FOPT            (*(volatile FOPT_Tag *) (REG_BASE + 0x0110))
/* 0x0114-0x011F Memory Protection Unit (MPU) Map */
#define MPUFLG          (*(volatile MPUFLG_Tag *) (REG_BASE + 0x0114))
#define MPUASTAT0       (*(volatile MPUASTAT0_Tag *) (REG_BASE + 0x0115))
#define MPUASTAT1       (*(volatile MPUASTAT1_Tag *) (REG_BASE + 0x0116))
#define MPUASTAT2       (*(volatile MPUASTAT2_Tag *) (REG_BASE + 0x0117))
#define MPUSEL          (*(volatile MPUSEL_Tag *) (REG_BASE + 0x0119))
#define MPUDESC0        (*(volatile MPUDESC0_Tag *) (REG_BASE + 0x011A))
#define MPUDESC1        (*(volatile MPUDESC1_Tag *) (REG_BASE + 0x011B))
#define MPUDESC2        (*(volatile MPUDESC2_Tag *) (REG_BASE + 0x011C))
#define MPUDESC3        (*(volatile MPUDESC3_Tag *) (REG_BASE + 0x011D))
#define MPUDESC4        (*(volatile MPUDESC4_Tag *) (REG_BASE + 0x011E))
#define MPUDESC5        (*(volatile MPUDESC5_Tag *) (REG_BASE + 0x011F))
/* 0x0120-0x012F Interrupt Module (S12XINT) Map */
#define IVBR            (*(volatile IVBR_Tag *) (REG_BASE + 0x0121))
#define INT_XGPRIO      (*(volatile INT_XGPRIO_Tag *) (REG_BASE + 0x0126))
#define INT_CFADDR      (*(volatile INT_CFADDR_Tag *) (REG_BASE + 0x0127))
#define INT_CFDATA_ARR  ((volatile byte *) &INT_CFDATA0)
#define INT_CFDATA0     (*(volatile INT_CFDATA0_Tag *) (REG_BASE + 0x0128))
#define INT_CFDATA1     (*(volatile INT_CFDATA1_Tag *) (REG_BASE + 0x0129))
#define INT_CFDATA2     (*(volatile INT_CFDATA2_Tag *) (REG_BASE + 0x012A))
#define INT_CFDATA3     (*(volatile INT_CFDATA3_Tag *) (REG_BASE + 0x012B))
#define INT_CFDATA4     (*(volatile INT_CFDATA4_Tag *) (REG_BASE + 0x012C))
#define INT_CFDATA5     (*(volatile INT_CFDATA5_Tag *) (REG_BASE + 0x012D))
#define INT_CFDATA6     (*(volatile INT_CFDATA6_Tag *) (REG_BASE + 0x012E))
#define INT_CFDATA7     (*(volatile INT_CFDATA7_Tag *) (REG_BASE + 0x012F))
/* 0x0140-0x017F MSCAN (CAN0) Map */
#define CAN0CTL0        (*(volatile CAN0CTL0_Tag *) (REG_BASE + 0x0140))
#define CAN0CTL1        (*(volatile CAN0CTL1_Tag *) (REG_BASE + 0x0141))
#define CAN0BTR0        (*(volatile CAN0BTR0_Tag *) (REG_BASE + 0x0142))
#define CAN0BTR1        (*(volatile CAN0BTR1_Tag *) (REG_BASE + 0x0143))
#define CAN0RFLG        (*(volatile CAN0RFLG_Tag *) (REG_BASE + 0x0144))
#define CAN0RIER        (*(volatile CAN0RIER_Tag *) (REG_BASE + 0x0145))
#define CAN0TFLG        (*(volatile CAN0TFLG_Tag *) (REG_BASE + 0x0146))
#define CAN0TIER        (*(volatile CAN0TIER_Tag *) (REG_BASE + 0x0147))
#define CAN0TARQ        (*(volatile CAN0TARQ_Tag *) (REG_BASE + 0x0148))
#define CAN0TAAK        (*(volatile CAN0TAAK_Tag *) (REG_BASE + 0x0149))
#define CAN0TBSEL       (*(volatile CAN0TBSEL_Tag *) (REG_BASE + 0x014A))
#define CAN0IDAC        (*(volatile CAN0IDAC_Tag *) (REG_BASE + 0x014B))
#define CAN0MISC        (*(volatile CAN0MISC_Tag *) (REG_BASE + 0x014D))
#define CAN0RXERR       (*(volatile CAN0RXERR_Tag *) (REG_BASE + 0x014E))
#define CAN0TXERR       (*(volatile CAN0TXERR_Tag *) (REG_BASE + 0x014F))
#define CAN0IDAR0       (*(volatile CAN0IDAR0_Tag *) (REG_BASE + 0x0150))
#define CAN0IDAR1       (*(volatile CAN0IDAR1_Tag *) (REG_BASE + 0x0151))
#define CAN0IDAR2       (*(volatile CAN0IDAR2_Tag *) (REG_BASE + 0x0152))
#define CAN0IDAR3       (*(volatile CAN0IDAR3_Tag *) (REG_BASE + 0x0153))
#define CAN0IDMR0       (*(volatile CAN0IDMR0_Tag *) (REG_BASE + 0x0154))
#define CAN0IDMR1       (*(volatile CAN0IDMR1_Tag *) (REG_BASE + 0x0155))
#define CAN0IDMR2       (*(volatile CAN0IDMR2_Tag *) (REG_BASE + 0x0156))
#define CAN0IDMR3       (*(volatile CAN0IDMR3_Tag *) (REG_BASE + 0x0157))
#define CAN0IDAR4       (*(volatile CAN0IDAR4_Tag *) (REG_BASE + 0x0158))
#define CAN0IDAR5       (*(volatile CAN0IDAR5_Tag *) (REG_BASE + 0x0159))
#define CAN0IDAR6       (*(volatile CAN0IDAR6_Tag *) (REG_BASE + 0x015A))
#define CAN0IDAR7       (*(volatile CAN0IDAR7_Tag *) (REG_BASE + 0x015B))
#define CAN0IDMR4       (*(volatile CAN0IDMR4_Tag *) (REG_BASE + 0x015C))
#define CAN0IDMR5       (*(volatile CAN0IDMR5_Tag *) (REG_BASE + 0x015D))
#define CAN0IDMR6       (*(volatile CAN0IDMR6_Tag *) (REG_BASE + 0x015E))
#define CAN0IDMR7       (*(volatile CAN0IDMR7_Tag *) (REG_BASE + 0x015F))
#define CAN0RXIDR0      (*(volatile CAN0RXIDR0_Tag *) (REG_BASE + 0x0160))
#define CAN0RXIDR1      (*(volatile CAN0RXIDR1_Tag *) (REG_BASE + 0x0161))
#define CAN0RXIDR2      (*(volatile CAN0RXIDR2_Tag *) (REG_BASE + 0x0162))
#define CAN0RXIDR3      (*(volatile CAN0RXIDR3_Tag *) (REG_BASE + 0x0163))
#define CAN0RXDSR0      (*(volatile CAN0RXDSR0_Tag *) (REG_BASE + 0x0164))
#define CAN0RXDSR1      (*(volatile CAN0RXDSR1_Tag *) (REG_BASE + 0x0165))
#define CAN0RXDSR2      (*(volatile CAN0RXDSR2_Tag *) (REG_BASE + 0x0166))
#define CAN0RXDSR3      (*(volatile CAN0RXDSR3_Tag *) (REG_BASE + 0x0167))
#define CAN0RXDSR4      (*(volatile CAN0RXDSR4_Tag *) (REG_BASE + 0x0168))
#define CAN0RXDSR5      (*(volatile CAN0RXDSR5_Tag *) (REG_BASE + 0x0169))
#define CAN0RXDSR6      (*(volatile CAN0RXDSR6_Tag *) (REG_BASE + 0x016A))
#define CAN0RXDSR7      (*(volatile CAN0RXDSR7_Tag *) (REG_BASE + 0x016B))
#define CAN0RXDLR       (*(volatile CAN0RXDLR_Tag *) (REG_BASE + 0x016C))
#define CAN0RXTSRH      (*(volatile CAN0RXTSRH_Tag *) (REG_BASE + 0x016E))
#define CAN0RXTSRL      (*(volatile CAN0RXTSRL_Tag *) (REG_BASE + 0x016F))
#define CAN0TXIDR0      (*(volatile CAN0TXIDR0_Tag *) (REG_BASE + 0x0170))
#define CAN0TXIDR1      (*(volatile CAN0TXIDR0_Tag *) (REG_BASE + 0x0171))
#define CAN0TXIDR2      (*(volatile CAN0TXIDR0_Tag *) (REG_BASE + 0x0172))
#define CAN0TXIDR3      (*(volatile CAN0TXIDR0_Tag *) (REG_BASE + 0x0173))
#define CAN0TXDSR0      (*(volatile CAN0TXDSR0_Tag *) (REG_BASE + 0x0174))
#define CAN0TXDSR1      (*(volatile CAN0TXDSR0_Tag *) (REG_BASE + 0x0175))
#define CAN0TXDSR2      (*(volatile CAN0TXDSR0_Tag *) (REG_BASE + 0x0176))
#define CAN0TXDSR3      (*(volatile CAN0TXDSR0_Tag *) (REG_BASE + 0x0177))
#define CAN0TXDSR4      (*(volatile CAN0TXDSR0_Tag *) (REG_BASE + 0x0178))
#define CAN0TXDSR5      (*(volatile CAN0TXDSR0_Tag *) (REG_BASE + 0x0179))
#define CAN0TXDSR6      (*(volatile CAN0TXDSR0_Tag *) (REG_BASE + 0x017A))
#define CAN0TXDSR7      (*(volatile CAN0TXDSR0_Tag *) (REG_BASE + 0x017B))
#define CAN0TXDLR       (*(volatile CAN0TXDLR_Tag *) (REG_BASE + 0x017C))
#define CAN0TXTBPR      (*(volatile CAN0TXTBPR_Tag *) (REG_BASE + 0x017D))
#define CAN0TXTSRH      (*(volatile CAN0TXTSRH_Tag *) (REG_BASE + 0x017E))
#define CAN0TXTSRL      (*(volatile CAN0TXTSRL_Tag *) (REG_BASE + 0x017F))
/* 0x0200-0x023F PMF */
#define PMFCFG0         (*(volatile PMFCFG0_Tag *) (REG_BASE + 0x0200))
#define PMFCFG1         (*(volatile PMFCFG1_Tag *) (REG_BASE + 0x0201))
#define PMFCFG2         (*(volatile PMFCFG2_Tag *) (REG_BASE + 0x0202))
#define PMFCFG3         (*(volatile PMFCFG3_Tag *) (REG_BASE + 0x0203))
#define PMFFCTL         (*(volatile PMFFCTL_Tag *) (REG_BASE + 0x0204))
#define PMFFPIN         (*(volatile PMFFPIN_Tag *) (REG_BASE + 0x0205))
#define PMFFSTA         (*(volatile PMFFSTA_Tag *) (REG_BASE + 0x0206))
#define PMFQSMP         (*(volatile PMFQSMP_Tag *) (REG_BASE + 0x0207))
#define PMFDMPA         (*(volatile PMFDMPA_Tag *) (REG_BASE + 0x0208))
#define PMFDMPB         (*(volatile PMFDMPB_Tag *) (REG_BASE + 0x0209))
#define PMFDMPC         (*(volatile PMFDMPC_Tag *) (REG_BASE + 0x020A))
#define PMFOUTC         (*(volatile PMFOUTC_Tag *) (REG_BASE + 0x020C))
#define PMFOUTB         (*(volatile PMFOUTB_Tag *) (REG_BASE + 0x020D))
#define PMFDTMS         (*(volatile PMFDTMS_Tag *) (REG_BASE + 0x020E))
#define PMFCCTL         (*(volatile PMFCCTL_Tag *) (REG_BASE + 0x020F))
#define PMFVAL0         (*(volatile PMFVAL0_Tag *) (REG_BASE + 0x0210))
#define PMFVAL1         (*(volatile PMFVAL1_Tag *) (REG_BASE + 0x0212))
#define PMFVAL2         (*(volatile PMFVAL2_Tag *) (REG_BASE + 0x0214))
#define PMFVAL3         (*(volatile PMFVAL3_Tag *) (REG_BASE + 0x0216))
#define PMFVAL4         (*(volatile PMFVAL4_Tag *) (REG_BASE + 0x0218))
#define PMFVAL5         (*(volatile PMFVAL5_Tag *) (REG_BASE + 0x021A))
#define PMFENCA         (*(volatile PMFENCA_Tag *) (REG_BASE + 0x0220))
#define PMFFQCA         (*(volatile PMFFQCA_Tag *) (REG_BASE + 0x0221))
#define PMFCNTA         (*(volatile PMFCNTA_Tag *) (REG_BASE + 0x0222))
#define PMFMODA         (*(volatile PMFMODA_Tag *) (REG_BASE + 0x0224))
#define PMFDTMA         (*(volatile PMFDTMA_Tag *) (REG_BASE + 0x0226))
#define PMFENCB         (*(volatile PMFENCB_Tag *) (REG_BASE + 0x0228))
#define PMFFQCB         (*(volatile PMFFQCB_Tag *) (REG_BASE + 0x0229))
#define PMFCNTB         (*(volatile PMFCNTB_Tag *) (REG_BASE + 0x022A))
#define PMFMODB         (*(volatile PMFMODB_Tag *) (REG_BASE + 0x022C))
#define PMFDTMB         (*(volatile PMFDTMB_Tag *) (REG_BASE + 0x022E))
#define PMFENCC         (*(volatile PMFENCC_Tag *) (REG_BASE + 0x0230))
#define PMFFQCC         (*(volatile PMFFQCC_Tag *) (REG_BASE + 0x0231))
#define PMFCNTC         (*(volatile PMFCNTC_Tag *) (REG_BASE + 0x0232))
#define PMFMODC         (*(volatile PMFMODC_Tag *) (REG_BASE + 0x0234))
#define PMFDTMC         (*(volatile PMFDTMC_Tag *) (REG_BASE + 0x0236))
/* 0x0240-0x027F Port Integration Module (PIM) Map 5 of 6 */
#define PTT             (*(volatile PTT_Tag *) (REG_BASE + 0x0240))
#define PTIT            (*(volatile PTIT_Tag *) (REG_BASE + 0x0241))
#define DDRT            (*(volatile DDRT_Tag *) (REG_BASE + 0x0242))
#define RDRT            (*(volatile RDRT_Tag *) (REG_BASE + 0x0243))
#define PERT            (*(volatile PERT_Tag *) (REG_BASE + 0x0244))
#define PPST            (*(volatile PPST_Tag *) (REG_BASE + 0x0245))
#define PTS             (*(volatile PTS_Tag *) (REG_BASE + 0x0248))
#define PTIS            (*(volatile PTIS_Tag *) (REG_BASE + 0x0249))
#define DDRS            (*(volatile DDRS_Tag *) (REG_BASE + 0x024A))
#define RDRS            (*(volatile RDRS_Tag *) (REG_BASE + 0x024B))
#define PERS            (*(volatile PERS_Tag *) (REG_BASE + 0x024C))
#define PPSS            (*(volatile PPSS_Tag *) (REG_BASE + 0x024D))
#define WOMS            (*(volatile WOMS_Tag *) (REG_BASE + 0x024E))
#define PTM             (*(volatile PTM_Tag *) (REG_BASE + 0x0250))
#define PTIM            (*(volatile PTIM_Tag *) (REG_BASE + 0x0251))
#define DDRM            (*(volatile DDRM_Tag *) (REG_BASE + 0x0252))
#define RDRM            (*(volatile RDRM_Tag *) (REG_BASE + 0x0253))
#define PERM            (*(volatile PERM_Tag *) (REG_BASE + 0x0254))
#define PPSM            (*(volatile PPSM_Tag *) (REG_BASE + 0x0255))
#define WOMM            (*(volatile WOMM_Tag *) (REG_BASE + 0x0256))
#define PTP             (*(volatile PTP_Tag *) (REG_BASE + 0x0258))
#define PTIP            (*(volatile PTIP_Tag *) (REG_BASE + 0x0259))
#define DDRP            (*(volatile DDRP_Tag *) (REG_BASE + 0x025A))
#define RDRP            (*(volatile RDRP_Tag *) (REG_BASE + 0x025B))
#define PERP            (*(volatile PERP_Tag *) (REG_BASE + 0x025C))
#define PPSP            (*(volatile PPSP_Tag *) (REG_BASE + 0x025D))
#define PTH             (*(volatile PTH_Tag *) (REG_BASE + 0x0260))
#define PTIH            (*(volatile PTIH_Tag *) (REG_BASE + 0x0261))
#define DDRH            (*(volatile DDRH_Tag *) (REG_BASE + 0x0262))
#define RDRH            (*(volatile RDRH_Tag *) (REG_BASE + 0x0263))
#define PERH            (*(volatile PERH_Tag *) (REG_BASE + 0x0264))
#define PPSH            (*(volatile PPSH_Tag *) (REG_BASE + 0x0265))
#define PTJ             (*(volatile PTJ_Tag *) (REG_BASE + 0x0268))
#define PTIJ            (*(volatile PTIJ_Tag *) (REG_BASE + 0x0269))
#define DDRJ            (*(volatile DDRJ_Tag *) (REG_BASE + 0x026A))
#define RDRJ            (*(volatile RDRJ_Tag *) (REG_BASE + 0x026B))
#define PERJ            (*(volatile PERJ_Tag *) (REG_BASE + 0x026C))
#define PPSJ            (*(volatile PPSJ_Tag *) (REG_BASE + 0x026D))
#define PT0AD           (*(volatile PT0AD_Tag *) (REG_BASE + 0x0270))
#define PT1AD           (*(volatile PT1AD_Tag *) (REG_BASE + 0x0271))
#define DDR0AD          (*(volatile DDR0AD_Tag *) (REG_BASE + 0x0272))
#define DDR1AD          (*(volatile DDR1AD_Tag *) (REG_BASE + 0x0273))
#define RDR0AD          (*(volatile RDR0AD_Tag *) (REG_BASE + 0x0274))
#define RDR1AD          (*(volatile RDR1AD_Tag *) (REG_BASE + 0x0275))
#define PER0AD          (*(volatile PER0AD_Tag *) (REG_BASE + 0x0276))
#define PER1AD          (*(volatile PER1AD_Tag *) (REG_BASE + 0x0277))
/* 0x02F0-0x02F7 Voltage Regulator (VREG_3V3) Map */
#define VREGHTCL        (*(volatile VREGHTCL_Tag *) (REG_BASE + 0x02F0))
#define VREGCTRL        (*(volatile VREGCTRL_Tag *) (REG_BASE + 0x02F1))
#define VREGAPICL       (*(volatile VREGAPICL_Tag *) (REG_BASE + 0x02F2))
#define VREGAPITR       (*(volatile VREGAPITR_Tag *) (REG_BASE + 0x02F3))
#define VREGAPIRH       (*(volatile VREGAPIRH_Tag *) (REG_BASE + 0x02F4))
#define VREGAPIRL       (*(volatile VREGAPIRL_Tag *) (REG_BASE + 0x02F5))
#define VREGHTTR        (*(volatile VREGHTTR_Tag *) (REG_BASE + 0x02F7))
/* 0x0300-0x0307 CGMIPLL (IPLL for FlexRay) Map */
#define CGMSYNR         (*(volatile CGMSYNR_Tag *) (REG_BASE + 0x0300))
#define CGMREFDV        (*(volatile CGMREFDV_Tag *) (REG_BASE + 0x0301))
#define CGMFLG          (*(volatile CGMFLG_Tag *) (REG_BASE + 0x0303))
#define CGMCTL          (*(volatile CGMCTL_Tag *) (REG_BASE + 0x0304))
#define CGMTEST0        (*(volatile CGMTEST0_Tag *) (REG_BASE + 0x0305))
#define CGMTEST1        (*(volatile CGMTEST1_Tag *) (REG_BASE + 0x0306))
#define PWMPRSC         (*(volatile PWMPRSC_Tag *) (REG_BASE + 0x0307))
/* 0x0340-0x036F Enhanced Periodic Interrupt Timer (EPIT) Map */
#define PITCFLMT        (*(volatile PITCFLMT_Tag *) (REG_BASE + 0x0340))
#define PITFLT          (*(volatile PITFLT_Tag *) (REG_BASE + 0x0341))
#define PITCE           (*(volatile PITCE_Tag *) (REG_BASE + 0x0342))
#define PITMUX          (*(volatile PITMUX_Tag *) (REG_BASE + 0x0343))
#define PITINTE         (*(volatile PITINTE_Tag *) (REG_BASE + 0x0344))
#define PITTF           (*(volatile PITTF_Tag *) (REG_BASE + 0x0345))
#define PITMTLD0        (*(volatile PITMTLD0_Tag *) (REG_BASE + 0x0346))
#define PITMTLD1        (*(volatile PITMTLD1_Tag *) (REG_BASE + 0x0347))
#define PITLD0          (*(volatile PITLD0_Tag *) (REG_BASE + 0x0348))
#define PITLD0H         (*(volatile PITLD0H_Tag *) (REG_BASE + 0x0348))
#define PITLD0L         (*(volatile PITLD0L_Tag *) (REG_BASE + 0x0349))
#define PITCNT0H        (*(volatile PITCNT0H_Tag *) (REG_BASE + 0x034A))
#define PITCNT0L        (*(volatile PITCNT0L_Tag *) (REG_BASE + 0x034B))
#define PITLD1          (*(volatile PITLD1_Tag *) (REG_BASE + 0x034C))
#define PITLD1H         (*(volatile PITLD1H_Tag *) (REG_BASE + 0x034C))
#define PITLD1L         (*(volatile PITLD1L_Tag *) (REG_BASE + 0x034D))
#define PITCNT1H        (*(volatile PITCNT1H_Tag *) (REG_BASE + 0x034E))
#define PITCNT1L        (*(volatile PITCNT1L_Tag *) (REG_BASE + 0x034F))
#define PITLD2          (*(volatile PITLD2_Tag *) (REG_BASE + 0x0350))
#define PITLD2H         (*(volatile PITLD2H_Tag *) (REG_BASE + 0x0350))
#define PITLD2L         (*(volatile PITLD2L_Tag *) (REG_BASE + 0x0351))
#define PITCNT2H        (*(volatile PITCNT2H_Tag *) (REG_BASE + 0x0352))
#define PITCNT2L        (*(volatile PITCNT2L_Tag *) (REG_BASE + 0x0353))
#define PITLD3          (*(volatile PITLD3_Tag *) (REG_BASE + 0x0354))
#define PITLD3H         (*(volatile PITLD3H_Tag *) (REG_BASE + 0x0354))
#define PITLD3L         (*(volatile PITLD3L_Tag *) (REG_BASE + 0x0355))
#define PITCNT3H        (*(volatile PITCNT3H_Tag *) (REG_BASE + 0x0356))
#define PITCNT3L        (*(volatile PITCNT3L_Tag *) (REG_BASE + 0x0357))
#define PITLD4          (*(volatile PITLD4_Tag *) (REG_BASE + 0x0358))
#define PITLD4H         (*(volatile PITLD4H_Tag *) (REG_BASE + 0x0358))
#define PITLD4L         (*(volatile PITLD4L_Tag *) (REG_BASE + 0x0359))
#define PITCNT4H        (*(volatile PITCNT4H_Tag *) (REG_BASE + 0x035A))
#define PITCNT4L        (*(volatile PITCNT4L_Tag *) (REG_BASE + 0x035B))
#define PITLD5          (*(volatile PITLD5_Tag *) (REG_BASE + 0x035C))
#define PITLD5H         (*(volatile PITLD5H_Tag *) (REG_BASE + 0x035C))
#define PITLD5L         (*(volatile PITLD5L_Tag *) (REG_BASE + 0x035D))
#define PITCNT5H        (*(volatile PITCNT5H_Tag *) (REG_BASE + 0x035E))
#define PITCNT5L        (*(volatile PITCNT5L_Tag *) (REG_BASE + 0x035F))
#define PITLD6          (*(volatile PITLD6_Tag *) (REG_BASE + 0x0360))
#define PITLD6H         (*(volatile PITLD6H_Tag *) (REG_BASE + 0x0360))
#define PITLD6L         (*(volatile PITLD6L_Tag *) (REG_BASE + 0x0361))
#define PITCNT6H        (*(volatile PITCNT6H_Tag *) (REG_BASE + 0x0362))
#define PITCNT6L        (*(volatile PITCNT6L_Tag *) (REG_BASE + 0x0363))
#define PITLD7          (*(volatile PITLD7_Tag *) (REG_BASE + 0x0364))
#define PITLD7H         (*(volatile PITLD7H_Tag *) (REG_BASE + 0x0364))
#define PITLD7L         (*(volatile PITLD7L_Tag *) (REG_BASE + 0x0365))
#define PITCNT7H        (*(volatile PITCNT7H_Tag *) (REG_BASE + 0x0366))
#define PITCNT7L        (*(volatile PITCNT7L_Tag *) (REG_BASE + 0x0367))
#define PITCSTP         (*(volatile PITCSTP_Tag *) (REG_BASE + 0x0368))
#define PITTRIGOUT      (*(volatile PITTRIGOUT_Tag *) (REG_BASE + 0x0369))
#define PITTRIGCTL      (*(volatile PITTRIGCTL_Tag *) (REG_BASE + 0x036A))
#define PITTRIGSTAT     (*(volatile PITTRIGSTAT_Tag *) (REG_BASE + 0x036B))
#define PITTRIGE        (*(volatile PITTRIGE_Tag *) (REG_BASE + 0x036C))
/* 0x0380-0x03BF XGATE Map */
#define XGMCTLH         (*(volatile XGMCTLH_Tag *) (REG_BASE + 0x0380))
#define XGMCTLL         (*(volatile XGMCTLL_Tag *) (REG_BASE + 0x0381))
#define XGCHID          (*(volatile XGCHID_Tag *) (REG_BASE + 0x0382))
#define XGCHPL          (*(volatile XGCHPL_Tag *) (REG_BASE + 0x0383))
#define XGISPSEL        (*(volatile XGISPSEL_Tag *) (REG_BASE + 0x0385))
#define XGVBRH          (*(volatile XGVBRH_Tag *) (REG_BASE + 0x0386))
#define XGVBRL          (*(volatile XGVBRL_Tag *) (REG_BASE + 0x0387))
#define XGIF0           (*(volatile XGIF0_Tag *) (REG_BASE + 0x0388))
#define XGIF1           (*(volatile XGIF1_Tag *) (REG_BASE + 0x0389))
#define XGIF2           (*(volatile XGIF_Tag *) (REG_BASE + 0x038A))
#define XGIF3           (*(volatile XGIF_Tag *) (REG_BASE + 0x023B))
#define XGIF4           (*(volatile XGIF_Tag *) (REG_BASE + 0x023C))
#define XGIF5           (*(volatile XGIF_Tag *) (REG_BASE + 0x038D))
#define XGIF6           (*(volatile XGIF_Tag *) (REG_BASE + 0x038E))
#define XGIF7           (*(volatile XGIF_Tag *) (REG_BASE + 0x038F))
#define XGIF8           (*(volatile XGIF_Tag *) (REG_BASE + 0x0390))
#define XGIF9           (*(volatile XGIF_Tag *) (REG_BASE + 0x0391))
#define XGIFA           (*(volatile XGIF_Tag *) (REG_BASE + 0x0392))
#define XGIFB           (*(volatile XGIF_Tag *) (REG_BASE + 0x0393))
#define XGIFC           (*(volatile XGIF_Tag *) (REG_BASE + 0x0394))
#define XGIFD           (*(volatile XGIF_Tag *) (REG_BASE + 0x0395))
#define XGIFE           (*(volatile XGIF_Tag *) (REG_BASE + 0x0396))
#define XGIFF           (*(volatile XGIF_Tag *) (REG_BASE + 0x0397))
#define XGSWT           (*(volatile XGSWT_Tag *) (REG_BASE + 0x0398))
#define XGSEM           (*(volatile XGSEM_Tag *) (REG_BASE + 0x039A))
#define XGCCR           (*(volatile XGCCR_Tag *) (REG_BASE + 0x039D))
#define XGPCH           (*(volatile XGPCH_Tag *) (REG_BASE + 0x039E))
#define XGPCL           (*(volatile XGPCL_Tag *) (REG_BASE + 0x039F))
#define XGR1H           (*(volatile XGR1H_Tag *) (REG_BASE + 0x03A2))
#define XGR1L           (*(volatile XGR1L_Tag *) (REG_BASE + 0x03A3))
#define XGR2H           (*(volatile XGR2H_Tag *) (REG_BASE + 0x03A4))
#define XGR2L           (*(volatile XGR2L_Tag *) (REG_BASE + 0x03A5))
#define XGR3H           (*(volatile XGR3H_Tag *) (REG_BASE + 0x03A6))
#define XGR3L           (*(volatile XGR3L_Tag *) (REG_BASE + 0x03A7))
#define XGR4H           (*(volatile XGR4H_Tag *) (REG_BASE + 0x03A8))
#define XGR4L           (*(volatile XGR4L_Tag *) (REG_BASE + 0x03A9))
#define XGR5H           (*(volatile XGR5H_Tag *) (REG_BASE + 0x03AA))
#define XGR5L           (*(volatile XGR5L_Tag *) (REG_BASE + 0x03AB))
#define XGR6H           (*(volatile XGR6H_Tag *) (REG_BASE + 0x03AC))
#define XGR6L           (*(volatile XGR6L_Tag *) (REG_BASE + 0x03AD))
#define XGR7H           (*(volatile XGR7H_Tag *) (REG_BASE + 0x03AE))
#define XGR7L           (*(volatile XGR7L_Tag *) (REG_BASE + 0x03AF))
/* 0x0400-0x05FF FlexRayRegister Space Map */
#define MVR             (*(volatile MVR_Tag *) (REG_BASE + 0x0400))
#define MCR             (*(volatile MCR_Tag *) (REG_BASE + 0x0402))
#define SYMBADHR        (*(volatile SYMBADHR_Tag *) (REG_BASE + 0x0404))
#define SYMBADLR        (*(volatile SYMBADLR_Tag *) (REG_BASE + 0x0406))
#define STBSCR          (*(volatile STBSCR_Tag *) (REG_BASE + 0x0408))
#define STBPCR          (*(volatile STBPCR_Tag *) (REG_BASE + 0x040A))
#define MBDSR           (*(volatile MBDSR_Tag *) (REG_BASE + 0x040C))
#define MBSSUTR         (*(volatile MBSSUTR_Tag *) (REG_BASE + 0x040E))
#define POCR            (*(volatile POCR_Tag *) (REG_BASE + 0x0414))
#define GIFER           (*(volatile GIFER_Tag *) (REG_BASE + 0x0416))
#define PIFR0           (*(volatile PIFR0_Tag *) (REG_BASE + 0x0418))
#define PIFR1           (*(volatile PIFR1_Tag *) (REG_BASE + 0x041A))
#define PIER0           (*(volatile PIER0_Tag *) (REG_BASE + 0x041C))
#define PIER1           (*(volatile PIER1_Tag *) (REG_BASE + 0x041E))
#define CHIERFR         (*(volatile CHIERFR_Tag *) (REG_BASE + 0x0420))
#define MBIVEC          (*(volatile MBIVEC_Tag *) (REG_BASE + 0x0422))
#define CASERCR         (*(volatile CASERCR_Tag *) (REG_BASE + 0x0424))
#define CBSERCR         (*(volatile CBSERCR_Tag *) (REG_BASE + 0x0426))
#define PSR0            (*(volatile PSR0_Tag *) (REG_BASE + 0x0428))
#define PSR1            (*(volatile PSR1_Tag *) (REG_BASE + 0x042A))
#define PSR2            (*(volatile PSR2_Tag *) (REG_BASE + 0x042C))
#define PSR3            (*(volatile PSR3_Tag *) (REG_BASE + 0x042E))
#define MTCTR           (*(volatile MTCTR_Tag *) (REG_BASE + 0x0430))
#define CYCTR           (*(volatile CYCTR_Tag *) (REG_BASE + 0x0432))
#define SLTCTAR         (*(volatile SLTCTAR_Tag *) (REG_BASE + 0x0434))
#define SLTCTBR         (*(volatile SLTCTBR_Tag *) (REG_BASE + 0x0436))
#define RTCORVR         (*(volatile RTCORVR_Tag *) (REG_BASE + 0x0438))
#define OFCORVR         (*(volatile OFCORVR_Tag *) (REG_BASE + 0x043A))
#define CIFRR           (*(volatile CIFRR_Tag *) (REG_BASE + 0x043C))
#define SYMATOR         (*(volatile SYMATOR_Tag *) (REG_BASE + 0x043E))
#define SFCNTR          (*(volatile SFCNTR_Tag *) (REG_BASE + 0x0440))
#define SFTOR           (*(volatile SFTOR_Tag *) (REG_BASE + 0x0442))
#define SFTCCSR         (*(volatile SFTCCSR_Tag *) (REG_BASE + 0x0444))
#define SFIDRFR         (*(volatile SFIDRFR_Tag *) (REG_BASE + 0x0446))
#define SFIDAFVR        (*(volatile SFIDAFVR_Tag *) (REG_BASE + 0x0448))
#define SFIDAFMR        (*(volatile SFIDAFMR_Tag *) (REG_BASE + 0x044A))
#define NMVR0           (*(volatile NMVR0_Tag *) (REG_BASE + 0x044C))
#define NMVR1           (*(volatile NMVR1_Tag *) (REG_BASE + 0x044E))
#define NMVR2           (*(volatile NMVR2_Tag *) (REG_BASE + 0x0450))
#define NMVR3           (*(volatile NMVR3_Tag *) (REG_BASE + 0x0452))
#define NMVR4           (*(volatile NMVR4_Tag *) (REG_BASE + 0x0454))
#define NMVR5           (*(volatile NMVR5_Tag *) (REG_BASE + 0x0456))
#define NMVLR           (*(volatile NMVLR_Tag *) (REG_BASE + 0x0458))
#define TICCR           (*(volatile TICCR_Tag *) (REG_BASE + 0x045A))
#define TI1CYSR         (*(volatile TI1CYSR_Tag *) (REG_BASE + 0x045C))
#define TI1MTOR         (*(volatile TI1MTOR_Tag *) (REG_BASE + 0x045E))
#define TI2CR0          (*(volatile TI2CR0_Tag *) (REG_BASE + 0x0460))
#define TI2CR1          (*(volatile TI2CR1_Tag *) (REG_BASE + 0x0462))
#define SSSR            (*(volatile SSSR_Tag *) (REG_BASE + 0x0464))
#define SSCCR           (*(volatile SSCCR_Tag *) (REG_BASE + 0x0466))
#define SSR0            (*(volatile SSR0_Tag *) (REG_BASE + 0x0468))
#define SSR1            (*(volatile SSR1_Tag *) (REG_BASE + 0x046A))
#define SSR2            (*(volatile SSR2_Tag *) (REG_BASE + 0x046C))
#define SSR3            (*(volatile SSR3_Tag *) (REG_BASE + 0x046E))
#define SSR4            (*(volatile SSR4_Tag *) (REG_BASE + 0x0470))
#define SSR5            (*(volatile SSR5_Tag *) (REG_BASE + 0x0472))
#define SSR6            (*(volatile SSR6_Tag *) (REG_BASE + 0x0474))
#define SSR7            (*(volatile SSR7_Tag *) (REG_BASE + 0x0476))
#define SSCR0           (*(volatile SSCR0_Tag *) (REG_BASE + 0x0478))
#define SSCR1           (*(volatile SSCR1_Tag *) (REG_BASE + 0x047A))
#define SSCR2           (*(volatile SSCR2_Tag *) (REG_BASE + 0x047C))
#define SSCR3           (*(volatile SSCR3_Tag *) (REG_BASE + 0x047E))
#define MTSACFR         (*(volatile MTSACFR_Tag *) (REG_BASE + 0x0480))
#define MTSBCFR         (*(volatile MTSBCFR_Tag *) (REG_BASE + 0x0482))
#define RSBIR           (*(volatile RSBIR_Tag *) (REG_BASE + 0x0484))
#define RFSR            (*(volatile RFSR_Tag *) (REG_BASE + 0x0486))
#define RFSIR           (*(volatile RFSIR_Tag *) (REG_BASE + 0x0488))
#define RFDSR           (*(volatile RFDSR_Tag *) (REG_BASE + 0x048A))
#define RFARIR          (*(volatile RFARIR_Tag *) (REG_BASE + 0x048C))
#define RFBRIR          (*(volatile RFBRIR_Tag *) (REG_BASE + 0x048E))
#define RFMIDAFVR       (*(volatile RFMIDAFVR_Tag *) (REG_BASE + 0x0490))
#define RFMIAFMR        (*(volatile RFMIAFMR_Tag *) (REG_BASE + 0x0492))
#define RFFIDRFVR       (*(volatile RFFIDRFVR_Tag *) (REG_BASE + 0x0494))
#define RFFIDRFMR       (*(volatile RFFIDRFMR_Tag *) (REG_BASE + 0x0496))
#define RFRFCFR         (*(volatile RFRFCFR_Tag *) (REG_BASE + 0x0498))
#define RFRFCTR         (*(volatile RFRFCTR_Tag *) (REG_BASE + 0x049A))
#define LDTXSLAR        (*(volatile LDTXSLAR_Tag *) (REG_BASE + 0x049C))
#define LDTXSLBR        (*(volatile LDTXSLBR_Tag *) (REG_BASE + 0x049E))
#define PCR0            (*(volatile PCR0_Tag *) (REG_BASE + 0x04A0))
#define PCR1            (*(volatile PCR1_Tag *) (REG_BASE + 0x04A2))
#define PCR2            (*(volatile PCR2_Tag *) (REG_BASE + 0x04A4))
#define PCR3            (*(volatile PCR3_Tag *) (REG_BASE + 0x04A6))
#define PCR4            (*(volatile PCR4_Tag *) (REG_BASE + 0x04A8))
#define PCR5            (*(volatile PCR5_Tag *) (REG_BASE + 0x04AA))
#define PCR6            (*(volatile PCR6_Tag *) (REG_BASE + 0x04AC))
#define PCR7            (*(volatile PCR7_Tag *) (REG_BASE + 0x04AE))
#define PCR8            (*(volatile PCR8_Tag *) (REG_BASE + 0x04B0))
#define PCR9            (*(volatile PCR9_Tag *) (REG_BASE + 0x04B2))
#define PCR10           (*(volatile PCR10_Tag *) (REG_BASE + 0x04B4))
#define PCR11           (*(volatile PCR11_Tag *) (REG_BASE + 0x04B6))
#define PCR12           (*(volatile PCR12_Tag *) (REG_BASE + 0x04B8))
#define PCR13           (*(volatile PCR13_Tag *) (REG_BASE + 0x04BA))
#define PCR14           (*(volatile PCR14_Tag *) (REG_BASE + 0x04BC))
#define PCR15           (*(volatile PCR15_Tag *) (REG_BASE + 0x04BE))
#define PCR16           (*(volatile PCR16_Tag *) (REG_BASE + 0x04C0))
#define PCR17           (*(volatile PCR17_Tag *) (REG_BASE + 0x04C2))
#define PCR18           (*(volatile PCR18_Tag *) (REG_BASE + 0x04C4))
#define PCR19           (*(volatile PCR19_Tag *) (REG_BASE + 0x04C6))
#define PCR20           (*(volatile PCR20_Tag *) (REG_BASE + 0x04C8))
#define PCR21           (*(volatile PCR21_Tag *) (REG_BASE + 0x04CA))
#define PCR22           (*(volatile PCR22_Tag *) (REG_BASE + 0x04CC))
#define PCR23           (*(volatile PCR23_Tag *) (REG_BASE + 0x04CE))
#define PCR24           (*(volatile PCR24_Tag *) (REG_BASE + 0x04D0))
#define PCR25           (*(volatile PCR25_Tag *) (REG_BASE + 0x04D2))
#define PCR26           (*(volatile PCR26_Tag *) (REG_BASE + 0x04D4))
#define PCR27           (*(volatile PCR27_Tag *) (REG_BASE + 0x04D6))
#define PCR28           (*(volatile PCR28_Tag *) (REG_BASE + 0x04D8))
#define PCR29           (*(volatile PCR29_Tag *) (REG_BASE + 0x04DA))
#define PCR30           (*(volatile PCR30_Tag *) (REG_BASE + 0x04DC))
#define MBCCSR0         (*(volatile MBCCSR0_Tag *) (REG_BASE + 0x0500))
#define MBCCFR0         (*(volatile MBCCSR0_Tag *) (REG_BASE + 0x0502))
#define MBFIDR0         (*(volatile MBFIDR0_Tag *) (REG_BASE + 0x0504))
#define MBIDXR0         (*(volatile MBIDXR0_Tag *) (REG_BASE + 0x0506))
#define MBCCSR1         (*(volatile MBCCSR1_Tag *) (REG_BASE + 0x0508))
#define MBCCFR1         (*(volatile MBCCSR1_Tag *) (REG_BASE + 0x050A))
#define MBFIDR1         (*(volatile MBFIDR1_Tag *) (REG_BASE + 0x050C))
#define MBIDXR1         (*(volatile MBIDXR1_Tag *) (REG_BASE + 0x050E))
#define MBCCSR2         (*(volatile MBCCSR2_Tag *) (REG_BASE + 0x0510))
#define MBCCFR2         (*(volatile MBCCSR2_Tag *) (REG_BASE + 0x0512))
#define MBFIDR2         (*(volatile MBFIDR2_Tag *) (REG_BASE + 0x0514))
#define MBIDXR2         (*(volatile MBIDXR2_Tag *) (REG_BASE + 0x0516))
#define MBCCSR3         (*(volatile MBCCSR3_Tag *) (REG_BASE + 0x0518))
#define MBCCFR3         (*(volatile MBCCSR3_Tag *) (REG_BASE + 0x051A))
#define MBFIDR3         (*(volatile MBFIDR3_Tag *) (REG_BASE + 0x051C))
#define MBIDXR3         (*(volatile MBIDXR3_Tag *) (REG_BASE + 0x051E))
#define MBCCSR4         (*(volatile MBCCSR4_Tag *) (REG_BASE + 0x0520))
#define MBCCFR4         (*(volatile MBCCSR4_Tag *) (REG_BASE + 0x0522))
#define MBFIDR4         (*(volatile MBFIDR4_Tag *) (REG_BASE + 0x0524))
#define MBIDXR4         (*(volatile MBIDXR4_Tag *) (REG_BASE + 0x0526))
#define MBCCSR5         (*(volatile MBCCSR5_Tag *) (REG_BASE + 0x0528))
#define MBCCFR5         (*(volatile MBCCSR5_Tag *) (REG_BASE + 0x052A))
#define MBFIDR5         (*(volatile MBFIDR5_Tag *) (REG_BASE + 0x052C))
#define MBIDXR5         (*(volatile MBIDXR5_Tag *) (REG_BASE + 0x052E))
#define MBCCSR6         (*(volatile MBCCSR6_Tag *) (REG_BASE + 0x0530))
#define MBCCFR6         (*(volatile MBCCSR6_Tag *) (REG_BASE + 0x0532))
#define MBFIDR6         (*(volatile MBFIDR6_Tag *) (REG_BASE + 0x0534))
#define MBIDXR6         (*(volatile MBIDXR6_Tag *) (REG_BASE + 0x0536))
#define MBCCSR7         (*(volatile MBCCSR7_Tag *) (REG_BASE + 0x0538))
#define MBCCFR7         (*(volatile MBCCSR7_Tag *) (REG_BASE + 0x053A))
#define MBFIDR7         (*(volatile MBFIDR7_Tag *) (REG_BASE + 0x053C))
#define MBIDXR7         (*(volatile MBIDXR7_Tag *) (REG_BASE + 0x053E))
#define MBCCSR8         (*(volatile MBCCSR8_Tag *) (REG_BASE + 0x0540))
#define MBCCFR8         (*(volatile MBCCSR8_Tag *) (REG_BASE + 0x0542))
#define MBFIDR8         (*(volatile MBFIDR8_Tag *) (REG_BASE + 0x0544))
#define MBIDXR8         (*(volatile MBIDXR8_Tag *) (REG_BASE + 0x0546))
#define MBCCSR9         (*(volatile MBCCSR9_Tag *) (REG_BASE + 0x0548))
#define MBCCFR9         (*(volatile MBCCSR9_Tag *) (REG_BASE + 0x054A))
#define MBFIDR9         (*(volatile MBFIDR9_Tag *) (REG_BASE + 0x054C))
#define MBIDXR9         (*(volatile MBIDXR9_Tag *) (REG_BASE + 0x054E))
#define MBCCSR10        (*(volatile MBCCSR10_Tag *) (REG_BASE + 0x0550))
#define MBCCFR10        (*(volatile MBCCSR10_Tag *) (REG_BASE + 0x0552))
#define MBFIDR10        (*(volatile MBFIDR10_Tag *) (REG_BASE + 0x0554))
#define MBIDXR10        (*(volatile MBIDXR10_Tag *) (REG_BASE + 0x0556))
#define MBCCSR11        (*(volatile MBCCSR11_Tag *) (REG_BASE + 0x0558))
#define MBCCFR11        (*(volatile MBCCSR11_Tag *) (REG_BASE + 0x055A))
#define MBFIDR11        (*(volatile MBFIDR11_Tag *) (REG_BASE + 0x055C))
#define MBIDXR11        (*(volatile MBIDXR11_Tag *) (REG_BASE + 0x055E))
#define MBCCSR12        (*(volatile MBCCSR12_Tag *) (REG_BASE + 0x0560))
#define MBCCFR12        (*(volatile MBCCSR12_Tag *) (REG_BASE + 0x0562))
#define MBFIDR12        (*(volatile MBFIDR12_Tag *) (REG_BASE + 0x0564))
#define MBIDXR12        (*(volatile MBIDXR12_Tag *) (REG_BASE + 0x0566))
#define MBCCSR13        (*(volatile MBCCSR13_Tag *) (REG_BASE + 0x0568))
#define MBCCFR13        (*(volatile MBCCSR13_Tag *) (REG_BASE + 0x056A))
#define MBFIDR13        (*(volatile MBFIDR13_Tag *) (REG_BASE + 0x056C))
#define MBIDXR13        (*(volatile MBIDXR13_Tag *) (REG_BASE + 0x056E))
#define MBCCSR14        (*(volatile MBCCSR14_Tag *) (REG_BASE + 0x0570))
#define MBCCFR14        (*(volatile MBCCSR14_Tag *) (REG_BASE + 0x0572))
#define MBFIDR14        (*(volatile MBFIDR14_Tag *) (REG_BASE + 0x0574))
#define MBIDXR14        (*(volatile MBIDXR14_Tag *) (REG_BASE + 0x0576))
#define MBCCSR15        (*(volatile MBCCSR15_Tag *) (REG_BASE + 0x0578))
#define MBCCFR15        (*(volatile MBCCSR15_Tag *) (REG_BASE + 0x057A))
#define MBFIDR15        (*(volatile MBFIDR15_Tag *) (REG_BASE + 0x057C))
#define MBIDXR15        (*(volatile MBIDXR15_Tag *) (REG_BASE + 0x057E))
#define MBCCSR16        (*(volatile MBCCSR16_Tag *) (REG_BASE + 0x0580))
#define MBCCFR16        (*(volatile MBCCSR16_Tag *) (REG_BASE + 0x0582))
#define MBFIDR16        (*(volatile MBFIDR16_Tag *) (REG_BASE + 0x0584))
#define MBIDXR16        (*(volatile MBIDXR16_Tag *) (REG_BASE + 0x0586))
#define MBCCSR17        (*(volatile MBCCSR17_Tag *) (REG_BASE + 0x0588))
#define MBCCFR17        (*(volatile MBCCSR17_Tag *) (REG_BASE + 0x058A))
#define MBFIDR17        (*(volatile MBFIDR17_Tag *) (REG_BASE + 0x058C))
#define MBIDXR17        (*(volatile MBIDXR17_Tag *) (REG_BASE + 0x058E))
#define MBCCSR18        (*(volatile MBCCSR18_Tag *) (REG_BASE + 0x0590))
#define MBCCFR18        (*(volatile MBCCSR18_Tag *) (REG_BASE + 0x0592))
#define MBFIDR18        (*(volatile MBFIDR18_Tag *) (REG_BASE + 0x0594))
#define MBIDXR18        (*(volatile MBIDXR18_Tag *) (REG_BASE + 0x0596))
#define MBCCSR19        (*(volatile MBCCSR19_Tag *) (REG_BASE + 0x0598))
#define MBCCFR19        (*(volatile MBCCSR19_Tag *) (REG_BASE + 0x059A))
#define MBFIDR19        (*(volatile MBFIDR19_Tag *) (REG_BASE + 0x059C))
#define MBIDXR19        (*(volatile MBIDXR19_Tag *) (REG_BASE + 0x059E))
#define MBCCSR20        (*(volatile MBCCSR20_Tag *) (REG_BASE + 0x05A0))
#define MBCCFR20        (*(volatile MBCCSR20_Tag *) (REG_BASE + 0x05A2))
#define MBFIDR20        (*(volatile MBFIDR20_Tag *) (REG_BASE + 0x05A4))
#define MBIDXR20        (*(volatile MBIDXR20_Tag *) (REG_BASE + 0x05A6))
#define MBCCSR21        (*(volatile MBCCSR21_Tag *) (REG_BASE + 0x05A8))
#define MBCCFR21        (*(volatile MBCCSR21_Tag *) (REG_BASE + 0x05AA))
#define MBFIDR21        (*(volatile MBFIDR21_Tag *) (REG_BASE + 0x05AC))
#define MBIDXR21        (*(volatile MBIDXR21_Tag *) (REG_BASE + 0x05AE))
#define MBCCSR22        (*(volatile MBCCSR22_Tag *) (REG_BASE + 0x05B0))
#define MBCCFR22        (*(volatile MBCCSR22_Tag *) (REG_BASE + 0x05B2))
#define MBFIDR22        (*(volatile MBFIDR22_Tag *) (REG_BASE + 0x05B4))
#define MBIDXR22        (*(volatile MBIDXR22_Tag *) (REG_BASE + 0x05B6))
#define MBCCSR23        (*(volatile MBCCSR23_Tag *) (REG_BASE + 0x05B8))
#define MBCCFR23        (*(volatile MBCCSR23_Tag *) (REG_BASE + 0x05BA))
#define MBFIDR23        (*(volatile MBFIDR23_Tag *) (REG_BASE + 0x05BC))
#define MBIDXR23        (*(volatile MBIDXR23_Tag *) (REG_BASE + 0x05BE))
#define MBCCSR24        (*(volatile MBCCSR24_Tag *) (REG_BASE + 0x05C0))
#define MBCCFR24        (*(volatile MBCCSR24_Tag *) (REG_BASE + 0x05C2))
#define MBFIDR24        (*(volatile MBFIDR24_Tag *) (REG_BASE + 0x05C4))
#define MBIDXR24        (*(volatile MBIDXR24_Tag *) (REG_BASE + 0x05C6))
#define MBCCSR25        (*(volatile MBCCSR25_Tag *) (REG_BASE + 0x05C8))
#define MBCCFR25        (*(volatile MBCCSR25_Tag *) (REG_BASE + 0x05CA))
#define MBFIDR25        (*(volatile MBFIDR25_Tag *) (REG_BASE + 0x05CC))
#define MBIDXR25        (*(volatile MBIDXR25_Tag *) (REG_BASE + 0x05CE))
#define MBCCSR26        (*(volatile MBCCSR26_Tag *) (REG_BASE + 0x05D0))
#define MBCCFR26        (*(volatile MBCCSR26_Tag *) (REG_BASE + 0x05D2))
#define MBFIDR26        (*(volatile MBFIDR26_Tag *) (REG_BASE + 0x05D4))
#define MBIDXR26        (*(volatile MBIDXR26_Tag *) (REG_BASE + 0x05D6))
#define MBCCSR27        (*(volatile MBCCSR27_Tag *) (REG_BASE + 0x05D8))
#define MBCCFR27        (*(volatile MBCCSR27_Tag *) (REG_BASE + 0x05DA))
#define MBFIDR27        (*(volatile MBFIDR27_Tag *) (REG_BASE + 0x05DC))
#define MBIDXR27        (*(volatile MBIDXR27_Tag *) (REG_BASE + 0x05DE))
#define MBCCSR28        (*(volatile MBCCSR28_Tag *) (REG_BASE + 0x05E0))
#define MBCCFR28        (*(volatile MBCCSR28_Tag *) (REG_BASE + 0x05E2))
#define MBFIDR28        (*(volatile MBFIDR28_Tag *) (REG_BASE + 0x05E4))
#define MBIDXR28        (*(volatile MBIDXR28_Tag *) (REG_BASE + 0x05E6))
#define MBCCSR29        (*(volatile MBCCSR29_Tag *) (REG_BASE + 0x05E8))
#define MBCCFR29        (*(volatile MBCCSR29_Tag *) (REG_BASE + 0x05EA))
#define MBFIDR29        (*(volatile MBFIDR29_Tag *) (REG_BASE + 0x05EC))
#define MBIDXR29        (*(volatile MBIDXR29_Tag *) (REG_BASE + 0x05EE))
#define MBCCSR30        (*(volatile MBCCSR30_Tag *) (REG_BASE + 0x05F0))
#define MBCCFR30        (*(volatile MBCCSR30_Tag *) (REG_BASE + 0x05F2))
#define MBFIDR30        (*(volatile MBFIDR30_Tag *) (REG_BASE + 0x05F4))
#define MBIDXR30        (*(volatile MBIDXR30_Tag *) (REG_BASE + 0x05F6))
#define MBCCSR31        (*(volatile MBCCSR31_Tag *) (REG_BASE + 0x05F8))
#define MBCCFR31        (*(volatile MBCCSR31_Tag *) (REG_BASE + 0x05FA))
#define MBFIDR31        (*(volatile MBFIDR31_Tag *) (REG_BASE + 0x05FC))
#define MBIDXR31        (*(volatile MBIDXR31_Tag *) (REG_BASE + 0x05FE))

#endif /* MCUPKG_F512 */

#endif /* S12XF512_H */

