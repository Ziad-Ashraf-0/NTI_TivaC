/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Led_Types.h
*  Module   : LED 
*  breif    : contains types
*  
*****************************************************************   
*/
#ifndef LED_TYPES_H
#define LED_TYPES_H
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"

/******************************************
  GLOBAL CONSTANT MACROS   
*******************************************/


/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/

/******************************************
  Global Data TYPES AND STRUCTURES 
*******************************************/
typedef enum{
	RED_LED = 1,
	BLUE_LED,
	GRN_LED
}Led_IDtype;

typedef enum{
	 LED_ACTIVE_LOW, LED_ACTIVE_HIGH
}Led_ActiveType;

#endif
