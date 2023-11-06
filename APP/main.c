
#define DELAY_VALUE 4000000
#include "Button_int.h"
#include "Dio_int.h"
#include "Led_int.h"
#include "Port_int.h"

void Delay(void);

extern const Port_ConfigType PORT_Config_Arr[PORT_PINS_CONFIG_ARR_SIZE];
extern const Button_ConfigType Button_Config_Arr[BUTTON_CONFIG_ARR_SIZE];

stateMachine g_state = START;

int main(void)

{
		
	
    Port_Init(PORT_Config_Arr);
	
		g_state = LEDControlState;

    u8 buttonState;

    while (1)

    {

        // Test reading button 1 (assuming it's pressed)
        Button_read(Button_Config_Arr, 1, &buttonState);
        if (buttonState == Button_ACTIVE_LOW_PRESSED)
        {
            // Button 1 is pressed (active low)
            Led_Toggle(GRN_LED); // Turn on RED LED
        }
				
				Delay();


    }
}

void Delay(void)

{

    volatile unsigned long i;

    for (i = 0; i < DELAY_VALUE; i++)
        ;
}