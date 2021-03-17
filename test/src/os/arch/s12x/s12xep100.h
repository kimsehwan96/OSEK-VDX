/**
 * @file s12xep100.h
 * @section descr File description
 *
 * definition of MC9S12XEP100.
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
 * $Module: MCU_EP100_HEADER$
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

#ifndef S12XEP100_H
#define S12XEP100_H

#ifdef MCUPKG_EP100

#include "compiler.h"

#ifdef CODEWARRIOR_COMPILER
#pragma MESSAGE DISABLE C1106 /* WARNING C1106: Non-standard bitfield type */
#endif

/* Types definition */
typedef unsigned char byte ;
typedef unsigned int word ;
typedef unsigned long dword ;
typedef unsigned long dlong[2] ;

typedef volatile unsigned int HCS12_REG ;   /* Hardware register definition */

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
/*0x0020-0x002F Debug Module (S12XDBG) Map*/
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
        byte REFDIV5 :1 ;
        byte REFDIV4 :1 ;
        byte REFDIV3 :1 ;
        byte REFDIV2 :1 ;
        byte REFDIV1 :1 ;
        byte REFDIV0 :1 ;
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
} ECT_TTOV_Tag ;

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
/*0x0080.0x00AF Analog-to-Digital Converter 12-bit 16-Channels (ATD1) Map (Sheet 1 of 3) */
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
} ATD1CTL0_Tag ;
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
} ATD1CTL1_Tag ;
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
} ATD1CTL2_Tag ;
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
} ATD1CTL3_Tag ;
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
} ATD1CTL4_Tag ;
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
} ATD1CTL5_Tag ;
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
} ATD1STAT0_Tag ;
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
} ATD1CMPEH_Tag ;
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
} ATD1CMPEL_Tag ;
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
} ATD1STAT2H_Tag ;
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
} ATD1STATL_Tag ;
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
} ATD1DIENH_Tag ;
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
} ATD1DIENL_Tag ;
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
} ATD1CMPHTH_Tag ;
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
} ATD1CMPHTL_Tag ;
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
} ATD1DR0_Tag ;
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
} ATD1DR0H_Tag ;
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
} ATD1DR0L_Tag ;
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
} ATD1DR1_Tag ;
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
} ATD1DR1H_Tag ;
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
} ATD1DR1L_Tag ;
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
} ATD1DR2_Tag ;
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
} ATD1DR2H_Tag ;
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
} ATD1DR2L_Tag ;
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
} ATD1DR3_Tag ;
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
} ATD1DR3H_Tag ;
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
} ATD1DR3L_Tag ;
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
} ATD1DR4_Tag ;
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
} ATD1DR4H_Tag ;
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
} ATD1DR4L_Tag ;
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
} ATD1DR5_Tag ;
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
} ATD1DR5H_Tag ;
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
} ATD1DR5L_Tag ;
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
} ATD1DR6_Tag ;
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
} ATD1DR6H_Tag ;
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
} ATD1DR6L_Tag ;
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
} ATD1DR7_Tag ;
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
} ATD1DR7H_Tag ;
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
} ATD1DR7L_Tag ;
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
} ATD1DR8_Tag ;
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
} ATD1DR8H_Tag ;
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
} ATD1DR8L_Tag ;
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
} ATD1DR9_Tag ;
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
} ATD1DR9H_Tag ;
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
} ATD1DR9L_Tag ;
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
} ATD1DR10_Tag ;
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
} ATD1DR10H_Tag ;
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
} ATD1DR10L_Tag ;
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
} ATD1DR11_Tag ;
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
} ATD1DR11H_Tag ;
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
} ATD1DR11L_Tag ;
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
} ATD1DR12_Tag ;
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
} ATD1DR12H_Tag ;
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
} ATD1DR12L_Tag ;
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
} ATD1DR13_Tag ;
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
} ATD1DR13H_Tag ;
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
} ATD1DR13L_Tag ;
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
} ATD1DR14_Tag ;
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
} ATD1DR14H_Tag ;
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
} ATD1DR14L_Tag ;
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
} ATD1DR15_Tag ;
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
} ATD1DR15H_Tag ;
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
} ATD1DR15L_Tag ;
/*0x00B0-0x00B7 Inter IC Bus (IIC1) Map*/
/*0x00B0 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ADR7 :1 ;
        byte ADR6 :1 ;
        byte ADR5 :1 ;
        byte ADR4 :1 ;
        byte ADR3 :1 ;
        byte ADR2 :1 ;
        byte ADR1 :1 ;
        byte :1 ;
    } Bits ;
} IIC1_IBAD_Tag ;
/*0x00B1 */
typedef union
{
    byte Reg ;
    struct
    {
        byte IBC7 :1 ;
        byte IBC6 :1 ;
        byte IBC5 :1 ;
        byte IBC4 :1 ;
        byte IBC3 :1 ;
        byte IBC2 :1 ;
        byte IBC1 :1 ;
        byte IBC0 :1 ;
    } Bits ;
} IIC1_IBFD_Tag ;
/*0x00B2 */
typedef union
{
    byte Reg ;
    struct
    {
        byte IBEN :1 ;
        byte IBIE :1 ;
        byte MSSL :1 ;
        byte TXRX :1 ;
        byte TXAK :1 ;
        byte RSTA :1 ;
        byte :1 ;
        byte IBSWAI :1 ;
    } Bits ;
} IIC1_IBCR_Tag ;
/*0x00B3 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TCF :1 ;
        byte IAAS :1 ;
        byte IBB :1 ;
        byte IBAL :1 ;
        byte :1 ;
        byte SRW :1 ;
        byte IBIF :1 ;
        byte RXAK :1 ;
    } Bits ;
} IIC1_IBSR_Tag ;
/*0x00B4 */
typedef union
{
    byte Reg ;
    struct
    {
        byte D7 :1 ;
        byte D6 :1 ;
        byte D5 :1 ;
        byte D4 :1 ;
        byte D3 :1 ;
        byte D2 :1 ;
        byte D1 :1 ;
        byte D0 :1 ;
    } Bits ;
} IIC1_IBDR_Tag ;
/*0x00B5 */
typedef union
{
    byte Reg ;
    struct
    {
        byte GCEN :1 ;
        byte ADTYPE :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte ADR10 :1 ;
        byte ADR9 :1 ;
        byte ADR8 :1 ;
    } Bits ;
} IIC1_IBCR2_Tag ;
/*0x00B8.0x00BF Asynchronous Serial Interface (SCI2) Map*/
/*0x00B8 */
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
} SCI2BDH_Tag ;
/*0x00B9 */
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
} SCI2BDL_Tag ;
/*0x00BA */
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
} SCI2CR1_Tag ;
/*0x00B8 */
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
} SCI2ASR1_Tag ;
/*0x00B9 */
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
} SCI2ACR1_Tag ;
/*0x00BA */
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
} SCI2ACR2_Tag ;
/*0x00BB */
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
} SCI2CR2_Tag ;
/*0x00BC */
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
} SCI2SR1_Tag ;
/*0x00BD */
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
} SCI2SR2_Tag ;
/*0x00BE */
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
} SCI2DRH_Tag ;
/*0x00BF */
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
} SCI2DRL_Tag ;
/*0x00C0-0x00C7 Asynchronous Serial Interface (SCI3) Map*/
/*0x00C0 */
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
} SCI3BDH_Tag ;
/*0x00C1 */
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
} SCI3BDL_Tag ;
/*0x00C2 */
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
} SCI3CR1_Tag ;
/*0x00C0 */
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
} SCI3ASR1_Tag ;
/*0x00C1 */
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
} SCI3ACR1_Tag ;
/*0x00C2 */
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
} SCI3ACR2_Tag ;
/*0x00C3 */
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
} SCI3CR2_Tag ;
/*0x00C4 */
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
} SCI3SR1_Tag ;
/*0x00C5 */
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
} SCI3SR2_Tag ;
/*0x00C6 */
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
} SCI3DRH_Tag ;
/*0x00C7 */
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
} SCI3DRL_Tag ;
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
} SCI0SR2_Tag ;
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
} SCI1SR2_Tag ;
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
/*0x00E0-0x00E7 Inter IC Bus (IIC0) Map*/
/*0x00E0 */
typedef union
{
    byte Reg ;
    struct
    {
        byte ADR7 :1 ;
        byte ADR6 :1 ;
        byte ADR5 :1 ;
        byte ADR4 :1 ;
        byte ADR3 :1 ;
        byte ADR2 :1 ;
        byte ADR1 :1 ;
        byte :1 ;
    } Bits ;
} IIC0_IBAD_Tag ;
/*0x00E1 */
typedef union
{
    byte Reg ;
    struct
    {
        byte IBC7 :1 ;
        byte IBC6 :1 ;
        byte IBC5 :1 ;
        byte IBC4 :1 ;
        byte IBC3 :1 ;
        byte IBC2 :1 ;
        byte IBC1 :1 ;
        byte IBC0 :1 ;
    } Bits ;
} IIC0_IBFD_Tag ;
/*0x00E2 */
typedef union
{
    byte Reg ;
    struct
    {
        byte IBEN :1 ;
        byte IBIE :1 ;
        byte MSSL :1 ;
        byte TXRX :1 ;
        byte TXAK :1 ;
        byte RSTA :1 ;
        byte :1 ;
        byte IBSWAI :1 ;
    } Bits ;
} IIC0_IBCR_Tag ;
/*0x00E3 */
typedef union
{
    byte Reg ;
    struct
    {
        byte TCF :1 ;
        byte IAAS :1 ;
        byte IBB :1 ;
        byte IBAL :1 ;
        byte :1 ;
        byte SRW :1 ;
        byte IBIF :1 ;
        byte RXAK :1 ;
    } Bits ;
} IIC0_IBSR_Tag ;
/*0x00E4 */
typedef union
{
    byte Reg ;
    struct
    {
        byte D7 :1 ;
        byte D6 :1 ;
        byte D5 :1 ;
        byte D4 :1 ;
        byte D3 :1 ;
        byte D2 :1 ;
        byte D1 :1 ;
        byte D0 :1 ;
    } Bits ;
} IIC0_IBDR_Tag ;
/*0x00E5 */
typedef union
{
    byte Reg ;
    struct
    {
        byte GCEN :1 ;
        byte ADTYPE :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte ADR10 :1 ;
        byte ADR9 :1 ;
        byte ADR8 :1 ;
    } Bits ;
} IIC0_IBCR2_Tag ;
/*0x00E8-0x00EF Reserved*/
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
} SPI1DR_Tag;
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
/*0x00F8.0x00FF Serial Peripheral Interface (SPI2) Map*/
/*0x00F8 */
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
} SPI2CR1_Tag ;
/*0x00F9 */
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
} SPI2CR2_Tag ;
/*0x00FA */
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
} SPI2BR_Tag ;
/*0x00FB */
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
} SPI2SR_Tag ;
/*0x00FC */
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
} SPI2DR_Tag ;
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
} SPI2DRH_Tag ;
/*0x00FD */
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
} SPI2DRL_Tag ;
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

