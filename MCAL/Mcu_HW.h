/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Mcu_HW.h
*   
*  breif    : this file contains all registers addresses 
*  
*****************************************************************   
*/
#ifndef MCU_HW_H
#define MCU_HW_H
/******************************************
  INCLUDES 
*******************************************/
#include "Std_Types.h"

/******************************************
  Global Data TYPES AND STRUCTURES 
*******************************************/
typedef struct{
	u32 GPIODATA_Group[255];// Data Registers
	u32 GPIODATA_REG;// data register
	u32 GPIODIR_REG; // direction register 
	u32 GPIOIS_REG;//Interrupt Sense
	u32 GPIOIBE_REG;//Interrupt both edges
	u32 GPIOIEV_REG;//Interrupt Event
	u32 GPIOIM_REG;//Interrupt Mask
	u32 GPIORIS_REG;//GPIO Raw Interrupt Status
	u32 GPIOMIS_REG;//GPIO Masked Interrupt Status
	u32 GPIOICR_REG;// GPIO Interrupt Clear
    u32 GPIOAFSEL_REG; //Alternate Function Select 
	u32 RESERVED1[55]; //Reserved
    u32 GPIODR2R_REG ;//GPIO 2-mA Drive Select 
    u32 GPIODR4R_REG ;//GPIO 4-mA Drive Select 
    u32 GPIODR8R_REG ;//GPIO 8-mA Drive Select 
    u32 GPIOODR_REG;//GPIO Open Drain Select 
    u32 GPIOPUR_REG;// GPIO Pull-Up Select   
    u32 GPIOPDR_REG;// GPIO Pull-Down Select 
    u32 GPIOSLR_REG;// GPIO Slew Rate Control Select 
    u32 GPIODEN_REG;// GPIO Digital Enable 
    u32 GPIOLOCK_REG;//GPIO Lock 
    u32 GPIOCR_REG;// GPIO Commit 
    u32 GPIOAMSEL_REG;// GPIO Analog Mode Select 
    u32 GPIOPCTL_REG;// GPIO Port Control 
    u32 GPIOADCCTL_REG;// GPIO ADC Control 
    u32 GPIODMACTL_REG;// GPIO DMA Control 
    u32 GPIOPeriphID4_REG;//GPIO Peripheral Identification 4 
    u32 GPIOPeriphID5_REG;//GPIO Peripheral Identification 5 
    u32 GPIOPeriphID6_REG;//GPIO Peripheral Identification 6 
    u32 GPIOPeriphID7_REG;//GPIO Peripheral Identification 7 
    u32 GPIOPeriphID0_REG;//GPIO Peripheral Identification 0 
    u32 GPIOPeriphID1_REG;//GPIO Peripheral Identification 1 
    u32 GPIOPeriphID2_REG;//GPIO Peripheral Identification 2 
    u32 GPIOPeriphID3_REG;//GPIO Peripheral Identification 3 
    u32 GPIOPCellID0_REG;// GPIO PrimeCell Identification 0 
    u32 GPIOPCellID1_REG;// GPIO PrimeCell Identification 1 
    u32 GPIOPCellID2_REG;// GPIO PrimeCell Identification 2 
    u32 GPIOPCellID3_REG;// GPIO PrimeCell Identification 3
}GPIO_type;


typedef struct{
	u32 GPTMCFG_REG ;//set mode concatenated timers / (individual, split timers)
	u32 GPTMTAMR_REG;// set mode one shot / conionouse
	u32 GPTMTBMR_REG;
	u32 GPTMCTL_REG ;// start /stop counting
	u32 GPTMSYNC_REG;
	u32 Reserved ;//Reserved 
	u32 GPTMIMR_REG;//Interrupt is disabled/  Interrupt is enabled.
	u32 GPTMRIS_REG;
	u32 GPTMMIS_REG;
	u32 GPTMICR_REG;
	u32 GPTMTAILR_REG;
	u32 GPTMTBILR_REG;
	u32 GPTMTAMATCHR;
	u32 GPTMTBMATCHR;
	u32 GPTMTAPR_REG; // prescaler for TIMER REG A
	u32 GPTMTBPR_REG; // prescaler for TIMER REG B
	u32 GPTMTAPMR_REG;//
	u32 GPTMTBPMR_REG;
	u32 GPTMTAR_REG;
	u32 GPTMTBR_REG;
	u32 GPTMTAV_REG;
	u32 GPTMTBV_REG;
	u32 GPTMRTCPD_REG;
	u32 GPTMTAPS_REG;
	u32 GPTMTBPS_REG;
	u32 GPTMTAPV_REG;
	u32 GPTMTBPV_REG;
	u32 GPTMPP_REG;
}TIMER_type;



