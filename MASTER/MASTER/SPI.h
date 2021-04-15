/*
 * SPI.h
 *
 * Created: 11/12/2020 11:42:54 م
 *  Author: GASSER
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "DIO.h"
#include "avr/io.h"

#define SS   DIO_channelB4#define MOSI DIO_channelB5#define MISO DIO_channelB6#define SCK  DIO_channelB7#define SlaveEn() (DIO_write(SS,STD_low))#define SlaveDis() (DIO_write(SS,STD_high))void SPI_Init(Uint8);void SPI_Write(Uint8 data);Uint8 SPI_Receive();

#endif /* SPI_H_ */