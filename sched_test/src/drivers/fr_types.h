/**
 * @file fr_types.h

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

#ifndef FR_TYPES
#define FR_TYPES
#ifdef MCUPKG_F512
/******************************************************************************
* Includes
******************************************************************************/
#include "drivers_cfg.h"

/******************************************************************************
* Constants
******************************************************************************/
/* FlexRay module specific pointer class, this forces to compiler to use G-instructions
for accessing the global addresses on the MC9S12 microcontrollers */
/* Used only for MC9S12 microcontrollers */
/*#define FR_REG_FAR __far*/        /* __far modifier definition for an access to FlexRay registers */
/*#define FR_DATA_FAR __far*/       /* __far modifier definition for an access to FlexRay memory */

/* Used only for MC9S12 microcontrollers with intergrated FlexRay module */
#define FR_REG_FAR              /* __far modifier is not used for an access to FlexRay registers */
#define FR_DATA_FAR             /* __far modifier definition for an access to FlexRay memory */

/* Used for MAC71xx, MPC5xx, MPC55xx, 56F86xx microcontroller families */
/* or the MC9S12 microcontrollers with integrated FlexRay module and FlexRay memory mapped into the Local Memory Map */
/*#define FR_REG_FAR*/             /* __far modifier is not used for an access to FlexRay registers */
/*#define FR_DATA_FAR*/            /* __far modifier is not used for an access to FlexRay memory */


typedef UINT8 Fr_return_type;

#define FR_NOT_SUCCESS  0
#define FR_SUCCESS      1

/******************************************************************************
* Types
******************************************************************************/

/* The values are used to return the CHI related error flags */
typedef UINT16 Fr_CHI_error_type;

/* The values are used to determine which message buffers defined in */
/* a Fr_buffer_info_type structure will be used for the FlexRay module configuration */
typedef UINT8 Fr_index_selector_type;

/* The values of this enumeration are used to determine if communication stops */
/* immediately or at the end of current FlexRay cycle */
typedef enum
{
    FR_HALT_COMMUNICATION = 0,
    FR_ABORT_COMMUNICATION
} Fr_stop_communication_type;

/* The values of this enumeration are used to provide information whether or not the */
/* local FlexRay CC is synchronous to the FR global time */
typedef enum
{
    FR_ASYNC = 0,
    FR_SYNC
} Fr_sync_state_type;

/* The values are used to hold the protocol state */
typedef enum
{
    FR_POCSTATE_CONFIG = 0,
    FR_POCSTATE_DEFAULT_CONFIG,
    FR_POCSTATE_HALT,
    FR_POCSTATE_NORMAL_ACTIVE,
    FR_POCSTATE_NORMAL_PASSIVE,
    FR_POCSTATE_READY,
    FR_POCSTATE_STARTUP,
    FR_POCSTATE_WAKEUP
} Fr_POC_state_type;

/* These values are used to determine if a message buffer has been updated with new data */
typedef enum
{
    FR_TXMB_UPDATED = 0,
    FR_TXMB_NO_ACCESS
} Fr_tx_MB_status_type;

/* These values are used to determine if a data has been transmitted */
/* For single message buffers are used only the FR_TRANSMITTED and FR_NOT_TRANSMITTED values */
typedef enum
{
    FR_TRANSMITTED = 0,
    FR_NOT_TRANSMITTED,
    FR_INTERNAL_MSG_TRANSFER_DONE,
    FR_TRANSMIT_SIDE_TRANSMITTED
} Fr_tx_status_type;

/* These values are used to determine if a data has been received */
typedef enum
{
    FR_RXMB_RECEIVED = 0,
    FR_RXMB_NOT_RECEIVED,
    FR_RXMB_NULL_FRAME_RECEIVED,
    FR_RXMB_NO_ACCESS
} Fr_rx_MB_status_type;

/* These values are used to determine if a message buffer has received a frame */
typedef enum
{
    FR_RECEIVED = 0,
    FR_NOT_RECEIVED,
    FR_NULL_FRAME_RECEIVED
} Fr_rx_status_type;

