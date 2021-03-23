/*
 * memorymap.h
 *
 *  Created on: Mar 10, 2021
 *      Author: taehoonkim
 */

#ifndef INC_MEMORYMAP_H_
#define INC_MEMORYMAP_H_

#include "main.h"

extern uint32_t __bss_end__; //defined at linker script

#define TASK_STACK_START	((uint32_t)&__bss_end__)
#define USR_TASK_STACK_SIZE (2 * 1024)					//일단 임의의 값 넣음
#define TASK_STACK_SIZE		(3 * USR_TASK_STACK_SIZE)   //TASK 3개 처리

#endif /* INC_MEMORYMAP_H_ */
