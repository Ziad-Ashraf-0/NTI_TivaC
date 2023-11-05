/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Button.h
*  Module   : BUTTON 
*  breif    : header file BUTTON
*  
*****************************************************************   
*/
#ifndef BUTTON_H
#define BUTTON_H
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"
#include "Button_Types.h"
#include "Button_Cfg.h"

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
   syntax :  void Button_read(Button_t* copy_pAButtonConfig ,u8 ButtonID,u8* copy_pState  );
  
  Description : read the Button state   
				
  Synch/Asynch     : Synchronouse
  Reentrance       : non Reentrant 
  parameters (in)  : copy_pAButtonConfig is pointer to Config Array of Button_t , ButtonID
  parameters (out) : Button state
  Return Value     : void
******************************************/
 void Button_read(const Button_ConfigType* copy_pAButtonConfig ,u8 ButtonID,u8* copy_pState);
#endif
