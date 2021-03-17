/*
 * alarm.h
 *
 *  Created on: 2009. 5. 29
 *      Author: moondifafa
 */
#ifndef _ALARM_H_
#define _ALARM_H_

// Includes ////////////////////////////////////////////////////////////////////
#include "osek_os_api.h" /* osek protocol */
#include "machine.h"  /* MCU config  */
#include "ll_std_app_oil.h"  /* interface to generated system module */

/* importing necessary modules */
#include "error.h"
#include "hook.h"
#include "event.h"
#include "are_taskutil.h"


// reference kerenl data block - core //////////////////////////////////////////
extern SYSTEM_SVC_BLK SystemSvcBlk ;
#define KRT_INTRINSIC_COUNTER_COUNT (1)        /* the OSEK 223 "system counter" */

// interfacing System Generation Result(OIL 2.5) ///////////////////////////////

UINT8 KRT_COUNTER_COUNT ;
UINT8 KRT_SYSTEMCOUNTER_ID ;
UINT8 KRT_ALARM_COUNT ;



// osek data type to follow //////////////////////////////////
typedef TickType    KRT_TICK ;

// kernel alarm module data types //////////////////////////////////////////////

typedef OIL_ALARMCALLBACK_FREF KRT_ALARMCALLBACK_FREF ;

typedef OIL_APPMODE_ID  KRT_APPMODE_ID ;  /* 2 lines need rearrangement ... */
typedef OIL_TASK_ID     KRT_COUNTER_ID ;

typedef struct KRT_COUNTER_t{
    KRT_TICK        max ;
    KRT_TICK        base ;      /* def hw timer ticks required to advance one tick of this counter */
                                /* if hwt_num is 1~7, this value represents miliseconds in counter tick */
    UINT8           hwt_num ;   /* dedicated hw timer number (system dependent),*/
                                /* 0 indicates val increment through SW.  */
    KRT_TICK        min_cycle ;
    KRT_TICK        val ;       /* curruent hand */
    KRT_TICK        atom_val ;  /* system_tick advances atom_val */
} KRT_COUNTER ;

typedef struct KRT_ALARM_t{
    KRT_COUNTER_ID  base_counter ;
    BOOL            autostart ;
    BOOL            active ;

    KRT_TICK        exp_ofs ;
    KRT_TICK        cycle ;

    UINT8           act_type ;
    KRT_TASK_ID     act_tid ;           // task id to activate or event receiver
    KRT_EVENT_ID    act_evid ;      // event id to set
    KRT_ALARMCALLBACK_FREF cb ;      // callback function id

} KRT_ALARM;

extern KRT_COUNTER krt_counter_list []; // runtime kernel data block
extern KRT_ALARM   krt_alarm_list   [];

extern BOOL f_bypass ;  // alaram.c module level master switch


// OSEK 2.2.3 Data types - already defined in osek_os_types.h //////////////////


// OSEK 2.2.3 - constructional elements ////////////////////////////////////////
// DeclareAlarm(AlarmName) -- defined in osek_os_types.h

// OSEK 2.2.3 api's ////////////////////////////////////////////////////////////
/* defined in osek_os_types.h */
/*
StatusType GetAlarmBase(AlarmType aid, AlarmBaseRefType p_abase) ;
StatusType GetAlarm(AlarmType aid, TickRefType p_tk) ;
StatusType SetRelAlarm(AlarmType aid, TickType incr, TickType cycle) ;
StatusType SetAbsAlarm(AlarmType aid, TickType start, TickType cycle) ;
StatusType CancelAlam (AlarmType aid) ;
*/

// internal (of OSEK) functions //////////////////////////////////////////////////////////
void alarm_initialize(void) ;


#endif /* _ALARM_H_ */
