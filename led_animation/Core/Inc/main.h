/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_GREEN2_Pin GPIO_PIN_13
#define LED_GREEN2_GPIO_Port GPIOC
#define LED_RED1_Pin GPIO_PIN_14
#define LED_RED1_GPIO_Port GPIOC
#define buttonreset_Pin GPIO_PIN_15
#define buttonreset_GPIO_Port GPIOC
#define buttoninc_Pin GPIO_PIN_0
#define buttoninc_GPIO_Port GPIOD
#define buttondec_Pin GPIO_PIN_1
#define buttondec_GPIO_Port GPIOD
#define a11_Pin GPIO_PIN_0
#define a11_GPIO_Port GPIOA
#define b11_Pin GPIO_PIN_1
#define b11_GPIO_Port GPIOA
#define c11_Pin GPIO_PIN_2
#define c11_GPIO_Port GPIOA
#define d11_Pin GPIO_PIN_3
#define d11_GPIO_Port GPIOA
#define e11_Pin GPIO_PIN_4
#define e11_GPIO_Port GPIOA
#define f11_Pin GPIO_PIN_5
#define f11_GPIO_Port GPIOA
#define g11_Pin GPIO_PIN_6
#define g11_GPIO_Port GPIOA
#define a12_Pin GPIO_PIN_7
#define a12_GPIO_Port GPIOA
#define c21_Pin GPIO_PIN_0
#define c21_GPIO_Port GPIOB
#define d21_Pin GPIO_PIN_1
#define d21_GPIO_Port GPIOB
#define e21_Pin GPIO_PIN_2
#define e21_GPIO_Port GPIOB
#define f22_Pin GPIO_PIN_10
#define f22_GPIO_Port GPIOB
#define g22_Pin GPIO_PIN_11
#define g22_GPIO_Port GPIOB
#define LED_YELLOW1_Pin GPIO_PIN_12
#define LED_YELLOW1_GPIO_Port GPIOB
#define LED_GREEN1_Pin GPIO_PIN_13
#define LED_GREEN1_GPIO_Port GPIOB
#define LED_RED2_Pin GPIO_PIN_14
#define LED_RED2_GPIO_Port GPIOB
#define LED_YELLOW2_Pin GPIO_PIN_15
#define LED_YELLOW2_GPIO_Port GPIOB
#define b12_Pin GPIO_PIN_8
#define b12_GPIO_Port GPIOA
#define c12_Pin GPIO_PIN_9
#define c12_GPIO_Port GPIOA
#define d12_Pin GPIO_PIN_10
#define d12_GPIO_Port GPIOA
#define e12_Pin GPIO_PIN_11
#define e12_GPIO_Port GPIOA
#define f12_Pin GPIO_PIN_12
#define f12_GPIO_Port GPIOA
#define g12_Pin GPIO_PIN_13
#define g12_GPIO_Port GPIOA
#define a21_Pin GPIO_PIN_14
#define a21_GPIO_Port GPIOA
#define b21_Pin GPIO_PIN_15
#define b21_GPIO_Port GPIOA
#define f21_Pin GPIO_PIN_3
#define f21_GPIO_Port GPIOB
#define g21_Pin GPIO_PIN_4
#define g21_GPIO_Port GPIOB
#define a22_Pin GPIO_PIN_5
#define a22_GPIO_Port GPIOB
#define b22_Pin GPIO_PIN_6
#define b22_GPIO_Port GPIOB
#define c22_Pin GPIO_PIN_7
#define c22_GPIO_Port GPIOB
#define d22_Pin GPIO_PIN_8
#define d22_GPIO_Port GPIOB
#define e22_Pin GPIO_PIN_9
#define e22_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
