/**
  ******************************************************************************
  * @file    stm32f4xx_ll_irq.h
  * @author  Victor Korobkovsky, Nikita Presnov
  * @brief   Header file of IRQ LL module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F4xx_LL_IRQ_H
#define __STM32F4xx_LL_IRQ_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"

/** @addtogroup STM32F4xx_LL_Driver
  * @{
  */

/** @defgroup IRQ_LL IRQ
  * @{
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup IRQ_Exported_Constants   IRQ Exported Constants
  * @{
  */
#if defined(STM32F401xC) || defined(STM32F401xE)
  #define IRQ_TOTAL 101
#elif defined(STM32F405xx) || defined(STM32F407xx) || defined(STM32F415xx) || defined(STM32F417xx)
  #define IRQ_TOTAL 98
#elif defined(STM32F410Cx) || defined(STM32F410Rx) || defined(STM32F410Tx) 
  #define IRQ_TOTAL 114
#elif defined(STM32F411xE)
  #define IRQ_TOTAL 102
#elif defined(STM32F412Cx) || defined(STM32F412Rx) || defined(STM32F412Vx) || defined(STM32F412Zx)
  #define IRQ_TOTAL 112
#elif defined(STM32F413xx) || defined(STM32F423xx) 
  #define IRQ_TOTAL 118
#elif defined(STM32F427xx) || defined(STM32F429xx) || defined(STM32F437xx)  || defined(STM32F439xx)
  #define IRQ_TOTAL 117
#elif defined(STM32F446xx)
  #define IRQ_TOTAL 113
#elif defined(STM32F469xx) || defined(STM32F479xx)
  #define IRQ_TOTAL 109
#else
 #error "Please select first the target STM32F4xx device used in your application (in stm32f4xx.h file)"
#endif

/**
  * @}
  */

/** @defgroup  IRQ_Private_Macros   IRQ Private Macros
  * @{
  */
/* Private macros --------------------------------------------------------*/

/**
  * @brief  Получение системного порядкового номера прерывания, с учетом исключений.
  * @param  IRQ: Номер по стандарту CMSIS.
  * @retval None
  */
#define IRQ_NUM(IRQ)  ((int32_t)IRQ + 16)

/**
  * @brief  Checks if IRQn parameter is in allowed range.
  * @param  IRQn: specifies the interrupt.
  * @retval None
  */
#define IS_IRQ_NUM(IRQn)  (IRQ_NUM(IRQn) < IRQ_TOTAL)
/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/

/** @defgroup IRQ_LL_Exported_Functions IRQ Exported Functions
  * @{
  */

#if defined(USE_FULL_LL_DRIVER)
/** @defgroup IRQ_LL_EF_Init Initialization and de-initialization functions
  * @{
  */
/* Initialization and de-initialization functions  ****************************/
ErrorStatus LL_IRQ_Init(IRQn_Type IRQn, void (*Handler)(void));
ErrorStatus LL_IRQ_DeInit(IRQn_Type IRQn);
/**
  * @}
  */
#endif /* USE_FULL_LL_DRIVER */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __STM32F1xx_LL_IRQ_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
