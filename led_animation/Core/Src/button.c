/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: WinZ
 */
#include "button.h"

int keyregreset[4]={normal_state,normal_state,normal_state,normal_state};
int keyreginc[4]={normal_state,normal_state,normal_state,normal_state};
int keyregdec[4]={normal_state,normal_state,normal_state,normal_state};

int timerforkeyreg=300;

int buttonreset_flag=0;
int buttoninc_flag=0;
int buttondec_flag=0;

int checkbuttonreset()
{
	if(buttonreset_flag==1)
	{
		buttonreset_flag=0;
		return 1;
	}else {
		return 0;
	}
}
int checkbuttoninc()
{
	if(buttoninc_flag==1)
	{
		buttoninc_flag=0;
		return 1;
	}else {
		return 0;
	}
}
int checkbuttondec()
{
	if(buttondec_flag==1)
	{
		buttondec_flag=0;
		return 1;
	}else {
		return 0;
	}
}

void getresetinput()
{
	keyregreset[0]=keyregreset[1];
	keyregreset[1]=keyregreset[2];
	keyregreset[2]= HAL_GPIO_ReadPin(buttonreset_GPIO_Port, buttonreset_Pin);

	if( (keyregreset[0] == keyregreset[1]) && (keyregreset[1] == keyregreset[2]))
	{
		if(keyregreset[3] != keyregreset[2])
		{
			keyregreset[3]=keyregreset[2];
			if(keyregreset[2]==pressed_state)
			{
				counter++;
				timerforkeyreg=300;
			}
		}else{
			timerforkeyreg--;
			if(timerforkeyreg==0)
			{
				keyreg3=normal_state;
			}
		}
	}

}
