/*
 * fsm_automatic.c
 *
 *  Created on: Nov 2, 2022
 *      Author: WinZ
 */
#include "fsm_automatic.h"

int status,counter,counterred,counteryellow,countergreen;
int led1=0,led2=2,dem1=0,dem2=0;

void fsm_automatic_run()
{
	switch(status)
	{
	case INIT:
		status=normal;
		settimer1(100);
		settimer2(100);
		led1=0;
		led2=2;
		dem1=0;
		dem2=0;
		break;

	case normal:

		if(mode()==1)
		{
			status=modify_red;
			counter=counterred;
			break;
		}
		switch (led1)
		{
		  	  	  	  	  	  case 0:
		  	  	  	  	  		  display7SEG11((counterred-dem1)/10);
		  	  	  	  	  		  display7SEG12((counterred-dem1)%10);
		  	  	  	  	  		  if (dem1>=counterred)
		  	  	  	  	  		  {
		  	  	  	  	  			  led1=2;
		  	  	  	  	  			  dem1=0;
		  	  	  	  	  			  break;
		  	  	  	  	  		  }
		  	  	  	  	  		  HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , 0);
		  	  	  	  	  		  HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , 1);
		  	  	  	  	  		  HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , 1);
		  	  	  	  	  		  if (timer1_flag==1)
		  	  	  	  	  		  {
		  	  	  	  	  			  dem1++;
		  	  	  	  	  			  settimer1(100);
		  	  	  	  	  		  }
		  	  	  	  	  		  break;
		  	  	  	  	  	  case 1:
		  	  	  	  	  		  	  display7SEG11((counteryellow-dem1)/10);
		  	  	  	  	  		  	  display7SEG12((counteryellow-dem1)%10);
		  	  	  	  	  		  if (dem1>=counteryellow)
		  	  	  	  	  		  {
		  	  	  	  	  			  led1=0;
		  	  	  	  	  			  dem1=0;
		  	  	  	  	  			  break;
		  	  	  	  	  		  }
		  	  	  	  	  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , 1);
		  	  	  	  	  			  	  		  HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , 0);
		  	  	  	  	  			  	  		  HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , 1);

		  	  	  	  	  			  	if (timer1_flag==1)
		  	  	  	  	  			  			  	  	  	  	  		  {
		  	  	  	  	  			  			  	  	  	  	  			  dem1++;
		  	  	  	  	  			  			  	  	  	  	  			  settimer1(100);
		  	  	  	  	  			  			  	  	  	  	  		  }
		  	  	  	  	  		  break;
		  	  	  	  	  	  case 2:
		  	  	  	  	  display7SEG11((countergreen-dem1)/10);
		  	  	  	  	  		  	  	  	  	  		  display7SEG12((countergreen-dem1)%10);
		  	  	  	  	  		  		  if (dem1>=countergreen)
		  	  	  	  	  		  		  {
		  	  	  	  	  		  			  led1=1;
		  	  	  	  	  		  			  dem1=0;
		  	  	  	  	  		  			  break;
		  	  	  	  	  		  		  }
		  	  	  	  	  		  	HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , 1);
		  	  	  	  	  		  		  	  		  HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , 1);
		  	  	  	  	  		  		  	  		  HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , 0);

		  	  	  	  	  		  		  if (timer1_flag==1)
		  	  	  	  	  		  		  		  	  	  	  	  		  {
		  	  	  	  	  		  		  		  	  	  	  	  			  dem1++;
		  	  	  	  	  		  		  		  	  	  	  	  			  settimer1(100);
		  	  	  	  	  		  		  		  	  	  	  	  		  }
		  	  	  	  	  		  		  break;
		  	  	  	  	  	  default: break;
		  	  	  	  	  	  }

		  	   switch (led2)
		  	  	  	  	  	  	  {
		  	  	  	  	  	  	  case 0:
		  	  	  	  	  	display7SEG21((counterred-dem2)/10);
		  	  	  	  	  	display7SEG22((counterred-dem2)%10);
		  	  	  	  	  	  		  if (dem2>=counterred)
		  	  	  	  	  	  		  {
		  	  	  	  	  	  			  led2=2;
		  	  	  	  	  	  			  dem2=0;
		  	  	  	  	  	  			  break;
		  	  	  	  	  	  		  }
		  	  	  	  	  	  		  HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , 0);
		  	  	  	  	  	  		  HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , 1);
		  	  	  	  	  	  		  HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , 1);
		  	  	  	  	  	if (timer2_flag==1)
		  	  	  	  	  			  	  	  	  	  		  {
		  	  	  	  	  			  	  	  	  	  			  dem2++;
		  	  	  	  	  			  	  	  	  	  			  settimer2(100);
		  	  	  	  	  			  	  	  	  	  		  }
		  	  	  	  	  	  		  break;
		  	  	  	  	  	  	  case 1:
		  	  	  	  	  	  		  display7SEG21((counteryellow-dem2)/10);
		  	  	  	  	  			  	  	  	  	  	display7SEG22((counteryellow-dem2)%10);

		  	  	  	  	  	  		  if (dem2>=counteryellow)
		  	  	  	  	  	  		  {
		  	  	  	  	  	  			  led2=0;
		  	  	  	  	  	  			  dem2=0;
		  	  	  	  	  	  			  break;
		  	  	  	  	  	  		  }
		  	  	  	  	  	  	HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , 1);
		  	  	  	  	  	  		  	  	  		  HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , 0);
		  	  	  	  	  	  		  	  	  		  HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , 1);
		  	  	  	  	  	  		  	if (timer2_flag==1)
		  	  	  	  	  	  		  			  	  	  	  	  			  	  	  	  	  		  {
		  	  	  	  	  	  		  			  	  	  	  	  			  	  	  	  	  			  dem2++;
		  	  	  	  	  	  		  			  	  	  	  	  			  	  	  	  	  			  settimer2(100);
		  	  	  	  	  	  		  			  	  	  	  	  			  	  	  	  	  		  }
		  	  	  	  	  	  		  break;
		  	  	  	  	  	  	  case 2:
		  	  	  	  	  	display7SEG21((countergreen-dem2)/10);
		  	  	  	  	  	display7SEG22((countergreen-dem2)%10);

		  	  	  	  	  	  		  		  if (dem2>=countergreen)
		  	  	  	  	  	  		  		  {
		  	  	  	  	  	  		  			  led2=1;
		  	  	  	  	  	  		  			  dem2=0;
		  	  	  	  	  	  		  			  break;
		  	  	  	  	  	  		  		  }
		  	  	  	  	  	  		  	HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , 1);
		  	  	  	  	  	  		  		  	  	  		  HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , 1);
		  	  	  	  	  	  		  		  	  	  		  HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , 0);

		  	  	  	  	  	  		  		  	if (timer2_flag==1)
		  	  	  	  	  	  		  		  	{
		  	  	  	  	  	  		  		  			  	  	  	  	  			  	  	  	  	  			  dem2++;
		  	  	  	  	  	  		  		  			  	  	  	  	  			  	  	  	  	  			  settimer2(100);
		  	  	  	  	  	  		  		  			  	  	  	  	  			  	  	  	  	  		  }
		  	  	  	  	  	  		  		  break;
		  	  	  	  	  	  	  default: break;
		  	  	  	  	  	  	  }


		break;

	case modify_red:
		settimer1(25);
		if (timer1_flag==1)
		{
			settimer1(25);
			HAL_GPIO_TogglePin(LED_RED1_GPIO_Port , LED_RED1_Pin);
			HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , 1);
			HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , 1);
		}
		display7SEG21(1);
		display7SEG22(1);
		display7SEG11((counter)/10);
		display7SEG12((counter)%10);
		if (inc()==1)
		{
			counter++;
			if (counter>99) { counter=0;}
		}
		if(set()==1)
		{
			counterred=counter;
		}
		if(mode()==1)
		{
			counter=counteryellow;
			status=modify_yellow;
			break;
		}
		break;

	case modify_yellow:
			settimer1(25);
			if (timer1_flag==1)
			{
				settimer1(25);
				HAL_GPIO_TogglePin(LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin);
				HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , 1);
				HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , 1);
			}
			display7SEG21(2);
			display7SEG22(2);
			display7SEG11((counter)/10);
			display7SEG12((counter)%10);
			if (inc()==1)
			{
				counter++;
				if (counter>99) { counter=0;}
			}
			if(set()==1)
			{
				counteryellow=counter;
			}
			if(mode()==1)
			{
				counter=countergreen;
				status=modify_green;
				break;
			}
			break;

	case modify_green:
				settimer1(25);
				if (timer1_flag==1)
				{
					settimer1(25);
					HAL_GPIO_TogglePin(LED_GREEN1_GPIO_Port , LED_GREEN1_Pin);
					HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , 1);
					HAL_GPIO_WritePin (  LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin, 1);
				}
				display7SEG21(3);
				display7SEG22(3);
				display7SEG11((counter)/10);
				display7SEG12((counter)%10);
				if (inc()==1)
				{
					counter++;
					if (counter>99) { counter=0;}
				}
				if(set()==1)
				{
					countergreen=counter;
				}
				if(mode()==1)
				{
					counter=0;
					status=INIT;
					break;
				}
		break;

	default: break;
	}
}