/* These values are used to determine if a data has been received into a FIFO storage */
typedef enum
{
    FR_FIFO_RECEIVED = 0,
    FR_FIFO_NOT_RECEIVED
} Fr_FIFO_status_type;

/* The values determine the state of the wakeup mechanism */
typedef enum
{
    FR_WAKEUPSTATE_UNDEFINED = 0,
    FR_WAKEUPSTATE_RECEIVED_HEADER,
    FR_WAKEUPSTATE_RECEIVED_WUP,
    FR_WAKEUPSTATE_COLLISION_HEADER,
    FR_WAKEUPSTATE_COLLISION_WUP,
    FR_WAKEUPSTAT_COLLISION_UNKNOWN,
    FR_WAKEUPSTATE_TRANSMITTED
} Fr_wakeup_state_type;

/* The values determine the state of the Media Test Symbol */
/* (MTS) reception in Symbol Window of a communication cycle */
typedef enum
{
    FR_MTS_RCV = 0,
    FR_MTS_RCV_SYNERR,
    FR_MTS_RCV_BVIO,
    FR_MTS_RCV_SYNERR_BVIO,
    FR_MTS_NOT_RCV,
    FR_MTS_NOT_RCV_SYNERR,
    FR_MTS_NOT_RCV_BVIO,
    FR_MTS_NOT_RCV_SYNERR_BVIO
} Fr_MTS_state_type;

/* The values are used to reference a channel on a CC */
typedef enum
{
    FR_CHANNEL_A = 0,
    FR_CHANNEL_B,
    FR_CHANNEL_AB,
    FR_NO_CHANNEL
} Fr_channel_type;

/* The values are used to determine which */
/* slot status information is read by the Fr_get_slot_status_reg_value function */
typedef enum
{
    FR_SLOT_STATUS_CURRENT = 0,
    FR_SLOT_STATUS_PREVIOUS
} Fr_slot_status_required_type;

/*
typedef enum
{
  FR_OFFSET_INC = 0,
  FR_OFFSET_DEC,
  FR_OFFSET_NOCHANGE
} Fr_offset_correction_type;

typedef enum
{
  FR_RATE_INC = 0,
  FR_RATE_DEC,
  FR_RATE_NOCHANGE
} Fr_rate_correction_type;

*/

/* Structure of this type contains configuration information
   for all receive shadow buffers */
typedef struct
{
    BOOL RSBIR_A1_enable;                  /* Rx shadow buffer for channel A, seg 1 - enabled? */
    BOOL RSBIR_A2_enable;                  /* Rx shadow buffer for channel A, seg 2 - enabled? */
    BOOL RSBIR_B1_enable;                  /* Rx shadow buffer for channel B, seg 1 - enabled? */
    BOOL RSBIR_B2_enable;                  /* Rx shadow buffer for channel B, seg 2 - enabled? */
    UINT8 RSBIR_A1_buffer_number_init;        /* Ch A, seg 1 - the current index of the MB header field */
    UINT8 RSBIR_A2_buffer_number_init;        /* Ch A, seg 2 - the current index of the MB header field */
    UINT8 RSBIR_B1_buffer_number_init;        /* Ch B, seg 1 - the current index of the MB header field */
    UINT8 RSBIR_B2_buffer_number_init;        /* Ch B, seg 2 - the current index of the MB header field */
} Fr_receive_shadow_buf_cfg_type;

/* Type definition for the Fr_FIFO_range_filter_mode field
   of the Fr_FIFO_range_filter_config_type structure. */
typedef enum
{
   FR_ACCEPTANCE = 0,
   FR_REJECTION
} Fr_FIFO_range_filter_mode_type;

/* Type definition for the FIFO_range_filters_config field
   of the Fr_receive_FIFO_config structure. */
