﻿/*
 * USART.h
 *
 * Created: 12/12/2020 03:58:05 ص
 *  Author: GASSER
 */ 


#ifndef USART_H_
#define USART_H_





#define F_CPU 16000000UL						/* Define CPU clock Frequency e.g. here its 8MHz */
#include <avr/io.h>							/* Include AVR std. library file */
#define BAUD_PRESCALE (((F_CPU / (BAUDRATE * 16UL))) - 1)	/* Define prescale value */

void USART_Init(unsigned long);				/* USART initialize function */
char USART_RxChar();						/* Data receiving function */
void USART_TxChar(char);					/* Data transmitting function */
void USART_SendString(char*);				/* Send string of USART data function */






#endif /* USART_H_ */