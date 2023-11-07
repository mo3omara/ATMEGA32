/*
 * Ultrasonic_prog.c
 *
 * Created: 9/9/2023 11:55:51 PM
 *  Author: Omar Wessam
 */ 
#include "BIT_MATH.h"
#include "Ultrasonic_config.h"
#include "Ultrasonic_interface.h"
#include "DIO_interface.h"
#include <util/delay.h>


void Ultrasonic_Intialize()
{
	SET_BIT(Trigger_DDR,Trigger_Pin);//define as output 
	
	//define as input ,and pullup
	CLR_BIT(Echo_DDR,Echo_Pin);
	SET_BIT(Echo_Port,Echo_Pin);
}
void Ultrasonic_Trigger()
{
	SET_BIT(Trigger_Port,Trigger_Pin);
	_delay_us(10);
	CLR_BIT(Trigger_Port,Trigger_Pin);
	
}