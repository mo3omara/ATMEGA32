/*
 * Ultrasonic_config.h
 *
 * Created: 9/9/2023 11:57:29 PM
 *  Author: Omar Wessam
 */ 


#ifndef ULTRASONIC_CONFIG_H_
#define ULTRASONIC_CONFIG_H_

#undef F_CPU
#define F_CPU 16000000

#define Trigger_Pin 0
#define Trigger_Port PORTA
#define Trigger_DDR  DDRA

#define Echo_Pin 3
#define Echo_Port PORTD
#define Echo_DDR  DDRD


#endif /* ULTRASONIC_CONFIG_H_ */