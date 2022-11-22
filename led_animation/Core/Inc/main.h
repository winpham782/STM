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
#define buttonreset_Pin GPIO_PIN_13
#define buttonreset_GPIO_Port GPIOC
#define buttoninc_Pin GPIO_PIN_14
#define buttoninc_GPIO_Port GPIOC
#define buttondec_Pin GPIO_PIN_15
#define buttondec_GPIO_Port GPIOC
#define red1_Pin GPIO_PIN_0
#define red1_GPIO_Port GPIOA
#define yellow1_Pin GPIO_PIN_1
#define yellow1_GPIO_Port GPIOA
#define green1_Pin GPIO_PIN_2
#define green1_GPIO_Port GPIOA
#define red2_Pin GPIO_PIN_3
#define red2_GPIO_Port GPIOA
#define yellow2_Pin GPIO_PIN_4
#define yellow2_GPIO_Port GPIOA
#define green2_Pin GPIO_PIN_5
#define green2_GPIO_Port GPIOA
#define en0_Pin GPIO_PIN_0
#define en0_GPIO_Port GPIOB
#define en1_Pin GPIO_PIN_1
#define en1_GPIO_Port GPIOB
#define en2_Pin GPIO_PIN_2
#define en2_GPIO_Port GPIOB
#define b2_Pin GPIO_PIN_10
#define b2_GPIO_Port GPIOB
#define c2_Pin GPIO_PIN_11
#define c2_GPIO_Port GPIOB
#define d2_Pin GPIO_PIN_12
#define d2_GPIO_Port GPIOB
#define e2_Pin GPIO_PIN_13
#define e2_GPIO_Port GPIOB
#define f2_Pin GPIO_PIN_14
#define f2_GPIO_Port GPIOB
#define g2_Pin GPIO_PIN_15
#define g2_GPIO_Port GPIOB
#define a1_Pin GPIO_PIN_9
#define a1_GPIO_Port GPIOA
#define b1_Pin GPIO_PIN_10
#define b1_GPIO_Port GPIOA
#define c1_Pin GPIO_PIN_11
#define c1_GPIO_Port GPIOA
#define d1_Pin GPIO_PIN_12
#define d1_GPIO_Port GPIOA
#define e1_Pin GPIO_PIN_13
#define e1_GPIO_Port GPIOA
#define f1_Pin GPIO_PIN_14
#define f1_GPIO_Port GPIOA
#define g1_Pin GPIO_PIN_15
#define g1_GPIO_Port GPIOA
#define en3_Pin GPIO_PIN_3
#define en3_GPIO_Port GPIOB
#define a2_Pin GPIO_PIN_9
#define a2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
