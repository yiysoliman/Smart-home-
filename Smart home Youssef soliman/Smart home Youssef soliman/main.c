/*
 * Smart home Youssef soliman.c
 *
 * Created: 4/15/2021 11:10:42 AM
 * Author : Youssef Soliman
 */ 

#include <avr/io.h>
#include "avr/interrupt.h"
#include "STD_types.h"
#include "DIO.h"
#include "LCD.h"


int main(void)
{
	DIO_Init();
	SPI_Init('S');
	LCD_Init();
	LCD_clr();
	
	LCD_cmd(0x85);
	LCD_StringPos("Welcome to",1,2);
	LCD_StringPos("yiysoliman",2,2);
	while (1)


	
}