typedef struct
{
    BOOL range_filter_enable;                    /* TRUE - Range Filter is enabled */
    Fr_FIFO_range_filter_mode_type range_filter_mode;  /* Acceptance or Rejection mode */
    UINT16 range_filter_lower_interval;         /* SID0 - Slot ID - Lower interval boundary */
    UINT16 range_filter_upper_interval;           /* SID1 - Slot ID - Upper interval boundary */
} Fr_FIFO_range_filters_type;

/* Structure of this type contains configuration information
   for receive FIFO structure. */
typedef struct
{
    Fr_channel_type FIFO_channel;                           /* FIFO channel; Channel A = FR_CHANNEL_A, channel B = FR_CHANNEL_B */
    UINT8 FIFO_depth;                                       /* FIFO depth */
    UINT8 FIFO_entry_size;                                  /* FIFO entry size */
    UINT16 FIFO_Msg_ID_accepFilterValue;         /* FIFO message ID acceptance filter value */
    UINT16 FIFO_Msg_ID_accepFilterMask;          /* FIFO message ID acceptance filter mask */
    UINT16 FIFO_frame_ID_rejecFilterValue;            /* FIFO frame ID rejection filter value */
    UINT16 FIFO_frame_ID_rejecFilterMask;             /* FIFO frame ID rejection filter mask */
    Fr_FIFO_range_filters_type FIFO_range_filters_config[4];  /* Reference to range filters configuration structure */
    BOOL FIFO_interrupt_enable;                          /* FIFO interrupt enable, can be enabled also by Fr_enable_interrupts() function */
} Fr_FIFO_config_type;

/* Internal FlexRay UNIFIED Driver structure
   The structure contains information about already configured FIFO storages.
   FlexRay driver stores a FIFO configuration data into this structure immediately it configures
   FIFO registers. Driver uses this structure for Data Field Offset calculation. */
typedef struct
{
    BOOL FIFO_1_used;            /* The first FIFO already configured? */
    Fr_channel_type FIFO_1_channel; /* The first configured FIFO - FIFO A or FIFO B */
    UINT8 FIFO_1_depth;             /* The first configured FIFO - FIFO depth */
    UINT8 FIFO_1_entry_size;        /* The first configured FIFO - FIFO entry size */
    BOOL FIFO_2_used;            /* The second FIFO already configured? */
    Fr_channel_type FIFO_2_channel; /* The second configured FIFO - FIFO A or FIFO B */
    UINT8 FIFO_2_depth;             /* The second configured FIFO - FIFO depth */
    UINT8 FIFO_2_entry_size;        /* The second configured FIFO - FIFO entry size */
} Fr_FIFO_info_type;

/* Structure of this type contains configuration
   information for one receive buffer. */
typedef struct
{
    UINT16 receive_frame_ID;                    /* Receive frame ID */
    Fr_channel_type receive_channel_enable;     /* Receive channel enable */
    BOOL rx_cycle_counter_filter_enable;     /* Receive cycle counter filter enable */
    UINT8 rx_cycle_counter_filter_value;        /* Receive cycle counter filter value */
    UINT8 rx_cycle_counter_filter_mask;         /* Receive cycle counter filter mask */
    BOOL rx_MB_interrupt_enable;             /* Receive MB interrupt enable */
} Fr_receive_buffer_config_type;

/* Type definition for the transmit_MB_buffering field of
   the Fr_transmit_buffer_config_type structure. */
typedef enum
{
    FR_SINGLE_TRANSMIT_BUFFER = 0,
    FR_DOUBLE_TRANSMIT_BUFFER
} Fr_transmit_MB_type;

/* Type definition for the transmission_mode field of
   the Fr_transmit_buffer_config_type structure. */
typedef enum
{
    FR_EVENT_TRANSMISSION_MODE = 0,
    FR_STATE_TRANSMISSION_MODE
} Fr_transmission_type;

/* Type definition for the transmission_commit_mode field
   of the Fr_transmit_buffer_config_type structure. */
typedef enum
{
    FR_STREAMING_COMMIT_MODE = 0,
    FR_IMMEDIATE_COMMIT_MODE
} Fr_transmission_commit_type;

