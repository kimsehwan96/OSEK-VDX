/**
 * @file fr.h

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
 * $Module: FR              $
 * $Date: 2009.4.16         $
 * $Rev: ver 1.0.0          $
 * $Creator: Choi, Gwang Ho $
 * $Owner: Choi, Gwang Ho   $
 * $URL: www.etri.re.kr     $
 *
 */

/*******************************************************************************
* Revision history
-----------------------------------------------------------------------------
   Date       Rev.    Author  Description
----------   -------  ------  -----------------------------------------------
2009-04-16   V1.0.0    CGH     Initial version

********************************************************************************/

#ifdef MCUPKG_F512

#ifndef FR_H
#define FR_H
/******************************************************************************
* Includes
******************************************************************************/
#include "fr_types.h"
#include "fr_cfg.h"
#include "dd_error.h"

/******************************************************************************
* Constants
******************************************************************************/

/* This constant is used to correctly handle the situation when the driver
waits till the PE accepts a command (e.g. the protocol control command).
In such a case, the driver will be waiting in the loop (maximum FR_MAX_WAIT_CYCLES
iterations) until a proper value appears in the required register. */
#define FR_MAX_WAIT_CYCLES      100

#define FR_LAST_MB            0xFF  /* Used in buffer configuration structure to determine the last used MB */

#define FR_MAX_NUMBER_TXRX_MB  128   /* Maximal number of used MB except FIFO storage and shadow message buffers */

#define FrMVR                 0x0000
#define FrMCR                 0x0001
#define FrSYMBADHR            0x0002
#define FrSYMBADLR            0x0003
#define FrSTBSCR              0x0004
#define FrSTBPCR              0x0005
#define FrMBDSR               0x0006
#define FrMBSSUTR             0x0007

#define FrPOCR                0x000A
#define FrGIFER               0x000B
#define FrPIFR0               0x000C
#define FrPIFR1               0x000D
#define FrPIER0               0x000E
#define FrPIER1               0x000F
#define FrCHIERFR             0x0010
#define FrMBIVEC              0x0011
#define FrCASERCR             0x0012
#define FrCBSERCR             0x0013
#define FrPSR0                0x0014
#define FrPSR1                0x0015
#define FrPSR2                0x0016
#define FrPSR3                0x0017
#define FrMTCTR               0x0018
#define FrCYCTR               0x0019
#define FrSLTCTAR             0x001A
#define FrSLTCTBR             0x001B
#define FrRTCORVR             0x001C
#define FrOFCORVR             0x001D
#define FrCIFRR               0x001E
#define FrSYMATOR             0x001F

