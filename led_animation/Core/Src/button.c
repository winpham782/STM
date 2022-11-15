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

int timerforkeyregreset=300;
int timerforkeyreginc=300;
int timerforkeyregdec=300;

int buttonreset_flag=0;
int buttoninc_flag=0;
int buttondec_flag=0;

int mode()
{
	if(buttonreset_flag==1)
	{
		buttonreset_flag=0;
		return 1;
	}else {
		return 0;
	}
}
int inc()
{
	if(buttoninc_flag==1)
	{
		buttoninc_flag=0;
		return 1;
	}else {
		return 0;
	}
}
int set()
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
				buttonreset_flag=1;
				timerforkeyregreset=300;
			}
		}else{
			timerforkeyregreset--;
			if(timerforkeyregreset==0)
			{
				if(keyregreset[2]==pressed_state)
				{
					timerforkeyregreset=100;
					buttonreset_flag=1;
				}
			}
		}
	}
}
void getincinput()
{
	keyreginc[0]=keyreginc[1];
	keyreginc[1]=keyreginc[2];
	keyreginc[2]= HAL_GPIO_ReadPin(buttoninc_GPIO_Port, buttoninc_Pin);

	if( (keyreginc[0] == keyreginc[1]) && (keyreginc[1] == keyreginc[2]))
	{
		if(keyreginc[3] != keyreginc[2])
		{
			keyreginc[3]=keyreginc[2];
			if(keyreginc[2]==pressed_state)
			{
				buttoninc_flag=1;
				timerforkeyreginc=300;
			}
		}else{
			timerforkeyreginc--;
			if(timerforkeyreginc==0)
			{
				if(keyreginc[2]==pressed_state)
				{
					timerforkeyreginc=100;
					buttoninc_flag=1;
				}
			}
		}
	}
}
void getdecinput()
{
	keyregdec[0]=keyregdec[1];
	keyregdec[1]=keyregdec[2];
	keyregdec[2]= HAL_GPIO_ReadPin(buttondec_GPIO_Port, buttondec_Pin);

	if( (keyregdec[0] == keyregdec[1]) && (keyregdec[1] == keyregdec[2]))
	{
		if(keyregdec[3] != keyregdec[2])
		{
			keyregdec[3]=keyregdec[2];
			if(keyregdec[2]==pressed_state)
			{
				buttondec_flag=1;
				timerforkeyregdec=300;
			}
		}else{
			timerforkeyregdec--;
			if(timerforkeyregdec==0)
			{
				if(keyregdec[2]==pressed_state)
				{
					timerforkeyregdec=100;
					buttondec_flag=1;
				}
			}
		}
	}
}
