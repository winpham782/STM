/*
 * display7seg.c
 *
 *  Created on: Nov 5, 2022
 *      Author: WinZ
 */
#include "display7seg.h"

void display7SEG11(int num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(GPIOA, a11_Pin|b11_Pin|c11_Pin|d11_Pin|e11_Pin|f11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, g11_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, a11_Pin|d11_Pin|e11_Pin|f11_Pin|g11_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, b11_Pin|c11_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, a11_Pin|d11_Pin|e11_Pin|b11_Pin|g11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, f11_Pin|c11_Pin, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, a11_Pin|d11_Pin|c11_Pin|b11_Pin|g11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, f11_Pin|e11_Pin, GPIO_PIN_SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, b11_Pin|c11_Pin|f11_Pin|g11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, a11_Pin|e11_Pin|d11_Pin, GPIO_PIN_SET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, a11_Pin|c11_Pin|d11_Pin|f11_Pin|g11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, b11_Pin|e11_Pin, GPIO_PIN_SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, a11_Pin|c11_Pin|d11_Pin|e11_Pin|f11_Pin|g11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, b11_Pin, GPIO_PIN_SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, a11_Pin|b11_Pin|c11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, f11_Pin|d11_Pin|e11_Pin|g11_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, a11_Pin|b11_Pin|c11_Pin|f11_Pin|d11_Pin|e11_Pin|g11_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, a11_Pin|b11_Pin|c11_Pin|f11_Pin|d11_Pin|g11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, e11_Pin, GPIO_PIN_SET);
		break;
	default: break;
	}
}

void display7SEG21(int num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(GPIOB, c21_Pin|d21_Pin|e21_Pin|f21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, g21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, a21_Pin|b21_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, d21_Pin|e21_Pin|f21_Pin|g21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, c21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, a21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, b21_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, d21_Pin|e21_Pin|g21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, f21_Pin|c21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, a21_Pin|b21_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, d21_Pin|c21_Pin|g21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, f21_Pin|e21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, a21_Pin|b21_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, c21_Pin|f21_Pin|g21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, e21_Pin|d21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, b21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, a21_Pin, GPIO_PIN_SET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, c21_Pin|d21_Pin|f21_Pin|g21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, e21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, a21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, b21_Pin, GPIO_PIN_SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, c21_Pin|d21_Pin|e21_Pin|f21_Pin|g21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, b21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, a21_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, c21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, f21_Pin|d21_Pin|e21_Pin|g21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, a21_Pin|b21_Pin, GPIO_PIN_RESET);

		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, c21_Pin|f21_Pin|d21_Pin|e21_Pin|g21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, a21_Pin|b21_Pin, GPIO_PIN_RESET);

		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, c21_Pin|f21_Pin|d21_Pin|g21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, e21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, a21_Pin|b21_Pin, GPIO_PIN_RESET);

		break;
	default: break;
	}
}

void display7SEG12(int num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(GPIOA, a12_Pin|b12_Pin|c12_Pin|d12_Pin|e12_Pin|f12_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, g12_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, a12_Pin|d12_Pin|e12_Pin|f12_Pin|g12_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, b12_Pin|c12_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, a12_Pin|d12_Pin|e12_Pin|b12_Pin|g12_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, f12_Pin|c12_Pin, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, a12_Pin|d12_Pin|c12_Pin|b12_Pin|g12_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, f12_Pin|e12_Pin, GPIO_PIN_SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, b12_Pin|c12_Pin|f12_Pin|g12_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, a12_Pin|e12_Pin|d12_Pin, GPIO_PIN_SET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, a12_Pin|c12_Pin|d12_Pin|f12_Pin|g12_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, b12_Pin|e12_Pin, GPIO_PIN_SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, a12_Pin|c12_Pin|d12_Pin|e12_Pin|f12_Pin|g12_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, b12_Pin, GPIO_PIN_SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, a12_Pin|b12_Pin|c12_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, f12_Pin|d12_Pin|e12_Pin|g12_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, a12_Pin|b12_Pin|c12_Pin|f12_Pin|d12_Pin|e12_Pin|g12_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, a12_Pin|b12_Pin|c12_Pin|f12_Pin|d12_Pin|g12_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, e12_Pin, GPIO_PIN_SET);
		break;
	default: break;
	}
}

void display7SEG22(int num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(GPIOB, a22_Pin|b22_Pin|c22_Pin|d22_Pin|e22_Pin|f22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g22_GPIO_Port, g22_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, a22_Pin|d22_Pin|e22_Pin|f22_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g22_GPIO_Port, g22_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, b22_Pin|c22_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, a22_Pin|d22_Pin|e22_Pin|b22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g22_GPIO_Port, g22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, f22_Pin|c22_Pin, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, a22_Pin|d22_Pin|c22_Pin|b22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g22_GPIO_Port, g22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, f22_Pin|e22_Pin, GPIO_PIN_SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, b22_Pin|c22_Pin|f22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g22_GPIO_Port, g22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, a22_Pin|e22_Pin|d22_Pin, GPIO_PIN_SET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, a22_Pin|c22_Pin|d22_Pin|f22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g22_GPIO_Port, g22_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(GPIOB, b22_Pin|e22_Pin, GPIO_PIN_SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, a22_Pin|c22_Pin|d22_Pin|e22_Pin|f22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g22_GPIO_Port, g22_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(GPIOB, b22_Pin, GPIO_PIN_SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, a22_Pin|b22_Pin|c22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, f22_Pin|d22_Pin|e22_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g22_GPIO_Port, g22_Pin, GPIO_PIN_SET);

		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, a22_Pin|b22_Pin|c22_Pin|f22_Pin|d22_Pin|e22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g22_GPIO_Port, g22_Pin, GPIO_PIN_RESET);

		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, a22_Pin|b22_Pin|c22_Pin|f22_Pin|d22_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g22_GPIO_Port, g22_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(GPIOB, e22_Pin, GPIO_PIN_SET);
		break;
	default: break;
	}
}

