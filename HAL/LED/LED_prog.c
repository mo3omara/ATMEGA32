/*
 * LED_prog.c
 *
 * Created: 9/7/2023 6:54:42 PM
 *  Author: Omar Wessam
 */ 

#include "LED_interface.h"
#include "LED_config.h"
#include "BIT_MATH.h"

void LED0_intialize()
{
	SET_BIT(LED0_DDR,LED0_PIN);//define as output
}

void LED0_ON()
{
	SET_BIT(LED0_PORT,LED0_PIN);
}

void LED0_OFF()
{
	CLR_BIT(LED0_PORT,LED0_PIN);
}

void LED0_TGL()
{
	TGL_BIT(LED0_PORT,LED0_PIN);
}
