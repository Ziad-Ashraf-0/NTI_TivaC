/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Button_Types.h
*  Module   : BUTTON 
*  breif    : contains types
*  
*****************************************************************   
*/
#ifndef BUTTON_TYPES_H
#define BUTTON_TYPES_H
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"

/******************************************
  GLOBAL CONSTANT MACROS   
*******************************************/
#define ACTIVE_HIGH  1
#define ACTIVE_LOW   0



/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/

/******************************************
  Global Data TYPES AND STRUCTURES 
*******************************************/
typedef enum{
	Button_ACTIVE_LOW_PRESSED ,
 Button_ACTIVE_LOW_REALESED ,

 Button_ACTIVE_HIGH_REALESED = 0,
 Button_ACTIVE_HIGH_PRESSED 

}Button_ActiveMode_type;
#endif
