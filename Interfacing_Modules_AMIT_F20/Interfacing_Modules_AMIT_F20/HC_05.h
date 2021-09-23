/*
 * HC_05.h
 *
 * Created: 9/12/2021 11:59:04 AM
 *  Author: zeyad sherif
 */ 


#ifndef HC_05_H_
#define HC_05_H_
#include "HC_05_Configuration.h"

void HC_05_Init(void);
uint8_t HC_05_Recieve(void);
void HC_05_Transmit_Char(uint8_t data);
void HC_05_Transmit_String(uint8_t *str);


#endif /* HC_05_H_ */