/* Structure of this type contains configuration
   information for one transmit buffer. */
typedef struct
{
    UINT16 transmit_frame_ID;                                    /* Transmit frame ID */
    UINT16 header_CRC;                                           /* Header CRC */
    UINT8 payload_length;                                        /* Payload length */
    Fr_transmit_MB_type transmit_MB_buffering;                   /* Transmit MB buffering */
    Fr_transmission_type transmission_mode;                      /* Transmission mode */
    Fr_transmission_commit_type transmission_commit_mode;        /* Transmission commit mode */
    Fr_channel_type transmit_channel_enable;                     /* Transmit channels */
    BOOL payload_preamble;                                    /* Payload preamble */
    BOOL tx_cycle_counter_filter_enable;                      /* Transmit cycle counter filter enable */
    UINT8 tx_cycle_counter_filter_value;                         /* Transmit cycle counter filter value */
    UINT8 tx_cycle_counter_filter_mask;                          /* Transmit cycle counter filter mask */
    BOOL tx_MB_interrupt_enable;                              /* Transmit MB interrupt enable */
    /* If tx interrupt is enabled by tx_MB_interrupt_enable parameter, tx_MB_interrupt_transmit_side_enable determines */
    /* whether the interrupt will be enabled at commit side (FALSE - default) or at tranmsit side (TRUE) of the double MB */
    BOOL tx_MB_int_transmit_side_enable;   /* Used only for double buffered MB, FALSE - commit side, TRUE - transmit side */
} Fr_transmit_buffer_config_type;

/* Type definition of the configured buffer */
typedef enum
{
    FR_TRANSMIT_BUFFER = 0,         /* Transmit message buffer */
    FR_RECEIVE_BUFFER,              /* Receive message buffer */
    FR_RECEIVE_FIFO,                /* Receive FIFO buffer */
    FR_RECEIVE_SHADOW               /* Receive shadow buffer */
} Fr_buffer_type;

/* Structure of this type contains configuration
   information for one physical message buffer */
typedef struct
{
    Fr_buffer_type buffer_type;           /* TRANSMIT, RECEIVE, SHADOW or FIFO */
    const void * const buffer_config_ptr;  /* Reference to buffer configuration structure */
    /* Individual MB - MB index; FIFO buffers - Start index; Receive shadow buffers - no sense */
    UINT16 buffer_index_init;
    /*UINT16 data_field_offset_init;*/        /* Data field offset init - reserved */
} Fr_buffer_info_type;

/* Type definition of timer ID */
typedef enum
{
    FR_TIMER_T1 = 0,                /* Timer T1 is selected */
    FR_TIMER_T2                     /* Timer T2 is selected */
} Fr_timer_ID_type;


/* Type definition of timer timebase */
typedef enum
{
    FR_ABSOLUTE = 0,                /* Absolute timer timebase */
    FR_RELATIVE                     /* Relative timer timebase */
} Fr_timer_timebase_type;

/* Type definition of timer repetition mode */
typedef enum
{
    FR_NON_REPETITIVE = 0,          /* Non repetitive timer mode */
    FR_REPETITIVE                   /* Repetitive timer mode */
} Fr_timer_repetition_type;

/* Structure of this type contains configuration
   information for one absolute or relative timer */
typedef struct
{
    Fr_timer_ID_type timer_ID;                  /* Timer number (T1 or T2) */
    Fr_timer_timebase_type timer_type;          /* Timer timebase */
    Fr_timer_repetition_type timer_repetition;  /* Timer repetition mode */
    UINT32 timer_macrotick_offset;              /* Timer macrotick offset */
    UINT8 timer_cycle_filter_mask;              /* Timer cycle filter mask, only for absolute timer */
    UINT8 timer_cycle_filter_value;             /* Timer cycle filter value, only for absolute timer */
} Fr_timer_config_type;

/* Structure of this type contains configuration information for four internal non-memory mapped slot
   status selection register SSSR0 to SSSR3.
   If the value of any slot number is set to 0, the related slot status register provides
   the status of the symbol window after the NIT start, and provides the status of the NIT
   after the cycle start. */
