/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32g0xx_hal.h"
#include "stm32g0xx_ll_bus.h"
#include "stm32g0xx_ll_cortex.h"
#include "stm32g0xx_ll_dma.h"
#include "stm32g0xx_ll_exti.h"
#include "stm32g0xx_ll_gpio.h"
#include "stm32g0xx_ll_i2c.h"
#include "stm32g0xx_ll_pwr.h"
#include "stm32g0xx_ll_rcc.h"
#include "stm32g0xx_ll_system.h"
#include "stm32g0xx_ll_utils.h"

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
#define CH224K_PG_Pin GPIO_PIN_13
#define CH224K_PG_GPIO_Port GPIOC
#define CH224K_CFG1_Pin GPIO_PIN_1
#define CH224K_CFG1_GPIO_Port GPIOF
#define CH224K_CFG2_Pin GPIO_PIN_1
#define CH224K_CFG2_GPIO_Port GPIOA
#define CH224K_CFG3_Pin GPIO_PIN_2
#define CH224K_CFG3_GPIO_Port GPIOA
#define KEY_U_Pin GPIO_PIN_11
#define KEY_U_GPIO_Port GPIOB
#define KEY_R_Pin GPIO_PIN_12
#define KEY_R_GPIO_Port GPIOB
#define KEY_L_Pin GPIO_PIN_15
#define KEY_L_GPIO_Port GPIOB
#define KEY_M_Pin GPIO_PIN_8
#define KEY_M_GPIO_Port GPIOA
#define KEY_D_Pin GPIO_PIN_9
#define KEY_D_GPIO_Port GPIOA
#define GYRO_INT_Pin GPIO_PIN_6
#define GYRO_INT_GPIO_Port GPIOC
#define OLED_CS_Pin GPIO_PIN_7
#define OLED_CS_GPIO_Port GPIOC
#define OLED_RESET_Pin GPIO_PIN_10
#define OLED_RESET_GPIO_Port GPIOA
#define OLED_DC_Pin GPIO_PIN_11
#define OLED_DC_GPIO_Port GPIOA
#define HALL_Pin GPIO_PIN_15
#define HALL_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