#define FrSFCNTR              0x0020
#define FrSFTOR               0x0021
#define FrSFTCCSR             0x0022
#define FrSFIDRFR             0x0023
#define FrSFIDAFVR            0x0024
#define FrSFIDAFMR            0x0025
#define FrNMVR0               0x0026
#define FrNMVR1               0x0027
#define FrNMVR2               0x0028
#define FrNMVR3               0x0029
#define FrNMVR4               0x002A
#define FrNMVR5               0x002B
#define FrNMVLR               0x002C
#define FrTICCR               0x002D
#define FrTI1CYSR             0x002E
#define FrTI1MTOR             0x002F
#define FrTI2CR0              0x0030
#define FrTI2CR1              0x0031
#define FrSSSR                0x0032
#define FrSSCCR               0x0033
#define FrSSR0                0x0034
#define FrSSR1                0x0035
#define FrSSR2                0x0036
#define FrSSR3                0x0037
#define FrSSR4                0x0038
#define FrSSR5                0x0039
#define FrSSR6                0x003A
#define FrSSR7                0x003B
#define FrSSCR0               0x003C
#define FrSSCR1               0x003D
#define FrSSCR2               0x003E
#define FrSSCR3               0x003F
#define FrMTSACFR             0x0040
#define FrMTSBCFR             0x0041
#define FrRSBIR               0x0042
#define FrRFSR                0x0043
#define FrRFSIR               0x0044
#define FrRFDSR               0x0045
#define FrRFARIR              0x0046
#define FrRFBRIR              0x0047
#define FrRFMIDAFVR           0x0048
#define FrRFMIAFMR            0x0049
#define FrRFFIDRFVR           0x004A
#define FrRFFIDRFMR           0x004B
#define FrRFRFCFR             0x004C
#define FrRFRFCTR             0x004D
#define FrLDTXSLAR            0x004E
#define FrLDTXSLBR            0x004F
#define FrPCR0                0x0050
#define FrPCR1                0x0051
#define FrPCR2                0x0052
#define FrPCR3                0x0053
#define FrPCR4                0x0054
#define FrPCR5                0x0055
#define FrPCR6                0x0056
#define FrPCR7                0x0057
#define FrPCR8                0x0058
#define FrPCR9                0x0059
#define FrPCR10               0x005A
#define FrPCR11               0x005B
#define FrPCR12               0x005C
#define FrPCR13               0x005D
#define FrPCR14               0x005E
#define FrPCR15               0x005F
#define FrPCR16               0x0060
#define FrPCR17               0x0061
#define FrPCR18               0x0062
#define FrPCR19               0x0063
#define FrPCR20               0x0064
#define FrPCR21               0x0065
#define FrPCR22               0x0066
#define FrPCR23               0x0067
#define FrPCR24               0x0068
#define FrPCR25               0x0069
#define FrPCR26               0x006A
#define FrPCR27               0x006B
#define FrPCR28               0x006C
#define FrPCR29               0x006D
#define FrPCR30               0x006E

#define FrDER                 0x0070
#define FrCRSR                0x0071

#define FrPIDR                0x0078
#define FrAVNR                0x0079
#define FrHIPDSR              0x007A
#define FrPLPDSR              0x007B
#define FrHIPPER              0x007C
#define FrHIPPCR              0x007D
#define FrPLPPER              0x007E
#define FrPLPPCR              0x007F
#define FrMBCCSR0             0x0080
#define FrMBCCFR0             0x0081
#define FrMBFIDR0             0x0082
#define FrMBIDXR0             0x0083

#define FrMCR_MEN             0x8000
#define FrMCR_SCM             0x2000
#define FrMCR_CHB             0x1000
#define FrMCR_CHA             0x0800
#define FrMCR_SFFE            0x0400
#define FrMCR_CLKSEL          0x0010

#define FrPOCR_WME            0x8000
#define FrPOCR_BSY            0x0080
#define FrPOCR_WMC            0x0080

#define FrGIFER_TBIE            0x0001
#define FrGIFER_RBIE            0x0002
#define FrGIFER_FNEAIE          0x0004
#define FrGIFER_FNEBIE          0x0008
#define FrGIFER_WUPIE           0x0010
#define FrGIFER_CHIE            0x0020
#define FrGIFER_PRIE            0x0040
#define FrGIFER_MIE             0x0080
#define FrGIFER_TBIF            0x0100
#define FrGIFER_RBIF            0x0200
#define FrGIFER_FNEAIF          0x0400
#define FrGIFER_FNEBIF          0x0800
#define FrGIFER_WUPIF           0x1000
#define FrGIFER_CHIF            0x2000
#define FrGIFER_PRIF            0x4000
#define FrGIFER_MIF             0x8000

#define FrPIFR0_CYS_IF          0x0001
#define FrPIFR0_TI1_IF          0x0002
#define FrPIFR0_TI2_IF          0x0004
#define FrPIFR0_TBVA_IF         0x0008
#define FrPIFR0_TBVB_IF         0x0010
#define FrPIFR0_LTXA_IF         0x0020
#define FrPIFR0_LTXB_IF         0x0040
#define FrPIFR0_MTX_IF          0x0080
#define FrPIFR0_MXS_IF          0x0100
#define FrPIFR0_CCL_IF          0x0200
#define FrPIFR0_MOC_IF          0x0400
#define FrPIFR0_MRC_IF          0x0800
#define FrPIFR0_CSA_IF          0x1000
#define FrPIFR0_ILCF_IF         0x2000
#define FrPIFR0_INTL_IF         0x4000
#define FrPIFR0_FATL_IF         0x8000

