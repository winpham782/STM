/*
 * fsm_automatic.c
 *
 *  Created on: Nov 2, 2022
 *      Author: WinZ
 */
#include "fsm_automatic.h"

int status;

void fsm_automatic_run()
{
	switch(status)
	{
	case INIT:
		status=AUTO_RED;
		settimer1(5000);
		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, 0);
		if(timer1_flag==1)
		{
			settimer1(3000);
			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, 1);
			status=AUTO_GREEN;
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, 0);
				if(timer1_flag==1)
				{
					settimer1(5000);
					HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, 1);
					status=AUTO_RED;
				}
			break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, 0);
				if(timer1_flag==1)
				{
					settimer1(2000);
					HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, 1);
					status=AUTO_YELLOW;
				}
			break;
	default: break;
	}
}


