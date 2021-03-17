/*
 * Compiler.h
 *
 *  Created on: 2009. 4. 27
 *      Author: user
 */

#ifndef COMPILER_H_
#define COMPILER_H_
/*******************************************************************************
* Includes
*******************************************************************************/

/*******************************************************************************
* Constants
*******************************************************************************/
/* File version information */
#define COMPILER_MAJOR_VERSION     1
#define COMPILER_MINOR_VERSION     0
#define COMPILER_PATCH_VERSION     0

#ifdef GCC_COMPILER				/*Compiler specific settings			  */
    #define __interrupt __attribute__((interrupt, section(".non_bank")))
    #define	_NOP __asm("nop")
	#define _CLI __asm("cli")      // EnableInterrupts
	#define _SEI __asm("sei")      // DisableInterrupts
	#define _ANDCC __asm ("ANDCC #127")      
	#define _STOP __asm ("stop")     
#endif

#ifdef CODEWARRIOR_COMPILER
	#define	_NOP {__asm NOP;}
	#define _CLI {__asm CLI;}      // EnableInterrupts
	#define _SEI {__asm SEI;}      // DisableInterrupts
	#define _ANDCC  {__asm ANDCC #127;}      
	#define _STOP   {__asm STOP;}        
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

#endif /* COMPILER_H */
