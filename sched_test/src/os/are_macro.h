/*
 * ARE.h
 * Alarm Resource Event Common Macro Header
 *
 *  Created on: 2009. 6. 30
 *      Author: moondifafa
 */

#ifndef _ARE_MACRO_H_
#define _ARE_MACRO_H_

/* Well, this file will not compile included in other than alarm.c, event.c, resource.c */


#include "extern.h" // to access kernel_cb
/******************************************************************************/

#define CHECK_ALARM_IF_VALID(aid, result) \
    if (aid >= (UINT8)KRT_ALARM_COUNT) { result = E_OS_ID ; }

/* used in CancelAlarm, GetAlarm */
#define CHECK_ALARM_IF_USED(aid, result) \
    if (krt_alarm_list[aid].active == false ) { result = E_OS_NOFUNC; }

/* used in SetXXXAlarm */
#define CHECK_ALARM_IF_NOTUSED(aid, result) \
    if (krt_alarm_list[aid].active != false ) { result = E_OS_STATE; }
/* E_OS_STATE */

#define CHECK_ALARM_INCREMENT(aid, incr, result) \
    if (incr > krt_counter_list[krt_alarm_list[aid].base_counter].max ) \
    { result = E_OS_VALUE ; } \
    if (incr <= 0) \
    { result = E_OS_VALUE ; }

#define CHECK_ALARM_START(aid, start, result) \
    if (start > krt_counter_list[krt_alarm_list[aid].base_counter].max ) \
    { result = E_OS_VALUE ; } \
    if (start < 0) \
    { result = E_OS_VALUE ; }

#define CHECK_ALARM_CYCLE(aid, cycle, result) \
    if( cycle != 0 ) if ( \
        cycle > krt_counter_list[krt_alarm_list[aid].base_counter].max \
        || cycle < krt_counter_list[krt_alarm_list[aid].base_counter].min_cycle \
    ) \
    { result = E_OS_VALUE ; }

#define CHECK_RESOURCE_IF_VALID(rid, result) \
     if (rid < 0 || rid >= (UINT8)KRT_RESOURCE_COUNT ) \
        { result = E_OS_ID ; } \
     else if (krt_resource_list[rid].type == oeINTERNAL_resource_resourceproperty ) \
        { result = E_OS_ID ; }

#endif

/* _ARE_MACRO_H_ */

