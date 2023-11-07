/*
 * AMIT_AMGAD.c
 *
 * Created: 8/16/2023 10:54:16 PM
 * Author : Omar Wessam
 */ 
#include "main.h"

uint8 distance =60;
volatile uint16 Counter =0;
int main(void)
{
  /*  DIO_SetPinDirection(DIO_PORTD,DIO_PIN3,PIN_INPUT);//button B0 as input
	DIO_SetPinDirection(DIO_PORTD,DIO_PIN2,PIN_INPUT);//button as output
	
    DIO_SetPinDirection(DIO_PORTC,DIO_PIN2,PIN_OUTPUT); //led as output
	
	DIO_SetPinPullup(DIO_PORTD,DIO_PIN3);
	DIO_SetPinPullup(DIO_PORTD,DIO_PIN2);
	
	INT_Intialize();
	
	
	*/
  
  	SET_BIT(MCUCSR,3);
  	SET_BIT(MCUCSR,2);//intialize interrupt1 ,catch on rising
    GlobIntEnable();
	UART_Intialize();
	UDR =distance;
	while (GET_BIT(UCSRA,6)!=1);
	Ultrasonic_Intialize();
	TIMER0_Intialize();

    while (1) 
    {
		Ultrasonic_Trigger();
		while (GET_BIT(GIFR,7)==0);//wait for rising edge
		SET_BIT(GIFR,7);//clear the flag by writing 1
		Counter=0;
		TCNT0=0;
		CLR_BIT(MCUCSR,2);//initialize interrupt1 ,catch on falling
		
		
		while (GET_BIT(GIFR,7)==0);
		distance =  Counter *17; //  17 =340 * 10^-3 * 100 /2
		Counter=0;
		TCNT0=0;
		SET_BIT(MCUCSR,2);
		SET_BIT(GIFR,7);//clear the flag by writing 1

		
		
    }
}



/*void __vector_10(void) __attribute__((signal));
void __vector_10(void)
{
	Counter++;
}



void __vector_13(void) __attribute__((signal));
void __vector_13(void)
{
	UDR =distance;
	while (GET_BIT(UCSRA,6)!=1);
}




void __vector_1 (void) __attribute__((signal));
void __vector_1 (void) 
{
	DIO_SetPinValue(DIO_PORTC,DIO_PIN2,PIN_HIGH);
}

void __vector_2 (void) __attribute__((signal));
void __vector_2 (void)
{
	DIO_SetPinValue(DIO_PORTC,DIO_PIN2,PIN_LOW);
}*/