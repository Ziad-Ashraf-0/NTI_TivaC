
/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file    : SysTick_prg.c
*  breif   : SysTick  Driver
*  details :
*****************************************************************
*
*/
/******************************************
  INCLUDES
*******************************************/
#include "Mcu_HW.h"
#include "Std_Types.h"
#include "SysTick_Types.h"
#include "SysTick_int.h"

/******************************************
  Local Macros / Functions
*******************************************/

/******************************************
  Local Data
*******************************************/

/******************************************
  Global Data
*******************************************/
extern const SysTick_ConfigType SysTick_Config_Arr[SYSTICK_CONFIG_ARR_SIZE];

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
  Syntax: Systick_Init

  Description: Initialize the Systick timer and configure the clock source.

  Synchronous/Asynchronous: Synchronous
  Reentrance: Reentrant
  Parameters (In): clockSource - The clock source for the Systick timer (PIOCS_4 or FCPU).
  Parameters (Out): N/A
   Return Value: void
******************************************/
void Systick_Init(const SysTick_ConfigType *ConfigPtr)
{

    if (ConfigPtr == NULL)
    {
        // TODO: Report Error
    }
    else
    {
        u8 i;

        for (i = 0; i < SYSTICK_CONFIG_ARR_SIZE; i++)
        {
            // Set the clock source
            if (ConfigPtr[i].Clock_src == FCPU)
            {
                STCTRL_REG |= (1 << 2); // Set the CLK_SRC bit for FCPU
            }
            else
            {
                STCTRL_REG &= ~(1 << 2); // Clear the CLK_SRC bit for PIOCS_4
            }
        }
    }
}

/******************************************
  Syntax: Systick_startTimer

  Description: Start the Systick timer with a specified count.

  Synchronous/Asynchronous: Synchronous
  Reentrance: Reentrant
  Parameters (In): count - The value to load into the Systick reload register.
  Parameters (Out): N/A
  Return Value: void
******************************************/
void Systick_startTimer(u32 count)
{
    // Set the reload value
    STRELOAD_REG = count;

    // Enable Systick timer
    STCTRL_REG |= (1 << 0) ;
}


/******************************************
  Syntax: Systick_stopTimer

  Description: Stop the Systick timer.

  Synchronous/Asynchronous: Synchronous
  Reentrance: Reentrant
  Parameters (In): N/A
  Parameters (Out): N/A
  Return Value: void
******************************************/

void Systick_stopTimer()
{
    // Disable Systick timer
    STCTRL_REG &= ~(1 << 0);
}

/******************************************
  Syntax: Systick_setCallBack

  Description: Set the callback function to be executed by the Systick interrupt handler.

  Synchronous/Asynchronous: Synchronous
  Reentrance: Reentrant
  Parameters (In): ptrfn - A pointer to the callback function.
  Parameters (Out): N/A
  Return Value: void
******************************************/
// Callback function to be executed by the Systick interrupt handler
void (*SystickCallback)(void) = NULL; // Initialize to NULL

// Function to set the Systick callback function
void Systick_setCallBack(void (*ptrfn)(void))
{
    SystickCallback = ptrfn;
}


/******************************************
  Syntax: SysTick_Handler

  Description: Systick interrupt handler that calls the registered callback function.

  Synchronous/Asynchronous: Synchronous
  Reentrance: Reentrant
  Parameters (In): N/A
  Parameters (Out): N/A
  Return Value: void
******************************************/
// Systick interrupt handler
void SysTick_Handler(void)
{
    // Check if a callback function is registered
    if (SystickCallback != NULL)
    {
        SystickCallback();
    }
}
