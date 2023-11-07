/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : SysTick_Cfg.h
*  Module   : SYSTICK
*  breif    : Config file for SysTick
*  
*****************************************************************   
*/
#ifndef SYSTICK_CFG_H
#define SYSTICK_CFG_H
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"

/******************************************
  GLOBAL CONSTANT MACROS   
*******************************************/


#define SYSTICK_CONFIG_ARR_SIZE   1




/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/

/******************************************
  Global Data TYPES AND STRUCTURES 
*******************************************/

/*
 * choose the following :
 * Clock_src              ->       1,2...
 */
typedef struct
{
	u8 Clock_src;
}SysTick_ConfigType;
#endif