#define FrPIER0_CYS_IE          0x0001
#define FrPIER0_TI1_IE          0x0002
#define FrPIER0_TI2_IE          0x0004
#define FrPIER0_TBVA_IE         0x0008
#define FrPIER0_TBVB_IE         0x0010
#define FrPIER0_LTXA_IE         0x0020
#define FrPIER0_LTXB_IE         0x0040
#define FrPIER0_MTX_IE          0x0080
#define FrPIER0_MXS_IE          0x0100
#define FrPIER0_CCL_IE          0x0200
#define FrPIER0_MOC_IE          0x0400
#define FrPIER0_MRC_IE          0x0800
#define FrPIER0_CSA_IE          0x1000
#define FrPIER0_ILCF_IE         0x2000
#define FrPIER0_INTL_IE         0x4000
#define FrPIER0_FATL_IE         0x8000

#define FrPSR1_FRZ              0x0020
#define FrPSR1_CSAA             0x8000

#define FrPSR2_NBVB                     0x8000
#define FrPSR2_NSEB                     0x4000
#define FrPSR2_STCB                     0x2000
#define FrPSR2_SBVB                     0x1000
#define FrPSR2_SSEB                     0x0800
#define FrPSR2_MTB                      0x0400
#define FrPSR2_NBVA                     0x0200
#define FrPSR2_NSEA                     0x0100
#define FrPSR2_STCA                     0x0080
#define FrPSR2_SBVA                     0x0040
#define FrPSR2_SSEA                     0x0020
#define FrPSR2_MTA                      0x0010

#define FrPSR2_MTSB_RCV                   0x0400
#define FrPSR2_MTSB_RCV_SYNERR            0x0C00
#define FrPSR2_MTSB_RCV_BVIO              0x1400
#define FrPSR2_MTSB_RCV_SYNERR_BVIO       0x1C00
#define FrPSR2_MTSB_NOT_RCV               0x0000
#define FrPSR2_MTSB_NOT_RCV_SYNERR        0x0800
#define FrPSR2_MTSB_NOT_RCV_BVIO          0x1000
#define FrPSR2_MTSB_NOT_RCV_SYNERR_BVIO   0x1800

#define FrPSR2_MTSA_RCV                   0x0010
#define FrPSR2_MTSA_RCV_SYNERR            0x0030
#define FrPSR2_MTSA_RCV_BVIO              0x0050
#define FrPSR2_MTSA_RCV_SYNERR_BVIO       0x0070
#define FrPSR2_MTSA_NOT_RCV               0x0000
#define FrPSR2_MTSA_NOT_RCV_SYNERR        0x0020
#define FrPSR2_MTSA_NOT_RCV_BVIO          0x0040
#define FrPSR2_MTSA_NOT_RCV_SYNERR_BVIO   0x0060

#define FrPSR3_WUB              0x2000
#define FrPSR3_WUA              0x0020

#define FrSSCCR_MCY             0x0100
#define FrSSCCR_WMD             0x8000

#define FrTICCR_T1ST            0x0001
#define FrTICCR_T1TR            0x0002
#define FrTICCR_T1SP            0x0004
#define FrTICCR_T1_REP          0x0010
#define FrTICCR_T2ST            0x0100
#define FrTICCR_T2TR            0x0200
#define FrTICCR_T2SP            0x0400
#define FrTICCR_T2_REP          0x1000
#define FrTICCR_T2_CFG          0x2000

#define FrMTSACFR_MTE           0x8000
#define FrMTSBCFR_MTE           0x8000

