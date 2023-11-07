/*
 * DIO_prog.c
 *
 * Created: 9/5/2023 11:41:04 PM
 *  Author: Omar Wessam
 */ 

//#include "Standard_Types.h"
//#include "BIT_MATH.h"

#include "DIO_config.h"
#include "DIO_reg.h"
#include "DIO_private.h"
#include "DIO_interface.h"
/*
void DIO_SetPinDirection(uint8 Port ,uint8 PinNo ,uint8 Direction)
{
	if (Direction == PIN_INPUT)
	{
		switch(Port){
		case DIO_PORTA:CLR_BIT(DDRA,PinNo);break;
		case DIO_PORTB:CLR_BIT(DDRB,PinNo);break;
		case DIO_PORTC:CLR_BIT(DDRC,PinNo);break;
		case DIO_PORTD:CLR_BIT(DDRD,PinNo);break;}
	}
	else
	{
	    switch(Port){
	    case DIO_PORTA:SET_BIT(DDRA,PinNo);break;
	    case DIO_PORTB:SET_BIT(DDRB,PinNo);break;
	    case DIO_PORTC:SET_BIT(DDRC,PinNo);break;
	    case DIO_PORTD:SET_BIT(DDRD,PinNo);break;}
	}
	
	 
}

void DIO_SetPinValue(uint8 Port ,uint8 PinNo ,uint8 Value)
{
	if (Value == PIN_LOW)
	{
		switch(Port){
		case DIO_PORTA:CLR_BIT(PORTA,PinNo);break;
		case DIO_PORTB:CLR_BIT(PORTB,PinNo);break;
		case DIO_PORTC:CLR_BIT(PORTC,PinNo);break;
		case DIO_PORTD:CLR_BIT(PORTD,PinNo);break;}
	}
	else
	{
		switch(Port){
		case DIO_PORTA:SET_BIT(PORTA,PinNo);break;
		case DIO_PORTB:SET_BIT(PORTB,PinNo);break;
		case DIO_PORTC:SET_BIT(PORTC,PinNo);break;
		case DIO_PORTD:SET_BIT(PORTD,PinNo);break;}
	}

}

uint8 DIO_GetPinValue(uint8 Pin ,uint8 PinNo)
{
	uint8 temp=0;
	switch(Pin)
	{
	case DIO_PINA: temp=GET_BIT(PINA,PinNo);break;
	case DIO_PINB: temp=GET_BIT(PINB,PinNo);break;
	case DIO_PINC: temp=GET_BIT(PINC,PinNo);break;
	case DIO_PIND: temp=GET_BIT(PIND,PinNo);break;
	}
	return temp;
}

void DIO_SetPinPullup (uint8 Port ,uint8 PinNo)
{
	switch(Port){
	case DIO_PORTA:SET_BIT(PORTA,PinNo);break;
	case DIO_PORTB:SET_BIT(PORTB,PinNo);break;
	case DIO_PORTC:SET_BIT(PORTC,PinNo);break;
	case DIO_PORTD:SET_BIT(PORTD,PinNo);break;}

}

void DIO_TglPinValue(uint8 Port ,uint8 PinNo)
{
	switch(Port){
	case DIO_PORTA:TGL_BIT(PORTA,PinNo);break;
	case DIO_PORTB:TGL_BIT(PORTB,PinNo);break;
	case DIO_PORTC:TGL_BIT(PORTC,PinNo);break;
	case DIO_PORTD:TGL_BIT(PORTD,PinNo);break;}
	
}*/