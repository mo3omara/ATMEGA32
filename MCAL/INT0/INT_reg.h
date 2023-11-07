/*
 * INT_reg.h
 *
 * Created: 9/8/2023 12:07:06 PM
 *  Author: Omar Wessam
 */ 


#ifndef INT_REG_H_
#define INT_REG_H_

#define GIFR   *((volatile uint8*)0X5A)

#define GICR   *((volatile uint8*)0X5B)

#define MCUCR  *((volatile uint8*)0X55)

#define MCUCSR *((volatile uint8*)0X54)



#endif /* INT_REG_H_ */