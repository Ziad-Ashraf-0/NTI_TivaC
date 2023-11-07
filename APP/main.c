#define DELAY_VALUE 4000000
#include "Button_int.h"
#include "IntCtrl_int.h"
#include "Dio_int.h"
#include "Led_int.h"
#include "Port_int.h"
#include "SysTick_int.h"

// Function prototypes
void Delay(void);
void Toggle_LED(void);

// External configuration arrays
extern const Port_ConfigType PORT_Config_Arr[PORT_PINS_CONFIG_ARR_SIZE];
extern const Button_ConfigType Button_Config_Arr[BUTTON_CONFIG_ARR_SIZE];
extern const SysTick_ConfigType SysTick_Config_Arr[SYSTICK_CONFIG_ARR_SIZE];

// State machine variable
stateMachine g_state = START;

int main(void)
{
    // Initialize the interrupt controller
    IntCtrl_Init();

    // Set the SysTick callback function to Toggle_LED
    Systick_setCallBack(Toggle_LED);

    // Initialize the SysTick timer with the provided configurations
    Systick_Init(SysTick_Config_Arr);

    // Start the SysTick timer with a reload value of 1,000,000
    Systick_startTimer(1000000);

    // Initialize the ports based on the configuration array
    Port_Init(PORT_Config_Arr);

    // Set the initial state of the state machine
    g_state = LEDControlState;


    while (1)
    {

    }
}

// Function to introduce a delay
void Delay(void)
{
    volatile unsigned long i;
    for (i = 0; i < DELAY_VALUE; i++)
        ;
}

// Toggle the LED
void Toggle_LED(void)
{
    // Toggle the Green LED
    Led_Toggle(GRN_LED);
}