typedef struct{
	u32 VECACT    : 8; //Interrupt Pending Vector Number 
	u32           : 3; // Reserved 
    u32 RETBASE   : 1;
	u32 VECPEND   : 8;
	u32           : 2; // Reserved
  u32 ISRPEND   : 1;
	u32 ISRPRE    : 1;
	u32           : 1;// Reserved
	u32 PENDSTCLR : 1;
	u32 PENDSTSET : 1;
  u32 UNPENDSV  : 1;
  u32 PENDSV    : 1;
  u32           : 2;  // Reserved
  u32 NMISET    : 1; // NMI Set Pending   	
}INTCTRL_REG_BF;

typedef union{
	u32 R;            // to access whole register 
	INTCTRL_REG_BF  B;// to access using bitfield 
}INTCTRL_REG_tag;






/******************************************
  GLOBAL CONSTANT MACROS   
*******************************************/
//-------------------CORE PERIPHERALS------------------- 
#define CORTEX_M4_PRI_BASE_ADDRESS 0xE000E000UL
//*** SCB Registers**********
#define APINT_REG      *((volatile u32*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0xD0C))
#define INTCTRL_REG    *((volatile INTCTRL_REG_tag*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0xD04))
#define SYSHNDCTRL_REG *((volatile u32*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0xD24))

#define SYSPRI_REG    ((volatile u8*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0xD18))// SYSPRI1_REG



//**** Systick registers***** 
#define STCTRL_REG     *((volatile u32*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0x010))
#define STRELOAD_REG   *((volatile u32*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0x014))
#define STCURRENT_REG  *((volatile u32*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0x018))

//**** NVIC Registers *****
#define EN_REG     ((volatile u32*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0x100)) // EN0-EN4
#define DIS_REG     ((volatile u32*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0x180))//DIS0_DIS4
#define ACTIVE_REG   ((volatile u32*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0x300))//ACTIVE0
#define PRI_REG      ((volatile u8*)(CORTEX_M4_PRI_BASE_ADDRESS+ 0x400))

//-------------------END OF CORE PERIPHERALS------------- 
//========================================================
//-------------------EXTERNAL PERIPHERALS----------------
//-------------------DIO-------------------
#define GPIO_PORTA_BASE_ADDRESS ((volatile GPIO_type*)0x40004000UL)
#define GPIO_PORTB_BASE_ADDRESS ((volatile GPIO_type*)0x40005000UL)
#define GPIO_PORTC_BASE_ADDRESS ((volatile GPIO_type*)0x40006000UL)
#define GPIO_PORTD_BASE_ADDRESS ((volatile GPIO_type*)0x40007000UL)
#define GPIO_PORTE_BASE_ADDRESS ((volatile GPIO_type*)0x40024000UL)
#define GPIO_PORTF_BASE_ADDRESS ((volatile GPIO_type*)0x40025000UL)
//------------------ END of DIO------------ 

//-------------------TIMER-----------------
#define TIMER_BASE_ADDRESS ((volatile TIMER_type*)0x40030000UL)

//------------------ END of DIO------------ 
//-------------------System Control-------------------
#define RCC_RCGCGPIO_REG    *((volatile u32*)(0x400FE000UL + 0x608))

#define RCG_RCGCWTIMER_REG  *((volatile u32*)(0x400FE000UL + 0x65C)) 

#define RCG_RCGCTIMER_REG   *((volatile u32*)(0x400FE000UL + 0x604)) 
//------------------ END of System Control------------ 
/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/


#endif
