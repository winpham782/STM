/*
 * schduler.c
 *
 *  Created on: Nov 30, 2022
 *      Author: WinZ
 */
#include "scheduler.h"
sTasks SCH_Tasks_G[SCH_MAX_TASKS];
uint8_t current_index_task=0;

void SCH_Init(void){
	for(int i=0; i < SCH_MAX_TASKS;i++){
		SCH_Delete(i);
	}
	current_index_task=0;
}

void SCH_Add_Task(	void (*pFunction)(void),
					uint32_t DELAY,
					uint32_t PERIOD){
	if (current_index_task < SCH_MAX_TASKS){

		SCH_Tasks_G[current_index_task].pTask=pFunction;
		SCH_Tasks_G[current_index_task].Delay=DELAY;
		SCH_Tasks_G[current_index_task].Period=PERIOD;
		SCH_Tasks_G[current_index_task].Runme=0;

		SCH_Tasks_G[current_index_task].TaskID=current_index_task;

		current_index_task++ ;
	}
}

void SCH_Update(void){
	count++;
	for(int i=0;i<current_index_task;i++){
		if(SCH_Tasks_G[i].Delay > 0){
			SCH_Tasks_G[i].Delay--;
		}
		else {
			SCH_Tasks_G[i].Delay=SCH_Tasks_G[i].Period;
			SCH_Tasks_G[i].Runme +=1;
		}
	}
}

void SCH_Dispatch_Tasks(void){
	for(int i=0;i<current_index_task;i++){
		if(SCH_Tasks_G[i].Runme>0){
			SCH_Tasks_G[i].Runme --;
			(*SCH_Tasks_G[i].pTask)();
			s={"start task ", i, ": ",count,"\n"};
			HAL_UART_Transmit(&huart1, &s[0], sizeof(s), 100);
			if (SCH_Tasks_G[i].Period==0){
				SCH_Delete(i);
			}
		}
	}
}

void SCH_Delete(int i){
	if (current_index_task==0 || SCH_Tasks_G[i].pTask==0) return;
	for(int j =i;j<current_index_task;j++)
	{
		SCH_Tasks_G[j]=SCH_Tasks_G[j+1];
	}
	for (int j=0;i<current_index_task;j++){
		if(SCH_Tasks_G[j].pTask==0){
			current_index_task=j;
			break;
		}
	}
}


