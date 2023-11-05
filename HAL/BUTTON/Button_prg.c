
/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file    : Button.c
*  breif   : Button  Driver
*  details : 
*****************************************************************   
*
*/
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"
#include "Dio_int.h"
#include "Button_int.h"
#include "Button_Types.h"

/******************************************
  Local Macros / Functions  
*******************************************/


/******************************************
  Local Data 
*******************************************/



/******************************************
  Global Data 
*******************************************/
extern const Button_ConfigType Button_Config_Arr[BUTTON_CONFIG_ARR_SIZE];


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
  syntax :  void Button_read(Button_t* copy_pAButtonConfig ,u8 ButtonID,u8* copy_pState  );
  
  Description : read the Button state   
				
  Synch/Asynch     : Synchronouse
  Reentrance       : non Reentrant 
  parameters (in)  : copy_pAButtonConfig is pointer to Config Array of Button_t , ButtonID
  parameters (out) : Button state
  Return Value     : void    
******************************************/

 void Button_read(const Button_ConfigType* copy_pAButtonConfig ,u8 ButtonID,u8* copy_pState)
{
   if (ButtonID > 0 && ButtonID <= BUTTON_CONFIG_ARR_SIZE)
    {
        // Read the state of the button using Dio_ReadChannel
        Dio_LevelType buttonState;
        Dio_ReadChannel(copy_pAButtonConfig[ButtonID - 1].Button_channelId, &buttonState);

        if (copy_pAButtonConfig[ButtonID - 1].Button_ActiveMode == ACTIVE_HIGH)
        {
            // Check if the button is pressed (active high)
            *copy_pState = (buttonState == DIO_HIGH) ? Button_ACTIVE_HIGH_PRESSED : Button_ACTIVE_HIGH_REALESED;
        }
        else
        {
            // Check if the button is pressed (active low)
            *copy_pState = (buttonState == DIO_LOW) ? Button_ACTIVE_LOW_PRESSED : Button_ACTIVE_LOW_REALESED;
        }
    }
	
}

