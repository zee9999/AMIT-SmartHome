/*
 * Interfacing_Modules_AMIT_F20.c
 *
 * Created: 8/7/2021 7:48:25 PM
 * Author: 
 */ 
#include "OUTPUT_Module.h"
#include "SPI.h"
#include "LCD.h"

int main(void)
{
	LCD_Init();
	LCD_CLEAR();
	Slave_Init();
	LED0_Initialize();
	LED1_Initialize();
	LED2_Initialize();
	uint8_t data;
	
	
	while(1)
	{
		data = Slave_Recv();
		LCD_CLEAR();
		/*if (data == 1)
		{
			LED0_ON();
			LCD_CLEAR();
			LCD_WRITE_STR("LED0: ON");
		}
		 if (data == 2)
		{
			LED1_ON();
			LCD_CLEAR();
			LCD_WRITE_STR("LED1: ON");
		}
		 if (data == 3)
		{
			LED2_ON();
			LCD_CLEAR();
			LCD_WRITE_STR("LED2: ON");
		}
		 if (data == 4)
		{
			LED0_Toggle();
			//LED1_Toggle();
			//LED2_Toggle();
			LCD_CLEAR();
			LCD_WRITE_STR("ALL LEDs: ON");
		}
		 if (data == 0)
		{
			LED0_OFF();
			LED1_OFF();
			LED2_OFF();
			LCD_CLEAR();
			LCD_WRITE_STR("ALL LEDs: OFF");
		}*/
		switch (data)
		{
		case 1:
			LED0_ON();
			LED1_OFF();
			LED2_OFF();
			LCD_CLEAR();
			LCD_WRITE_STR("LED0: ON");
			break;
		case 2:
			LED0_OFF();
			LED1_ON();
			LED2_OFF();
			LCD_CLEAR();
			LCD_WRITE_STR("LED1: ON");
			break;
		case 3:
			LED0_OFF();
			LED1_OFF();
			LED2_ON();
			LCD_CLEAR();
			LCD_WRITE_STR("LED2: ON");
			break;
		case 4:
			LED0_ON();
			LED1_ON();
			LED2_ON();
			LCD_CLEAR();
			LCD_WRITE_STR("ALL LEDs: ON");
			break;
		case 0:
			LED0_OFF();
			LED1_OFF();
			LED2_OFF();
			LCD_CLEAR();
			LCD_WRITE_STR("ALL LEDs: OFF");
			break;
		default:
			LCD_CLEAR();
			LCD_WRITE_STR("WRONG INPUT");
			break;
		}
	}	
}


