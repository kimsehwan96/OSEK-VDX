#ifndef OIL_TYPES_H_
#define OIL_TYPES_H_

#include "osek_os_types.h"
#include "platform_types.h"

//#include "isr.h"
#include "compiler.h"  /* 090714 ljw : to parse __interrupt */

#include "param_type_definition.h"

/* Primary Types */
typedef BOOL               OIL_BOOLEAN ;
typedef UINT8              OIL_UINT8 ;
typedef SINT8              OIL_INT8 ;
typedef UINT16             OIL_UINT16 ;
typedef SINT16             OIL_INT16 ;
typedef UINT32             OIL_UINT32 ;
typedef SINT32             OIL_INT32 ;
typedef UINT64             OIL_UINT64 ;
typedef FLOAT32            OIL_FLOAT ;
typedef char             * OIL_STRING ;
typedef void             * OIL_CNAB_REF ;

#define OIL_ENUM           enum

#define obTRUE              (1)
#define obFALSE             (0)


/* Supplementary types missing in OSEK 223  */
typedef UINT8             CounterType ;
typedef UINT8             EventType ;          // not in osek223    */
/* typedef UINT32             ISRType ;            // not in osek223, but in osek_os_types.h   */
typedef UINT8             MessageType ;
typedef UINT8             NetworkMessageType ;

/* Explicit ID Types   */
typedef TaskType           OIL_TASK_ID ;
typedef AppModeType        OIL_APPMODE_ID ;
typedef CounterType        OIL_COUNTER_ID ;
typedef ISRType            OIL_ISR_ID   ;
typedef EventType          OIL_EVENT_ID ;
typedef EventMaskType      OIL_EVENT_MASK ;
typedef MessageType        OIL_MESSAGE_ID ;
typedef ResourceType       OIL_RESOURCE_ID ;
typedef NetworkMessageType OIL_NETWORKMESSAGE_ID ;
typedef UINT32             OIL_IPDU_ID ;


/**
 * @def TASK
 *
 * macro function for task declaration
 *
 */

/* TASK - basic macro       */
#define TASK_CNAME(name) _task_fn_##name
#define CALL_TASK_CNAME(name)  TASK_CNAME(name)
#define TASK(name)  void TASK_CNAME(name)(void)

/* TASK - attr tranlation    */
typedef  void OIL_TASKFUNC(void) ;
typedef  OIL_TASKFUNC * OIL_TASKFUNC_REF ;
#define  OIL_DECLARE_TASKFUNC(name) extern TASK(name)

/**
* @def ISR(name)
*
* macro function for ISR oil object
*
*/

/* basic macro    */
#define ISR_CNAME(name) _isr_fn_##name
#define CALL_ISR_CNAME(name)  ISR_CNAME(name)
#define CAT1_ISR_BODY_CNAME(name) _cat1body_##name
#define CALL_CAT1_ISR_BODY_CNAME(name)  CAT1_ISR_BODY_CNAME(name)
#define CAT2_ISR_BODY_CNAME(name) _cat2body_##name
#define CALL_CAT2_ISR_BODY_CNAME(name)  CAT2_ISR_BODY_CNAME(name)
#define ISR(name)  void ISR_CNAME(name)(void)

/* ISR - object translation     */
#define CAT1_ISR_HANDLER_CNAME(name)                      _cat1prolog_##name
#define OIL_DECLARE_ISR_CAT1PROLOG(name) __interrupt void CAT1_ISR_HANDLER_CNAME(name)(void)
#define OIL_DECLARE_ISR_CAT1BODY(name)   void CAT1_ISR_BODY_CNAME(name)(void)

#define CAT2_ISR_HANDLER_CNAME(name)                      _cat2prolog_##name
#define OIL_DECLARE_ISR_CAT2PROLOG(name) __interrupt void CAT2_ISR_HANDLER_CNAME(name)(void)
#define OIL_DECLARE_ISR_CAT2BODY(name)   void CAT2_ISR_BODY_CNAME(name)(void)

#define OIL_DEFINE_ISR_CAT1PROLOG(name)                                        \
__interrupt void CAT1_ISR_HANDLER_CNAME(name) (void)                           \
{                                                                              \
    CALL_ISR_CNAME(name)();                                                    \
}                                                                              \

#define OIL_DEFINE_ISR_CAT1BODY(name)                                          \
void CAT1_ISR_BODY_CNAME(name) (void)                                          \
{                                                                              \
    CALL_ISR_CNAME(name)();                                                    \
    terminate_isr();                                                           \
}                                                                              \


