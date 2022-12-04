/*
 * schduler.c
 *
 *  Created on: Nov 30, 2022
 *      Author: WinZ
 */
#include "scheduler.h"

sTasks SCH_Tasks_G[SCH_MAX_TASKS];
uint8_t current_index_task=0;
UART_HandleTypeDef huart1;
int counttime=0;


void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

void SCH_Init(void){
	for(int i=0; i < SCH_MAX_TASKS;i++){
		SCH_Delete(i);
	}
	current_index_task=0;
	MX_USART1_UART_Init();
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
	counttime++;
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
			char s[255];
			snprintf(s, sizeof(s), "start %d: %d\r\n", i, (counttime-1)*10);
			HAL_UART_Transmit(&huart1, (uint8_t *)&s, 20, 100);
			if (SCH_Tasks_G[i].Period==0){
				SCH_Delete(i);
				char s[255];
				snprintf(s, sizeof(s), "end %d: %d\r\n",i, (counttime-1)*10);
				HAL_UART_Transmit(&huart1, (uint8_t *)&s, 20, 100);
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


