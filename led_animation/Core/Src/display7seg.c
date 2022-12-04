///*
// * display7seg.c
// *
// *  Created on: Nov 5, 2022
// *      Author: WinZ
// */
//#include "display7seg.h"
//
//void display7SEG1(int num)
//{
//	switch(num)
//	{
//	case 0:
//		HAL_GPIO_WritePin(GPIOA, a1_Pin|b1_Pin|c1_Pin|d1_Pin|e1_Pin|f1_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOA, g1_Pin, GPIO_PIN_SET);
//		break;
//	case 1:
//		HAL_GPIO_WritePin(GPIOA, a1_Pin|d1_Pin|e1_Pin|f1_Pin|g1_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(GPIOA, b1_Pin|c1_Pin, GPIO_PIN_RESET);
//		break;
//	case 2:
//		HAL_GPIO_WritePin(GPIOA, a1_Pin|d1_Pin|e1_Pin|b1_Pin|g1_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOA, f1_Pin|c1_Pin, GPIO_PIN_SET);
//		break;
//	case 3:
//		HAL_GPIO_WritePin(GPIOA, a1_Pin|d1_Pin|c1_Pin|b1_Pin|g1_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOA, f1_Pin|e1_Pin, GPIO_PIN_SET);
//		break;
//	case 4:
//		HAL_GPIO_WritePin(GPIOA, b1_Pin|c1_Pin|f1_Pin|g1_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOA, a1_Pin|e1_Pin|d1_Pin, GPIO_PIN_SET);
//		break;
//	case 5:
//		HAL_GPIO_WritePin(GPIOA, a1_Pin|c1_Pin|d1_Pin|f1_Pin|g1_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOA, b1_Pin|e1_Pin, GPIO_PIN_SET);
//		break;
//	case 6:
//		HAL_GPIO_WritePin(GPIOA, a1_Pin|c1_Pin|d1_Pin|e1_Pin|f1_Pin|g1_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOA, b1_Pin, GPIO_PIN_SET);
//		break;
//	case 7:
//		HAL_GPIO_WritePin(GPIOA, a1_Pin|b1_Pin|c1_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOA, f1_Pin|d1_Pin|e1_Pin|g1_Pin, GPIO_PIN_SET);
//		break;
//	case 8:
//		HAL_GPIO_WritePin(GPIOA, a1_Pin|b1_Pin|c1_Pin|f1_Pin|d1_Pin|e1_Pin|g1_Pin, GPIO_PIN_RESET);
//		break;
//	case 9:
//		HAL_GPIO_WritePin(GPIOA, a1_Pin|b1_Pin|c1_Pin|f1_Pin|d1_Pin|g1_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOA, e1_Pin, GPIO_PIN_SET);
//		break;
//	default: break;
//	}
//}
//void display7SEG2(int num)
//{
//	switch(num)
//	{
//	case 0:
//		HAL_GPIO_WritePin(GPIOB, a2_Pin|b2_Pin|c2_Pin|d2_Pin|e2_Pin|f2_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOB, g2_Pin, GPIO_PIN_SET);
//		break;
//	case 1:
//		HAL_GPIO_WritePin(GPIOB, a2_Pin|d2_Pin|e2_Pin|f2_Pin|g2_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(GPIOB, b2_Pin|c2_Pin, GPIO_PIN_RESET);
//		break;
//	case 2:
//		HAL_GPIO_WritePin(GPIOB, a2_Pin|d2_Pin|e2_Pin|b2_Pin|g2_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOB, f2_Pin|c2_Pin, GPIO_PIN_SET);
//		break;
//	case 3:
//		HAL_GPIO_WritePin(GPIOB, a2_Pin|d2_Pin|c2_Pin|b2_Pin|g2_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOB, f2_Pin|e2_Pin, GPIO_PIN_SET);
//		break;
//	case 4:
//		HAL_GPIO_WritePin(GPIOB, b2_Pin|c2_Pin|f2_Pin|g2_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOB, a2_Pin|e2_Pin|d2_Pin, GPIO_PIN_SET);
//		break;
//	case 5:
//		HAL_GPIO_WritePin(GPIOB, a2_Pin|c2_Pin|d2_Pin|f2_Pin|g2_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOB, b2_Pin|e2_Pin, GPIO_PIN_SET);
//		break;
//	case 6:
//		HAL_GPIO_WritePin(GPIOB, a2_Pin|c2_Pin|d2_Pin|e2_Pin|f2_Pin|g2_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOB, b2_Pin, GPIO_PIN_SET);
//		break;
//	case 7:
//		HAL_GPIO_WritePin(GPIOB, a2_Pin|b2_Pin|c2_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOB, f2_Pin|d2_Pin|e2_Pin|g2_Pin, GPIO_PIN_SET);
//		break;
//	case 8:
//		HAL_GPIO_WritePin(GPIOB, a2_Pin|b2_Pin|c2_Pin|f2_Pin|d2_Pin|e2_Pin|g2_Pin, GPIO_PIN_RESET);
//		break;
//	case 9:
//		HAL_GPIO_WritePin(GPIOB, a2_Pin|b2_Pin|c2_Pin|f2_Pin|d2_Pin|g2_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOB, e2_Pin, GPIO_PIN_SET);
//		break;
//	default: break;
//	}
//}
//