/* Definition for Fr_enable_interrupts() function */
/* Definition of flags in the GIFER register */
#define FR_MODULE_IRQ                               0x0080
#define FR_PROTOCOL_IRQ                             0x0040
#define FR_CHI_IRQ                                  0x0020
#define FR_WAKEUP_IRQ                               0x0010
#define FR_FIFO_B_IRQ                               0x0008
#define FR_FIFO_A_IRQ                               0x0004
#define FR_RECEIVE_IRQ                              0x0002
#define FR_TRANSMIT_IRQ                             0x0001
/* Definition of flags in the PIER0/PIFR0 register */
#define FR_FATAL_PROTOCOL_ERROR_IRQ                 0x8000
#define FR_INTERNAL_PROTOCOL_ERROR_IRQ              0x4000
#define FR_ILLEGAL_PROTOCOL_CONFIG_IRQ              0x2000
#define FR_COLDSTART_ABORT_IRQ                      0x1000
#define FR_MISSING_RATE_CORRECTION_IRQ              0x0800
#define FR_MISSING_OFFSET_CORREC_IRQ                0x0400
#define FR_CLOCK_CORRECTION_LIMIT_IRQ               0x0200
#define FR_MAX_SYNC_FRAMES_DETECTED_IRQ             0x0100
#define FR_MEDIA_ACC_TEST_SYM_RECV_IRQ              0x0080
#define FR_VIOLATION_CHB_IRQ                        0x0040
#define FR_VIOLATION_CHA_IRQ                        0x0020
#define FR_TX_ACROSS_BOUNDARY_CHB_IRQ               0x0010
#define FR_TX_ACROSS_BOUNDARY_CHA_IRQ               0x0008
#define FR_TIMER_2_EXPIRED_IRQ                      0x0004
#define FR_TIMER_1_EXPIRED_IRQ                      0x0002
#define FR_CYCLE_START_IRQ                          0x0001
/* Definition of flags in the PIER1/PIFR0 register */
#define FR_ERROR_MODE_CHANGED_IRQ                   0x8000
#define FR_ILLEGAL_PROTOCOL_COMMAND_IRQ             0x4000
#define FR_PROTOCOL_ENGINE_COM_FAILURE              0x2000
#define FR_PROTOCOL_STATE_CHANGED_IRQ               0x1000
#define FR_SLOT_STATUS_CNT_3_INCRE_IRQ              0x0800
#define FR_SLOT_STATUS_CNT_2_INCRE_IRQ              0x0400
#define FR_SLOT_STATUS_CNT_1_INCRE_IRQ              0x0200
#define FR_SLOT_STATUS_CNT_0_INCRE_IRQ              0x0100
#define FR_EVEN_CYCLE_TABLE_WRITTEN_IRQ             0x0020
#define FR_ODD_CYCLE_TABLE_WRITTEN_IRQ              0x0010

/* Definition of slot status register */
#define FrSSRn_VFB	                                0x8000
#define FrSSRn_SYB	                                0x4000
#define FrSSRn_NFB                                  0x2000
#define FrSSRn_SUB	                                0x1000
#define FrSSRn_SEB	                                0x0800
#define FrSSRn_CEB	                                0x0400
#define FrSSRn_BVB	                                0x0200
#define FrSSRn_TCB	                                0x0100
#define FrSSRn_VFA	                                0x0080
#define FrSSRn_SYA	                                0x0040
#define FrSSRn_NFA                                  0x0020
#define FrSSRn_SUA	                                0x0010
#define FrSSRn_SEA	                                0x0008
#define FrSSRn_CEA	                                0x0004
#define FrSSRn_BVA	                                0x0002
#define FrSSRn_TCA	                                0x0001

#define FrRFRFCFR_IBD           0x4000
#define FrRFRFCFR_WMD           0x8000

#define FrRFRFCTR_F0EN          0x0001
#define FrRFRFCTR_F1EN          0x0002
#define FrRFRFCTR_F2EN          0x0004
#define FrRFRFCTR_F3EN          0x0008
#define FrRFRFCTR_F0MD          0x0100
#define FrRFRFCTR_F1MD          0x0200
#define FrRFRFCTR_F2MD          0x0400
#define FrRFRFCTR_F3MD          0x0800

