/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Led_Lcfg.c
*  Module   : LED
*  breif    : Config file for LED Driver
*
*****************************************************************
*/
/******************************************
  INCLUDES
*******************************************/
#include "Dio_int.h"
#include "Led_Cfg.h"
#include "Led_Types.h"
#include "Std_Types.h"

/******************************************
  Local Macros / Functions
*******************************************/

/******************************************
  Local Data
*******************************************/

/******************************************
  Global Data
*******************************************/

const Led_Configtype Led_Config_Arr[LED_CONFIG_ARR_SIZE] = {
    {RED_LED, DIO_PF1, LED_ACTIVE_HIGH}, {BLUE_LED, DIO_PF2, LED_ACTIVE_HIGH}, {GRN_LED, DIO_PF3, LED_ACTIVE_HIGH}};
