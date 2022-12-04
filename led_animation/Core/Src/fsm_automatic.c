///*
// * fsm_automatic.c
// *
// *  Created on: Nov 2, 2022
// *      Author: WinZ
// */
//#include "fsm_automatic.h"
//
//int status,counter,counterred,counteryellow,countergreen;
//int led1=0,led2=2,dem1=0,dem2=0,seg1=0,seg2=0;
//
//void fsm_automatic_run()
//{
//	switch(status)
//	{
//	case INIT:
//		status=normal;
//		settimer1(100);
//		settimer2(100);
//		settimer3(50);
//		settimer4(50);
//		led1=0;
//		led2=2;
//		dem1=0;
//		dem2=0;
//		seg1=0;
//		seg2=0;
//		break;
//
//	case normal:
//
//		if(mode()==1)
//		{
//			status=modify_red;
//			counter=counterred;
//			settimer1(25);
//			settimer3(50);
//			settimer4(50);
//			seg1=0;
//			seg2=0;
//			break;
//		}
//
//		switch (led1)
//		{
//		case 0:
//			HAL_GPIO_WritePin ( red1_GPIO_Port , red1_Pin , 0);
//			HAL_GPIO_WritePin ( yellow1_GPIO_Port, yellow1_Pin , 1);
//			HAL_GPIO_WritePin ( green1_GPIO_Port, green1_Pin, 1);
//
//			if(timer3_flag==1){
//				switch (seg1)
//				{
//				case 0:
//					settimer3(50);
//					HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 0);
//					HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 1);
//					display7SEG1((counterred-dem1)/10);
//					seg1=1;
//					break;
//				case 1:
//					settimer3(50);
//					HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 1);
//					HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 0);
//					display7SEG1((counterred-dem1)%10);
//					seg1=0;
//					break;
//				default: break;
//				}
//			}
//
//			if (dem1>=counterred){
//				led1=2;
//				dem1=0;
//				break;
//			}
//
//
//
//			if (timer1_flag==1){
//				dem1++;
//				settimer1(100);
//			}
//			break;
//
//		 case 1:
//
//			 HAL_GPIO_WritePin ( red1_GPIO_Port  , red1_Pin , 1);
//			 HAL_GPIO_WritePin ( yellow1_GPIO_Port, yellow1_Pin , 0);
//			 HAL_GPIO_WritePin ( green1_GPIO_Port, green1_Pin, 1);
//			 if(timer3_flag==1){
//				switch (seg1)
//				{
//				case 0:
//					settimer3(50);
//					HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 0);
//					HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 1);
//					display7SEG1((counteryellow-dem1)/10);
//					seg1=1;
//					break;
//				case 1:
//					settimer3(50);
//					HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 1);
//					HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 0);
//					display7SEG1((counteryellow-dem1)%10);
//					seg1=0;
//					break;
//				default: break;
//				}
//			}
//
//			if (dem1>=counteryellow){
//				led1=0;
//				dem1=0;
//				break;
//			}
//
//
//			if (timer1_flag==1){
//				dem1++;
//				settimer1(100);
//			}
//			break;
//
//		 case 2:
//			 HAL_GPIO_WritePin ( red1_GPIO_Port  , red1_Pin , 1);
//			 HAL_GPIO_WritePin ( yellow1_GPIO_Port, yellow1_Pin , 1);
//			 HAL_GPIO_WritePin ( green1_GPIO_Port, green1_Pin, 0);
//			 if(timer3_flag==1){
//				 switch (seg1)
//				 {
//				 case 0:
//			 		 settimer3(50);
//			 		 HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 0);
//			 		 HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 1);
//			 		 display7SEG1((countergreen-dem1)/10);
//			 		 seg1=1;
//					 break;
//				 case 1:
//					 settimer3(50);
//					 HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 1);
//					 HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 0);
//					 display7SEG1((countergreen-dem1)%10);
//					 seg1=0;
//					 break;
//				 default: break;
//				 }
//			 }
//
//			 if (dem1>=countergreen){
//		 		 led1=1;
//				 dem1=0;
//				 break;
//			 }
//
//
//			 if (timer1_flag==1){
//				 dem1++;
//				 settimer1(100);
//			 }
//			 break;
//
//		default: break;
//		}
//
//		switch (led2)
//		{
//		case 0:
//			if(timer4_flag==1){
//				switch (seg2)
//				{
//				case 0:
//					settimer4(50);
//					HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 0);
//					HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 1);
//					display7SEG2((counterred-dem2)/10);
//					seg2=1;
//					break;
//				case 1:
//					settimer4(50);
//					HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 1);
//					HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 0);
//					display7SEG2((counterred-dem2)%10);
//					seg2=0;
//					break;
//				default: break;
//				}
//			}
//
//			if (dem2>=counterred){
//				led2=2;
//				dem2=0;
//				break;
//			}
//
//			HAL_GPIO_WritePin ( red2_GPIO_Port , red2_Pin , 0);
//			HAL_GPIO_WritePin ( yellow2_GPIO_Port , yellow2_Pin , 1);
//			HAL_GPIO_WritePin ( green2_GPIO_Port , green2_Pin , 1);
//
//			if (timer2_flag==1){
//				dem2++;
//		  	  	settimer2(100);
//			}
//			break;
//
//		case 1:
//			if(timer4_flag==1){
//				switch (seg2)
//				{
//				case 0:
//					settimer4(50);
//					HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 0);
//					HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 1);
//					display7SEG2((counteryellow-dem2)/10);
//					seg2=1;
//					break;
//				case 1:
//					settimer4(50);
//					HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 1);
//					HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 0);
//					display7SEG2((counteryellow-dem2)%10);
//					seg2=0;
//					break;
//				default: break;
//				}
//			}
//
//			if (dem2>=counteryellow){
//				led2=0;
//		  	  	dem2=0;
//		  	  	break;
//			}
//
//			HAL_GPIO_WritePin ( red2_GPIO_Port , red2_Pin , 1);
//			HAL_GPIO_WritePin ( yellow2_GPIO_Port , yellow2_Pin , 0);
//			HAL_GPIO_WritePin ( green2_GPIO_Port , green2_Pin , 1);
//			if (timer2_flag==1){
//				dem2++;
//				settimer2(100);
//			}
//		  	break;
//
//		case 2:
//			if(timer4_flag==1){
//				switch (seg2)
//				{
//				case 0:
//					settimer4(50);
//					HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 0);
//					HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 1);
//					display7SEG2((countergreen-dem2)/10);
//					seg2=1;
//					break;
//				case 1:
//					settimer4(50);
//					HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 1);
//					HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 0);
//					display7SEG2((countergreen-dem2)%10);
//					seg2=0;
//					break;
//				default: break;
//				}
//			}
//
//			if (dem2>=countergreen){
//				led2=1;
//		  	  	dem2=0;
//		  	  	break;
//			}
//
//			HAL_GPIO_WritePin ( red2_GPIO_Port , red2_Pin , 1);
//			HAL_GPIO_WritePin ( yellow2_GPIO_Port , yellow2_Pin , 1);
//			HAL_GPIO_WritePin ( green2_GPIO_Port , green2_Pin , 0);
//
//			if (timer2_flag==1){
//				dem2++;
//				settimer2(100);
//			}
//			break;
//
//		default: break;
//		}
//	break;
//
//	case modify_red:
//		HAL_GPIO_WritePin ( red2_GPIO_Port , red2_Pin , 1);
//		HAL_GPIO_WritePin ( yellow2_GPIO_Port , yellow2_Pin , 1);
//		HAL_GPIO_WritePin ( green2_GPIO_Port , green2_Pin , 1);
//
//		if (timer1_flag==1)
//		{
//			settimer1(25);
//			HAL_GPIO_TogglePin(red1_GPIO_Port , red1_Pin);
//			HAL_GPIO_WritePin (yellow1_GPIO_Port , yellow1_Pin , 1);
//			HAL_GPIO_WritePin (green1_GPIO_Port , green1_Pin , 1);
//		}
//
//		if(timer3_flag==1){
//			switch (seg1)
//			{
//			case 0:
//				settimer3(50);
//				HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 0);
//				HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 1);
//				display7SEG1((counter)/10);
//				seg1=1;
//				break;
//			case 1:
//				settimer3(50);
//				HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 1);
//				HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 0);
//				display7SEG1((counter)%10);
//				seg1=0;
//				break;
//			default: break;
//			}
//		}
//
//		if(timer4_flag==1){
//			switch (seg2)
//			{
//			case 0:
//				settimer4(50);
//				HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 0);
//				HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 1);
//				display7SEG2(0);
//				seg2=1;
//				break;
//			case 1:
//				settimer4(50);
//				HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 1);
//				HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 0);
//				display7SEG2(1);
//				seg2=0;
//				break;
//			default: break;
//			}
//		}
//
//		if (inc()==1)
//		{
//			counter++;
//			if (counter>99) { counter=0;}
//		}
//
//		if(set()==1)
//		{
//			counterred=counter;
//		}
//
//		if(mode()==1)
//		{
//			counter=counteryellow;
//			status=modify_yellow;
//			settimer1(25);
//			settimer3(50);
//			settimer4(50);
//			seg1=0;
//			seg2=0;
//			break;
//		}
//		break;
//
//	case modify_yellow:
//			HAL_GPIO_WritePin ( red2_GPIO_Port , red2_Pin , 1);
//			HAL_GPIO_WritePin ( yellow2_GPIO_Port , yellow2_Pin , 1);
//			HAL_GPIO_WritePin ( green2_GPIO_Port , green2_Pin , 1);
//			if (timer1_flag==1)
//			{
//				settimer1(25);
//				HAL_GPIO_TogglePin(yellow1_GPIO_Port , yellow1_Pin);
//				HAL_GPIO_WritePin (red1_GPIO_Port , red1_Pin , 1);
//				HAL_GPIO_WritePin (green1_GPIO_Port , green1_Pin , 1);
//			}
//
//			if(timer3_flag==1){
//				switch (seg1)
//				{
//				case 0:
//					settimer3(50);
//					HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 0);
//					HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 1);
//					display7SEG1((counter)/10);
//					seg1=1;
//					break;
//				case 1:
//					settimer3(50);
//					HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 1);
//					HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 0);
//					display7SEG1((counter)%10);
//					seg1=0;
//					break;
//				default: break;
//				}
//			}
//
//			if(timer4_flag==1){
//				switch (seg2)
//				{
//				case 0:
//					settimer4(50);
//					HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 0);
//					HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 1);
//					display7SEG2(0);
//					seg2=1;
//					break;
//				case 1:
//					settimer4(50);
//					HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 1);
//					HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 0);
//					display7SEG2(2);
//					seg2=0;
//					break;
//				default: break;
//				}
//			}
//
//			if (inc()==1)
//			{
//				counter++;
//				if (counter>99) { counter=0;}
//			}
//
//			if(set()==1)
//			{
//				counteryellow=counter;
//			}
//
//			if(mode()==1)
//			{
//				counter=countergreen;
//				status=modify_green;
//				settimer1(25);
//				settimer3(50);
//				settimer4(50);
//				seg1=0;
//				seg2=0;
//				break;
//			}
//			break;
//
//	case modify_green:
//			HAL_GPIO_WritePin ( red2_GPIO_Port , red2_Pin , 1);
//			HAL_GPIO_WritePin ( yellow2_GPIO_Port , yellow2_Pin , 1);
//			HAL_GPIO_WritePin ( green2_GPIO_Port , green2_Pin , 1);
//			if (timer1_flag==1)
//				{
//					settimer1(25);
//					HAL_GPIO_TogglePin(green1_GPIO_Port , green1_Pin);
//					HAL_GPIO_WritePin (red1_GPIO_Port , red1_Pin , 1);
//					HAL_GPIO_WritePin (yellow1_GPIO_Port , yellow1_Pin , 1);
//				}
//
//			if(timer3_flag==1){
//				switch (seg1)
//				{
//				case 0:
//					settimer3(50);
//					HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 0);
//					HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 1);
//					display7SEG1((counter)/10);
//					seg1=1;
//					break;
//				case 1:
//					settimer3(50);
//					HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, 1);
//					HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, 0);
//					display7SEG1((counter)%10);
//					seg1=0;
//					break;
//				default: break;
//				}
//			}
//
//			if(timer4_flag==1){
//				switch (seg2)
//				{
//				case 0:
//					settimer4(50);
//					HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 0);
//					HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 1);
//					display7SEG2(0);
//					seg2=1;
//					break;
//				case 1:
//					settimer4(50);
//					HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, 1);
//					HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, 0);
//					display7SEG2(3);
//					seg2=0;
//					break;
//				default: break;
//				}
//			}
//
//			if (inc()==1)
//			{
//				counter++;
//				if (counter>99) { counter=0;}
//			}
//
//			if(set()==1)
//			{
//				countergreen=counter;
//			}
//
//			if(mode()==1)
//			{
//				counter=0;
//				status=INIT;
//				break;
//			}
//		break;
//
//	default: break;
//	}
//}
//
//
