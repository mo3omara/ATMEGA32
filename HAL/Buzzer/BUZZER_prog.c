/*
 * BUZZER_prog.c
 *
 * Created: 9/7/2023 9:00:26 PM
 *  Author: Omar Wessam
 */ 
#include "BUZZER_interface.h"
#include "BUZZER_config.h"
#include "BIT_MATH.h"

void BUZZ_intialize()
{
	SET_BIT(BUZZ_DDR,BUZZ_PIN);//define as output
}

void BUZZ_ON()
{
	SET_BIT(BUZZ_PORT,BUZZ_PIN);
}

void BUZZ_OFF()
{
	CLR_BIT(BUZZ_PORT,BUZZ_PIN);
}

void BUZZ_TGL()
{
	TGL_BIT(BUZZ_PORT,BUZZ_PIN);
}