typedef struct
{
    UINT16 SSSR0_slot_number;       /* Static Slot number - the number of the slot whose status will be saved in the SSR0 and SSR1 */
    UINT16 SSSR1_slot_number;       /* Static Slot number - the number of the slot whose status will be saved in the SSR2 and SSR3 */
    UINT16 SSSR2_slot_number;       /* Static Slot number - the number of the slot whose status will be saved in the SSR4 and SSR5 */
    UINT16 SSSR3_slot_number;       /* Static Slot number - the number of the slot whose status will be saved in the SSR6 and SSR7 */
} Fr_slot_status_config_type;

/* Type definition of Slot Status Counter ID */
typedef enum
{
    FR_SLOT_STATUS_COUNTER_0 = 0,   /* Slot Status Counter 0 is configured */
    FR_SLOT_STATUS_COUNTER_1,       /* Slot Status Counter 1 is configured */
    FR_SLOT_STATUS_COUNTER_2,       /* Slot Status Counter 2 is configured */
    FR_SLOT_STATUS_COUNTER_3        /* Slot Status Counter 3 is configured */
} Fr_slot_status_counter_ID_type;

/* Slot Status Counter configuration - the channel related incrementing of the slot status counter */
typedef enum
{                                       /* Slot status counter is: */
    FR_SLOT_STATUS_CHANNEL_A = 0,       /* Incremented by 1 if condition is fulfilled on channel A */
    FR_SLOT_STATUS_CHANNEL_B,           /* Incremented by 1 if condition is fulfilled on channel B */
    FR_SLOT_STATUS_CHANNEL_AB_BY_1,     /* Incremented by 1 if condition is fulfilled on at least one channel */
    FR_SLOT_STATUS_CHANNEL_AB_BY_2      /* Incremented by 2 if condition is fulfilled on both channels */
                                        /* Incremented by 1 if condition is fulfilled on only one channel */
} Fr_slot_status_counter_ch_type;

/* Structure of this type contains configuration
   information for one slot status counter */
typedef struct
{
    Fr_slot_status_counter_ID_type counter_ID;      /* Select one of the four internal slot counter condition register for access */
    Fr_slot_status_counter_ch_type counter_configuration;  /* Controls the channel related incrementing */
    BOOL multi_cycle_selection;                  /* Define whether the counter accumulates over multiple com.cycle */
    BOOL valid_frame_restriction;                /* Restrict the counter to receive valid frames */
    BOOL sync_frame_restriction;                 /* Restrict the counter to receive sync frames */
    BOOL null_frame_restriction;                 /* Restrict the counter to receive null frames */
    BOOL startup_frame_restriction;              /* Restrict the counter to receive startup frames */
    BOOL syntax_error_counting;                  /* Enable the counting for slots with the syntax error indicator bit set to 1 */
    BOOL content_error_counting;                 /* Enable the counting for slots with set content error indicator */
    BOOL boundary_violation_counting;            /* Enable the counting for slots with set boundary violation indicator */
    BOOL transmission_conflict_counting;         /* Enable the counting for slots with set transmission conflict indicator */
} Fr_slot_status_counter_cfg_type;

/* Structure of this type contains configuration information for Media Test Symbol (MTS) */
typedef struct
{
    UINT8 cycle_counter_value;              /* Defines the filter value for the MTS cycle count filter */
    UINT8 cycle_counter_mask;               /* Defines the filter mask for the MTS cycle count filter */
} Fr_MTS_config_type;

/* Structure of this type contains configuration
   information of the one low level parameters set */
