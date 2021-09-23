/*
 * HC_05.c
 *
 * Created: 9/12/2021 11:59:54 AM
 *  Author: zeyad sherif
 */ 
#include "HC_05.h"


void HC_05_Init(void)
{
	/*Baud rate value variable*/
	uint16_t UBRR_Val = 0;
	/*Enable Transmitter and Receiver bits*/
	UCSRB = (1 << RXEN) | (1 << TXEN);
	/*Full configuration for UART*/
	UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);
	/*Baud Rate Calculations*/
	UBRR_Val = (((FRQ) / (16 * BAUDRATE)) - 1);//11110101 00111001
	UBRRL = UBRR_Val;     //00000000 00111001
	UBRRH = UBRR_Val >> 8;//00000000 11110101
}
uint8_t HC_05_Recieve(void)
{
	while(!(UCSRA & (1<<RXC)));
	return UDR;
}
void HC_05_Transmit_Char(uint8_t data)
{
	while (!(UCSRA & (1<<UDRE)));
	UDR = data;
}
void HC_05_Transmit_String(uint8_t *str)
{
	uint8_t j=0;
	
	while (str[j] != 0)		/* Send string till null */
	{
		HC_05_Transmit_Char(str[j]);
		j++;
	}
}