#define FrPOCR_POCCMD_ALLOW_COLDSTART   0x0000
#define FrPOCR_POCCMD_ALL_SLOTS         0x0001
#define FrPOCR_POCCMD_CONFIG            0x0002
#define FrPOCR_POCCMD_FREEZE            0x0003
#define FrPOCR_POCCMD_READY             0x0004
#define FrPOCR_POCCMD_CONFIG_COMPLETE   0x0004
#define FrPOCR_POCCMD_RUN               0x0005
#define FrPOCR_POCCMD_DEFAULT_CONFIG    0x0006
#define FrPOCR_POCCMD_HALT              0x0007
#define FrPOCR_POCCMD_WAKEUP            0x0008
#define FrPOCR_POCCMD_RESET             0x000C

#define FrPSR0_ERRMODE_ACTIVE           0x0000
#define FrPSR0_ERRMODE_PASSIVE          0x4000
#define FrPSR0_ERRMODE_COMM_HALT        0x8000
#define FrPSR0_SLOTMODE_SINGLE          0x0000
#define FrPSR0_SLOTMODE_ALL_PENDING     0x1000
#define FrPSR0_SLOTMODE_ALL             0x2000

#define FrPSR0_PROTSTATE_DEFAULT_CONFIG 0x0000
#define FrPSR0_PROTSTATE_CONFIG         0x0100
#define FrPSR0_PROTSTATE_WAKEUP         0x0200
#define FrPSR0_PROTSTATE_READY          0x0300
#define FrPSR0_PROTSTATE_NORMAL_PASSIVE 0x0400
#define FrPSR0_PROTSTATE_NORMAL_ACTIVE  0x0500
#define FrPSR0_PROTSTATE_HALT           0x0600
#define FrPSR0_PROTSTATE_STARTUP        0x0700

#define FrPSR0_START_COLD_COLLIS_RESOL  0x0020
#define FrPSR0_START_COLDSTART_LISTEN   0x0030
#define FrPSR0_START_INTEGRAT_CONS_CHK  0x0040
#define FrPSR0_START_INTEGRAT_LISTEN    0x0050
#define FrPSR0_START_INITIAL_SCHEDULE   0x0070
#define FrPSR0_START_COLD_CONSIST_CHK   0x00A0
#define FrPSR0_START_INTEGRAT_COLD_CHK  0x00D0
#define FrPSR0_START_COLDSTART_GAP      0x00E0
#define FrPSR0_START_COLDSTART_JOIN     0x00F0

#define FrPSR0_WAKE_RECEIVED_HEADER     0x0001
#define FrPSR0_WAKE_RECEIVED_WUP        0x0002
#define FrPSR0_WAKE_COLLISION_HEADER    0x0003
#define FrPSR0_WAKE_COLLISION_WUP       0x0004
#define FrPSR0_WAKE_COLLISION_UNKNOWN   0x0005
#define FrPSR0_WAKE_TRANSMITTED         0x0006

#define FrRSBIR_WMD                     0x8000
#define FrRSBIR_SEL_RSBIR_A1            0x0000
#define FrRSBIR_SEL_RSBIR_A2            0x1000
#define FrRSBIR_SEL_RSBIR_B1            0x2000
#define FrRSBIR_SEL_RSBIR_B2            0x3000

#define FrMBCCSR_MCM                    0x4000
#define FrMBCCSR_MBT                    0x2000
#define FrMBCCSR_MTD                    0x1000
#define FrMBCCSR_CMT                    0x0800
#define FrMBCCSR_EDT                    0x0400
#define FrMBCCSR_LCKT                   0x0200
#define FrMBCCSR_MBIE                   0x0100
#define FrMBCCSR_DUP                    0x0010
#define FrMBCCSR_DVAL                   0x0008
#define FrMBCCSR_EDS                    0x0004
#define FrMBCCSR_LCKS                   0x0002
#define FrMBCCSR_MBIF                   0x0001

