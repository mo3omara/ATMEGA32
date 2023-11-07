/*
 * LED_interface.h
 *
 * Created: 9/7/2023 6:50:07 PM
 *  Author: Omar Wessam
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#include "DIO_interface.h" //contains registers and #defines

void LED0_intialize();
void LED0_ON();
void LED0_OFF();
void LED0_TGL();



#endif /* LED_INTERFACE_H_ */