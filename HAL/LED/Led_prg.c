
/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file    : Led.c
*  breif   : Led  Driver
*  details : 
*****************************************************************   
*
*/
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"
#include "Led_int.h"


/******************************************
  Local Macros / Functions  
*******************************************/


/******************************************
  Local Data 
*******************************************/



/******************************************
  Global Data 
*******************************************/
extern const Led_Configtype Led_Config_Arr[LED_CONFIG_ARR_SIZE];


/******************************************
  Local Functions Prototypes
*******************************************/

/******************************************
  Local Functions 
*******************************************/


/******************************************
  Global Functions 
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
void Led_TurnON(Led_IDtype   LedID)
{
	 if (LedID > 0 && LedID <= LED_CONFIG_ARR_SIZE)
    {
        if (Led_Config_Arr[LedID - 1].Led_ActiveMode == LED_ACTIVE_HIGH)
        {
            // Turn on the LED (assuming you have a GPIO function)
            Dio_WriteChannel(Led_Config_Arr[LedID - 1].Led_channelType, DIO_HIGH);
        }
        else
        {
            // Turn on the LED with inverted logic
            Dio_WriteChannel(Led_Config_Arr[LedID - 1].Led_channelType, DIO_LOW);
        }
    }
}


/******************************************
  syntax : void Led_TurnOFF(Led_IDtype   LedID);
  
  Description : Turn OFF LEd   
				
  Synch/Asynch     : Synchronouse
  Reentrance       : Reentrant 
  parameters (in)  :  LedID 
  parameters (out) :  Non
  Return Value     : void    
******************************************/
void Led_TurnOFF(Led_IDtype   LedID)
{
	 if (LedID > 0 && LedID <= LED_CONFIG_ARR_SIZE)
    {
        if (Led_Config_Arr[LedID - 1].Led_ActiveMode == LED_ACTIVE_HIGH)
        {
            // Turn off the LED (assuming you have a GPIO function)
            Dio_WriteChannel(Led_Config_Arr[LedID - 1].Led_channelType, DIO_LOW);
        }
        else
        {
            // Turn off the LED with inverted logic
            Dio_WriteChannel(Led_Config_Arr[LedID - 1].Led_channelType, DIO_HIGH);
        }
    }
}


/******************************************
  syntax : void Led_Toggle(Led_IDtype   LedID);
  
  Description :Toggle LEd   
				
  Synch/Asynch     : Synchronouse
  Reentrance       : Reentrant 
  parameters (in)  :  LedID 
  parameters (out) :  Non
  Return Value     : void    
******************************************/
void Led_Toggle(Led_IDtype   LedID)
{
	if (LedID > 0 && LedID <= LED_CONFIG_ARR_SIZE)
    {
        // Toggle the state of the LED (assuming you have a GPIO function)
        Dio_TogChannel(Led_Config_Arr[LedID - 1].Led_channelType);
    }
}