#define FrMBCCFR_MTM                    0x8000
#define FrMBCCFR_CHA                    0x4000
#define FrMBCCFR_CHB                    0x2000
#define FrMBCCFR_CCFE                   0x1000

#define FrF_HEADER_PPI                  0x4000
#define FrF_HEADER_NUF                  0x2000
#define FrF_HEADER_VFB                  0x8000
#define FrF_HEADER_VFA                  0x0080

/******************************************************************************
* Types
******************************************************************************/

/******************************************************************************
* Global variables
******************************************************************************/
extern volatile UINT16 * FR_REG_FAR Fr_CC_reg_ptr;
extern Fr_connected_HW_type Fr_connected_HW;
/*extern const Fr_HW_config_type *Fr_HW_config_ptr;*/
extern Fr_slot_status_internal_type Fr_slot_status_inform_internal;
extern Fr_callback_functions_type Fr_callback_functions;
extern Fr_MB_information_internal_type Fr_MB_information_internal[FR_NUMBER_TXRX_MB + 1];
extern const Fr_buffer_info_type *Fr_buffers_config_ptr;
extern const UINT8 *Fr_buffer_config_set_ptr;
extern const Fr_HW_config_type *Fr_HW_config_ptr;

/******************************************************************************
* Global functions
******************************************************************************/
extern Fr_return_type Fr_init(const Fr_HW_config_type *Fr_HW_config_temp_ptr, \
                            const Fr_low_level_config_type *Fr_low_level_config_temp_ptr);
extern void Fr_set_configuration(const Fr_HW_config_type *Fr_HW_config_temp_ptr, \
                            const Fr_low_level_config_type *Fr_low_level_config_temp_ptr);
extern Fr_return_type Fr_buffers_init(const Fr_buffer_info_type *Fr_buffers_config_temp_ptr, \
                            const Fr_index_selector_type *Fr_buffer_config_set_temp_ptr);
extern void Fr_timers_init(const Fr_timer_config_type ** Fr_timer_config_temp_ptr_ptr);
extern void Fr_slot_status_init(const Fr_slot_status_config_type *Fr_slot_status_config_temp_ptr);
extern void Fr_slot_status_counter_init(const Fr_slot_status_counter_cfg_type ** Fr_slot_status_counter_config_temp_ptr_ptr);
extern Fr_return_type Fr_leave_configuration_mode(void);
extern Fr_return_type Fr_start_communication(void);
extern Fr_return_type Fr_stop_communication(Fr_stop_communication_type Fr_stop_option);
extern Fr_return_type Fr_send_wakeup(void);
extern Fr_wakeup_state_type Fr_get_wakeup_state(void);
extern Fr_POC_state_type Fr_get_POC_state(void);
extern Fr_sync_state_type Fr_get_sync_state(void);
extern Fr_return_type Fr_enter_configuration_mode(void);
extern Fr_return_type Fr_reset_protocol_engine(void);
extern void Fr_get_global_time(UINT8 * Fr_cycle_ptr, UINT16 * Fr_macrotick_ptr);
extern Fr_return_type Fr_send_MTS(Fr_channel_type Fr_channel, const Fr_MTS_config_type *Fr_MTS_config_temp_ptr);
extern Fr_MTS_state_type Fr_get_MTS_state(Fr_channel_type Fr_channel);
extern void Fr_get_network_manage_vector(UINT16 * Fr_vector_ptr);
extern Fr_return_type Fr_get_slot_status_reg_value(UINT16 Fr_slot_number, Fr_channel_type Fr_channel, \
                            Fr_slot_status_required_type Fr_slot_status_required, UINT16 *Fr_status_vector_ptr);
extern void Fr_get_ch_status_error_cnt_val(Fr_channel_type Fr_channel, UINT16 *Fr_counter_value_ptr);
extern void Fr_get_slot_status_counter_val(Fr_slot_status_counter_ID_type Fr_counter_idx, UINT16 *Fr_counter_value_ptr);
extern void Fr_reset_slot_status_counter(Fr_slot_status_counter_ID_type Fr_counter_idx);
extern Fr_tx_MB_status_type Fr_transmit_data(UINT16 Fr_buffer_idx, const UINT16 *Fr_data_ptr, UINT8 Fr_data_length);
extern Fr_rx_MB_status_type Fr_receive_data(UINT16 Fr_buffer_idx, UINT16 *Fr_data_ptr, \
                            UINT8 *Fr_data_length_ptr,UINT16 *Fr_slot_status_ptr);
