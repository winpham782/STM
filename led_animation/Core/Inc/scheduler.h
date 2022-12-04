/*
 * scheduler.h
 *
 *  Created on: Nov 30, 2022
 *      Author: WinZ
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>
#include "global.h"
#define SCH_MAX_TASKS 40
UART_HandleTypeDef huart1;
void MX_USART1_UART_Init(void);

typedef struct {
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint32_t Runme;

	uint32_t TaskID;
}sTasks;

void SCH_Init(void);

void SCH_Add_Task(	void (*pFunction)(void),
					uint32_t DELAY,
					uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
void SCH_Delete(int i);


#endif /* INC_SCHEDULER_H_ */
