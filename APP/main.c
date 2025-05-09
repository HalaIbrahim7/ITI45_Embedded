/*
 * main.c
 *
 *  Created on: May 5, 2025
 *      Author: DELL
 */
#include "DIO_interface.h"
#include "util/delay.h"
#include "LCD_interface.h"
#include "LCD_private.h"
#include "EXI_interface.h"

#include "avr/interrupt.h"


int main(){

DIO_initall();
	EXI_INIT(INT0,Any_Logical_Level);
	EXI_INIT(INT1,Any_Logical_Level);
	EXI_ENABLE(INT0);
	EXI_ENABLE(INT1);
sei();
	while(1){

	}



	return 0;
}



ISR(INT0_vect)
{
	DIO_writepin(0,HIGH);

/*static uint8 x=0;
x=x^1;
DIO_writepin(0,x);*/
}

ISR(INT1_vect)
{
	static uint8 x=0;
	x=x^1;
	DIO_writepin(1,x);
}
