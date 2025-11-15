#include "../../CMSIS/Devices/STM32F4xx/Inc/stm32f4xx.h"
#include "../../CMSIS/Devices/STM32F4xx/Inc/STM32F429xx/stm32f429xx.h"
#include "stdint.h"

// #ifndef INIT_H
// #define INIT_H


// #define READ_GPIO_C13 (*(uint32_t*)(0x40020800UL + 0x10UL) & 0x2000UL)
// #define SET_GPIO_B7 (*(uint32_t*)(0x40020400UL + 0x18UL) |= 0x80)
// #define RESET_GPIO_B7 (*(uint32_t*)(0x40020400UL + 0x18UL) |= 0x800000)
// #define RCC_GPIO_EN (*(uint32_t*)(0x40023800UL + 0x30UL))
// #define GPIOB_MODER (*(uint32_t*)(0x40020400UL + 0x00UL))
// #define GPIOB_OTYPER (*(uint32_t*)(0x40020400UL + 0x04UL))
// #define GPIOB_OSPEEDR (*(uint32_t*)(0x40020400UL + 0x08UL))
// #define GPIOB_PUPDR (*(uint32_t*)(0x40020400UL + 0x0CUL))
// #define GPIO_OFF 0x00UL
// #define RCC_GPIOB_EN 0x02UL
// #define RCC_GPIOC_EN 0x04UL
// #define GPIOB_MODE_PIN7_OUT 0x4000UL
// #define GPIOB_OTYPE_PIN7_PP 0x0000UL
// #define GPIOB_OSPEED_PIN7_MID 0x4000UL
// #define GPIOB_PUPDR_PIN7_NOPUPD 0x0000UL
// #define GPIOB_BSRR (*(uint32_t*)(0x40020400UL + 0x18UL))
// #define GPIOB_BSRR_PIN7_SET 0x000080UL
// #define GPIOB_BSRR_PIN7_RESET 0x800000UL
// #define SET_BIT(REG, BIT) (REG |= BIT)
// #define GPIOC_IDR (*(uint32_t*)(0x40020800UL + 0x10UL))
// #define GPIOC_IDR_PIN13 0x002000UL
// #define READ_BIT(REG, BIT) (REG & BIT)

void GPIO_Ini();
// void GPIO_Init_With_Miself_Macros();

// #endif