extern Fr_FIFO_status_type Fr_receive_fifo_data(UINT16 Fr_buffer_read_idx, UINT16 *Fr_data_ptr, \
                            UINT8 *Fr_data_length_ptr, UINT16 *Fr_slot_idx_ptr, UINT16 *Fr_slot_status_ptr);
extern void Fr_enable_interrupts(UINT16 Fr_global_interrupt, UINT16 Fr_protocol_0_interrupt, UINT16 Fr_protocol_1_interrupt);
extern void Fr_disable_interrupts(UINT16 Fr_global_interrupt, UINT16 Fr_protocol_0_interrupt, UINT16 Fr_protocol_1_interrupt);
extern void Fr_interrupt_handler(void);
extern void Fr_set_MB_callback(void (* MB_callback_ptr)(UINT8 Fr_int_buffer_idx), UINT8 Fr_buffer_idx);
extern Fr_return_type Fr_set_global_IRQ_callback(void (* callback_ptr)(void), UINT16 Fr_global_interrupt);
extern Fr_return_type Fr_set_protocol_0_IRQ_callback(void (* callback_ptr)(void), UINT16 Fr_protocol_interrupt);
extern Fr_return_type Fr_set_protocol_1_IRQ_callback(void (* callback_ptr)(void), UINT16 Fr_protocol_interrupt);
extern void Fr_set_wakeup_IRQ_callback(void (* callback_ptr)(Fr_channel_type wakeup_channel));
extern void Fr_set_chi_IRQ_callback(void (* callback_ptr)(UINT16 chi_error));
extern Fr_return_type Fr_set_fifo_IRQ_callback(void (* callback_ptr)(UINT16 header_index), UINT16 Fr_global_interrupt);
extern void Fr_clear_MB_interrupt_flag(UINT8 Fr_buffer_idx);
extern void Fr_start_timer(Fr_timer_ID_type timer_ID);
extern void Fr_stop_timer(Fr_timer_ID_type timer_ID);
extern Fr_tx_status_type Fr_check_tx_status(UINT8 Fr_buffer_idx);
extern Fr_rx_status_type Fr_check_rx_status(UINT8 Fr_buffer_idx);
extern Fr_CHI_error_type Fr_check_CHI_error(void);
extern BOOL Fr_check_cycle_start(UINT8 *Fr_cycle_ptr);
extern BOOL Fr_check_tx_across_boundry(Fr_channel_type Fr_channel);
extern BOOL Fr_check_violation(Fr_channel_type Fr_channel);
extern BOOL Fr_check_max_sync_frame(void);
extern BOOL Fr_check_clk_correc_limit_reach(void);
extern BOOL Fr_check_missing_offset_correct(void);
extern BOOL Fr_check_missing_rate_correct(void);
extern BOOL Fr_check_coldstart_abort(void);
extern BOOL Fr_check_internal_protocol_err(void);
extern BOOL Fr_check_fatal_protocol_error(void);
extern BOOL Fr_check_protocol_state_changed(void);
extern BOOL Fr_chk_protocol_engine_com_fail(void);
extern UINT16 Fr_low_level_access_read_reg(UINT16 Fr_required_register);
extern void Fr_low_level_access_write_reg(UINT16 Fr_required_register, UINT16 Fr_value);
extern UINT16 Fr_low_level_access_read_memory(UINT16 Fr_memory_address);
extern void Fr_low_level_access_wr_memory(UINT16 Fr_memory_address, UINT16 Fr_value);


/******************************************************************************
* Inline functions
******************************************************************************/

#endif /* FR_H */

#endif /* MCUPKG_F512 */

