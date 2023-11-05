/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Led.h
*  Module   : LED 
*  breif    : header file LED
*  
*****************************************************************   
*/
#ifndef LED_H
#define LED_H
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"
#include "Dio_int.h"
#include "Led_Types.h"
#include "Led_Cfg.h"

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
  syntax : void Led_TurnON(Led_IDtype   LedID);
  
  Description : Turn ON LEd   
				
  Synch/Asynch     : Synchronouse
  Reentrance       : Reentrant 
  parameters (in)  :  LedID 
  parameters (out) :  Non
  Return Value     : void    
******************************************/
void Led_TurnON(Led_IDtype   LedID);


/******************************************
  syntax : void Led_TurnOFF(Led_IDtype   LedID);
  
  Description : Turn OFF LEd   
				
  Synch/Asynch     : Synchronouse
  Reentrance       : Reentrant 
  parameters (in)  :  LedID 
  parameters (out) :  Non
  Return Value     : void    
******************************************/
void Led_TurnOFF(Led_IDtype   LedID);

/******************************************
  syntax : void Led_Toggle(Led_IDtype   LedID);
  
  Description :Toggle LEd   
				
  Synch/Asynch     : Synchronouse
  Reentrance       : Reentrant 
  parameters (in)  :  LedID 
  parameters (out) :  Non
  Return Value     : void    
******************************************/
void Led_Toggle(Led_IDtype   LedID);

#endif
