/***********************************************************************
*@Author: Dz_hui
*@Date: 2019-11-26 20:43:30
*@FilePath: \K66_DEMO\User\main.c
*@Drscription: 
***********************************************************************/

#include "fsl_device_registers.h"	
#include "fsl_debug_console.h"		
#include "board.h"					

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
	 /* Init board hardware. */
    BOARD_InitPins();				
    BOARD_BootClockRUN();			
    BOARD_InitDebugConsole();
	

    PRINTF("hello world.\r\n");		
    PRINTF("asdasda\r\n");	
	while(1)
	{
		
	}
}
