/*
 * UART_reg.h
 *
 * Created: 9/8/2023 6:25:26 PM
 *  Author: Omar Wessam
 */ 


#ifndef UART_REG_H_
#define UART_REG_H_
//USART I/O Data Register – UDR
#define UDR	(*(volatile uint8*)0x2C)
//USART Control and Status Register A – UCSRA
#define UCSRA	(*(volatile uint8*)0x2B)
//USART Control and Status Register B – UCSRB
#define UCSRB	(*(volatile uint8*)0x2A)
//USART Control and Status Register C – UCSRC
#define UCSRC	(*(volatile uint8*)0x40)
//USART Baud Rate Registers – UBRRL and UBRRH
#define UBRRL	(*(volatile uint8*)0x29)
#define UBRRH	(*(volatile uint8*)0x40)



#endif /* UART_REG_H_ */