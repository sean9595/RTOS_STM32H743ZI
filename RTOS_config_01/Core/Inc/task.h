/*
 * task.h
 *
 *  Created on: Mar 10, 2021
 *      Author: taehoonkim
 */

#ifndef INC_TASK_H_
#define INC_TASK_H_

#include "main.h"
#include "memorymap.h"

#define NOT_ENOUGH_TASK_NUM 0xFFFFFFFF

#define MAX_TASK_NUM            (TASK_STACK_SIZE / USR_TASK_STACK_SIZE)

typedef struct KernelTcb_t
{
    uint32_t spsr;
    uint32_t r0_r12[13];
    uint32_t sp;
    uint32_t lr;
    uint32_t pc;

    uint8_t* stack_base;
} KernelTcb_t;

typedef void (*KernelTaskFunc_t)(void);

void Kernel_task_init(void);
uint32_t Kernel_task_create(KernelTaskFunc_t startFunc);


#endif /* INC_TASK_H_ */
