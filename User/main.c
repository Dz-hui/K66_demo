/***********************************************************************
*@Author: Dz_hui
*@Date: 2019-11-26 20:43:30
*@FilePath: \K66_DEMO\User\main.c
*@Drscription: 
***********************************************************************/

#include "fsl_device_registers.h"	
#include "fsl_debug_console.h"		
#include "board.h"	
#include "fsl_port.h"				

#include "pin_mux.h"			
#include "clock_config.h"		

/***********************************************************************
*@Function: 
*@Input: 
*@Return: none
*@Author: Dz_hui
*@Date: 2019-11-27 19:50:03
*@Drscription: 
***********************************************************************/
int main(void)
{
    gpio_pin_config_t led_config={
        kGPIO_DigitalOutput,
        0,
    };
	 /* Init board hardware. */
    BOARD_InitPins();				
    BOARD_BootClockRUN();			
    BOARD_InitDebugConsole();
	
    CLOCK_EnableClock(kCLOCK_PortB);
    PORT_SetPinMux(PORTB,20U,kPORT_MuxAsGpio);

    PRINTF("hello world.\r\n");		
    PRINTF("asdasda\r\n");	
    
    
    GPIO_PinInit(GPIOB,20U, &led_config);

	while(1)
	{
		
	}
}
