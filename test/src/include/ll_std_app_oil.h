/*
 * ll_std_app_oil.h
 *
 *  Created on: 2010. 2. 10
 *      Author: moondifafa
 *
 *  standard interface to application's oil objects module(app_oil.c)
 *      for osek modules
 */

#ifndef LL_STD_APP_OIL_H_
#define LL_STD_APP_OIL_H_

////////////////////////////////////////////////////////////////////////////////

#include "app_oil_types.h"

#include "s12x.h"
#include "common_types.h"
#include "task.h"
#include "isr.h"
#include "scheduler.h"

////////////////////////////////////////////////////////////////////////////////

extern OIL_UINT8 OIL_OS_COUNT ;
extern OIL_OS_TYPE *oil_os_ref_list[];

extern OIL_UINT8 OIL_APPMODE_COUNT ;
extern OIL_APPMODE_TYPE *oil_appmode_ref_list[];

extern OIL_UINT8 OIL_TASK_COUNT ;
extern OIL_TASK_TYPE *oil_task_ref_list[];

extern OIL_UINT8 OIL_ISR_COUNT ;
extern OIL_ISR_TYPE *oil_isr_ref_list[];

extern OIL_UINT8 OIL_COUNTER_COUNT ;
extern OIL_COUNTER_TYPE *oil_counter_ref_list[];

extern OIL_UINT8 OIL_ALARM_COUNT ;
extern OIL_ALARM_TYPE *oil_alarm_ref_list[];

extern OIL_UINT8 OIL_RESOURCE_COUNT ;
extern OIL_RESOURCE_TYPE * oil_resource_ref_list[];

extern OIL_UINT8 OIL_EVENT_COUNT ;
extern OIL_EVENT_TYPE *oil_event_ref_list[];

////////////////////////////////////////////////////////////////////////////////

extern CounterType  SYSTEM_COUNTER ;
extern ResourceType RES_SCHEDULER ;
extern AppModeType  OSDEFAULTAPPMODE ;

extern OIL_UINT8    OIL_PRIORITY_COUNT ;
extern OIL_UINT8    OIL_PRIORITY_SIZE[] ;   // 프라이오리티 갯수만큼
extern OIL_UINT32   *oil_priorityQ_ref_list[] ;

extern OIL_UINT8    READYQ_QUEUE_SIZE ;
extern OIL_UINT8    ISR_START_PRIORITY ;

////////////////////////////////////////////////////////////////////////////////

extern OIL_BOOLEAN OS_USE_START_UP_HOOK ;
extern OIL_BOOLEAN OS_USE_SHUT_DOWN_HOOK ;
extern OIL_BOOLEAN OS_USE_ERROR_HOOK ;
extern OIL_BOOLEAN OS_USE_PRE_TASK_HOOK ;
extern OIL_BOOLEAN OS_USE_POST_TASK_HOOK ;

extern OIL_BOOLEAN OS_USE_GET_SERVICE_ID ;
extern OIL_BOOLEAN OS_USE_PARAMETER_ACCESS ;
extern OIL_BOOLEAN OS_USE_RES_SCHEDULER ;

extern OIL_ENUM_OS_STATUS OS_ERROR_STATUS ;

// ASP OPITONAL ATTRIBUTES

extern OIL_BOOLEAN OS_USE_STACK_SHARE ;
extern OIL_BOOLEAN OS_USE_STACK_CHECK ;
extern OIL_BOOLEAN OS_ORTI_DEBUG_SUPPORT ;

extern OIL_ENUM_OS_CC OS_CC ;
extern OIL_BOOLEAN OS_USE_MULTI_ACTIVATION;
extern OIL_BOOLEAN OS_USE_EXTENDED_TASK ;

extern OIL_ENUM_OS_SCHEDULETYPE  OS_SCHEDULETYPE ;
extern OIL_ENUM_OS_QMETHOD       OS_QMETHOD ;

/*---------------blue : insert--------------------------------------*/
extern volatile KRT_CONTEXT            context_cb[];
extern volatile KRT_STACK              stack_cb[];
extern volatile KRT_FN_POINTER         entry_cb[];

extern volatile KRT_COMMON_STATIC_CB   static_common_cb[];
extern volatile KRT_COMMON_DYNAMIC_CB  dynamic_common_cb[];

extern volatile KRT_TASK_CB            task_table[];

/* if isr is exist*/
extern volatile KRT_ISR_CB             isr_table[];

extern volatile KRT_READY_TASK_Q       ready_task_Q[];
/*-----------------------------------------------------*/

////////////////////////////////////////////////////////////////////////////////


#endif /* LL_STD_APP_OIL_H_ */
