/*
 * Interfacing_Modules_AMIT_F20.c
 *
 * Created: 8/7/2021 7:48:25 PM
 * Author: 
 
 */ 


#include "UART.h"
#include "SPI.h"
#include "LCD.h"



int main(void)
{
	LCD_Init();
	LCD_CLEAR();
	UART_Init();
	uint8_t* data;
	Master_Init();


	while(1)
	{
		data = UART_Receive();
		if (data == '1')
		{
			Master_Trans(1);
			LCD_CLEAR();
			LCD_WRITE_STR("DATA TRANSMITTED");
		}
		else if (data == '2')
		{
			Master_Trans(2);
			LCD_CLEAR();
			LCD_WRITE_STR("DATA TRANSMITTED");
		}
		else if (data == '3')
		{
			Master_Trans(3);
			LCD_CLEAR();
			LCD_WRITE_STR("DATA TRANSMITTED");
		}
		else if (data == '4')
		{
			Master_Trans(4);
			LCD_CLEAR();
			LCD_WRITE_STR("DATA TRANSMITTED");
		}
		else if (data == '0')
		{
			Master_Trans(0);
			LCD_CLEAR();
			LCD_WRITE_STR("DATA TRANSMITTED");
		}
	}
	
}

/*ISR(TIMER0_OVF_vect)
{
	static uint8_t cnt = 0;
	cnt++;
	if(cnt == OVF_Counter)
	{
		scheduler();
		OS_TICK++;
		TCNT0 = Initial_Value;
		cnt = 0;
	}
}
*/
