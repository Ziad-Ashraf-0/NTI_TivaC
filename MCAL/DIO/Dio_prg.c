
/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file    : Dio_prg.c
*  breif   : Dio Driver
*  details :
*****************************************************************
*
*/
/******************************************
  INCLUDES
*******************************************/
#include "BitMath.h"
#include "Dio_int.h"
#include "Mcu_HW.h"
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

/******************************************
  Local Functions
*******************************************/

/******************************************
  Global Functions
*******************************************/

// write function prototype here
void Dio_WriteChannel(Dio_ChannelType channelID, Dio_LevelType level)
{
    u8 Local_u8port = channelID / 10;
    u8 Local_u8pin = channelID % 10;
    switch (level)
    {
    case DIO_HIGH: // SET
        switch (Local_u8port)
        {
        case DIO_PORTA:
            SET_BIT(GPIO_PORTA_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        case DIO_PORTB:
            SET_BIT(GPIO_PORTB_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        case DIO_PORTC:
            SET_BIT(GPIO_PORTC_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        case DIO_PORTD:
            SET_BIT(GPIO_PORTD_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        case DIO_PORTE:
            SET_BIT(GPIO_PORTE_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        case DIO_PORTF:
            SET_BIT(GPIO_PORTF_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        }
        break;
    case DIO_LOW: // CLR
        switch (Local_u8port)
        {
        case DIO_PORTA:
            CLR_BIT(GPIO_PORTA_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        case DIO_PORTB:
            CLR_BIT(GPIO_PORTB_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        case DIO_PORTC:
            CLR_BIT(GPIO_PORTC_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        case DIO_PORTD:
            CLR_BIT(GPIO_PORTD_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        case DIO_PORTE:
            CLR_BIT(GPIO_PORTE_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        case DIO_PORTF:
            CLR_BIT(GPIO_PORTF_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
            break;
        }
        break;
    }
}

void Dio_ReadChannel(Dio_ChannelType channelID, Dio_LevelType *plevel)
{
    u8 Local_u8port = channelID / 10;
    u8 Local_u8pin = channelID % 10;
    switch (Local_u8port)
    {
    case DIO_PORTA:
        *plevel = GET_BIT(GPIO_PORTA_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    case DIO_PORTB:
        *plevel = GET_BIT(GPIO_PORTB_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    case DIO_PORTC:
        *plevel = GET_BIT(GPIO_PORTC_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    case DIO_PORTD:
        *plevel = GET_BIT(GPIO_PORTD_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    case DIO_PORTE:
        *plevel = GET_BIT(GPIO_PORTE_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    case DIO_PORTF:
        *plevel = GET_BIT(GPIO_PORTF_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    }
}

void Dio_WritePort(Dio_PortType portID, Dio_PortLevelType level)
{
    switch (portID)
    {
    case DIO_PORTA:
        GPIO_PORTA_BASE_ADDRESS->GPIODATA_REG = level;
        break;
    case DIO_PORTB:
        GPIO_PORTB_BASE_ADDRESS->GPIODATA_REG = level;
        break;
    case DIO_PORTC:
        GPIO_PORTC_BASE_ADDRESS->GPIODATA_REG = level;
        break;
    case DIO_PORTD:
        GPIO_PORTD_BASE_ADDRESS->GPIODATA_REG = level;
        break;
    case DIO_PORTE:
        GPIO_PORTE_BASE_ADDRESS->GPIODATA_REG = level;
        break;
    case DIO_PORTF:
        GPIO_PORTF_BASE_ADDRESS->GPIODATA_REG = level;
        break;
    }
}

void Dio_ReadPort(Dio_PortType portID, Dio_PortLevelType *plevel)
{
    switch (portID)
    {
    case DIO_PORTA:
        *plevel = GPIO_PORTA_BASE_ADDRESS->GPIODATA_REG;
        break;
    case DIO_PORTB:
        *plevel = GPIO_PORTB_BASE_ADDRESS->GPIODATA_REG;
        break;
    case DIO_PORTC:
        *plevel = GPIO_PORTC_BASE_ADDRESS->GPIODATA_REG;
        break;
    case DIO_PORTD:
        *plevel = GPIO_PORTD_BASE_ADDRESS->GPIODATA_REG;
        break;
    case DIO_PORTE:
        *plevel = GPIO_PORTE_BASE_ADDRESS->GPIODATA_REG;
        break;
    case DIO_PORTF:
        *plevel = GPIO_PORTF_BASE_ADDRESS->GPIODATA_REG;
        break;
    }
}

void Dio_TogChannel(Dio_ChannelType channelID)
{
    u8 Local_u8port = channelID / 10;
    u8 Local_u8pin = channelID % 10;
    switch (Local_u8port)
    {
    case DIO_PORTA:
        TOG_BIT(GPIO_PORTA_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    case DIO_PORTB:
        TOG_BIT(GPIO_PORTB_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    case DIO_PORTC:
        TOG_BIT(GPIO_PORTC_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    case DIO_PORTD:
        TOG_BIT(GPIO_PORTD_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    case DIO_PORTE:
        TOG_BIT(GPIO_PORTE_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    case DIO_PORTF:
        TOG_BIT(GPIO_PORTF_BASE_ADDRESS->GPIODATA_REG, Local_u8pin);
        break;
    }
}
