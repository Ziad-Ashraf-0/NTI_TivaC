/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : SysTick_int.h
*  Module   : SYSTICK 
*  breif    : header file SYSTICK
*  
*****************************************************************   
*/
#ifndef SYSTICK_H
#define SYSTICK_H
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"
#include "SysTick_Types.h"
#include "SysTick_Cfg.h"

/******************************************
  GLOBAL CONSTANT MACROS   
*******************************************/


/******************************************
  GLOBAL FUNCTIONS MACROS 
*******************************************/


/******************************************
  GLOBAL DATA TYPES AND STRUCTURES
*******************************************/

/******************************************
  GLOBAL DATA PROTOTYPES
*******************************************/

/******************************************
   GLOBAL FUNCTIONS PROTOTYPES
*******************************************/

/******************************************
  syntax : 
  
  Description :    
				
  Synch/Asynch     : 
  Reentrance       :  
  parameters (out) : 
  Return Value     :      
******************************************/
// write function prototype here 

/******************************************
  Syntax: Systick_Init

  Description: Initialize the Systick timer and configure the clock source.

  Synchronous/Asynchronous: Synchronous
  Reentrance: Reentrant
  Parameters (In): clockSource - The clock source for the Systick timer (PIOCS_4 or FCPU).
  Parameters (Out): N/A
   Return Value: void
******************************************/
void Systick_Init(const SysTick_ConfigType *ConfigPtr);

/******************************************
  Syntax: Systick_startTimer

  Description: Start the Systick timer with a specified count.

  Synchronous/Asynchronous: Synchronous
  Reentrance: Reentrant
  Parameters (In): count - The value to load into the Systick reload register.
  Parameters (Out): N/A
  Return Value: void
******************************************/
void Systick_startTimer(u32 count);

/******************************************
  Syntax: Systick_stopTimer

  Description: Stop the Systick timer.

  Synchronous/Asynchronous: Synchronous
  Reentrance: Reentrant
  Parameters (In): N/A
  Parameters (Out): N/A
  Return Value: void
******************************************/
void Systick_stopTimer();


/******************************************
  Syntax: Systick_setCallBack

  Description: Set the callback function to be executed by the Systick interrupt handler.

  Synchronous/Asynchronous: Synchronous
  Reentrance: Reentrant
  Parameters (In): ptrfn - A pointer to the callback function.
  Parameters (Out): N/A
  Return Value: void
******************************************/
void Systick_setCallBack(void (*ptrfn)(void));

#endif
