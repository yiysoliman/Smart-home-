/*
 * MASTER.c
 *
 * Created: 4/15/2021 11:54:40 AM
 * Author : Youssef Soliman
 */ 

#include <avr/io.h>

#include <avr/io.h>
#include "STD_types.h"
#include "DIO.h"
#include "SPI.h"
#include "USART.h"
#define  F_CPU 16000000UL
#include <util/delay.h>
//#include "LCD.h"


int main(void)
{
	Uint8 Data_in ;
	DIO_Init();
	SPI_Init('M');	SlaveEn();	USART_Init(9600);		while (1)	{		SPI_Write(0x11);		_delay_ms(500);		SPI_Write(0x22);		_delay_ms(500);		Data_in = USART_RxChar();						/* receive data from Bluetooth device*/
		if(Data_in =='1')
		{
			DIO_write(DIO_channelC5,STD_high);							/* Turn ON LED */
			USART_SendString("LED_ON");					/* send status of LED i.e. LED ON */
		}

		else if(Data_in =='2')
		{
			DIO_write(DIO_channelC5,STD_low);							/* Turn OFF LED */
			USART_SendString("LED_OFF"); 				/* send status of LED i.e. LED OFF */
			
		}


		else if(Data_in =='3')
		{
			DIO_write(DIO_channelB0,STD_high);							/* Turn OFF LED */
			DIO_write(DIO_channelB1,STD_high);
			DIO_write(DIO_channelB2,STD_low);
			DIO_write(DIO_channelC6,STD_high);
			DIO_write(DIO_channelC7,STD_low);
			USART_SendString("FAN_MODE"); 				/* send status of LED i.e. LED OFF */
			
		}



		else if(Data_in =='4')
		{
			DIO_write(DIO_channelB0,STD_high);							/* Turn OFF LED */
			DIO_write(DIO_channelB1,STD_low);
			DIO_write(DIO_channelB2,STD_high);
			DIO_write(DIO_channelC6,STD_low);
			DIO_write(DIO_channelC7,STD_high);
			USART_SendString("REPELLENT_MODE");
		}

		else if(Data_in =='5')
		{
			DIO_write(DIO_channelB0,STD_low);							/* Turn OFF LED */
			DIO_write(DIO_channelB1,STD_low);
			DIO_write(DIO_channelB2,STD_low);
			DIO_write(DIO_channelC6,STD_low);
			DIO_write(DIO_channelC7,STD_low);
			USART_SendString("OFF_MODE");
		}




		else
		USART_SendString("Select proper option");	}
	
}