typedef struct
{
    UINT8   G_COLD_START_ATTEMPTS;
    UINT8   GD_ACTION_POINT_OFFSET;
    UINT8   GD_CAS_RX_LOW_MAX;
    UINT8   GD_DYNAMIC_SLOT_IDLE_PHASE;
    UINT8   GD_MINISLOT;
    UINT8   GD_MINI_SLOT_ACT_POINT_OFFSET;
    UINT16  GD_STATIC_SLOT;
    UINT8   GD_SYMBOL_WINDOW;
    UINT8   GD_TSS_TRANSMITTER;
    UINT8   GD_WAKEUP_SYMBOL_RX_IDLE;
    UINT8   GD_WAKEUP_SYMBOL_RX_LOW;
    UINT16  GD_WAKEUP_SYMBOL_RX_WINDOW;
    UINT8   GD_WAKEUP_SYMBOL_TX_IDLE;
    UINT8   GD_WAKEUP_SYMBOL_TX_LOW;
    UINT8   G_LISTEN_NOISE;
    UINT16  G_MACRO_PER_CYCLE;
    UINT8   G_MAX_WITHOUT_CLK_CORR_PASSIVE;
    UINT8   G_MAX_WITHOUT_CLK_CORR_FATAL;
    UINT16  G_NUMBER_OF_MINISLOTS;
    UINT16  G_NUMBER_OF_STATIC_SLOTS;
    UINT16  G_OFFSET_CORRECTION_START;
    UINT8   G_PAYLOAD_LENGTH_STATIC;
    UINT8   G_SYNC_NODE_MAX;
    UINT8   G_NETWORK_MANAGE_VECTOR_LENGTH;
    BOOL P_ALLOW_HALT_DUE_TO_CLOCK;
    UINT8   P_ALLOW_PASSIVE_TO_ACTIVE;
    Fr_channel_type  P_CHANNELS;
    UINT16  PD_ACCEPTED_STARTUP_RANGE;
    UINT8   P_CLUSTER_DRIFT_DAMPING;
    UINT8   P_DECODING_CORRECTION;
    UINT8   P_DELAY_COMPENSATION_CHA;
    UINT8   P_DELAY_COMPENSATION_CHB;
    UINT32  PD_LISTEN_TIMEOUT;
    UINT16  PD_MAX_DRIFT;
    UINT8   P_EXTERN_OFFSET_CORRECTION;
    UINT8   P_EXTERN_RATE_CORRECTION;
    UINT16  P_KEY_SLOT_ID;
    BOOL P_KEY_SLOT_USED_FOR_STARTUP;
    BOOL P_KEY_SLOT_USED_FOR_SYNC;
    UINT16  P_KEY_SLOT_HEADER_CRC;
    UINT16  P_LATEST_TX;
    UINT8   P_MACRO_INITIAL_OFFSET_A;
    UINT8   P_MACRO_INITIAL_OFFSET_B;
    UINT8   P_MICRO_INITIAL_OFFSET_A;
    UINT8   P_MICRO_INITIAL_OFFSET_B;
    UINT32  P_MICRO_PER_CYCLE;
    UINT16  P_OFFSET_CORRECTION_OUT;
    UINT16  P_RATE_CORRECTION_OUT;
    BOOL P_SINGLE_SLOT_ENABLED;
    Fr_channel_type  P_WAKEUP_CHANNEL;
    UINT8   P_WAKEUP_PATTERN;
    UINT8   P_MICRO_PER_MACRO_NOM;
    UINT8   P_PAYLOAD_LENGTH_DYN_MAX;
} Fr_low_level_config_type;

/* Type definition for the connected_HW field
   of the Fr_HW_config_type structure.
   The values determine the type of used microcontroller */
typedef enum
{
    FR_MFR4300 = 0,
    FR_MC9S12XFR128,
    FR_MPC5567,          /* MPC5567 FlexRay module Revision 0 */
    FR_MFR4310,
    FR_MPC5561,
    FR_MPC5516,
    FR_MC9S12XF,
    FR_MPC5567_REVA,     /* MPC5567 FlexRay module Revision A */
    FR_MPC5514
} Fr_connected_HW_type;

/* Type definition for the clock_source field
   of the Fr_HW_config_type structure.
   The values determine the type of used oscillator */