/*0x0130-0x0137 Asynchronous Serial Interface (SCI4) Map*/
/*0x0130 */
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
} SCI4BDH_Tag ;
/*0x0131 */
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
} SCI4BDL_Tag ;
/*0x0132 */
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
} SCI4CR1_Tag ;
/*0x0130 */
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
} SCI4ASR1_Tag ;
/*0x0131 */
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
} SCI4ACR1_Tag ;
/*0x0132 */
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
} SCI4ACR2_Tag ;
/*0x0133 */
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
} SCI4CR2_Tag ;
/*0x0134 */
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
} SCI4SR1_Tag ;
/*0x0135 */
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
} SCI4SR2_Tag ;
/*0x0136 */
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
} SCI4DRH_Tag ;
/*0x0137 */
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
} SCI4DRL_Tag ;
/*0x0138-0x013F Asynchronous Serial Interface (SCI5) Map*/
/*0x0138 */
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
} SCI5BDH_Tag ;
/*0x0139 */
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
} SCI5BDL_Tag ;
/*0x013A */
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
} SCI5CR1_Tag ;
/*0x0138 */
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
} SCI5ASR1_Tag ;
/*0x0139 */
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
} SCI5ACR1_Tag ;
/*0x013A */
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
} SCI5ACR2_Tag ;
/*0x013B */
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
} SCI5CR2_Tag ;
/*0x013C */
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
} SCI5SR1_Tag ;
/*0x013D */
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
} SCI5SR2_Tag ;
/*0x013E */
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
} SCI5DRH_Tag ;
/*0x013F */
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
} SCI5DRL_Tag ;
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
/*0x0180-0x01BF MSCAN (CAN1) */
/*0x0180 */
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
} CAN1CTL0_Tag ;
/*0x0181 */
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
} CAN1CTL1_Tag ;
/*0x0182 */
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
} CAN1BTR0_Tag ;
/*0x0183 */
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
} CAN1BTR1_Tag ;
/*0x0184 */
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
} CAN1RFLG_Tag ;
/*0x0185 */
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
} CAN1RIER_Tag ;
/*0x0186 */
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
} CAN1TFLG_Tag ;
/*0x0187 */
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
} CAN1TIER_Tag ;
/*0x0188 */
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
} CAN1TARQ_Tag ;
/*0x0189 */
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
} CAN1TAAK_Tag ;
/*0x018A */
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
} CAN1TBSEL_Tag ;
/*0x018B */
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
} CAN1IDAC_Tag ;
/*0x018D */
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
} CAN1MISC_Tag ;
/*0x018E */
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
} CAN1RXERR_Tag ;
/*0x018F */
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
} CAN1TXERR_Tag ;
/*0x0190 */
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
} CAN1IDAR0_Tag ;
/*0x0191 */
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
} CAN1IDAR1_Tag ;
/*0x0192 */
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
} CAN1IDAR2_Tag ;
/*0x0193 */
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
} CAN1IDAR3_Tag ;
/*0x0194 */
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
} CAN1IDMR0_Tag ;
/*0x0195 */
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
} CAN1IDMR1_Tag ;
/*0x0196 */
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
} CAN1IDMR2_Tag ;
/*0x0197 */
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
} CAN1IDMR3_Tag ;
/*0x0198 */
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
} CAN1IDAR4_Tag ;
/*0x0199 */
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
} CAN1IDAR5_Tag ;
/*0x019A */
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
} CAN1IDAR6_Tag ;
/*0x019B */
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
} CAN1IDAR7_Tag ;
/*0x019C */
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
} CAN1IDMR4_Tag ;
/*0x019D */
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
} CAN1IDMR5_Tag ;
/*0x019E */
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
} CAN1IDMR6_Tag ;
/*0x019F */
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
} CAN1IDMR7_Tag ;
/*0x01A0 */
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
} CAN1RXIDR0_Tag ;
/*0x01A1 */
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
} CAN1RXIDR1_Tag ;
/*0x01A2 */
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
} CAN1RXIDR2_Tag ;
/*0x01A3 */
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
} CAN1RXIDR3_Tag ;
/*0x01A4 */
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
} CAN1RXDSR0_Tag ;
/*0x01A5 */
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
} CAN1RXDSR1_Tag ;
/*0x01A6 */
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
} CAN1RXDSR2_Tag ;
/*0x01A7 */
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
} CAN1RXDSR3_Tag ;
/*0x01A8 */
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
} CAN1RXDSR4_Tag ;
/*0x01A9 */
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
} CAN1RXDSR5_Tag ;
/*0x01AA */
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
} CAN1RXDSR6_Tag ;
/*0x01AB */
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
} CAN1RXDSR7_Tag ;
/*0x01AC */
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
} CAN1RXDLR_Tag ;
/*0x01AE */
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
} CAN1RXTSRH_Tag ;
/*0x01AF */
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
} CAN1RXTSRL_Tag ;
/*0x01B0 */
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
} CAN1TXIDR0_Tag ;
/*0x01B1 */
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
} CAN1TXIDR1_Tag ;
/*0x01B2 */
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
} CAN1TXIDR2_Tag ;
/*0x01B3 */
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
} CAN1TXIDR3_Tag ;
/*0x01B4 */
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
} CAN1TXDSR0_Tag ;
/*0x01B5 */
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
} CAN1TXDSR1_Tag ;
/*0x01B6 */
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
} CAN1TXDSR2_Tag ;
/*0x01B7 */
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
} CAN1TXDSR3_Tag ;
/*0x01B8 */
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
} CAN1TXDSR4_Tag ;
/*0x01B9 */
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
} CAN1TXDSR5_Tag ;
/*0x01BA */
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
} CAN1TXDSR6_Tag ;
/*0x01BB */
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
} CAN1TXDSR7_Tag ;
/*0x01BC */
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
} CAN1TXDLR_Tag ;
/*0x01BD */
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
} CAN1TXTBPR_Tag ;
/*0x01BE */
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
} CAN1TXTSRH_Tag ;
/*0x01BF */
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
} CAN1TXTSRL_Tag ;
/*0x01C0-0x01FF MSCAN (CAN2) */
/*0x01C0 */
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
} CAN2CTL0_Tag ;
/*0x01C1 */
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
} CAN2CTL1_Tag ;
/*0x01C2 */
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
} CAN2BTR0_Tag ;
/*0x01C3 */
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
} CAN2BTR1_Tag ;
/*0x01C4 */
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
} CAN2RFLG_Tag ;
/*0x01C5 */
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
} CAN2RIER_Tag ;
/*0x01C6 */
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
} CAN2TFLG_Tag ;
/*0x01C7 */
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
} CAN2TIER_Tag ;
/*0x01C8 */
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
} CAN2TARQ_Tag ;
/*0x01C9 */
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
} CAN2TAAK_Tag ;
/*0x01CA */
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
} CAN2TBSEL_Tag ;
/*0x01CB */
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
} CAN2IDAC_Tag ;
/*0x01CD */
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
} CAN2MISC_Tag ;
/*0x01CE */
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
} CAN2RXERR_Tag ;
/*0x01CF */
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
} CAN2TXERR_Tag ;
/*0x01D0 */
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
} CAN2IDAR0_Tag ;
/*0x01D1 */
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
} CAN2IDAR1_Tag ;
/*0x01D2 */
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
} CAN2IDAR2_Tag ;
/*0x01D3 */
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
} CAN2IDAR3_Tag ;
/*0x01D4 */
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
} CAN2IDMR0_Tag ;
/*0x01D5 */
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
} CAN2IDMR1_Tag ;
/*0x01D6 */
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
} CAN2IDMR2_Tag ;
/*0x01D7 */
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
} CAN2IDMR3_Tag ;
/*0x01D8 */
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
} CAN2IDAR4_Tag ;
/*0x01D9 */
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
} CAN2IDAR5_Tag ;
/*0x01DA */
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
} CAN2IDAR6_Tag ;
/*0x01DB */
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
} CAN2IDAR7_Tag ;
/*0x01DC */
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
} CAN2IDMR4_Tag ;
/*0x01DD */
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
} CAN2IDMR5_Tag ;
/*0x01DE */
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
} CAN2IDMR6_Tag ;
/*0x01DF */
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
} CAN2IDMR7_Tag ;
/*0x01E0 */
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
} CAN2RXIDR0_Tag ;
/*0x01E1 */
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
} CAN2RXIDR1_Tag ;
/*0x01E2 */
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
} CAN2RXIDR2_Tag ;
/*0x01E3 */
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
} CAN2RXIDR3_Tag ;
/*0x01E4 */
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
} CAN2RXDSR0_Tag ;
/*0x01E5 */
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
} CAN2RXDSR1_Tag ;
/*0x01E6 */
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
} CAN2RXDSR2_Tag ;
/*0x01E7 */
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
} CAN2RXDSR3_Tag ;
/*0x01E8 */
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
} CAN2RXDSR4_Tag ;
/*0x01E9 */
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
} CAN2RXDSR5_Tag ;
/*0x01EA */
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
} CAN2RXDSR6_Tag ;
/*0x01EB */
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
} CAN2RXDSR7_Tag ;
/*0x01EC */
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
} CAN2RXDLR_Tag ;
/*0x01EE */
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
} CAN2RXTSRH_Tag ;
/*0x01EF */
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
} CAN2RXTSRL_Tag ;
/*0x01F0 */
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
} CAN2TXIDR0_Tag ;
/*0x01F1 */
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
} CAN2TXIDR1_Tag ;
/*0x01F2 */
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
} CAN2TXIDR2_Tag ;
/*0x01F3 */
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
} CAN2TXIDR3_Tag ;
/*0x01F4 */
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
} CAN2TXDSR0_Tag ;
/*0x01F5 */
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
} CAN2TXDSR1_Tag ;
/*0x01F6 */
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
} CAN2TXDSR2_Tag ;
/*0x01F7 */
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
} CAN2TXDSR3_Tag ;
/*0x01F8 */
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
} CAN2TXDSR4_Tag ;
/*0x01F9 */
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
} CAN2TXDSR5_Tag ;
/*0x01FA */
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
} CAN2TXDSR6_Tag ;
/*0x01FB */
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
} CAN2TXDSR7_Tag ;
/*0x01FC */
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
} CAN2TXDLR_Tag ;
/*0x01FD */
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
} CAN2TXTBPR_Tag ;
/*0x01FE */
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
} CAN2TXTSRH_Tag ;
/*0x01FF */
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
} CAN2TXTSRL_Tag ;
/*0x0200-0x023F MSCAN (CAN3)*/
/*0x0200 */
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
} CAN3CTL0_Tag ;
/*0x0201 */
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
} CAN3CTL1_Tag ;
/*0x0202 */
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
} CAN3BTR0_Tag ;
/*0x0203 */
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
} CAN3BTR1_Tag ;
/*0x0204 */
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
} CAN3RFLG_Tag ;
/*0x0205 */
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
} CAN3RIER_Tag ;
/*0x0206 */
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
} CAN3TFLG_Tag ;
/*0x0207 */
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
} CAN3TIER_Tag ;
/*0x0208 */
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
} CAN3TARQ_Tag ;
/*0x0209 */
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
} CAN3TAAK_Tag ;
/*0x020A */
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
} CAN3TBSEL_Tag ;
/*0x020B */
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
} CAN3IDAC_Tag ;
/*0x020D */
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
} CAN3MISC_Tag ;
/*0x020E */
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
} CAN3RXERR_Tag ;
/*0x020F */
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
} CAN3TXERR_Tag ;
/*0x0210 */
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
} CAN3IDAR0_Tag ;
/*0x0211 */
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
} CAN3IDAR1_Tag ;
/*0x0212 */
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
} CAN3IDAR2_Tag ;
/*0x0213 */
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
} CAN3IDAR3_Tag ;
/*0x0214 */
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
} CAN3IDMR0_Tag ;
/*0x0215 */
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
} CAN3IDMR1_Tag ;
/*0x0216 */
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
} CAN3IDMR2_Tag ;
/*0x0217 */
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
} CAN3IDMR3_Tag ;
/*0x0218 */
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
} CAN3IDAR4_Tag ;
/*0x0219 */
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
} CAN3IDAR5_Tag ;
/*0x021A */
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
} CAN3IDAR6_Tag ;
/*0x021B */
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
} CAN3IDAR7_Tag ;
/*0x021C */
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
} CAN3IDMR4_Tag ;
/*0x021D */
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
} CAN3IDMR5_Tag ;
/*0x021E */
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
} CAN3IDMR6_Tag ;
/*0x021F */
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
} CAN3IDMR7_Tag ;
/*0x0220 */
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
} CAN3RXIDR0_Tag ;
/*0x0221 */
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
} CAN3RXIDR1_Tag ;
/*0x0222 */
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
} CAN3RXIDR2_Tag ;
/*0x0223 */
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
} CAN3RXIDR3_Tag ;
/*0x0224 */
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
} CAN3RXDSR0_Tag ;
/*0x0225 */
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
} CAN3RXDSR1_Tag ;
/*0x0226 */
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
} CAN3RXDSR2_Tag ;
/*0x0227 */
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
} CAN3RXDSR3_Tag ;
/*0x0228 */
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
} CAN3RXDSR4_Tag ;
/*0x0229 */
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
} CAN3RXDSR5_Tag ;
/*0x022A */
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
} CAN3RXDSR6_Tag ;
/*0x022B */
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
} CAN3RXDSR7_Tag ;
/*0x022C */
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
} CAN3RXDLR_Tag ;
/*0x022E */
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
} CAN3RXTSRH_Tag ;
/*0x022F */
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
} CAN3RXTSRL_Tag ;
/*0x0230 */
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
} CAN3TXIDR0_Tag ;
/*0x0231 */
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
} CAN3TXIDR1_Tag ;
/*0x0232 */
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
} CAN3TXIDR2_Tag ;
/*0x0233 */
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
} CAN3TXIDR3_Tag ;
/*0x0234 */
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
} CAN3TXDSR0_Tag ;
/*0x0235 */
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
} CAN3TXDSR1_Tag ;
/*0x0236 */
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
} CAN3TXDSR2_Tag ;
/*0x0237 */
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
} CAN3TXDSR3_Tag ;
/*0x0238 */
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
} CAN3TXDSR4_Tag ;
/*0x0239 */
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
} CAN3TXDSR5_Tag ;
/*0x023A */
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
} CAN3TXDSR6_Tag ;
/*0x023B */
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
} CAN3TXDSR7_Tag ;
/*0x023C */
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
} CAN3TXDLR_Tag ;
/*0x023D */
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
} CAN3TXTBPR_Tag ;
/*0x023E */
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
} CAN3TXTSRH_Tag ;
/*0x023F */
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
} CAN3TXTSRL_Tag ;
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
/*0x0257 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte MODRR6 :1 ;
        byte MODRR5 :1 ;
        byte MODRR4 :1 ;
        byte MODRR3 :1 ;
        byte MODRR2 :1 ;
        byte MODRR1 :1 ;
        byte MODRR0 :1 ;
    } Bits ;
} MODRR_Tag ;
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
/*0x025E */
typedef union
{
    byte Reg ;
    struct
    {
        byte PIEP7 :1 ;
        byte PIEP6 :1 ;
        byte PIEP5 :1 ;
        byte PIEP4 :1 ;
        byte PIEP3 :1 ;
        byte PIEP2 :1 ;
        byte PIEP1 :1 ;
        byte PIEP0 :1 ;
    } Bits ;
} PIEP_Tag ;
/*0x025F */
typedef union
{
    byte Reg ;
    struct
    {
        byte PIFP7 :1 ;
        byte PIFP6 :1 ;
        byte PIFP5 :1 ;
        byte PIFP4 :1 ;
        byte PIFP3 :1 ;
        byte PIFP2 :1 ;
        byte PIFP1 :1 ;
        byte PIFP0 :1 ;
    } Bits ;
} PIFP_Tag ;
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
/*0x0266 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PIEH7 :1 ;
        byte PIEH6 :1 ;
        byte PIEH5 :1 ;
        byte PIEH4 :1 ;
        byte PIEH3 :1 ;
        byte PIEH2 :1 ;
        byte PIEH1 :1 ;
        byte PIEH0 :1 ;
    } Bits ;
} PIEH_Tag ;
/*0x0267 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PIFH7 :1 ;
        byte PIFH6 :1 ;
        byte PIFH5 :1 ;
        byte PIFH4 :1 ;
        byte PIFH3 :1 ;
        byte PIFH2 :1 ;
        byte PIFH1 :1 ;
        byte PIFH0 :1 ;
    } Bits ;
} PIFH_Tag ;
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
/*0x026E */
typedef union
{
    byte Reg ;
    struct
    {
        byte PIEJ7 :1 ;
        byte PIEJ6 :1 ;
        byte PIEJ5 :1 ;
        byte PIEJ4 :1 ;
        byte PIEJ3 :1 ;
        byte PIEJ2 :1 ;
        byte PIEJ1 :1 ;
        byte PIEJ0 :1 ;
    } Bits ;
} PIEJ_Tag ;
/*0x026F */
typedef union
{
    byte Reg ;
    struct
    {
        byte PIFJ7 :1 ;
        byte PIFJ6 :1 ;
        byte PIFJ5 :1 ;
        byte PIFJ4 :1 ;
        byte PIFJ3 :1 ;
        byte PIFJ2 :1 ;
        byte PIFJ1 :1 ;
        byte PIFJ0 :1 ;
    } Bits ;
} PIFJ_Tag ;
/*0x0270 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PT0AD07 :1 ;
        byte PT0AD06 :1 ;
        byte PT0AD05 :1 ;
        byte PT0AD04 :1 ;
        byte PT0AD03 :1 ;
        byte PT0AD02 :1 ;
        byte PT0AD01 :1 ;
        byte PT0AD00 :1 ;
    } Bits ;
} PT0AD0_Tag ;
/*0x0271 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PT1AD07 :1 ;
        byte PT1AD06 :1 ;
        byte PT1AD05 :1 ;
        byte PT1AD04 :1 ;
        byte PT1AD03 :1 ;
        byte PT1AD02 :1 ;
        byte PT1AD01 :1 ;
        byte PT1AD00 :1 ;
    } Bits ;
} PT1AD0_Tag ;
/*0x0272 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDR0AD07 :1 ;
        byte DDR0AD06 :1 ;
        byte DDR0AD05 :1 ;
        byte DDR0AD04 :1 ;
        byte DDR0AD03 :1 ;
        byte DDR0AD02 :1 ;
        byte DDR0AD01 :1 ;
        byte DDR0AD00 :1 ;
    } Bits ;
} DDR0AD0_Tag ;
/*0x0273 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDR1AD07 :1 ;
        byte DDR1AD06 :1 ;
        byte DDR1AD05 :1 ;
        byte DDR1AD04 :1 ;
        byte DDR1AD03 :1 ;
        byte DDR1AD02 :1 ;
        byte DDR1AD01 :1 ;
        byte DDR1AD00 :1 ;
    } Bits ;
} DDR1AD0_Tag ;
/*0x0274 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDR0AD07 :1 ;
        byte RDR0AD06 :1 ;
        byte RDR0AD05 :1 ;
        byte RDR0AD04 :1 ;
        byte RDR0AD03 :1 ;
        byte RDR0AD02 :1 ;
        byte RDR0AD01 :1 ;
        byte RDR0AD00 :1 ;
    } Bits ;
} RDR0AD0_Tag ;
/*0x0275 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDR1AD07 :1 ;
        byte RDR1AD06 :1 ;
        byte RDR1AD05 :1 ;
        byte RDR1AD04 :1 ;
        byte RDR1AD03 :1 ;
        byte RDR1AD02 :1 ;
        byte RDR1AD01 :1 ;
        byte RDR1AD00 :1 ;
    } Bits ;
} RDR1AD0_Tag ;
/*0x0276 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PER0AD07 :1 ;
        byte PER0AD06 :1 ;
        byte PER0AD05 :1 ;
        byte PER0AD04 :1 ;
        byte PER0AD03 :1 ;
        byte PER0AD02 :1 ;
        byte PER0AD01 :1 ;
        byte PER0AD00 :1 ;
    } Bits ;
} PER0AD0_Tag ;
/*0x0277 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PER1AD07 :1 ;
        byte PER1AD06 :1 ;
        byte PER1AD05 :1 ;
        byte PER1AD04 :1 ;
        byte PER1AD03 :1 ;
        byte PER1AD02 :1 ;
        byte PER1AD01 :1 ;
        byte PER1AD00 :1 ;
    } Bits ;
} PER1AD0_Tag ;
/*0x0278 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PT0AD17 :1 ;
        byte PT0AD16 :1 ;
        byte PT0AD15 :1 ;
        byte PT0AD14 :1 ;
        byte PT0AD13 :1 ;
        byte PT0AD12 :1 ;
        byte PT0AD11 :1 ;
        byte PT0AD10 :1 ;
    } Bits ;
} PT0AD1_Tag ;
/*0x0279 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PT1AD17 :1 ;
        byte PT1AD16 :1 ;
        byte PT1AD15 :1 ;
        byte PT1AD14 :1 ;
        byte PT1AD13 :1 ;
        byte PT1AD12 :1 ;
        byte PT1AD11 :1 ;
        byte PT1AD10 :1 ;
    } Bits ;
} PT1AD1_Tag ;
/*0x027A */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDR0AD17 :1 ;
        byte DDR0AD16 :1 ;
        byte DDR0AD15 :1 ;
        byte DDR0AD14 :1 ;
        byte DDR0AD13 :1 ;
        byte DDR0AD12 :1 ;
        byte DDR0AD11 :1 ;
        byte DDR0AD10 :1 ;
    } Bits ;
} DDR0AD1_Tag ;
/*0x027B */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDR1AD17 :1 ;
        byte DDR1AD16 :1 ;
        byte DDR1AD15 :1 ;
        byte DDR1AD14 :1 ;
        byte DDR1AD13 :1 ;
        byte DDR1AD12 :1 ;
        byte DDR1AD11 :1 ;
        byte DDR1AD10 :1 ;
    } Bits ;
} DDR1AD1_Tag ;
/*0x027C */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDR0AD17 :1 ;
        byte RDR0AD16 :1 ;
        byte RDR0AD15 :1 ;
        byte RDR0AD14 :1 ;
        byte RDR0AD13 :1 ;
        byte RDR0AD12 :1 ;
        byte RDR0AD11 :1 ;
        byte RDR0AD10 :1 ;
    } Bits ;
} RDR0AD1_Tag ;
/*0x027D */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDR1AD17 :1 ;
        byte RDR1AD16 :1 ;
        byte RDR1AD15 :1 ;
        byte RDR1AD14 :1 ;
        byte RDR1AD13 :1 ;
        byte RDR1AD12 :1 ;
        byte RDR1AD11 :1 ;
        byte RDR1AD10 :1 ;
    } Bits ;
} RDR1AD1_Tag ;
/*0x027E */
typedef union
{
    byte Reg ;
    struct
    {
        byte PER0AD17 :1 ;
        byte PER0AD16 :1 ;
        byte PER0AD15 :1 ;
        byte PER0AD14 :1 ;
        byte PER0AD13 :1 ;
        byte PER0AD12 :1 ;
        byte PER0AD11 :1 ;
        byte PER0AD10 :1 ;
    } Bits ;
} PER0AD1_Tag ;
/*0x027F */
typedef union
{
    byte Reg ;
    struct
    {
        byte PER1AD17 :1 ;
        byte PER1AD16 :1 ;
        byte PER1AD15 :1 ;
        byte PER1AD14 :1 ;
        byte PER1AD13 :1 ;
        byte PER1AD12 :1 ;
        byte PER1AD11 :1 ;
        byte PER1AD10 :1 ;
    } Bits ;
} PER1AD1_Tag ;
/*0x0280-0x02BF MSCAN (CAN4) */
/*0x0280 */
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
} CAN4CTL0_Tag ;
/*0x0281 */
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
} CAN4CTL1_Tag ;
/*0x0282 */
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
} CAN4BTR0_Tag ;
/*0x0283 */
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
} CAN4BTR1_Tag ;
/*0x0284 */
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
} CAN4RFLG_Tag ;
/*0x0285 */
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
} CAN4RIER_Tag ;
/*0x0286 */
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
} CAN4TFLG_Tag ;
/*0x0287 */
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
} CAN4TIER_Tag ;
/*0x0288 */
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
} CAN4TARQ_Tag ;
/*0x0289 */
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
} CAN4TAAK_Tag ;
/*0x028A */
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
} CAN4TBSEL_Tag ;
/*0x028B */
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
} CAN4IDAC_Tag ;
/*0x028D */
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
} CAN4MISC_Tag ;
/*0x028E */
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
} CAN4RXERR_Tag ;
/*0x028F */
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
} CAN4TXERR_Tag ;
/*0x0290 */
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
} CAN4IDAR0_Tag ;
/*0x0291 */
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
} CAN4IDAR1_Tag ;
/*0x0292 */
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
} CAN4IDAR2_Tag ;
/*0x0293 */
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
} CAN4IDAR3_Tag ;
/*0x0294 */
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
} CAN4IDMR0_Tag ;
/*0x0295 */
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
} CAN4IDMR1_Tag ;
/*0x0296 */
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
} CAN4IDMR2_Tag ;
/*0x0297 */
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
} CAN4IDMR3_Tag ;
/*0x0298 */
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
} CAN4IDAR4_Tag ;
/*0x0299 */
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
} CAN4IDAR5_Tag ;
/*0x029A */
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
} CAN4IDAR6_Tag ;
/*0x029B */
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
} CAN4IDAR7_Tag ;
/*0x029C */
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
} CAN4IDMR4_Tag ;
/*0x029D */
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
} CAN4IDMR5_Tag ;
/*0x029E */
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
} CAN4IDMR6_Tag ;
/*0x029F */
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
} CAN4IDMR7_Tag ;
/*0x02A0 */
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
} CAN4RXIDR0_Tag ;
/*0x02A1 */
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
} CAN4RXIDR1_Tag ;
/*0x02A2 */
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
} CAN4RXIDR2_Tag ;
/*0x02A3 */
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
} CAN4RXIDR3_Tag ;
/*0x02A4 */
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
} CAN4RXDSR0_Tag ;
/*0x02A5 */
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
} CAN4RXDSR1_Tag ;
/*0x02A6 */
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
} CAN4RXDSR2_Tag ;
/*0x02A7 */
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
} CAN4RXDSR3_Tag ;
/*0x02A8 */
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
} CAN4RXDSR4_Tag ;
/*0x02A9 */
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
} CAN4RXDSR5_Tag ;
/*0x02AA */
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
} CAN4RXDSR6_Tag ;
/*0x02AB */
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
} CAN4RXDSR7_Tag ;
/*0x02AC */
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
} CAN4RXDLR_Tag ;
/*0x02AE */
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
} CAN4RXTSRH_Tag ;
/*0x02AF */
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
} CAN4RXTSRL_Tag ;
/*0x02B0 */
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
} CAN4TXIDR0_Tag ;
/*0x02B1 */
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
} CAN4TXIDR1_Tag ;
/*0x02B2 */
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
} CAN4TXIDR2_Tag ;
/*0x02B3 */
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
} CAN4TXIDR3_Tag ;
/*0x02B4 */
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
} CAN4TXDSR0_Tag ;
/*0x02B5 */
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
} CAN4TXDSR1_Tag ;
/*0x02B6 */
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
} CAN4TXDSR2_Tag ;
/*0x02B7 */
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
} CAN4TXDSR3_Tag ;
/*0x02B8 */
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
} CAN4TXDSR4_Tag ;
/*0x02B9 */
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
} CAN4TXDSR5_Tag ;
/*0x02BA */
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
} CAN4TXDSR6_Tag ;
/*0x02BB */
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
} CAN4TXDSR7_Tag ;
/*0x02BC */
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
} CAN4TXDLR_Tag ;
/*0x02BD */
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
} CAN4TXTBPR_Tag ;
/*0x02BE */
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
} CAN4TXTSRH_Tag ;
/*0x02BF */
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
} CAN4TXTSRL_Tag ;
/*0x02C0-0x02EF Analog-to-Digital Converter 12-Bit 16-Channel (ATD0) */
/*0x02C0 */
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
} ATD0CTL0_Tag ;
/*0x02C1 */
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
} ATD0CTL1_Tag ;
/*0x02C2 */
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
} ATD0CTL2_Tag ;
/*0x02C3 */
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
} ATD0CTL3_Tag ;
/*0x02C4 */
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
} ATD0CTL4_Tag ;
/*0x02C5 */
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
} ATD0CTL5_Tag ;
/*0x02C6 */
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
} ATD0STAT0_Tag ;
/*0x02C8 */
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
} ATD0CMPEH_Tag ;
/*0x02C9 */
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
} ATD0CMPEL_Tag ;
/*0x02CA */
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
} ATD0STAT2H_Tag ;
/*0x02CB */
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
} ATD0STAT2L_Tag ;
/*0x02CC */
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
} ATD0DIENH_Tag ;
/*0x02CD */
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
} ATD0DIENL_Tag ;
/*0x02CE */
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
} ATD0CMPHTH_Tag ;
/*0x02CF */
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
} ATD0CMPHTL_Tag ;
/*0x02C0 */
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
} ATD0DR0_Tag ;
/*0x02C0 */
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
} ATD0DR0H_Tag ;
/*0x02D1 */
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
} ATD0DR0L_Tag ;
/*0x02D2 */
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
} ATD0DR1_Tag ;
/*0x02D2 */
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
} ATD0DR1H_Tag ;
/*0x02D3 */
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
} ATD0DR1L_Tag ;
/*0x02D4 */
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
} ATD0DR2_Tag ;
/*0x02D4 */
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
} ATD0DR2H_Tag ;
/*0x02D5 */
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
} ATD0DR2L_Tag ;
/*0x02D6 */
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
} ATD0DR3_Tag ;
/*0x02D6 */
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
} ATD0DR3H_Tag ;
/*0x02D7 */
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
} ATD0DR3L_Tag ;
/*0x02D8 */
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
} ATD0DR4_Tag ;
/*0x02D8 */
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
} ATD0DR4H_Tag ;
/*0x02D9 */
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
} ATD0DR4L_Tag ;
/*0x02DA */
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
} ATD0DR5_Tag ;
/*0x02DA */
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
} ATD0DR5H_Tag ;
/*0x02DB */
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
} ATD0DR5L_Tag ;
/*0x02DC */
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
} ATD0DR6_Tag ;
/*0x02DC */
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
} ATD0DR6H_Tag ;
/*0x02DD */
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
} ATD0DR6L_Tag ;
/*0x02DE */
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
} ATD0DR7_Tag ;
/*0x02DE */
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
} ATD0DR7H_Tag ;
/*0x02DF */
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
} ATD0DR7L_Tag ;
/*0x02E0 */
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
} ATD0DR8_Tag ;
/*0x02E0 */
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
} ATD0DR8H_Tag ;
/*0x02E1 */
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
} ATD0DR8L_Tag ;
/*0x02E2 */
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
} ATD0DR9_Tag ;
/*0x02E2 */
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
} ATD0DR9H_Tag ;
/*0x02E3 */
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
} ATD0DR9L_Tag ;
/*0x02E4 */
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
} ATD0DR10_Tag ;
/*0x02E4 */
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
} ATD0DR10H_Tag ;
/*0x02E5 */
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
} ATD0DR10L_Tag ;
/*0x02E6 */
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
} ATD0DR11_Tag ;
/*0x02E6 */
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
} ATD0DR11H_Tag ;
/*0x02E7 */
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
} ATD0DR11L_Tag ;
/*0x02E8 */
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
} ATD0DR12_Tag ;
/*0x02E8 */
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
} ATD0DR12H_Tag ;
/*0x02E9 */
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
} ATD0DR12L_Tag ;
/*0x02EA */
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
} ATD0DR13_Tag ;
/*0x02EA */
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
} ATD0DR13H_Tag ;
/*0x02EB */
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
} ATD0DR13L_Tag ;
/*0x02EC */
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
} ATD0DR14_Tag ;
/*0x02EC */
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
} ATD0DR14H_Tag ;
/*0x02ED */
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
} ATD0DR14L_Tag ;
/*0x02EE */
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
} ATD0DR15_Tag ;
/*0x02EE */
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
} ATD0DR15H_Tag ;
/*0x02EF */
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
} ATD0DR15L_Tag ;
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
} VREGHTTR_Tag ;
/*0x0300-0x0327 Pulse Width Modulator 8-Bit 8-Channel (PWM) */
/*0x0300 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PWME7 :1 ;
        byte PWME6 :1 ;
        byte PWME5 :1 ;
        byte PWME4 :1 ;
        byte PWME3 :1 ;
        byte PWME2 :1 ;
        byte PWME1 :1 ;
        byte PWME0 :1 ;
    } Bits ;
} PWME_Tag ;
/*0x0301 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PPOL7 :1 ;
        byte PPOL6 :1 ;
        byte PPOL5 :1 ;
        byte PPOL4 :1 ;
        byte PPOL3 :1 ;
        byte PPOL2 :1 ;
        byte PPOL1 :1 ;
        byte PPOL0 :1 ;
    } Bits ;
} PWMPOL_Tag ;
/*0x0302 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PCLK7 :1 ;
        byte PCLK6 :1 ;
        byte PCLK5 :1 ;
        byte PCLK4 :1 ;
        byte PCLK3 :1 ;
        byte PCLK2 :1 ;
        byte PCLK1 :1 ;
        byte PCLK0 :1 ;
    } Bits ;
} PWMCLK_Tag ;
/*0x0303 */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte PCKB2 :1 ;
        byte PCKB1 :1 ;
        byte PCKB0 :1 ;
        byte :1 ;
        byte PCKA2 :1 ;
        byte PCKA1 :1 ;
        byte PCKA0 :1 ;
    } Bits ;
    struct
    {
        byte :1 ;
        byte PCKB :3 ;
        byte :1 ;
        byte PCKA :3 ;
    } MergedBits ;
} PWMPRCLK_Tag ;
/*0x0304 */
typedef union
{
    byte Reg ;
    struct
    {
        byte CAE7 :1 ;
        byte CAE6 :1 ;
        byte CAE5 :1 ;
        byte CAE4 :1 ;
        byte CAE3 :1 ;
        byte CAE2 :1 ;
        byte CAE1 :1 ;
        byte CAE0 :1 ;
    } Bits ;
} PWMCAE_Tag ;
/*0x0305 */
typedef union
{
    byte Reg ;
    struct
    {
        byte CON67 :1 ;
        byte CON45 :1 ;
        byte CON23 :1 ;
        byte CON01 :1 ;
        byte PSWAI :1 ;
        byte PFRZ :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} PWMCTL_Tag ;
/*0x0308 */
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
} PWMSCLA_Tag ;
/*0x0309 */
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
} PWMSCLB_Tag ;
/*0x030C */
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
} PWMCNT0_Tag ;
/*0x030D */
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
} PWMCNT1_Tag ;
/*0x030E */
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
} PWMCNT2_Tag ;
/*0x030F */
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
} PWMCNT3_Tag ;
/*0x0310 */
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
} PWMCNT4_Tag ;
/*0x0311 */
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
} PWMCNT5_Tag ;
/*0x0312 */
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
} PWMCNT6_Tag ;
/*0x0313 */
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
} PWMCNT7_Tag ;
/*0x0314 */
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
} PWMPER0_Tag ;
/*0x0315 */
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
} PWMPER1_Tag ;
/*0x0316 */
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
} PWMPER2_Tag ;
/*0x0317 */
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
} PWMPER3_Tag ;
/*0x0318 */
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
} PWMPER4_Tag ;
/*0x0319 */
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
} PWMPER5_Tag ;
/*0x031A */
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
} PWMPER6_Tag ;
/*0x031B */
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
} PWMPER7_Tag ;
/*0x031C */
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
} PWMDTY0_Tag ;
/*0x031D */
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
} PWMDTY1_Tag ;
/*0x031E */
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
} PWMDTY2_Tag ;
/*0x031F */
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
} PWMDTY3_Tag ;
/*0x0320 */
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
} PWMDTY4_Tag ;
/*0x0321 */
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
} PWMDTY5_Tag ;
/*0x0322 */
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
} PWMDTY6_Tag ;
/*0x0323 */
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
} PWMDTY7_Tag ;
/*0x0324 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PWMIF :1 ;
        byte PWMIE :1 ;
        byte PWMRSTRT :1 ;
        byte PWMLVL :1 ;
        byte :1 ;
        byte PWM7IN :1 ;
        byte PWM7INL :1 ;
        byte PWM7ENA :1 ;
    } Bits ;
} PWMSDN_Tag ;
/*0x0328-0x032F Reserved*/
/*0x0330-0x0337 Asynchronous Serial Interface (SCI6) */
/*0x0330 */
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
} SCI6BDH_Tag ;
/*0x0331 */
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
} SCI6BDL_Tag ;
/*0x0332 */
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
} SCI6CR1_Tag ;
/*0x0330 */
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
} SCI6ASR1_Tag ;
/*0x0331 */
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
} SCI6ACR1_Tag ;
/*0x0332 */
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
} SCI6ACR2_Tag ;
/*0x0333 */
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
} SCI6CR2_Tag ;
/*0x0334 */
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
} SCI6SR1_Tag ;
/*0x0335 */
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
} SCI6SR2_Tag ;
/*0x0336 */
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
} SCI6DRH_Tag ;
/*0x0337 */
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
} SCI6DRL_Tag ;
/*0x0338-0x033F Asynchronous Serial Interface (SCI7) */
/*0x0338 */
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
} SCI7BDH_Tag ;
/*0x0339 */
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
} SCI7BDL_Tag ;
/*0x033A */
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
} SCI7CR1_Tag ;
/*0x0338 */
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
} SCI7ASR1_Tag ;
/*0x0339 */
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
} SCI7ACR1_Tag ;
/*0x033A */
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
} SCI7ACR2_Tag ;
/*0x033B */
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
} SCI7CR2_Tag ;
/*0x033C */
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
} SCI7SR1_Tag ;
/*0x033D */
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
} SCI7SR2_Tag ;
/*0x033E */
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
} SCI7DRH_Tag ;
/*0x033F */
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
} SCI7DRL_Tag ;
/*0x0340-0x0367 Periodic Interrupt Timer (PIT) */
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
} PITCNT6L_Tag ;
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
/*0x0368-0x037F Port Integration Module (PIM) */
/*0x0368 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTR7 :1 ;
        byte PTR6 :1 ;
        byte PTR5 :1 ;
        byte PTR4 :1 ;
        byte PTR3 :1 ;
        byte PTR2 :1 ;
        byte PTR1 :1 ;
        byte PTR0 :1 ;
    } Bits ;
} PTR_Tag ;
/*0x0369 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTIR7 :1 ;
        byte PTIR6 :1 ;
        byte PTIR5 :1 ;
        byte PTIR4 :1 ;
        byte PTIR3 :1 ;
        byte PTIR2 :1 ;
        byte PTIR1 :1 ;
        byte PTIR0 :1 ;
    } Bits ;
} PTIR_Tag ;
/*0x036A */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRR7 :1 ;
        byte DDRR6 :1 ;
        byte DDRR5 :1 ;
        byte DDRR4 :1 ;
        byte DDRR3 :1 ;
        byte DDRR2 :1 ;
        byte DDRR1 :1 ;
        byte DDRR0 :1 ;
    } Bits ;
} DDRR_Tag ;
/*0x036B */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDRR7 :1 ;
        byte RDRR6 :1 ;
        byte RDRR5 :1 ;
        byte RDRR4 :1 ;
        byte RDRR3 :1 ;
        byte RDRR2 :1 ;
        byte RDRR1 :1 ;
        byte RDRR0 :1 ;
    } Bits ;
} RDRR_Tag ;
/*0x036C */
typedef union
{
    byte Reg ;
    struct
    {
        byte PERR7 :1 ;
        byte PERR6 :1 ;
        byte PERR5 :1 ;
        byte PERR4 :1 ;
        byte PERR3 :1 ;
        byte PERR2 :1 ;
        byte PERR1 :1 ;
        byte PERR0 :1 ;
    } Bits ;
} PERR_Tag ;
/*0x036D */
typedef union
{
    byte Reg ;
    struct
    {
        byte PPSR7 :1 ;
        byte PPSR6 :1 ;
        byte PPSR5 :1 ;
        byte PPSR4 :1 ;
        byte PPSR3 :1 ;
        byte PPSR2 :1 ;
        byte PPSR1 :1 ;
        byte PPSR0 :1 ;
    } Bits ;
} PPSR_Tag ;
/*0x036F */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTRRR7 :1 ;
        byte PTRRR6 :1 ;
        byte PTRRR5 :1 ;
        byte PTRRR4 :1 ;
        byte PTRRR3 :1 ;
        byte PTRRR2 :1 ;
        byte PTRRR1 :1 ;
        byte PTRRR0 :1 ;
    } Bits ;
} PTRRR_Tag ;
/*0x0370 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTL7 :1 ;
        byte PTL6 :1 ;
        byte PTL5 :1 ;
        byte PTL4 :1 ;
        byte PTL3 :1 ;
        byte PTL2 :1 ;
        byte PTL1 :1 ;
        byte PTL0 :1 ;
    } Bits ;
} PTL_Tag ;
/*0x0371 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTIL7 :1 ;
        byte PTIL6 :1 ;
        byte PTIL5 :1 ;
        byte PTIL4 :1 ;
        byte PTIL3 :1 ;
        byte PTIL2 :1 ;
        byte PTIL1 :1 ;
        byte PTIL0 :1 ;
    } Bits ;
} PTIL_Tag ;
/*0x0372 */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRL7 :1 ;
        byte DDRL6 :1 ;
        byte DDRL5 :1 ;
        byte DDRL4 :1 ;
        byte DDRL3 :1 ;
        byte DDRL2 :1 ;
        byte DDRL1 :1 ;
        byte DDRL0 :1 ;
    } Bits ;
} DDRL_Tag ;
/*0x0373 */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDRL7 :1 ;
        byte RDRL6 :1 ;
        byte RDRL5 :1 ;
        byte RDRL4 :1 ;
        byte RDRL3 :1 ;
        byte RDRL2 :1 ;
        byte RDRL1 :1 ;
        byte RDRL0 :1 ;
    } Bits ;
} RDRL_Tag ;
/*0x0374 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PERL7 :1 ;
        byte PERL6 :1 ;
        byte PERL5 :1 ;
        byte PERL4 :1 ;
        byte PERL3 :1 ;
        byte PERL2 :1 ;
        byte PERL1 :1 ;
        byte PERL0 :1 ;
    } Bits ;
} PERL_Tag ;
/*0x0375 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PPSL7 :1 ;
        byte PPSL6 :1 ;
        byte PPSL5 :1 ;
        byte PPSL4 :1 ;
        byte PPSL3 :1 ;
        byte PPSL2 :1 ;
        byte PPSL1 :1 ;
        byte PPSL0 :1 ;
    } Bits ;
} PPSL_Tag ;
/*0x0376 */
typedef union
{
    byte Reg ;
    struct
    {
        byte WOML7 :1 ;
        byte WOML6 :1 ;
        byte WOML5 :1 ;
        byte WOML4 :1 ;
        byte WOML3 :1 ;
        byte WOML2 :1 ;
        byte WOML1 :1 ;
        byte WOML0 :1 ;
    } Bits ;
} WOML_Tag ;
/*0x0377 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTLRR7 :1 ;
        byte PTLRR6 :1 ;
        byte PTLRR5 :1 ;
        byte PTLRR4 :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
        byte :1 ;
    } Bits ;
} PTLRR_Tag ;
/*0x0378 */
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
} PTF_Tag ;
/*0x0379 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTIF7 :1 ;
        byte PTIF6 :1 ;
        byte PTIF5 :1 ;
        byte PTIF4 :1 ;
        byte PTIF3 :1 ;
        byte PTIF2 :1 ;
        byte PTIF1 :1 ;
        byte PTIF0 :1 ;
    } Bits ;
} PTIF_Tag ;
/*0x037A */
typedef union
{
    byte Reg ;
    struct
    {
        byte DDRF7 :1 ;
        byte DDRF6 :1 ;
        byte DDRF5 :1 ;
        byte DDRF4 :1 ;
        byte DDRF3 :1 ;
        byte DDRF2 :1 ;
        byte DDRF1 :1 ;
        byte DDRF0 :1 ;
    } Bits ;
} DDRF_Tag ;
/*0x037B */
typedef union
{
    byte Reg ;
    struct
    {
        byte RDRF7 :1 ;
        byte RDRF6 :1 ;
        byte RDRF5 :1 ;
        byte RDRF4 :1 ;
        byte RDRF3 :1 ;
        byte RDRF2 :1 ;
        byte RDRF1 :1 ;
        byte RDRF0 :1 ;
    } Bits ;
} RDRF_Tag ;
/*0x037C */
typedef union
{
    byte Reg ;
    struct
    {
        byte PERF7 :1 ;
        byte PERF6 :1 ;
        byte PERF5 :1 ;
        byte PERF4 :1 ;
        byte PERF3 :1 ;
        byte PERF2 :1 ;
        byte PERF1 :1 ;
        byte PERF0 :1 ;
    } Bits ;
} PERF_Tag ;
/*0x037D */
typedef union
{
    byte Reg ;
    struct
    {
        byte PPSF7 :1 ;
        byte PPSF6 :1 ;
        byte PPSF5 :1 ;
        byte PPSF4 :1 ;
        byte PPSF3 :1 ;
        byte PPSF2 :1 ;
        byte PPSF1 :1 ;
        byte PPSF0 :1 ;
    } Bits ;
} PPSF_Tag ;
/*0x037F */
typedef union
{
    byte Reg ;
    struct
    {
        byte :1 ;
        byte :1 ;
        byte PTFRR5 :1 ;
        byte PTFRR4 :1 ;
        byte PTFRR3 :1 ;
        byte PTFRR2 :1 ;
        byte PTFRR1 :1 ;
        byte PTFRR0 :1 ;
    } Bits ;
} PTFRR_Tag ;
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
        byte XGCHPL :1 ;
        byte :1 ;
        byte :1 ;
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
        byte XGIF_0C :1 ;
        byte XGIF_0B :1 ;
        byte XGIF_0A :1 ;
        byte XGIF_09 :1 ;
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
    byte Reg ;
    struct
    {
        byte XGSWTM7 :1 ;
        byte XGSWTM6 :1 ;
        byte XGSWTM5 :1 ;
        byte XGSWTM4 :1 ;
        byte XGSWTM3 :1 ;
        byte XGSWTM2 :1 ;
        byte XGSWTM1 :1 ;
        byte XGSWTM0 :1 ;
    } Bits ;
} XGSWTM_Tag ;
/*0x0399 */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGSWT7 :1 ;
        byte XGSWT6 :1 ;
        byte XGSWT5 :1 ;
        byte XGSWT4 :1 ;
        byte XGSWT3 :1 ;
        byte XGSWT2 :1 ;
        byte XGSWT1 :1 ;
        byte XGSWT0 :1 ;
    } Bits ;
} XGSWT_Tag ;
/*0x039A */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGSEMM7 :1 ;
        byte XGSEMM6 :1 ;
        byte XGSEMM5 :1 ;
        byte XGSEMM4 :1 ;
        byte XGSEMM3 :1 ;
        byte XGSEMM2 :1 ;
        byte XGSEMM1 :1 ;
        byte XGSEMM0 :1 ;
    } Bits ;
} XGSEMM_Tag ;
/*0x039B */
typedef union
{
    byte Reg ;
    struct
    {
        byte XGSEM7 :1 ;
        byte XGSEM6 :1 ;
        byte XGSEM5 :1 ;
        byte XGSEM4 :1 ;
        byte XGSEM3 :1 ;
        byte XGSEM2 :1 ;
        byte XGSEM1 :1 ;
        byte XGSEM0 :1 ;
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
/*0x03C0-0x03CF Reserved*/
/*0x03D0-0x03FF Timer Module (TIM) */
/*0x03D0 */
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
} TIM_TIOS_Tag ;
/*0x03D1 */
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
} TIM_CFORC_Tag ;
/*0x03D2 */
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
} TIM_OC7M_Tag ;
/*0x03D3 */
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
} TIM_OC7D_Tag ;
/*0x03D4 */
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
} TIM_TCNTH_Tag ;
/*0x03D5 */
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
} TIM_TCNTL_Tag ;
/*0x03D6 */
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
} TIM_TSCR1_Tag ;
/*0x03D7 */
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
} TIM_TTOV_Tag ;
/*0x03D8 */
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
} TIM_TCTL1_Tag ;
/*0x03D9 */
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
} TIM_TCTL2_Tag ;
/*0x03DA */
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
} TIM_TCTL3_Tag ;
/*0x03DB */
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
} TIM_TCTL4_Tag ;
/*0x03DC */
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
} TIM_TIE_Tag ;
/*0x03DD */
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
} TIM_TSCR2_Tag ;
/*0x03DE */
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
} TIM_TFLG1_Tag ;
/*0x03DF */
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
} TIM_TFLG2_Tag ;
/*0x03E0 */
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
} TIM_TC0H_Tag ;
/*0x03E1 */
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
} TIM_TC0L_Tag ;
/*0x03E2 */
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
} TIM_TC1H_Tag ;
/*0x03E3 */
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
} TIM_TC1L_Tag ;
/*0x03E4 */
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
} TIM_TC2H_Tag ;
/*0x03E5 */
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
} TIM_TC2L_Tag ;
/*0x03E6 */
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
} TIM_TC3H_Tag ;
/*0x03E7 */
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
} TIM_TC3L_Tag ;
/*0x03E8 */
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
} TIM_TC4H_Tag ;
/*0x03E9 */
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
} TIM_TC4L_Tag ;
/*0x03EA */
typedef union
{
    byte Reg ;
    struct
    {
        byte BIT8 :1 ;
        byte BIT9 :1 ;
        byte BIT10 :1 ;
        byte BIT11 :1 ;
        byte BIT12 :1 ;
        byte BIT13 :1 ;
        byte BIT14 :1 ;
        byte BIT15 :1 ;
    } Bits ;
} TIM_TC5H_Tag ;
/*0x03EB */
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
} TIM_TC5L_Tag ;
/*0x03EC */
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
} TIM_TC6H_Tag ;
/*0x03ED */
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
} TIM_TC6L_Tag ;
/*0x03EE */
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
} TIM_TC7H_Tag ;
/*0x03EF */
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
} TIM_TC7L_Tag ;
/*0x03F0 */
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
} TIM_PACTL_Tag ;
/*0x03F1 */
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
} TIM_PAFLG_Tag ;
/*0x03F2 */
typedef union
{
    byte Reg ;
    struct
    {
        byte PACNT15 :1 ;
        byte PACNT14 :1 ;
        byte PACNT13 :1 ;
        byte PACNT12 :1 ;
        byte PACNT11 :1 ;
        byte PACNT10 :1 ;
        byte PACNT9 :1 ;
        byte PACNT8 :1 ;
    } Bits ;
} TIM_PACNTH_Tag ;
/*0x03F3 */
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
} TIM_PACNTL_Tag ;
/*0x03FC */
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
} TIM_OCPD_Tag ;
/*0x03FE */
typedef union
{
    byte Reg ;
    struct
    {
        byte PTPSR7 :1 ;
        byte PTPSR6 :1 ;
        byte PTPSR5 :1 ;
        byte PTPSR4 :1 ;
        byte PTPSR3 :1 ;
        byte PTPSR2 :1 ;
        byte PTPSR1 :1 ;
        byte PTPSR0 :1 ;
    } Bits ;
} TIM_PTPSR_Tag ;

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
/* 0x0080-0x00AF Analog-to-Digital Converter 12-bit 16-Channels (ATD1) Map */
#define ATD1CTL0        (*(volatile ATD1CTL0_Tag *) (REG_BASE + 0x0080))
#define ATD1CTL1        (*(volatile ATD1CTL1_Tag *) (REG_BASE + 0x0081))
#define ATD1CTL2        (*(volatile ATD1CTL2_Tag *) (REG_BASE + 0x0082))
#define ATD1CTL3        (*(volatile ATD1CTL3_Tag *) (REG_BASE + 0x0083))
#define ATD1CTL4        (*(volatile ATD1CTL4_Tag *) (REG_BASE + 0x0084))
#define ATD1CTL5        (*(volatile ATD1CTL5_Tag *) (REG_BASE + 0x0085))
#define ATD1STAT0       (*(volatile ATD1STAT0_Tag *) (REG_BASE + 0x0086))
#define ATD1CMPEH       (*(volatile ATD1CMPEH_Tag *) (REG_BASE + 0x0088))
#define ATD1CMPEL       (*(volatile ATD1CMPEL_Tag *) (REG_BASE + 0x0089))
#define ATD1STAT2H      (*(volatile ATD1STAT2H_Tag *) (REG_BASE + 0x008A))
#define ATD1STATL       (*(volatile ATD1STATL_Tag *) (REG_BASE + 0x008B))
#define ATD1DIENH       (*(volatile ATD1DIENH_Tag *) (REG_BASE + 0x008C))
#define ATD1DIENL       (*(volatile ATD1DIENL_Tag *) (REG_BASE + 0x008D))
#define ATD1CMPHTH      (*(volatile ATD1CMPHTH_Tag *) (REG_BASE + 0x008E))
#define ATD1CMPHTL      (*(volatile ATD1CMPHTL_Tag *) (REG_BASE + 0x008F))
#define ATD1DR0         (*(volatile ATD1DR0_Tag *) (REG_BASE + 0x0090))
#define ATD1DR0H        (*(volatile ATD1DR0H_Tag *) (REG_BASE + 0x0090))
#define ATD1DR0L        (*(volatile ATD1DR0L_Tag *) (REG_BASE + 0x0091))
#define ATD1DR1         (*(volatile ATD1DR1_Tag *) (REG_BASE + 0x0092))
#define ATD1DR1H        (*(volatile ATD1DR1H_Tag *) (REG_BASE + 0x0092))
#define ATD1DR1L        (*(volatile ATD1DR1L_Tag *) (REG_BASE + 0x0093))
#define ATD1DR2         (*(volatile ATD1DR2_Tag *) (REG_BASE + 0x0094))
#define ATD1DR2H        (*(volatile ATD1DR2H_Tag *) (REG_BASE + 0x0094))
#define ATD1DR2L        (*(volatile ATD1DR2L_Tag *) (REG_BASE + 0x0095))
#define ATD1DR3         (*(volatile ATD1DR3_Tag *) (REG_BASE + 0x0096))
#define ATD1DR3H        (*(volatile ATD1DR3H_Tag *) (REG_BASE + 0x0096))
#define ATD1DR3L        (*(volatile ATD1DR3L_Tag *) (REG_BASE + 0x0097))
#define ATD1DR4         (*(volatile ATD1DR4_Tag *) (REG_BASE + 0x0098))
#define ATD1DR4H        (*(volatile ATD1DR4H_Tag *) (REG_BASE + 0x0098))
#define ATD1DR4L        (*(volatile ATD1DR4L_Tag *) (REG_BASE + 0x0099))
#define ATD1DR5         (*(volatile ATD1DR5_Tag *) (REG_BASE + 0x009A))
#define ATD1DR5H        (*(volatile ATD1DR5H_Tag *) (REG_BASE + 0x009A))
#define ATD1DR5L        (*(volatile ATD1DR5L_Tag *) (REG_BASE + 0x009B))
#define ATD1DR6         (*(volatile ATD1DR6_Tag *) (REG_BASE + 0x009C))
#define ATD1DR6H        (*(volatile ATD1DR6H_Tag *) (REG_BASE + 0x009C))
#define ATD1DR6L        (*(volatile ATD1DR6L_Tag *) (REG_BASE + 0x009D))
#define ATD1DR7         (*(volatile ATD1DR7_Tag *) (REG_BASE + 0x009E))
#define ATD1DR7H        (*(volatile ATD1DR7H_Tag *) (REG_BASE + 0x009E))
#define ATD1DR7L        (*(volatile ATD1DR7L_Tag *) (REG_BASE + 0x009F))
#define ATD1DR8         (*(volatile ATD1DR8_Tag *) (REG_BASE + 0x00A0))
#define ATD1DR8H        (*(volatile ATD1DR8H_Tag *) (REG_BASE + 0x00A0))
#define ATD1DR8L        (*(volatile ATD1DR8L_Tag *) (REG_BASE + 0x00A1))
#define ATD1DR9         (*(volatile ATD1DR9_Tag *) (REG_BASE + 0x00A2))
#define ATD1DR9H        (*(volatile ATD1DR9H_Tag *) (REG_BASE + 0x00A2))
#define ATD1DR9L        (*(volatile ATD1DR9L_Tag *) (REG_BASE + 0x00A3))
#define ATD1DR10        (*(volatile ATD1DR10_Tag *) (REG_BASE + 0x00A4))
#define ATD1DR10H       (*(volatile ATD1DR10H_Tag *) (REG_BASE + 0x00A4))
#define ATD1DR10L       (*(volatile ATD1DR10L_Tag *) (REG_BASE + 0x00A5))
#define ATD1DR11        (*(volatile ATD1DR11_Tag *) (REG_BASE + 0x00A6))
#define ATD1DR11H       (*(volatile ATD1DR11H_Tag *) (REG_BASE + 0x00A6))
#define ATD1DR11L       (*(volatile ATD1DR11L_Tag *) (REG_BASE + 0x00A7))
#define ATD1DR12        (*(volatile ATD1DR12_Tag *) (REG_BASE + 0x00A8))
#define ATD1DR12H       (*(volatile ATD1DR12H_Tag *) (REG_BASE + 0x00A8))
#define ATD1DR12L       (*(volatile ATD1DR12L_Tag *) (REG_BASE + 0x00A9))
#define ATD1DR13        (*(volatile ATD1DR13_Tag *) (REG_BASE + 0x00AA))
#define ATD1DR13H       (*(volatile ATD1DR13H_Tag *) (REG_BASE + 0x00AA))
#define ATD1DR13L       (*(volatile ATD1DR13L_Tag *) (REG_BASE + 0x00AB))
#define ATD1DR14        (*(volatile ATD1DR14_Tag *) (REG_BASE + 0x00AC))
#define ATD1DR14H       (*(volatile ATD1DR14H_Tag *) (REG_BASE + 0x00AC))
#define ATD1DR14L       (*(volatile ATD1DR14L_Tag *) (REG_BASE + 0x00AD))
#define ATD1DR15        (*(volatile ATD1DR15_Tag *) (REG_BASE + 0x00AE))
#define ATD1DR15H       (*(volatile ATD1DR15H_Tag *) (REG_BASE + 0x00AE))
#define ATD1DR15L       (*(volatile ATD1DR15L_Tag *) (REG_BASE + 0x00AF))
/* 0x00B0-0x00B7 Inter IC Bus (IIC1) Map */
#define IIC1_IBAD       (*(volatile IIC1_IBAD_Tag *) (REG_BASE + 0x00B0))
#define IIC1_IBFD       (*(volatile IIC1_IBFD_Tag *) (REG_BASE + 0x00B1))
#define IIC1_IBCR       (*(volatile IIC1_IBCR_Tag *) (REG_BASE + 0x00B2))
#define IIC1_IBSR       (*(volatile IIC1_IBSR_Tag *) (REG_BASE + 0x00B3))
#define IIC1_IBDR       (*(volatile IIC1_IBDR_Tag *) (REG_BASE + 0x00B4))
#define IIC1_IBCR2      (*(volatile IIC1_IBCR2_Tag *) (REG_BASE + 0x00B5))
/* 0x00B8-0x00BF Asynchronous Serial Interface (SCI2) Map */
#define SCI2BDH         (*(volatile SCI2BDH_Tag *) (REG_BASE + 0x00B8))
#define SCI2BDL         (*(volatile SCI2BDL_Tag *) (REG_BASE + 0x00B9))
#define SCI2CR1         (*(volatile SCI2CR1_Tag *) (REG_BASE + 0x00BA))
#define SCI2ASR1        (*(volatile SCI2ASR1_Tag *) (REG_BASE + 0x00B8))
#define SCI2ACR1        (*(volatile SCI2ACR1_Tag *) (REG_BASE + 0x00B9))
#define SCI2ACR2        (*(volatile SCI2ACR2_Tag *) (REG_BASE + 0x00BA))
#define SCI2CR2         (*(volatile SCI2CR2_Tag *) (REG_BASE + 0x00BB))
#define SCI2SR1         (*(volatile SCI2SR1_Tag *) (REG_BASE + 0x00BC))
#define SCI2SR2         (*(volatile SCI2SR2_Tag *) (REG_BASE + 0x00BD))
#define SCI2DRH         (*(volatile SCI2DRH_Tag *) (REG_BASE + 0x00BE))
#define SCI2DRL         (*(volatile SCI2DRL_Tag *) (REG_BASE + 0x00BF))
/* 0x00C0-0x00C7 Asynchronous Serial Interface (SCI3) Map */
#define SCI3BDH         (*(volatile SCI3BDH_Tag *) (REG_BASE + 0x00C0))
#define SCI3BDL         (*(volatile SCI3BDL_Tag *) (REG_BASE + 0x00C1))
#define SCI3CR1         (*(volatile SCI3CR1_Tag *) (REG_BASE + 0x00C2))
#define SCI3ASR1        (*(volatile SCI3ASR1_Tag *) (REG_BASE + 0x00C0))
#define SCI3ACR1        (*(volatile SCI3ACR1_Tag *) (REG_BASE + 0x00C1))
#define SCI3ACR2        (*(volatile SCI3ACR2_Tag *) (REG_BASE + 0x00C2))
#define SCI3CR2         (*(volatile SCI3CR2_Tag *) (REG_BASE + 0x00C3))
#define SCI3SR1         (*(volatile SCI3SR1_Tag *) (REG_BASE + 0x00C4))
#define SCI3SR2         (*(volatile SCI3SR2_Tag *) (REG_BASE + 0x00C5))
#define SCI3DRH         (*(volatile SCI3DRH_Tag *) (REG_BASE + 0x00C6))
#define SCI3DRL         (*(volatile SCI3DRL_Tag *) (REG_BASE + 0x00C7))
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
/* 0x00E0-0x00E7 Inter IC Bus (IIC0) Map */
#define IIC0_IBAD       (*(volatile IIC0_IBAD_Tag *) (REG_BASE + 0x00E0))
#define IIC0_IBFD       (*(volatile IIC0_IBFD_Tag *) (REG_BASE + 0x00E1))
#define IIC0_IBCR       (*(volatile IIC0_IBCR_Tag *) (REG_BASE + 0x00E2))
#define IIC0_IBSR       (*(volatile IIC0_IBSR_Tag *) (REG_BASE + 0x00E3))
#define IIC0_IBDR       (*(volatile IIC0_IBDR_Tag *) (REG_BASE + 0x00E4))
#define IIC0_IBCR2      (*(volatile IIC0_IBCR2_Tag *) (REG_BASE + 0x00E5))
/* 0x00F0-0x00F7 Serial Peripheral Interface (SPI1) Map */
#define SPI1CR1         (*(volatile SPI1CR1_Tag *) (REG_BASE + 0x00F0))
#define SPI1CR2         (*(volatile SPI1CR2_Tag *) (REG_BASE + 0x00F1))
#define SPI1BR          (*(volatile SPI1BR_Tag *) (REG_BASE + 0x00F2))
#define SPI1SR          (*(volatile SPI1SR_Tag *) (REG_BASE + 0x00F3))
#define SPI1DR          (*(volatile SPI1DR_Tag *) (REG_BASE + 0x00F4))
#define SPI1DRH         (*(volatile SPI1DRH_Tag *) (REG_BASE + 0x00F4))
#define SPI1DRL         (*(volatile SPI1DRL_Tag *) (REG_BASE + 0x00F5))
/* 0x00F8-0x00FF Serial Peripheral Interface (SPI2) Map */
#define SPI2CR1         (*(volatile SPI2CR1_Tag *) (REG_BASE + 0x00F8))
#define SPI2CR2         (*(volatile SPI2CR2_Tag *) (REG_BASE + 0x00F9))
#define SPI2BR          (*(volatile SPI2BR_Tag *) (REG_BASE + 0x00FA))
#define SPI2SR          (*(volatile SPI2SR_Tag *) (REG_BASE + 0x00FB))
#define SPI2DR          (*(volatile SPI2DR_Tag *) (REG_BASE + 0x00FC))
#define SPI2DRH         (*(volatile SPI2DRH_Tag *) (REG_BASE + 0x00FC))
#define SPI2DRL         (*(volatile SPI2DRL_Tag *) (REG_BASE + 0x00FD))
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
/* 0x00130-0x0137 Asynchronous Serial Interface (SCI4) Map */
#define SCI4BDH         (*(volatile SCI4BDH_Tag *) (REG_BASE + 0x0130))
#define SCI4BDL         (*(volatile SCI4BDL_Tag *) (REG_BASE + 0x0131))
#define SCI4CR1         (*(volatile SCI4CR1_Tag *) (REG_BASE + 0x0132))
#define SCI4ASR1        (*(volatile SCI4ASR1_Tag *) (REG_BASE + 0x0130))
#define SCI4ACR1        (*(volatile SCI4ACR1_Tag *) (REG_BASE + 0x0131))
#define SCI4ACR2        (*(volatile SCI4ACR2_Tag *) (REG_BASE + 0x0132))
#define SCI4CR2         (*(volatile SCI4CR2_Tag *) (REG_BASE + 0x0133))
#define SCI4SR1         (*(volatile SCI4SR1_Tag *) (REG_BASE + 0x0134))
#define SCI4SR2         (*(volatile SCI4SR2_Tag *) (REG_BASE + 0x0135))
#define SCI4DRH         (*(volatile SCI4DRH_Tag *) (REG_BASE + 0x0136))
#define SCI4DRL         (*(volatile SCI4DRL_Tag *) (REG_BASE + 0x0137))
/* 0x0138-0x013F Asynchronous Serial Interface (SCI5) Map */
#define SCI5BDH         (*(volatile SCI5BDH_Tag *) (REG_BASE + 0x0138))
#define SCI5BDL         (*(volatile SCI5BDL_Tag *) (REG_BASE + 0x0139))
#define SCI5CR1         (*(volatile SCI5CR1_Tag *) (REG_BASE + 0x013A))
#define SCI5ASR1        (*(volatile SCI5ASR1_Tag *) (REG_BASE + 0x0138))
#define SCI5ACR1        (*(volatile SCI5ACR1_Tag *) (REG_BASE + 0x0139))
#define SCI5ACR2        (*(volatile SCI5ACR2_Tag *) (REG_BASE + 0x013A))
#define SCI5CR2         (*(volatile SCI5CR2_Tag *) (REG_BASE + 0x013B))
#define SCI5SR1         (*(volatile SCI5SR1_Tag *) (REG_BASE + 0x013C))
#define SCI5SR2         (*(volatile SCI5SR2_Tag *) (REG_BASE + 0x013D))
#define SCI5DRH         (*(volatile SCI5DRH_Tag *) (REG_BASE + 0x013E))
#define SCI5DRL         (*(volatile SCI5DRL_Tag *) (REG_BASE + 0x013F))
/* 0x0140.0x017F MSCAN (CAN0) Map */
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
/* 0x0180-0x01BF MSCAN (CAN1) Map */
#define CAN1CTL0        (*(volatile CAN1CTL0_Tag *) (REG_BASE + 0x0180))
#define CAN1CTL1        (*(volatile CAN1CTL1_Tag *) (REG_BASE + 0x0181))
#define CAN1BTR0        (*(volatile CAN1BTR0_Tag *) (REG_BASE + 0x0182))
#define CAN1BTR1        (*(volatile CAN1BTR1_Tag *) (REG_BASE + 0x0183))
#define CAN1RFLG        (*(volatile CAN1RFLG_Tag *) (REG_BASE + 0x0184))
#define CAN1RIER        (*(volatile CAN1RIER_Tag *) (REG_BASE + 0x0185))
#define CAN1TFLG        (*(volatile CAN1TFLG_Tag *) (REG_BASE + 0x0186))
#define CAN1TIER        (*(volatile CAN1TIER_Tag *) (REG_BASE + 0x0187))
#define CAN1TARQ        (*(volatile CAN1TARQ_Tag *) (REG_BASE + 0x0188))
#define CAN1TAAK        (*(volatile CAN1TAAK_Tag *) (REG_BASE + 0x0189))
#define CAN1TBSEL       (*(volatile CAN1TBSEL_Tag *) (REG_BASE + 0x018A))
#define CAN1IDAC        (*(volatile CAN1IDAC_Tag *) (REG_BASE + 0x018B))
#define CAN1MISC        (*(volatile CAN1MISC_Tag *) (REG_BASE + 0x018D))
#define CAN1RXERR       (*(volatile CAN1RXERR_Tag *) (REG_BASE + 0x018E))
#define CAN1TXERR       (*(volatile CAN1TXERR_Tag *) (REG_BASE + 0x018F))
#define CAN1IDAR0       (*(volatile CAN1IDAR0_Tag *) (REG_BASE + 0x0190))
#define CAN1IDAR1       (*(volatile CAN1IDAR1_Tag *) (REG_BASE + 0x0191))
#define CAN1IDAR2       (*(volatile CAN1IDAR2_Tag *) (REG_BASE + 0x0192))
#define CAN1IDAR3       (*(volatile CAN1IDAR3_Tag *) (REG_BASE + 0x0193))
#define CAN1IDMR0       (*(volatile CAN1IDMR0_Tag *) (REG_BASE + 0x0194))
#define CAN1IDMR1       (*(volatile CAN1IDMR1_Tag *) (REG_BASE + 0x0195))
#define CAN1IDMR2       (*(volatile CAN1IDMR2_Tag *) (REG_BASE + 0x0196))
#define CAN1IDMR3       (*(volatile CAN1IDMR3_Tag *) (REG_BASE + 0x0197))
#define CAN1IDAR4       (*(volatile CAN1IDAR4_Tag *) (REG_BASE + 0x0198))
#define CAN1IDAR5       (*(volatile CAN1IDAR5_Tag *) (REG_BASE + 0x0199))
#define CAN1IDAR6       (*(volatile CAN1IDAR6_Tag *) (REG_BASE + 0x019A))
#define CAN1IDAR7       (*(volatile CAN1IDAR7_Tag *) (REG_BASE + 0x019B))
#define CAN1IDMR4       (*(volatile CAN1IDMR4_Tag *) (REG_BASE + 0x019C))
#define CAN1IDMR5       (*(volatile CAN1IDMR5_Tag *) (REG_BASE + 0x019D))
#define CAN1IDMR6       (*(volatile CAN1IDMR6_Tag *) (REG_BASE + 0x019E))
#define CAN1IDMR7       (*(volatile CAN1IDMR7_Tag *) (REG_BASE + 0x019F))
#define CAN1RXIDR0      (*(volatile CAN1RXIDR0_Tag *) (REG_BASE + 0x01A0))
#define CAN1RXIDR1      (*(volatile CAN1RXIDR1_Tag *) (REG_BASE + 0x01A1))
#define CAN1RXIDR2      (*(volatile CAN1RXIDR2_Tag *) (REG_BASE + 0x01A2))
#define CAN1RXIDR3      (*(volatile CAN1RXIDR3_Tag *) (REG_BASE + 0x01A3))
#define CAN1RXDSR0      (*(volatile CAN1RXDSR0_Tag *) (REG_BASE + 0x01A4))
#define CAN1RXDSR1      (*(volatile CAN1RXDSR1_Tag *) (REG_BASE + 0x01A5))
#define CAN1RXDSR2      (*(volatile CAN1RXDSR2_Tag *) (REG_BASE + 0x01A6))
#define CAN1RXDSR3      (*(volatile CAN1RXDSR3_Tag *) (REG_BASE + 0x01A7))
#define CAN1RXDSR4      (*(volatile CAN1RXDSR4_Tag *) (REG_BASE + 0x01A8))
#define CAN1RXDSR5      (*(volatile CAN1RXDSR5_Tag *) (REG_BASE + 0x01A9))
#define CAN1RXDSR6      (*(volatile CAN1RXDSR6_Tag *) (REG_BASE + 0x01AA))
#define CAN1RXDSR7      (*(volatile CAN1RXDSR7_Tag *) (REG_BASE + 0x01AB))
#define CAN1RXDLR       (*(volatile CAN1RXDLR_Tag *) (REG_BASE + 0x01AC))
#define CAN1RXTSRH      (*(volatile CAN1RXTSRH_Tag *) (REG_BASE + 0x01AE))
#define CAN1RXTSRL      (*(volatile CAN1RXTSRL_Tag *) (REG_BASE + 0x01AF))
#define CAN1TXIDR0      (*(volatile CAN1TXIDR0_Tag *) (REG_BASE + 0x01B0))
#define CAN1TXIDR1      (*(volatile CAN1TXIDR0_Tag *) (REG_BASE + 0x01B1))
#define CAN1TXIDR2      (*(volatile CAN1TXIDR0_Tag *) (REG_BASE + 0x01B2))
#define CAN1TXIDR3      (*(volatile CAN1TXIDR0_Tag *) (REG_BASE + 0x01B3))
#define CAN1TXDSR0      (*(volatile CAN1TXDSR0_Tag *) (REG_BASE + 0x01B4))
#define CAN1TXDSR1      (*(volatile CAN1TXDSR0_Tag *) (REG_BASE + 0x01B5))
#define CAN1TXDSR2      (*(volatile CAN1TXDSR0_Tag *) (REG_BASE + 0x01B6))
#define CAN1TXDSR3      (*(volatile CAN1TXDSR0_Tag *) (REG_BASE + 0x01B7))
#define CAN1TXDSR4      (*(volatile CAN1TXDSR0_Tag *) (REG_BASE + 0x01B8))
#define CAN1TXDSR5      (*(volatile CAN1TXDSR0_Tag *) (REG_BASE + 0x01B9))
#define CAN1TXDSR6      (*(volatile CAN1TXDSR0_Tag *) (REG_BASE + 0x01BA))
#define CAN1TXDSR7      (*(volatile CAN1TXDSR0_Tag *) (REG_BASE + 0x01BB))
#define CAN1TXDLR       (*(volatile CAN1TXDLR_Tag *) (REG_BASE + 0x01BC))
#define CAN1TXTBPR      (*(volatile CAN1TXTBPR_Tag *) (REG_BASE + 0x01BD))
#define CAN1TXTSRH      (*(volatile CAN1TXTSRH_Tag *) (REG_BASE + 0x01BE))
#define CAN1TXTSRL      (*(volatile CAN1TXTSRL_Tag *) (REG_BASE + 0x01BF))
/* 0x01C0-0x01FF MSCAN (CAN2) Map */
#define CAN2CTL0        (*(volatile CAN2CTL0_Tag *) (REG_BASE + 0x01C0))
#define CAN2CTL1        (*(volatile CAN2CTL1_Tag *) (REG_BASE + 0x01C1))
#define CAN2BTR0        (*(volatile CAN2BTR0_Tag *) (REG_BASE + 0x01C2))
#define CAN2BTR1        (*(volatile CAN2BTR1_Tag *) (REG_BASE + 0x01C3))
#define CAN2RFLG        (*(volatile CAN2RFLG_Tag *) (REG_BASE + 0x01C4))
#define CAN2RIER        (*(volatile CAN2RIER_Tag *) (REG_BASE + 0x01C5))
#define CAN2TFLG        (*(volatile CAN2TFLG_Tag *) (REG_BASE + 0x01C6))
#define CAN2TIER        (*(volatile CAN2TIER_Tag *) (REG_BASE + 0x01C7))
#define CAN2TARQ        (*(volatile CAN2TARQ_Tag *) (REG_BASE + 0x01C8))
#define CAN2TAAK        (*(volatile CAN2TAAK_Tag *) (REG_BASE + 0x01C9))
#define CAN2TBSEL       (*(volatile CAN2TBSEL_Tag *) (REG_BASE + 0x01CA))
#define CAN2IDAC        (*(volatile CAN2IDAC_Tag *) (REG_BASE + 0x01CB))
#define CAN2MISC        (*(volatile CAN2MISC_Tag *) (REG_BASE + 0x01CD))
#define CAN2RXERR       (*(volatile CAN2RXERR_Tag *) (REG_BASE + 0x01CE))
#define CAN2TXERR       (*(volatile CAN2TXERR_Tag *) (REG_BASE + 0x01CF))
#define CAN2IDAR0       (*(volatile CAN2IDAR0_Tag *) (REG_BASE + 0x01D0))
#define CAN2IDAR1       (*(volatile CAN2IDAR1_Tag *) (REG_BASE + 0x01D1))
#define CAN2IDAR2       (*(volatile CAN2IDAR2_Tag *) (REG_BASE + 0x01D2))
#define CAN2IDAR3       (*(volatile CAN2IDAR3_Tag *) (REG_BASE + 0x01D3))
#define CAN2IDMR0       (*(volatile CAN2IDMR0_Tag *) (REG_BASE + 0x01D4))
#define CAN2IDMR1       (*(volatile CAN2IDMR1_Tag *) (REG_BASE + 0x01D5))
#define CAN2IDMR2       (*(volatile CAN2IDMR2_Tag *) (REG_BASE + 0x01D6))
#define CAN2IDMR3       (*(volatile CAN2IDMR3_Tag *) (REG_BASE + 0x01D7))
#define CAN2IDAR4       (*(volatile CAN2IDAR4_Tag *) (REG_BASE + 0x01D8))
#define CAN2IDAR5       (*(volatile CAN2IDAR5_Tag *) (REG_BASE + 0x01D9))
#define CAN2IDAR6       (*(volatile CAN2IDAR6_Tag *) (REG_BASE + 0x01DA))
#define CAN2IDAR7       (*(volatile CAN2IDAR7_Tag *) (REG_BASE + 0x01DB))
#define CAN2IDMR4       (*(volatile CAN2IDMR4_Tag *) (REG_BASE + 0x01DC))
#define CAN2IDMR5       (*(volatile CAN2IDMR5_Tag *) (REG_BASE + 0x01DD))
#define CAN2IDMR6       (*(volatile CAN2IDMR6_Tag *) (REG_BASE + 0x01DE))
#define CAN2IDMR7       (*(volatile CAN2IDMR7_Tag *) (REG_BASE + 0x01DF))
#define CAN2RXIDR0      (*(volatile CAN2RXIDR0_Tag *) (REG_BASE + 0x01E0))
#define CAN2RXIDR1      (*(volatile CAN2RXIDR1_Tag *) (REG_BASE + 0x01E1))
#define CAN2RXIDR2      (*(volatile CAN2RXIDR2_Tag *) (REG_BASE + 0x01E2))
#define CAN2RXIDR3      (*(volatile CAN2RXIDR3_Tag *) (REG_BASE + 0x01E3))
#define CAN2RXDSR0      (*(volatile CAN2RXDSR0_Tag *) (REG_BASE + 0x01E4))
#define CAN2RXDSR1      (*(volatile CAN2RXDSR1_Tag *) (REG_BASE + 0x01E5))
#define CAN2RXDSR2      (*(volatile CAN2RXDSR2_Tag *) (REG_BASE + 0x01E6))
#define CAN2RXDSR3      (*(volatile CAN2RXDSR3_Tag *) (REG_BASE + 0x01E7))
#define CAN2RXDSR4      (*(volatile CAN2RXDSR4_Tag *) (REG_BASE + 0x01E8))
#define CAN2RXDSR5      (*(volatile CAN2RXDSR5_Tag *) (REG_BASE + 0x01E9))
#define CAN2RXDSR6      (*(volatile CAN2RXDSR6_Tag *) (REG_BASE + 0x01EA))
#define CAN2RXDSR7      (*(volatile CAN2RXDSR7_Tag *) (REG_BASE + 0x01EB))
#define CAN2RXDLR       (*(volatile CAN2RXDLR_Tag *) (REG_BASE + 0x01EC))
#define CAN2RXTSRH      (*(volatile CAN2RXTSRH_Tag *) (REG_BASE + 0x01EE))
#define CAN2RXTSRL      (*(volatile CAN2RXTSRL_Tag *) (REG_BASE + 0x01EF))
#define CAN2TXIDR0      (*(volatile CAN2TXIDR0_Tag *) (REG_BASE + 0x01F0))
#define CAN2TXIDR1      (*(volatile CAN2TXIDR0_Tag *) (REG_BASE + 0x01F1))
#define CAN2TXIDR2      (*(volatile CAN2TXIDR0_Tag *) (REG_BASE + 0x01F2))
#define CAN2TXIDR3      (*(volatile CAN2TXIDR0_Tag *) (REG_BASE + 0x01F3))
#define CAN2TXDSR0      (*(volatile CAN2TXDSR0_Tag *) (REG_BASE + 0x01F4))
#define CAN2TXDSR1      (*(volatile CAN2TXDSR0_Tag *) (REG_BASE + 0x01F5))
#define CAN2TXDSR2      (*(volatile CAN2TXDSR0_Tag *) (REG_BASE + 0x01F6))
#define CAN2TXDSR3      (*(volatile CAN2TXDSR0_Tag *) (REG_BASE + 0x01F7))
#define CAN2TXDSR4      (*(volatile CAN2TXDSR0_Tag *) (REG_BASE + 0x01F8))
#define CAN2TXDSR5      (*(volatile CAN2TXDSR0_Tag *) (REG_BASE + 0x01F9))
#define CAN2TXDSR6      (*(volatile CAN2TXDSR0_Tag *) (REG_BASE + 0x01FA))
#define CAN2TXDSR7      (*(volatile CAN2TXDSR0_Tag *) (REG_BASE + 0x01FB))
#define CAN2TXDLR       (*(volatile CAN2TXDLR_Tag *) (REG_BASE + 0x01FC))
#define CAN2TXTBPR      (*(volatile CAN2TXTBPR_Tag *) (REG_BASE + 0x01FD))
#define CAN2TXTSRH      (*(volatile CAN2TXTSRH_Tag *) (REG_BASE + 0x01FE))
#define CAN2TXTSRL      (*(volatile CAN2TXTSRL_Tag *) (REG_BASE + 0x01FF))
/* 0x0200.0x023F MSCAN (CAN3) Map */
#define CAN3CTL0        (*(volatile CAN3CTL0_Tag *) (REG_BASE + 0x0200))
#define CAN3CTL1        (*(volatile CAN3CTL1_Tag *) (REG_BASE + 0x0201))
#define CAN3BTR0        (*(volatile CAN3BTR0_Tag *) (REG_BASE + 0x0202))
#define CAN3BTR1        (*(volatile CAN3BTR1_Tag *) (REG_BASE + 0x0203))
#define CAN3RFLG        (*(volatile CAN3RFLG_Tag *) (REG_BASE + 0x0204))
#define CAN3RIER        (*(volatile CAN3RIER_Tag *) (REG_BASE + 0x0205))
#define CAN3TFLG        (*(volatile CAN3TFLG_Tag *) (REG_BASE + 0x0206))
#define CAN3TIER        (*(volatile CAN3TIER_Tag *) (REG_BASE + 0x0207))
#define CAN3TARQ        (*(volatile CAN3TARQ_Tag *) (REG_BASE + 0x0208))
#define CAN3TAAK        (*(volatile CAN3TAAK_Tag *) (REG_BASE + 0x0209))
#define CAN3TBSEL       (*(volatile CAN3TBSEL_Tag *) (REG_BASE + 0x020A))
#define CAN3IDAC        (*(volatile CAN3IDAC_Tag *) (REG_BASE + 0x020B))
#define CAN3MISC        (*(volatile CAN3MISC_Tag *) (REG_BASE + 0x020D))
#define CAN3RXERR       (*(volatile CAN3RXERR_Tag *) (REG_BASE + 0x020E))
#define CAN3TXERR       (*(volatile CAN3TXERR_Tag *) (REG_BASE + 0x020F))
#define CAN3IDAR0       (*(volatile CAN3IDAR0_Tag *) (REG_BASE + 0x0210))
#define CAN3IDAR1       (*(volatile CAN3IDAR1_Tag *) (REG_BASE + 0x0211))
#define CAN3IDAR2       (*(volatile CAN3IDAR2_Tag *) (REG_BASE + 0x0212))
#define CAN3IDAR3       (*(volatile CAN3IDAR3_Tag *) (REG_BASE + 0x0213))
#define CAN3IDMR0       (*(volatile CAN3IDMR0_Tag *) (REG_BASE + 0x0214))
#define CAN3IDMR1       (*(volatile CAN3IDMR1_Tag *) (REG_BASE + 0x0215))
#define CAN3IDMR2       (*(volatile CAN3IDMR2_Tag *) (REG_BASE + 0x0216))
#define CAN3IDMR3       (*(volatile CAN3IDMR3_Tag *) (REG_BASE + 0x0217))
#define CAN3IDAR4       (*(volatile CAN3IDAR4_Tag *) (REG_BASE + 0x0218))
#define CAN3IDAR5       (*(volatile CAN3IDAR5_Tag *) (REG_BASE + 0x0219))
#define CAN3IDAR6       (*(volatile CAN3IDAR6_Tag *) (REG_BASE + 0x021A))
#define CAN3IDAR7       (*(volatile CAN3IDAR7_Tag *) (REG_BASE + 0x021B))
#define CAN3IDMR4       (*(volatile CAN3IDMR4_Tag *) (REG_BASE + 0x021C))
#define CAN3IDMR5       (*(volatile CAN3IDMR5_Tag *) (REG_BASE + 0x021D))
#define CAN3IDMR6       (*(volatile CAN3IDMR6_Tag *) (REG_BASE + 0x021E))
#define CAN3IDMR7       (*(volatile CAN3IDMR7_Tag *) (REG_BASE + 0x021F))
#define CAN3RXIDR0      (*(volatile CAN3RXIDR0_Tag *) (REG_BASE + 0x0220))
#define CAN3RXIDR1      (*(volatile CAN3RXIDR1_Tag *) (REG_BASE + 0x0221))
#define CAN3RXIDR2      (*(volatile CAN3RXIDR2_Tag *) (REG_BASE + 0x0222))
#define CAN3RXIDR3      (*(volatile CAN3RXIDR3_Tag *) (REG_BASE + 0x0223))
#define CAN3RXDSR0      (*(volatile CAN3RXDSR0_Tag *) (REG_BASE + 0x0224))
#define CAN3RXDSR1      (*(volatile CAN3RXDSR1_Tag *) (REG_BASE + 0x0225))
#define CAN3RXDSR2      (*(volatile CAN3RXDSR2_Tag *) (REG_BASE + 0x0226))
#define CAN3RXDSR3      (*(volatile CAN3RXDSR3_Tag *) (REG_BASE + 0x0227))
#define CAN3RXDSR4      (*(volatile CAN3RXDSR4_Tag *) (REG_BASE + 0x0228))
#define CAN3RXDSR5      (*(volatile CAN3RXDSR5_Tag *) (REG_BASE + 0x0229))
#define CAN3RXDSR6      (*(volatile CAN3RXDSR6_Tag *) (REG_BASE + 0x022A))
#define CAN3RXDSR7      (*(volatile CAN3RXDSR7_Tag *) (REG_BASE + 0x022B))
#define CAN3RXDLR       (*(volatile CAN3RXDLR_Tag *) (REG_BASE + 0x022C))
#define CAN3RXTSRH      (*(volatile CAN3RXTSRH_Tag *) (REG_BASE + 0x022E))
#define CAN3RXTSRL      (*(volatile CAN3RXTSRL_Tag *) (REG_BASE + 0x022F))
#define CAN3TXIDR0      (*(volatile CAN3TXIDR0_Tag *) (REG_BASE + 0x0230))
#define CAN3TXIDR1      (*(volatile CAN3TXIDR0_Tag *) (REG_BASE + 0x0231))
#define CAN3TXIDR2      (*(volatile CAN3TXIDR0_Tag *) (REG_BASE + 0x0232))
#define CAN3TXIDR3      (*(volatile CAN3TXIDR0_Tag *) (REG_BASE + 0x0233))
#define CAN3TXDSR0      (*(volatile CAN3TXDSR0_Tag *) (REG_BASE + 0x0234))
#define CAN3TXDSR1      (*(volatile CAN3TXDSR0_Tag *) (REG_BASE + 0x0235))
#define CAN3TXDSR2      (*(volatile CAN3TXDSR0_Tag *) (REG_BASE + 0x0236))
#define CAN3TXDSR3      (*(volatile CAN3TXDSR0_Tag *) (REG_BASE + 0x0237))
#define CAN3TXDSR4      (*(volatile CAN3TXDSR0_Tag *) (REG_BASE + 0x0238))
#define CAN3TXDSR5      (*(volatile CAN3TXDSR0_Tag *) (REG_BASE + 0x0239))
#define CAN3TXDSR6      (*(volatile CAN3TXDSR0_Tag *) (REG_BASE + 0x023A))
#define CAN3TXDSR7      (*(volatile CAN3TXDSR0_Tag *) (REG_BASE + 0x023B))
#define CAN3TXDLR       (*(volatile CAN3TXDLR_Tag *) (REG_BASE + 0x023C))
#define CAN3TXTBPR      (*(volatile CAN3TXTBPR_Tag *) (REG_BASE + 0x023D))
#define CAN3TXTSRH      (*(volatile CAN3TXTSRH_Tag *) (REG_BASE + 0x023E))
#define CAN3TXTSRL      (*(volatile CAN3TXTSRL_Tag *) (REG_BASE + 0x023F))
/* 0x0240.0x027F Port Integration Module (PIM) Map 5 of 6 */
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
#define MODRR           (*(volatile MODRR_Tag *) (REG_BASE + 0x0257))
#define PTP             (*(volatile PTP_Tag *) (REG_BASE + 0x0258))
#define PTIP            (*(volatile PTIP_Tag *) (REG_BASE + 0x0259))
#define DDRP            (*(volatile DDRP_Tag *) (REG_BASE + 0x025A))
#define RDRP            (*(volatile RDRP_Tag *) (REG_BASE + 0x025B))
#define PERP            (*(volatile PERP_Tag *) (REG_BASE + 0x025C))
#define PPSP            (*(volatile PPSP_Tag *) (REG_BASE + 0x025D))
#define PIEP            (*(volatile PIEP_Tag *) (REG_BASE + 0x025E))
#define PIFP            (*(volatile PIFP_Tag *) (REG_BASE + 0x025F))
#define PTH             (*(volatile PTH_Tag *) (REG_BASE + 0x0260))
#define PTIH            (*(volatile PTIH_Tag *) (REG_BASE + 0x0261))
#define DDRH            (*(volatile DDRH_Tag *) (REG_BASE + 0x0262))
#define RDRH            (*(volatile RDRH_Tag *) (REG_BASE + 0x0263))
#define PERH            (*(volatile PERH_Tag *) (REG_BASE + 0x0264))
#define PPSH            (*(volatile PPSH_Tag *) (REG_BASE + 0x0265))
#define PIEH            (*(volatile PIEH_Tag *) (REG_BASE + 0x0266))
#define PIFH            (*(volatile PIFH_Tag *) (REG_BASE + 0x0267))
#define PTJ             (*(volatile PTJ_Tag *) (REG_BASE + 0x0268))
#define PTIJ            (*(volatile PTIJ_Tag *) (REG_BASE + 0x0269))
#define DDRJ            (*(volatile DDRJ_Tag *) (REG_BASE + 0x026A))
#define RDRJ            (*(volatile RDRJ_Tag *) (REG_BASE + 0x026B))
#define PERJ            (*(volatile PERJ_Tag *) (REG_BASE + 0x026C))
#define PPSJ            (*(volatile PPSJ_Tag *) (REG_BASE + 0x026D))
#define PIEJ            (*(volatile PIEJ_Tag *) (REG_BASE + 0x026E))
#define PIFJ            (*(volatile PIFJ_Tag *) (REG_BASE + 0x026f))
#define PT0AD0          (*(volatile PT0AD0_Tag *) (REG_BASE + 0x0270))
#define PT1AD0          (*(volatile PT1AD0_Tag *) (REG_BASE + 0x0271))
#define DDR0AD0         (*(volatile DDR0AD0_Tag *) (REG_BASE + 0x0272))
#define DDR1AD0         (*(volatile DDR1AD0_Tag *) (REG_BASE + 0x0273))
#define RDR0AD0         (*(volatile RDR0AD0_Tag *) (REG_BASE + 0x0274))
#define RDR1AD0         (*(volatile RDR1AD0_Tag *) (REG_BASE + 0x0275))
#define PER0AD0         (*(volatile PER0AD0_Tag *) (REG_BASE + 0x0276))
#define PER1AD0         (*(volatile PER1AD0_Tag *) (REG_BASE + 0x0277))
#define PT0AD1          (*(volatile PT0AD1_Tag *) (REG_BASE + 0x0278))
#define PT1AD1          (*(volatile PT1AD1_Tag *) (REG_BASE + 0x0279))
#define DDR0AD1         (*(volatile DDR0AD1_Tag *) (REG_BASE + 0x027A))
#define DDR1AD1         (*(volatile DDR1AD1_Tag *) (REG_BASE + 0x027B))
#define RDR0AD1         (*(volatile RDR0AD1_Tag *) (REG_BASE + 0x027C))
#define RDR1AD1         (*(volatile RDR1AD1_Tag *) (REG_BASE + 0x027D))
#define PER0AD1         (*(volatile PER0AD1_Tag *) (REG_BASE + 0x027E))
#define PER1AD1         (*(volatile PER1AD1_Tag *) (REG_BASE + 0x027F))
/* 0x0280.0x02BF MSCAN (CAN4) Map */
#define CAN4CTL0        (*(volatile CAN4CTL0_Tag *) (REG_BASE + 0x0280))
#define CAN4CTL1        (*(volatile CAN4CTL1_Tag *) (REG_BASE + 0x0281))
#define CAN4BTR0        (*(volatile CAN4BTR0_Tag *) (REG_BASE + 0x0282))
#define CAN4BTR1        (*(volatile CAN4BTR1_Tag *) (REG_BASE + 0x0283))
#define CAN4RFLG        (*(volatile CAN4RFLG_Tag *) (REG_BASE + 0x0284))
#define CAN4RIER        (*(volatile CAN4RIER_Tag *) (REG_BASE + 0x0285))
#define CAN4TFLG        (*(volatile CAN4TFLG_Tag *) (REG_BASE + 0x0286))
#define CAN4TIER        (*(volatile CAN4TIER_Tag *) (REG_BASE + 0x0287))
#define CAN4TARQ        (*(volatile CAN4TARQ_Tag *) (REG_BASE + 0x0288))
#define CAN4TAAK        (*(volatile CAN4TAAK_Tag *) (REG_BASE + 0x0289))
#define CAN4TBSEL       (*(volatile CAN4TBSEL_Tag *) (REG_BASE + 0x028A))
#define CAN4IDAC        (*(volatile CAN4IDAC_Tag *) (REG_BASE + 0x028B))
#define CAN4MISC        (*(volatile CAN4MISC_Tag *) (REG_BASE + 0x028D))
#define CAN4RXERR       (*(volatile CAN4RXERR_Tag *) (REG_BASE + 0x028E))
#define CAN4TXERR       (*(volatile CAN4TXERR_Tag *) (REG_BASE + 0x028F))
#define CAN4IDAR0       (*(volatile CAN4IDAR0_Tag *) (REG_BASE + 0x0290))
#define CAN4IDAR1       (*(volatile CAN4IDAR1_Tag *) (REG_BASE + 0x0291))
#define CAN4IDAR2       (*(volatile CAN4IDAR2_Tag *) (REG_BASE + 0x0292))
#define CAN4IDAR3       (*(volatile CAN4IDAR3_Tag *) (REG_BASE + 0x0293))
#define CAN4IDMR0       (*(volatile CAN4IDMR0_Tag *) (REG_BASE + 0x0294))
#define CAN4IDMR1       (*(volatile CAN4IDMR1_Tag *) (REG_BASE + 0x0295))
#define CAN4IDMR2       (*(volatile CAN4IDMR2_Tag *) (REG_BASE + 0x0296))
#define CAN4IDMR3       (*(volatile CAN4IDMR3_Tag *) (REG_BASE + 0x0297))
#define CAN4IDAR4       (*(volatile CAN4IDAR4_Tag *) (REG_BASE + 0x0298))
#define CAN4IDAR5       (*(volatile CAN4IDAR5_Tag *) (REG_BASE + 0x0299))
#define CAN4IDAR6       (*(volatile CAN4IDAR6_Tag *) (REG_BASE + 0x029A))
#define CAN4IDAR7       (*(volatile CAN4IDAR7_Tag *) (REG_BASE + 0x029B))
#define CAN4IDMR4       (*(volatile CAN4IDMR4_Tag *) (REG_BASE + 0x029C))
#define CAN4IDMR5       (*(volatile CAN4IDMR5_Tag *) (REG_BASE + 0x029D))
#define CAN4IDMR6       (*(volatile CAN4IDMR6_Tag *) (REG_BASE + 0x029E))
#define CAN4IDMR7       (*(volatile CAN4IDMR7_Tag *) (REG_BASE + 0x029F))
#define CAN4RXIDR0      (*(volatile CAN4RXIDR0_Tag *) (REG_BASE + 0x02A0))
#define CAN4RXIDR1      (*(volatile CAN4RXIDR1_Tag *) (REG_BASE + 0x02A1))
#define CAN4RXIDR2      (*(volatile CAN4RXIDR2_Tag *) (REG_BASE + 0x02A2))
#define CAN4RXIDR3      (*(volatile CAN4RXIDR3_Tag *) (REG_BASE + 0x02A3))
#define CAN4RXDSR0      (*(volatile CAN4RXDSR0_Tag *) (REG_BASE + 0x02A4))
#define CAN4RXDSR1      (*(volatile CAN4RXDSR1_Tag *) (REG_BASE + 0x02A5))
#define CAN4RXDSR2      (*(volatile CAN4RXDSR2_Tag *) (REG_BASE + 0x02A6))
#define CAN4RXDSR3      (*(volatile CAN4RXDSR3_Tag *) (REG_BASE + 0x02A7))
#define CAN4RXDSR4      (*(volatile CAN4RXDSR4_Tag *) (REG_BASE + 0x02A8))
#define CAN4RXDSR5      (*(volatile CAN4RXDSR5_Tag *) (REG_BASE + 0x02A9))
#define CAN4RXDSR6      (*(volatile CAN4RXDSR6_Tag *) (REG_BASE + 0x02AA))
#define CAN4RXDSR7      (*(volatile CAN4RXDSR7_Tag *) (REG_BASE + 0x02AB))
#define CAN4RXDLR       (*(volatile CAN4RXDLR_Tag *) (REG_BASE + 0x02AC))
#define CAN4RXTSRH      (*(volatile CAN4RXTSRH_Tag *) (REG_BASE + 0x02AE))
#define CAN4RXTSRL      (*(volatile CAN4RXTSRL_Tag *) (REG_BASE + 0x02AF))
#define CAN4TXIDR0      (*(volatile CAN4TXIDR0_Tag *) (REG_BASE + 0x02B0))
#define CAN4TXIDR1      (*(volatile CAN4TXIDR0_Tag *) (REG_BASE + 0x02B1))
#define CAN4TXIDR2      (*(volatile CAN4TXIDR0_Tag *) (REG_BASE + 0x02B2))
#define CAN4TXIDR3      (*(volatile CAN4TXIDR0_Tag *) (REG_BASE + 0x02B3))
#define CAN4TXDSR0      (*(volatile CAN4TXDSR0_Tag *) (REG_BASE + 0x02B4))
#define CAN4TXDSR1      (*(volatile CAN4TXDSR0_Tag *) (REG_BASE + 0x02B5))
#define CAN4TXDSR2      (*(volatile CAN4TXDSR0_Tag *) (REG_BASE + 0x02B6))
#define CAN4TXDSR3      (*(volatile CAN4TXDSR0_Tag *) (REG_BASE + 0x02B7))
#define CAN4TXDSR4      (*(volatile CAN4TXDSR0_Tag *) (REG_BASE + 0x02B8))
#define CAN4TXDSR5      (*(volatile CAN4TXDSR0_Tag *) (REG_BASE + 0x02B9))
#define CAN4TXDSR6      (*(volatile CAN4TXDSR0_Tag *) (REG_BASE + 0x02BA))
#define CAN4TXDSR7      (*(volatile CAN4TXDSR0_Tag *) (REG_BASE + 0x02BB))
#define CAN4TXDLR       (*(volatile CAN4TXDLR_Tag *) (REG_BASE + 0x02BC))
#define CAN4TXTBPR      (*(volatile CAN4TXTBPR_Tag *) (REG_BASE + 0x02BD))
#define CAN4TXTSRH      (*(volatile CAN4TXTSRH_Tag *) (REG_BASE + 0x02BE))
#define CAN4TXTSRL      (*(volatile CAN4TXTSRL_Tag *) (REG_BASE + 0x02BF))
/* 0x02C0-0x02EF Analog-to-Digital Converter 12-Bit 16-Channel (ATD0) Map */
#define ATD0CTL0        (*(volatile ATD0CTL0_Tag *) (REG_BASE + 0x02C0))
#define ATD0CTL1        (*(volatile ATD0CTL1_Tag *) (REG_BASE + 0x02C1))
#define ATD0CTL2        (*(volatile ATD0CTL2_Tag *) (REG_BASE + 0x02C2))
#define ATD0CTL3        (*(volatile ATD0CTL3_Tag *) (REG_BASE + 0x02C3))
#define ATD0CTL4        (*(volatile ATD0CTL4_Tag *) (REG_BASE + 0x02C4))
#define ATD0CTL5        (*(volatile ATD0CTL5_Tag *) (REG_BASE + 0x02C5))
#define ATD0STAT0       (*(volatile ATD0STAT0_Tag *) (REG_BASE + 0x02C6))
#define ATD0CMPEH       (*(volatile ATD0CMPEH_Tag *) (REG_BASE + 0x02C8))
#define ATD0CMPEL       (*(volatile ATD0CMPEL_Tag *) (REG_BASE + 0x02C9))
#define ATD0STAT2H      (*(volatile ATD0STAT2H_Tag *) (REG_BASE + 0x02CA))
#define ATD0STAT2L      (*(volatile ATD0STAT2L_Tag *) (REG_BASE + 0x02CB))
#define ATD0DIENH       (*(volatile ATD0DIENH_Tag *) (REG_BASE + 0x02CC))
#define ATD0DIENL       (*(volatile ATD0DIENL_Tag *) (REG_BASE + 0x02CD))
#define ATD0CMPHTH      (*(volatile ATD0CMPHTH_Tag *) (REG_BASE + 0x02CE))
#define ATD0CMPHTL      (*(volatile ATD0CMPHTL_Tag *) (REG_BASE + 0x02CF))
#define ATD0DR0         (*(volatile ATD0DR0_Tag *) (REG_BASE + 0x02D0))
#define ATD0DR0H        (*(volatile ATD0DR0H_Tag *) (REG_BASE + 0x02D0))
#define ATD0DR0L        (*(volatile ATD0DR0L_Tag *) (REG_BASE + 0x02D1))
#define ATD0DR1         (*(volatile ATD0DR1_Tag *) (REG_BASE + 0x02D2))
#define ATD0DR1H        (*(volatile ATD0DR1H_Tag *) (REG_BASE + 0x02D2))
#define ATD0DR1L        (*(volatile ATD0DR1L_Tag *) (REG_BASE + 0x02D3))
#define ATD0DR2         (*(volatile ATD0DR2_Tag *) (REG_BASE + 0x02D4))
#define ATD0DR2H        (*(volatile ATD0DR2H_Tag *) (REG_BASE + 0x02D4))
#define ATD0DR2L        (*(volatile ATD0DR2L_Tag *) (REG_BASE + 0x02D5))
#define ATD0DR3         (*(volatile ATD0DR3_Tag *) (REG_BASE + 0x02D6))
#define ATD0DR3H        (*(volatile ATD0DR3H_Tag *) (REG_BASE + 0x02D6))
#define ATD0DR3L        (*(volatile ATD0DR3L_Tag *) (REG_BASE + 0x02D7))
#define ATD0DR4         (*(volatile ATD0DR4_Tag *) (REG_BASE + 0x02D8))
#define ATD0DR4H        (*(volatile ATD0DR4H_Tag *) (REG_BASE + 0x02D8))
#define ATD0DR4L        (*(volatile ATD0DR4L_Tag *) (REG_BASE + 0x02D9))
#define ATD0DR5         (*(volatile ATD0DR5_Tag *) (REG_BASE + 0x02DA))
#define ATD0DR5H        (*(volatile ATD0DR5H_Tag *) (REG_BASE + 0x02DA))
#define ATD0DR5L        (*(volatile ATD0DR5L_Tag *) (REG_BASE + 0x02DB))
#define ATD0DR6         (*(volatile ATD0DR6_Tag *) (REG_BASE + 0x02DC))
#define ATD0DR6H        (*(volatile ATD0DR6H_Tag *) (REG_BASE + 0x02DC))
#define ATD0DR6L        (*(volatile ATD0DR6L_Tag *) (REG_BASE + 0x02DD))
#define ATD0DR7         (*(volatile ATD0DR7_Tag *) (REG_BASE + 0x02DE))
#define ATD0DR7H        (*(volatile ATD0DR7H_Tag *) (REG_BASE + 0x02DE))
#define ATD0DR7L        (*(volatile ATD0DR7L_Tag *) (REG_BASE + 0x02DF))
#define ATD0DR8         (*(volatile ATD0DR8_Tag *) (REG_BASE + 0x02E0))
#define ATD0DR8H        (*(volatile ATD0DR8H_Tag *) (REG_BASE + 0x02E0))
#define ATD0DR8L        (*(volatile ATD0DR8L_Tag *) (REG_BASE + 0x02E1))
#define ATD0DR9         (*(volatile ATD0DR9_Tag *) (REG_BASE + 0x02E2))
#define ATD0DR9H        (*(volatile ATD0DR9H_Tag *) (REG_BASE + 0x02E2))
#define ATD0DR9L        (*(volatile ATD0DR9L_Tag *) (REG_BASE + 0x02E3))
#define ATD0DR10        (*(volatile ATD0DR10_Tag *) (REG_BASE + 0x02E4))
#define ATD0DR10H       (*(volatile ATD0DR10H_Tag *) (REG_BASE + 0x02E4))
#define ATD0DR10L       (*(volatile ATD0DR10L_Tag *) (REG_BASE + 0x02E5))
#define ATD0DR11        (*(volatile ATD0DR11_Tag *) (REG_BASE + 0x02E6))
#define ATD0DR11H       (*(volatile ATD0DR11H_Tag *) (REG_BASE + 0x02E6))
#define ATD0DR11L       (*(volatile ATD0DR11L_Tag *) (REG_BASE + 0x02E7))
#define ATD0DR12        (*(volatile ATD0DR12_Tag *) (REG_BASE + 0x02E8))
#define ATD0DR12H       (*(volatile ATD0DR12H_Tag *) (REG_BASE + 0x02E8))
#define ATD0DR12L       (*(volatile ATD0DR12L_Tag *) (REG_BASE + 0x02E9))
#define ATD0DR13        (*(volatile ATD0DR13_Tag *) (REG_BASE + 0x02EA))
#define ATD0DR13H       (*(volatile ATD0DR13H_Tag *) (REG_BASE + 0x02EA))
#define ATD0DR13L       (*(volatile ATD0DR13L_Tag *) (REG_BASE + 0x02EB))
#define ATD0DR14        (*(volatile ATD0DR14_Tag *) (REG_BASE + 0x02EC))
#define ATD0DR14H       (*(volatile ATD0DR14H_Tag *) (REG_BASE + 0x02EC))
#define ATD0DR14L       (*(volatile ATD0DR14L_Tag *) (REG_BASE + 0x02ED))
#define ATD0DR15        (*(volatile ATD0DR15_Tag *) (REG_BASE + 0x02EE))
#define ATD0DR15H       (*(volatile ATD0DR15H_Tag *) (REG_BASE + 0x02EE))
#define ATD0DR15L       (*(volatile ATD0DR15L_Tag *) (REG_BASE + 0x02EF))
/* 0x02F0-0x02F7 Voltage Regulator (VREG_3V3) Map */
#define VREGHTCL        (*(volatile VREGHTCL_Tag *) (REG_BASE + 0x02F0))
#define VREGCTRL        (*(volatile VREGCTRL_Tag *) (REG_BASE + 0x02F1))
#define VREGAPICL       (*(volatile VREGAPICL_Tag *) (REG_BASE + 0x02F2))
#define VREGAPITR       (*(volatile VREGAPITR_Tag *) (REG_BASE + 0x02F3))
#define VREGAPIRH       (*(volatile VREGAPIRH_Tag *) (REG_BASE + 0x02F4))
#define VREGAPIRL       (*(volatile VREGAPIRL_Tag *) (REG_BASE + 0x02F5))
#define VREGHTTR        (*(volatile VREGHTTR_Tag *) (REG_BASE + 0x02F7))
/* 0x0300-0x0327 Pulse Width Modulator 8-Bit 8-Channel (PWM) Map */
#define PWME            (*(volatile PWME_Tag *) (REG_BASE + 0x0300))
#define PWMPOL          (*(volatile PWMPOL_Tag *) (REG_BASE + 0x0301))
#define PWMCLK          (*(volatile PWMCLK_Tag *) (REG_BASE + 0x0302))
#define PWMPRCLK        (*(volatile PWMPRCLK_Tag *) (REG_BASE + 0x0303))
#define PWMCAE          (*(volatile PWMCAE_Tag *) (REG_BASE + 0x0304))
#define PWMCTL          (*(volatile PWMCTL_Tag *) (REG_BASE + 0x0305))
#define PWMSCLA         (*(volatile PWMSCLA_Tag *) (REG_BASE + 0x0308))
#define PWMSCLB         (*(volatile PWMSCLB_Tag *) (REG_BASE + 0x0309))
#define PWMCNT0         (*(volatile PWMCNT0_Tag *) (REG_BASE + 0x030C))
#define PWMCNT1         (*(volatile PWMCNT1_Tag *) (REG_BASE + 0x030D))
#define PWMCNT2         (*(volatile PWMCNT2_Tag *) (REG_BASE + 0x030E))
#define PWMCNT3         (*(volatile PWMCNT3_Tag *) (REG_BASE + 0x030F))
#define PWMCNT4         (*(volatile PWMCNT4_Tag *) (REG_BASE + 0x0310))
#define PWMCNT5         (*(volatile PWMCNT5_Tag *) (REG_BASE + 0x0311))
#define PWMCNT6         (*(volatile PWMCNT6_Tag *) (REG_BASE + 0x0312))
#define PWMCNT7         (*(volatile PWMCNT7_Tag *) (REG_BASE + 0x0313))
#define PWMPER0         (*(volatile PWMPER0_Tag *) (REG_BASE + 0x0314))
#define PWMPER1         (*(volatile PWMPER1_Tag *) (REG_BASE + 0x0315))
#define PWMPER2         (*(volatile PWMPER2_Tag *) (REG_BASE + 0x0316))
#define PWMPER3         (*(volatile PWMPER3_Tag *) (REG_BASE + 0x0317))
#define PWMPER4         (*(volatile PWMPER4_Tag *) (REG_BASE + 0x0318))
#define PWMPER5         (*(volatile PWMPER5_Tag *) (REG_BASE + 0x0319))
#define PWMPER6         (*(volatile PWMPER6_Tag *) (REG_BASE + 0x031A))
#define PWMPER7         (*(volatile PWMPER7_Tag *) (REG_BASE + 0x031B))
#define PWMDTY0         (*(volatile PWMDTY0_Tag *) (REG_BASE + 0x031C))
#define PWMDTY1         (*(volatile PWMDTY1_Tag *) (REG_BASE + 0x031D))
#define PWMDTY2         (*(volatile PWMDTY2_Tag *) (REG_BASE + 0x031E))
#define PWMDTY3         (*(volatile PWMDTY3_Tag *) (REG_BASE + 0x031F))
#define PWMDTY4         (*(volatile PWMDTY4_Tag *) (REG_BASE + 0x0320))
#define PWMDTY5         (*(volatile PWMDTY5_Tag *) (REG_BASE + 0x0321))
#define PWMDTY6         (*(volatile PWMDTY6_Tag *) (REG_BASE + 0x0322))
#define PWMDTY7         (*(volatile PWMDTY7_Tag *) (REG_BASE + 0x0323))
#define PWMSDN          (*(volatile PWMSDN_Tag *) (REG_BASE + 0x0324))
/* 0x0330-0x0337 Asynchronous Serial Interface (SCI6) Map */
#define SCI6BDH         (*(volatile SCI6BDH_Tag *) (REG_BASE + 0x0330))
#define SCI6BDL         (*(volatile SCI6BDL_Tag *) (REG_BASE + 0x0331))
#define SCI6CR1         (*(volatile SCI6CR1_Tag *) (REG_BASE + 0x0332))
#define SCI6ASR1        (*(volatile SCI6ASR1_Tag *) (REG_BASE + 0x0330))
#define SCI6ACR1        (*(volatile SCI6ACR1_Tag *) (REG_BASE + 0x0331))
#define SCI6ACR2        (*(volatile SCI6ACR2_Tag *) (REG_BASE + 0x0332))
#define SCI6CR2         (*(volatile SCI6CR2_Tag *) (REG_BASE + 0x0333))
#define SCI6SR1         (*(volatile SCI6SR1_Tag *) (REG_BASE + 0x0334))
#define SCI6SR2         (*(volatile SCI6SR2_Tag *) (REG_BASE + 0x0335))
#define SCI6DRH         (*(volatile SCI6DRH_Tag *) (REG_BASE + 0x0336))
#define SCI6DRL         (*(volatile SCI6DRL_Tag *) (REG_BASE + 0x0337))
/* 0x0338-0x033F Asynchronous Serial Interface (SCI7) Map */
#define SCI7BDH         (*(volatile SCI7BDH_Tag *) (REG_BASE + 0x0338))
#define SCI7BDL         (*(volatile SCI7BDL_Tag *) (REG_BASE + 0x0339))
#define SCI7CR1         (*(volatile SCI7CR1_Tag *) (REG_BASE + 0x033A))
#define SCI7ASR12       (*(volatile SCI7ASR1_Tag *) (REG_BASE + 0x0338))
#define SCI7ACR12       (*(volatile SCI7ACR1_Tag *) (REG_BASE + 0x0339))
#define SCI7ACR22       (*(volatile SCI7ACR2_Tag *) (REG_BASE + 0x033A))
#define SCI7CR2         (*(volatile SCI7CR2_Tag *) (REG_BASE + 0x033B))
#define SCI7SR1         (*(volatile SCI7SR1_Tag *) (REG_BASE + 0x033C))
#define SCI7SR2         (*(volatile SCI7SR2_Tag *) (REG_BASE + 0x033D))
#define SCI7DRH         (*(volatile SCI7DRH_Tag *) (REG_BASE + 0x033E))
#define SCI7DRL         (*(volatile SCI7DRL_Tag *) (REG_BASE + 0x033F))
/* 0x0340-0x0367 Periodic Interrupt Timer (PIT) Map */
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
/* 0x0368-0x037F Port Integration Module (PIM) Map */
#define PTR             (*(volatile PTR_Tag *) (REG_BASE + 0x0368))
#define PTIR            (*(volatile PTIR_Tag *) (REG_BASE + 0x0369))
#define DDRR            (*(volatile DDRR_Tag *) (REG_BASE + 0x036A))
#define RDRR            (*(volatile RDRR_Tag *) (REG_BASE + 0x036B))
#define PERR            (*(volatile PERR_Tag *) (REG_BASE + 0x036C))
#define PPSR            (*(volatile PPSR_Tag *) (REG_BASE + 0x036D))
#define PTRRR           (*(volatile PTRRR_Tag *) (REG_BASE + 0x036F))
#define PTL             (*(volatile PTL_Tag *) (REG_BASE + 0x0370))
#define PTIL            (*(volatile PTIL_Tag *) (REG_BASE + 0x0371))
#define DDRL            (*(volatile DDRL_Tag *) (REG_BASE + 0x0372))
#define RDRL            (*(volatile RDRL_Tag *) (REG_BASE + 0x0373))
#define PERL            (*(volatile PERL_Tag *) (REG_BASE + 0x0374))
#define PPSL            (*(volatile PPSL_Tag *) (REG_BASE + 0x0375))
#define WOML            (*(volatile WOML_Tag *) (REG_BASE + 0x0376))
#define PTLRR           (*(volatile PTLRR_Tag *) (REG_BASE + 0x0377))
#define PTF             (*(volatile PTF_Tag *) (REG_BASE + 0x0378))
#define PTIF            (*(volatile PTIF_Tag *) (REG_BASE + 0x0379))
#define DDRF            (*(volatile DDRF_Tag *) (REG_BASE + 0x037A))
#define RDRF            (*(volatile RDRF_Tag *) (REG_BASE + 0x037B))
#define PERF            (*(volatile PERF_Tag *) (REG_BASE + 0x037C))
#define PPSF            (*(volatile PPSF_Tag *) (REG_BASE + 0x037D))
#define PTFRR           (*(volatile PTFRR_Tag *) (REG_BASE + 0x037F))
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
#define XGIF2           (*(volatile XGIF2_Tag *) (REG_BASE + 0x038A))
#define XGIF3           (*(volatile XGIF3_Tag *) (REG_BASE + 0x023B))
#define XGIF4           (*(volatile XGIF4_Tag *) (REG_BASE + 0x023C))
#define XGIF5           (*(volatile XGIF5_Tag *) (REG_BASE + 0x038D))
#define XGIF6           (*(volatile XGIF6_Tag *) (REG_BASE + 0x038E))
#define XGIF7           (*(volatile XGIF7_Tag *) (REG_BASE + 0x038F))
#define XGIF8           (*(volatile XGIF8_Tag *) (REG_BASE + 0x0390))
#define XGIF9           (*(volatile XGIF9_Tag *) (REG_BASE + 0x0391))
#define XGIFA           (*(volatile XGIFA_Tag *) (REG_BASE + 0x0392))
#define XGIFB           (*(volatile XGIFB_Tag *) (REG_BASE + 0x0393))
#define XGIFC           (*(volatile XGIFC_Tag *) (REG_BASE + 0x0394))
#define XGIFD           (*(volatile XGIFD_Tag *) (REG_BASE + 0x0395))
#define XGIFE           (*(volatile XGIFE_Tag *) (REG_BASE + 0x0396))
#define XGIFF           (*(volatile XGIFF_Tag *) (REG_BASE + 0x0397))
#define XGSWTM          (*(volatile XGSWTM_Tag *) (REG_BASE + 0x0398))
#define XGSWT           (*(volatile XGSWT_Tag *) (REG_BASE + 0x0399))
#define XGSEMM          (*(volatile XGSEMM_Tag *) (REG_BASE + 0x039A))
#define XGSEM           (*(volatile XGSEM_Tag *) (REG_BASE + 0x039B))
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
/* 0x03D0-0x03FF Timer Module (TIM) Map */
#define TIM_TIOS        (*(volatile TIM_TIOS_Tag *) (REG_BASE + 0x03D0))
#define TIM_CFORC       (*(volatile TIM_CFORC_Tag *) (REG_BASE + 0x03D1))
#define TIM_OC7M        (*(volatile TIM_OC7M_Tag *) (REG_BASE + 0x03D2))
#define TIM_OC7D        (*(volatile TIM_OC7D_Tag *) (REG_BASE + 0x03D3))
#define TIM_TCNTH       (*(volatile TIM_TCNTH_Tag *) (REG_BASE + 0x03D4))
#define TIM_TCNTL       (*(volatile TIM_TCNTL_Tag *) (REG_BASE + 0x03D5))
#define TIM_TSCR1       (*(volatile TIM_TSCR1_Tag *) (REG_BASE + 0x03D6))
#define TIM_TTOV        (*(volatile TIM_TTOV_Tag *) (REG_BASE + 0x03D7))
#define TIM_TCTL1       (*(volatile TIM_TCTL1_Tag *) (REG_BASE + 0x03D8))
#define TIM_TCTL2       (*(volatile TIM_TCTL2_Tag *) (REG_BASE + 0x03D9))
#define TIM_TCTL3       (*(volatile TIM_TCTL3_Tag *) (REG_BASE + 0x03DA))
#define TIM_TCTL4       (*(volatile TIM_TCTL4_Tag *) (REG_BASE + 0x03DB))
#define TIM_TIE         (*(volatile TIM_TIE_Tag *) (REG_BASE + 0x03DC))
#define TIM_TSCR2       (*(volatile TIM_TSCR2_Tag *) (REG_BASE + 0x03DD))
#define TIM_TFLG1       (*(volatile TIM_TFLG1_Tag *) (REG_BASE + 0x03DE))
#define TIM_TFLG2       (*(volatile TIM_TFLG2_Tag *) (REG_BASE + 0x03DF))
#define TIM_TC0H        (*(volatile TIM_TC0H_Tag *) (REG_BASE + 0x03E0))
#define TIM_TC0L        (*(volatile TIM_TC0L_Tag *) (REG_BASE + 0x03E1))
#define TIM_TC1H        (*(volatile TIM_TC1H_Tag *) (REG_BASE + 0x03E2))
#define TIM_TC1L        (*(volatile TIM_TC1L_Tag *) (REG_BASE + 0x03E3))
#define TIM_TC2H        (*(volatile TIM_TC2H_Tag *) (REG_BASE + 0x03E4))
#define TIM_TC2L        (*(volatile TIM_TC2L_Tag *) (REG_BASE + 0x03E5))
#define TIM_TC3H        (*(volatile TIM_TC3H_Tag *) (REG_BASE + 0x03E6))
#define TIM_TC3L        (*(volatile TIM_TC3L_Tag *) (REG_BASE + 0x03E7))
#define TIM_TC4H        (*(volatile TIM_TC4H_Tag *) (REG_BASE + 0x03E8))
#define TIM_TC4L        (*(volatile TIM_TC4L_Tag *) (REG_BASE + 0x03E9))
#define TIM_TC5H        (*(volatile TIM_TC5H_Tag *) (REG_BASE + 0x03EA))
#define TIM_TC5L        (*(volatile TIM_TC5L_Tag *) (REG_BASE + 0x03EB))
#define TIM_TC6H        (*(volatile TIM_TC6H_Tag *) (REG_BASE + 0x03EC))
#define TIM_TC6L        (*(volatile TIM_TC6L_Tag *) (REG_BASE + 0x03ED))
#define TIM_TC7H        (*(volatile TIM_TC7H_Tag *) (REG_BASE + 0x03EE))
#define TIM_TC7L        (*(volatile TIM_TC7L_Tag *) (REG_BASE + 0x03EF))
#define TIM_PACTL       (*(volatile TIM_PACTL_Tag *) (REG_BASE + 0x03F0))
#define TIM_PAFLG       (*(volatile TIM_PAFLG_Tag *) (REG_BASE + 0x03F1))
#define TIM_PACNTH      (*(volatile TIM_PACNTH_Tag *) (REG_BASE + 0x03F2))
#define TIM_PACNTL      (*(volatile TIM_PACNTL_Tag *) (REG_BASE + 0x03F3))
#define TIM_OCPD        (*(volatile TIM_OCPD_Tag *) (REG_BASE + 0x03FC))
#define TIM_PTPSR       (*(volatile TIM_PTPSR_Tag *) (REG_BASE + 0x03FE))

#endif /* MCUPKG_EP100 */

#endif /* S12XEP100_H */
