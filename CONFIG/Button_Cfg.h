/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Button_Cfg.h
*  Module   : BUTTON
*  breif    : Config file for BUTTON
*  
*****************************************************************   
*/
#ifndef BUTTON_CFG_H
#define BUTTON_CFG_H
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"

/******************************************
  GLOBAL CONSTANT MACROS   
*******************************************/


#define BUTTON_CONFIG_ARR_SIZE   2




/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/

/******************************************
  Global Data TYPES AND STRUCTURES 
*******************************************/

/*
 * choose the following :
 * Button_ID              ->       1,2...
 * Button_channelId       ->       PF0,PF1.....etc
 * Button_ActiveMode      ->       ACTIVE_HIGH ,ACTIVE_LOW
 */
typedef struct
{
	u8 Button_ID;
	u8 Button_channelId;
	u8 Button_ActiveMode;
}Button_ConfigType;
#endif
