/*
 * BUZZER_interface.h
 *
 * Created: 9/7/2023 9:00:02 PM
 *  Author: Omar Wessam
 */ 


#ifndef BUZZER_INTERFACE_H_
#define BUZZER_INTERFACE_H_

#include "DIO_interface.h" //contains registers and #defines

void BUZZ_intialize();
void BUZZ_ON();
void BUZZ_OFF();
void BUZZ_TGL();



#endif /* BUZZER_INTERFACE_H_ */