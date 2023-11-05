/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Led_Cfg.h
*  Module   : LED
*  breif    : Config file for LED
*  
*****************************************************************   
*/
#ifndef LED_CFG_H
#define LED_CFG_H
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"
#include "Dio_int.h"
#include "Led_Types.h"
/******************************************
  GLOBAL CONSTANT MACROS   
*******************************************/


#define LED_CONFIG_ARR_SIZE   3




/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/

/******************************************
  Global Data TYPES AND STRUCTURES 
*******************************************/

/*
 * choose the following :
 * Led_IDtype          ->         RED_LED ,BLUE_LED,GRN_LED
 * Led_channelId       ->       DIO_PF0,DIO_PF1.....etc
 * Led_ActiveMode      ->       ACTIVE_HIGH ,ACTIVE_LOW
 */
typedef struct{
	Led_IDtype       Led_ID;
	Dio_ChannelType  Led_channelType;
	Led_ActiveType   Led_ActiveMode;
}Led_Configtype;
#endif
