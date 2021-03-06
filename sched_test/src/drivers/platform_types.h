/*
 * Platform_Types.h
 *
 *  Created on: 2009. 4. 27
 *      Author: user
 */

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H
/*******************************************************************************
* Includes
*******************************************************************************/
#ifdef MCUPKG_EP100
#include "s12xep100.h"
#endif /* MCUPKG_EP100 */
#ifdef MCUPKG_F512
#include "s12xf512.h"
#endif /* MCUPKG_F512 */

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define PLATFORM_MAJOR_VERSION     1
#define PLATFORM_MINOR_VERSION     0
#define PLATFORM_PATCH_VERSION     0

/*******************************************************************************
* Types
*******************************************************************************/
typedef signed char         SINT8;          /*        -128 .. +127            */
typedef unsigned char       UINT8;          /*           0 .. 255             */
typedef signed short        SINT16;         /*      -32768 .. +32767          */
typedef unsigned short      UINT16;         /*           0 .. 65535           */
typedef signed long         SINT32;         /* -2147483648 .. +2147483647     */
typedef unsigned long       UINT32;         /*           0 .. 4294967295      */
typedef signed long long    SINT64;         /* ??????????????????????    */
typedef unsigned long long  UINT64 ;        /* event module requires          */
typedef float               FLOAT32;
typedef double              FLOAT64;

typedef unsigned char       UINT8_LEAST;    /* At least 8 bit                 */
typedef unsigned short      UINT16_LEAST;   /* At least 16 bit                */
typedef unsigned long       UINT32_LEAST;   /* At least 32 bit                */
typedef signed char         SINT8_LEAST;    /* At least 7 bit + 1 bit sign    */
typedef signed short        SINT16_LEAST;   /* At least 15 bit + 1 bit sign   */
typedef signed long         SINT32_LEAST;   /* At least 31 bit + 1 bit sign   */

typedef unsigned char       BOOL;           /* for use with TRUE/FALSE        */   /* 0625 ljw : ???? - BOOL ?? cdwr ???? ???? ?????? BOOL ?? ???? ???????? ???? ???????? ???? ???????? ???? */

#if defined(__LARGE__)       /* large model*/
typedef UINT32      DATA_ADDR_TYPE;
typedef UINT32      FN_ADDR_TYPE;
#elif defined(__BANKED__)    /* banked model  */
typedef UINT16      DATA_ADDR_TYPE;
typedef UINT32      FN_ADDR_TYPE;
#elif defined(__SMALL__)     /* small model  */
typedef UINT16      DATA_ADDR_TYPE;
typedef UINT16      FN_ADDR_TYPE;
#endif

/* conditional check */
#ifndef TRUE
 #define TRUE      ((BOOL) 1)
 #define true      TRUE
#endif

/* conditional check */
#ifndef FALSE
 #define FALSE     ((BOOL) 0)
 #define false     FALSE
#endif

#ifndef NULL
 #define NULL     ((void *) 0)
 #define null NULL
#endif

/*******************************************************************************
* Types
*******************************************************************************/

/*******************************************************************************
* Global variables
*******************************************************************************/

/*******************************************************************************
* Global functions
*******************************************************************************/

/*******************************************************************************
* Inline functions
*******************************************************************************/

#endif /* PLATFORM_TYPES_H */
