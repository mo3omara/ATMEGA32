/*
 * UART_prog.c
 *
 * Created: 9/8/2023 6:25:41 PM
 *  Author: Omar Wessam
 */ 
#include "Standard_Types.h"

#include "UART_reg.h"
#include "UART_private.h"
#include "UART_interface.h"

void UART_Intialize()
{
	UCSRB = 0b01001000; //transmit complete interrupt ,enable receive , 8-bit character
	UCSRC = 0b10000110; // register enable , asynchronus , no parity , 8bits
	
	UBRRH=0x00;//baud rate 9600
	UBRRL=103; //baud rate 9600	
}

void UART_Transmit(uint8 Val)
{
	
}