typedef enum
{
    FR_EXTERNAL_OSCILLATOR = 0,     /* Crystal oscillator is used */
    FR_INTERNAL_SYSTEM_BUS_CLOCK    /* Not used for the MFR4300 and MFR4310 */
} Fr_clock_source_type;

/* Type definition for the clock_source field
   of the Fr_HW_config_type structure.
   The values determine the type of used oscillator */
typedef enum
{
    FR_DUAL_CHANNEL_MODE = 0,       /* Dual channel mode */
    FR_SINGLE_CHANNEL_MODE          /* Single channel mode */
} Fr_single_channel_mode_type;

/* Hardware configuration structure determines used hardware,
   allocated memory addresses and configuration message buffer segments */
typedef struct
{
    UINT16 CC_base_address;
    UINT16 CC_FlexRay_memory_base_address;
    Fr_connected_HW_type connected_HW;            /* Which type of Freescale FlexRay module is used */
    BOOL synchronization_filter_enable;     /* Synchronization frame filter enable */
    Fr_clock_source_type clock_source;            /* Protocol engine clock source select */
    UINT8 prescaler_value;                        /* The value of the PRESCALE or BITRATE bit field in the MCR register */
    UINT8 MB_segment_1_data_size;                 /* Data size - segment 1 */
    UINT8 MB_segment_2_data_size;                 /* Data size - segment 2 */
    UINT8 last_MB_seg_1;                          /* Last MB in segment 1, MBIDXEn with n = [0..last_MB_seg1] */
    UINT8 last_MB_util;                           /* Last individual MB (Receive, Transmit, Receive Shadow) utilized */
    /* Total number of used MB including FIFO; in range [1..1024] */
    /* E.g. last_MB_util = 20 and FIFO A starts as the 21st MB and it's depth is 10; then */
    /* Number of individual MB = 1 + 20 = 21; Number of FIFO MBs = 10 and */
    /* total_MB_number = 31 */
    UINT16 total_MB_number;
    BOOL allow_cold_start_enable;
    /* The value of the TIMEOUT bit field in the SYMATOR register - not implemented for MFR4300, MPC5567, MC9S12XFR128 and MFR4310 */
    UINT8 timeout;                                /* Stored only if the value is not equal to 0 */
    /* Offset of the Sync Frame Table in the FlexRay memory */
    UINT16 sync_frame_table_offset;               /* Stored only if the value is not equal to 0 */
    /* TRUE - single channel mode, FALSE - dual channel mode */
    Fr_single_channel_mode_type single_channel_mode;
} Fr_HW_config_type;

/* Structure of this type contains MB configuration parameters which are stored by driver for internal use */
typedef struct
{
    UINT16 slot_number;             /* Slot number - either 'transmit_frame_ID' or 'receive_frame_ID' */
    /*Fr_buffer_type buffer_type;*/     /* TRANSMIT, RECEIVE MB - not necessary for the current version of the UNIFIED Driver */
    Fr_transmit_MB_type transmission_mode;   /* SINGLE or DOUBLE buffered MB */
    Fr_transmission_type transmission_type;  /* STATE or EVENT transmission mode */
    void (* Fr_MB_function_ptr) (UINT8 buffer_index_init);  /* Callback function with index of MB (except FIFO) */
} Fr_MB_information_internal_type;

/* Structure of this type contains slot status configuration parameters which are stored by driver for internal use */
typedef struct
{
    BOOL registers_used;         /* Slot Status registers are already configured */
    UINT16 SSSR0_slot_number;       /* Static Slot number - the number of the slot whose status will be saved in the SSR0 and SSR1 */
    UINT16 SSSR1_slot_number;       /* Static Slot number - the number of the slot whose status will be saved in the SSR2 and SSR3 */
    UINT16 SSSR2_slot_number;       /* Static Slot number - the number of the slot whose status will be saved in the SSR4 and SSR5 */
    UINT16 SSSR3_slot_number;       /* Static Slot number - the number of the slot whose status will be saved in the SSR6 and SSR7 */
} Fr_slot_status_internal_type;

