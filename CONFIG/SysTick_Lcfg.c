/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : SysTick_Lcfg.c
*  Module   : SysTick 
*  breif    : Config file for SysTick
*  
*****************************************************************/  
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"
#include "SysTick_int.h"
#include "SysTick_Cfg.h"
/******************************************
  Local Macros / Functions  
*******************************************/


/******************************************
  Local Data 
*******************************************/

/******************************************
  Global Data 
*******************************************/

const SysTick_ConfigType SysTick_Config_Arr[SYSTICK_CONFIG_ARR_SIZE]= {{PIOSC_4}};