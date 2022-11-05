/*
 * fsm_automatic.c
 *
 *  Created on: Nov 2, 2022
 *      Author: WinZ
 */
#include "fsm_automatic.h"

int status;
int counter;

void fsm_automatic_run()
{
	switch(status)
	{
	case INIT:
		if(checkbuttonreset()==1)
		{
			status=counterreset;
			break;
		}
		 if(checkbuttoninc()==1)
		{
			status=counterinc;
			break;
		}
		if(checkbuttondec()==1)
		{
			status=counterdec;
			break;
		}
		break;

	case counterreset:
		counter = 0;
		display7SEG(counter);
		status=wait;
		settimer2(1000);
		break;

	case counterinc:
		counter++;
		if(counter==10){counter=0;}
		display7SEG(counter);
		status=wait;
		settimer2(1000);
		break;

	case counterdec:
		counter--;
		if(counter==-1) {counter=9;}
		display7SEG(counter);
		status=wait;
		settimer2(1000);
		break;

	case wait:

		if(checkbuttonreset()==1)
		{
			status=counterreset;
			break;
		}
		 if(checkbuttoninc()==1)
		{
			status=counterinc;
			break;
		}
		if(checkbuttondec()==1)
		{
			status=counterdec;
			break;
		}
		if (timer2_flag==1)
		{
		status=auto_dec;
		settimer2(100);
		}
		break;

	case auto_dec:
		if(checkbuttonreset()==1)
				{
					status=counterreset;
					break;
				}
				 if(checkbuttoninc()==1)
				{
					status=counterinc;
					break;
				}
				if(checkbuttondec()==1)
				{
					status=counterdec;
					break;
				}
		if (counter>0 && timer2_flag==1)
		{
			counter--;
			display7SEG(counter);
			settimer2(100);
		}
		break;

	default: break;
	}
}