/* Structure of this type contains names of service callback functions which are stored by driver for internal use and
    will be called by the Fr_interrupt_handler() function when an interrupt occurs. */
typedef struct
{
    void (* Fr_module_ptr) (void);      /* Callback function for Module Interrupt Flag in the GIFER reg. */
    void (* Fr_protocol_ptr) (void);    /* Callback function for Protocol Interrupt Flag in the GIFER reg. */
    void (* Fr_chi_ptr) (UINT16 chi_error); /* Callback function for CHI Interrupt Flag in the GIFER reg. */
    void (* Fr_wakeup_ptr) (Fr_channel_type wakeup_channel); /* Callback function for Wakeup Interrupt Flag in the GIFER reg. */
    void (* Fr_fifo_B_ptr) (UINT16 header_index);   /* Callback function for FIFO B Interrupt Flag in the GIFER reg. */
    void (* Fr_fifo_A_ptr) (UINT16 header_index);   /* Callback function for FIFO A Interrupt Flag in the GIFER reg. */
    void (* Fr_fatal_protocol_error_ptr) (void);    /* Callback function for FATL_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_internal_protocol_error_ptr) (void); /* Callback function for INTL_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_illegal_protocol_conf_ptr) (void);   /* Callback function for ILCF_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_coldstart_abort_ptr) (void);         /* Callback function for CSA_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_missing_rate_corr_ptr) (void);       /* Callback function for MRC_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_missing_offset_corr_ptr) (void);     /* Callback function for MOC_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_clock_corr_limit_ptr) (void);        /* Callback function for CCL_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_max_sync_frames_ptr) (void);         /* Callback function for MXS_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_mts_received_ptr) (void);            /* Callback function for MTX_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_violation_B_ptr) (void);             /* Callback function for LTXB_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_violation_A_ptr) (void);             /* Callback function for LTXA_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_trans_across_boundary_B_ptr) (void); /* Callback function for TBVB_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_trans_across_boundary_A_ptr) (void); /* Callback function for TBVA_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_timer_2_expired_ptr) (void);         /* Callback function for TI2_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_timer_1_expired_ptr) (void);         /* Callback function for TI1_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_cycle_start_ptr) (void);             /* Callback function for CYS_IF Interrupt Flag in the PIFR0 reg. */
    void (* Fr_error_mode_changed_ptr) (void);      /* Callback function for EMC_IF Interrupt Flag in the PIFR1 reg. */
    void (* Fr_illegal_protocol_command_ptr) (void);    /* Callback function for IPC_IF Interrupt Flag in the PIFR1 reg. */
    void (* Fr_protocol_engine_com_fail_ptr) (void); /* Callback function for PECF_IF Interrupt Flag in the PIFR1 reg. */
    void (* Fr_protocol_state_changed_ptr) (void);  /* Callback function for PSC_IF Interrupt Flag in the PIFR1 reg. */
    void (* Fr_slot_status_cnt_3_inc_ptr) (void);   /* Callback function for SSI3_IF Interrupt Flag in the PIFR1 reg. */
    void (* Fr_slot_status_cnt_2_inc_ptr) (void);   /* Callback function for SSI2_IF Interrupt Flag in the PIFR1 reg. */
    void (* Fr_slot_status_cnt_1_inc_ptr) (void);   /* Callback function for SSI1_IF Interrupt Flag in the PIFR1 reg. */
    void (* Fr_slot_status_cnt_0_inc_ptr) (void);   /* Callback function for SSI0_IF Interrupt Flag in the PIFR1 reg. */
    void (* Fr_even_cycle_table_written_ptr) (void);    /* Callback function for EVT_IF Interrupt Flag in the PIFR1 reg. */
    void (* Fr_odd_cycle_table_written_ptr) (void);     /* Callback function for ODT_IF Interrupt Flag in the PIFR1 reg. */
} Fr_callback_functions_type;

#endif /* MCUPKG_F512 */
#endif /* FR_TYPES */



