/*
 * resource.h
 *
 *  Created on: 2009. 6. 1
 *      Author: moondifafa
 */

#ifndef _RESOURCE_H_
#define _RESOURCE_H_

// Includes ////////////////////////////////////////////////////////////////////
#include "osek_os_api.h"
#include "machine.h"          /* MCU config */
#include "ll_std_app_oil.h"   /* interface to generated system module */

/* importing necessary modules */
#include "error.h"
#include "hook.h"
#include "are_taskutil.h"



// reference kerenl data block - core //////////////////////////////////////////
extern SYSTEM_SVC_BLK SystemSvcBlk ;


// interfacing System Generation Result(OIL 2.5) ///////////////////////////////
UINT8 KRT_INTRINSIC_RESOURCE_COUNT ;
UINT8 KRT_RESOURCE_COUNT ;
UINT8 KRT_RES_SCHEDULER_ID ;

/* llsg version : constant and symbol defs moved to init(resource.c) */

// osek data type to follow ////////////////////////////////////////////////////

// typedef UINT8 KRT_PRIORITY ;  already in common types.h
#define krtpriINVALID ((KRT_PRIORITY)(255))
#define krtpriTASKMIN ((KRT_PRIORITY)(1))
#define krtpriTASKMAX (OIL_PRIORITY_COUNT)
#define krtpriISRMIN  ((KRT_PRIORITY)(256))
#define krtpriISRMAX  ((KRT_PRIORITY)(511))

typedef ResourceType KRT_RESOURCE_ID ;
#define krtridINVALID ((KRT_RESOURCE_ID)0xFF)


// runtime kernel resource module data blcok - resource ////////////////////////

typedef struct KRT_RESOURCE_t{
    UINT8            type ;    /* enum : STANDARD, LINKED, INTERNAL */
    KRT_RESOURCE_ID  link_src ; /* link chain orign */

    UINT8            state ;   /* 0 Free, other occupied */
    KRT_TASK_ID      holder ;
    KRT_PRIORITY     clpri ;    /* ceiling pri */

    KRT_RESOURCE_ID  chain_prv ;
    KRT_PRIORITY     tskpri_sav ;

    void * chain_root ;
} KRT_RESOURCE;

// #define KRT_TASK_RESOURCE_ACC_BITPLAGS_SIZE  ((KRT_RESOURCE_COUNT-1)/8 + 1)
#define KRT_TASK_RESOURCE_ACC_BITPLAGS_SIZE  ((8-1)/8 + 1)

typedef struct KRT_TASK_RESOURCE_CB_t {

    /* bitmap of accessible resources for the task */
    UINT8           acc_bitflags[ KRT_TASK_RESOURCE_ACC_BITPLAGS_SIZE ] ;

    /* internal resources assigned to the task  */
    KRT_RESOURCE_ID int_res ;

    /* header for chain of resource held by the task*/
    UINT8           chain_size ;
    KRT_RESOURCE_ID chain_top ;
    KRT_RESOURCE_ID chain_base ;

} KRT_TASK_RESOURCE_CB ;


/* decl of kernel runtime data block(resource list + task-resouce cb list) */
extern KRT_RESOURCE          krt_resource_list [];
extern KRT_TASK_RESOURCE_CB  krt_tr_cb_list [] ;


// OSEK 2.2.3 Data types - already defined in osek_os_types.h //////////////////


// OSEK 2.2.3 - constructional elements ////////////////////////////////////////
//#define DeclareResource(ResourceName) extern const ResourceType ResourceName


// OSEK 2.2.3 api's ////////////////////////////////////////////////////////////
/* defined in osek_os_types.h */
/*
StatusType GetResource(ResourceType rid) ;
StatusType ReleaseResource(ResourceType rid) ;
*/

/* exports within OS modules */
BOOL AquireIntRes(KRT_TASK_ID tid);
BOOL ReleaseIntRes(KRT_TASK_ID tid);

// internal functions //////////////////////////////////////////////////////////
void resource_initialize(void);
KRT_PRIORITY resource_calc_clpri(KRT_RESOURCE_ID rid);


UINT8           resource_qry_held_res_cnt (KRT_TASK_ID tid) ;
KRT_RESOURCE_ID resource_qry_last_res     (KRT_TASK_ID tid) ;
KRT_RESOURCE_ID resource_qry_first_res    (KRT_TASK_ID tid) ;
KRT_RESOURCE_ID resource_qry_intres        (KRT_TASK_ID tid) ;
BOOL            resource_qry_if_intres_alone_held(KRT_TASK_ID tid) ;
BOOL            resource_qry_if_allresfree (KRT_TASK_ID tid) ;

KRT_TASK_ID     resource_qry_holder_tsk    (KRT_RESOURCE_ID rid) ;
BOOL            resource_qry_res_free (KRT_RESOURCE_ID rid) ;

#endif /* _RESOURCE_H_ */
