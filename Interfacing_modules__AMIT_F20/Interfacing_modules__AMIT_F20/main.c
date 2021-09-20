/*
 * Interfacing_Modules_AMIT_F20.c
 *
 * Created: 8/7/2021 7:48:25 PM
 * Author: 
 */ 
#include "OUTPUT_Module.h"
#include "DIO.h"
#include "SPI.h"
#include "LCD.h"

int main(void)
{
	LCD_Init();
	LCD_CLEAR();
	Slave_Init();
	LED0_Initialize();
	uint8_t data;
	
	
	while(1)
	{
		data = Slave_Recv();
		LCD_CLEAR();
		if (data == 1)
		{
			LED0_ON();
			LCD_CLEAR();
			LCD_WRITE_STR("LED: ON");
		}
		if (data == 0)
		{
			LED0_OFF();
			LCD_CLEAR();
			LCD_WRITE_STR("LED: OFF");
		}
	}	
}