#define OIL_DEFINE_ISR_CAT2PROLOG(name)                                        \
__interrupt void CAT2_ISR_HANDLER_CNAME(name) (void)                           \
{                                                                              \
    os_isr_cat_2_handler((const ISRType)name);                                 \
}                                                                              \

#define OIL_DEFINE_ISR_CAT2BODY(name)                                          \
void CAT2_ISR_BODY_CNAME(name) (void)                                          \
{                                                                              \
    CALL_ISR_CNAME(name)();                                                    \
    terminate_isr();                                                           \
}                                                                              \


/* ISR - ref attr translation    */
typedef  void OIL_ISRFUNC(void) ;
typedef  OIL_ISRFUNC * OIL_ISRFUNC_REF ;
#define  OIL_DECLARE_ISRFUNC(name) extern ISR(name)


/**
 * @def ALARMCALLBACK(name)
 *
 * macro function to support alarmcallback
 *
 */


/* ALARMCALLBACK - basic macro     */
#define ALARMCALLBACK_CNAME(name) _acb_##name
#define ALARMCALLBACK(name) void ALARMCALLBACK_CNAME(name) (void)
#define CALL_ALARMCALLBACK(name) ALARMCALLBACK_CNAME(name)()


/* ALARMCALLBACK - ref attr translation      */
typedef void OIL_ALARMCALLBACK(void) ;
typedef OIL_ALARMCALLBACK *OIL_ALARMCALLBACK_FREF ;
#define OIL_DECLARE_ALARMCALLBACK(name) extern ALARMCALLBACK(name)



/**
 * @def COMCALLBACK(name)
 *
 * macro function to support comcallback
 *
 */

/* COMCALLBACK - basic macro     */
#define COMCALLBACK_CNAME(name) _ccb_##name
#define COMCallback(name) void COMCALLBACK_CNAME(name) (void)
#define CALL_COMCALLBACK(name) COMCALLBACK_CNAME(name)()

/*  COMCALLBACK - ref attr translation
*    used in:
*       cnab(Message.Notification@COMCALLBACK).callbackroutinename
*       cnab(Message.NotificationError@COMCALLBACK).callbackroutinename
*    name is the value string value of attr CALLBACKROUTINENAME
*/
typedef void OIL_COMCALLBACK(void);
typedef OIL_COMCALLBACK *OIL_COMCALLBACK_FREF;
#define OIL_DECALRE_COMCALLBACK(name) extern COMCALLBACK(name)


/**
 * @def COMFLAG
 *
 * macro function to support com flag ((Message.Notification@Flag).flagname)
 *
 */

/* COMFLAG - basic macro     */
#define COMFLAG_CNAME(name)  __osekcomflag_##name // C identifier generation
#define COMFLAG(name)      UINT8 COMFLAG_CNAME(name) // body definition maker
#define GET_COMFLAG(name) COMFLAG_CNAME(name)
#define SET_COMFLAG(name,value); { COMFLAG_CNAME(name) = (value); }

/* COMFLAG - attribute translation
*   used in:
*      cnab(Message.Notification@FLAG).flagname
*      cnab(Message.NotificationError@FLAG).flagname
*   name is the value string of attr FLAGNAME.
*/
typedef void OIL_COMFLAG(void) ;
typedef OIL_COMFLAG *OIL_COMFLAG_FREF ;
#define OIL_DECALRE_COMFLAG(name) extern COMFLAG(name)

/**
 * @def COMCALLOUT
 *
 * macro function for COM callout declaration
 *
 */

/* COMCALLOUT - basic macro     */
#define COMCALLOUT_CNAME(CalloutRoutineName) _cco_##CalloutRoutineName
#define COMCallout(CalloutRoutineName) CalloutReturnType COMCALLOUT_CNAME(CalloutRoutineName)(void)
#define CALL_COMCALLOUT(CalloutRoutineName) COMCALLOUT_CNAME(CalloutRoutineName)()

typedef CalloutReturnType OIL_COMCALLOUT(void) ;
typedef OIL_COMCALLOUT *OIL_COMCALLOUT_FREF ;
#define OIL_DECALRE_COMCALLOUT(CalloutRoutineName) extern COMCALLOUT(CalloutRoutineName)

#endif /* OIL_TYPES_H_ */


