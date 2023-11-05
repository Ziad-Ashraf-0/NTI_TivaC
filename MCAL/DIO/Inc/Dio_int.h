/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Dio_int.h
*  Module   : DIO 
*  breif    : header file DIO
*  
*****************************************************************   
*/
#ifndef DIO_H
#define DIO_H
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"
#include "Dio_types.h"

/******************************************
  GLOBAL CONSTANT MACROS   
*******************************************/


/******************************************
  GLOBAL FUNCTIONS MACROS 
*******************************************/


/******************************************
  GLOBAL DATA TYPES AND STRUCTURES
*******************************************/

/******************************************
  GLOBAL DATA PROTOTYPES
*******************************************/

/******************************************
   GLOBAL FUNCTIONS PROTOTYPES
*******************************************/

/******************************************
  syntax : 
  
  Description :    
				
  Synch/Asynch     : 
  Reentrance       :  
  parameters (out) : 
  Return Value     :      
******************************************/
// write function prototype here 

/******************************************
  syntax : Dio_WriteChannel
  
  Description :  this fn write high or low on selected pin 
				
  Synch/Asynch     : Synchrounse 
  Reentrance       : Reentrant
  parameters (in)  : channelID which is selected pin , level which is high or low
  parameters (out) : N/A 
  Return Value     : void   
******************************************/
// write function prototype here 
void Dio_WriteChannel(Dio_ChannelType channelID ,Dio_LevelType level );
/******************************************
  syntax : Dio_ReadChannel
  
  Description :   this fn is used to read selected pin value
				
  Synch/Asynch     : Synchrounse 
  Reentrance       : Reentrant
  parameters (in)  :  channelID which is selected pin
  parameters (out) :  *plevel which holds read value of th pin  
  Return Value     :   void   
******************************************/
void Dio_ReadChannel(Dio_ChannelType channelID ,Dio_LevelType *plevel);
/******************************************
  syntax : 
  
  Description :   
				
  Synch/Asynch     : Synchrounse 
  Reentrance       : Reentrant
  parameters (in)  : 
  parameters (out) : 
  Return Value     :     
******************************************/
void Dio_WritePort(Dio_PortType portID ,Dio_PortLevelType level );
/******************************************
  syntax : 
  
  Description :   
				
  Synch/Asynch     : Synchrounse 
  Reentrance       : Reentrant
  parameters (in)  : 
  parameters (out) : 
  Return Value     :     
******************************************/
void Dio_ReadPort(Dio_PortType portID ,Dio_PortLevelType *plevel);
/******************************************
  syntax : 
  
  Description :   
				
  Synch/Asynch     : Synchrounse 
  Reentrance       : Reentrant
  parameters (in)  : 
  parameters (out) : 
  Return Value     :     
******************************************/
void Dio_TogChannel(Dio_ChannelType channelID);
#endif
