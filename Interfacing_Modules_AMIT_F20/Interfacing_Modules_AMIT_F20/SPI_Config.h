/*
 * SPI_Config.h
 *
 * Created: 9/4/2021 9:35:54 PM
 *  Author: zeyad sherif
 */ 


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "CPU_Configurations.h"
#include "SPI_Address.h"

//SPI Control Register – SPCR
#define SPIE 7
#define SPE  6
#define DORD 5
#define MSTR 4

//SPI Status Register – SPSR
#define SPIF 7

//SPI Data Register – SPDR
#define MSB 7
#define LSB 0



#endif /* SPI_CONFIG_H_ */