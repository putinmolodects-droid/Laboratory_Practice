#include "stdint.h"
// #include <unistd.h>
#include "init.h"

void GPIO_Ini(void)
{
    SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN|RCC_AHB1ENR_GPIOCEN); //Включение тактирования портов GPIOB и GPIOC
    //input 8
    SET_BIT(GPIOC->MODER, 0x0);
    //9
    SET_BIT(GPIOC->MODER, 0x0);
    SET_BIT(GPIOC->PUPDR, GPIO_PUPDR_PUPD8_0|GPIO_PUPDR_PUPD9_0); //Bключение PU/PD резисторов для 7-го пина GPIOB
    //output 7
    *(uint32_t)(0x40020400UL+0x00UL)|=(0x01<<31); //moder15
    *(uint32_t)(0x40020400UL + 0x04UL) |= 0x00; //otyper15
    *(uint32_t)(0x40020400UL + 0x08UL) |= (0x01<<31); //speedmed15
    *(uint32_t)(0x40020400UL + 0x0CUL) |= (0x01<<31); //pup15
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE13_0|GPIO_MODER_MODE12_0|GPIO_MODER_MODE10_0|GPIO_MODER_MODE11_0|GPIO_MODER_MODE0_0); //Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_13|GPIO_OTYPER_OT_12|GPIO_MODER_MODE10_0|GPIO_MODER_MODE11_0|GPIO_MODER_MODE0_0); //Настройка на PushPull работу 7-го пина GPIOB (Output Push-Pull)
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR13_0|GPIO_OSPEEDER_OSPEEDR12_0|GPIO_MODER_MODE10_0|GPIO_MODER_MODE11_0|GPIO_MODER_MODE0_0); //Настройка скорости работы 7-го пина GPIOB на среднюю
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD13_0|GPIO_PUPDR_PUPD12_0|GPIO_MODER_MODE10_0|GPIO_MODER_MODE11_0|GPIO_MODER_MODE0_0); //Отключение PU/PD резисторов для 7-го пина GPIOB
    //8
    // SET_BIT(GPIOB->MODER, GPIO_MODER_MODE8_0); //Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    // CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_8); //Настройка на PushPull работу 7-го пина GPIOB (Output Push-Pull)
    // SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR8_0); //Настройка скорости работы 7-го пина GPIOB на среднюю
    // CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD8_0); //Отключение PU/PD резисторов для 7-го пина GPIOB
    //9
    // SET_BIT(GPIOB->MODER, GPIO_MODER_MODE9_0); //Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    // CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_9); //Настройка на PushPull работу 7-го пина GPIOB (Output Push-Pull)
    // SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR9_0); //Настройка скорости работы 7-го пина GPIOB на среднюю
    // CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD9_0); //Отключение PU/PD резисторов для 7-го пина GPIOB
    //15
    // SET_BIT(GPIOB->MODER, GPIO_MODER_MODE15_0); //Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    // CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_15); //Настройка на PushPull работу 7-го пина GPIOB (Output Push-Pull)
    // SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR15_0); //Настройка скорости работы 7-го пина GPIOB на среднюю
    // CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD15_0); //Отключение PU/PD резисторов для 7-го пина GPIOB
    // //13
    // SET_BIT(GPIOB->MODER, GPIO_MODER_MODE13_0); //Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    // CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_13); //Настройка на PushPull работу 7-го пина GPIOB (Output Push-Pull)
    // SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR13_0); //Настройка скорости работы 7-го пина GPIOB на среднюю
    // CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD13_0); //Отключение PU/PD резисторов для 7-го пина GPIOB
    // //12
    // SET_BIT(GPIOB->MODER, GPIO_MODER_MODE12_0); //Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    // CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_12); //Настройка на PushPull работу 7-го пина GPIOB (Output Push-Pull)
    // SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR12_0); //Настройка скорости работы 7-го пина GPIOB на среднюю
    // CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD12_0); //Отключение PU/PD резисторов для 7-го пина GPIOB
    // //5
    // SET_BIT(GPIOB->MODER, GPIO_MODER_MODE5_0); //Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    // CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_5); //Настройка на PushPull работу 7-го пина GPIOB (Output Push-Pull)
    // SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR5_0); //Настройка скорости работы 7-го пина GPIOB на среднюю
    // CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD5_0); //Отключение PU/PD резисторов для 7-го пина GPIOB
    // //3
    // SET_BIT(GPIOB->MODER, GPIO_MODER_MODE3_0); //Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    // CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_3); //Настройка на PushPull работу 7-го пина GPIOB (Output Push-Pull)
    // SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR3_0); //Настройка скорости работы 7-го пина GPIOB на среднюю
    // CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD3_0); //Отключение PU/PD резисторов для 7-го пина GPIOB
    // //4
    // SET_BIT(GPIOB->MODER, GPIO_MODER_MODE4_0); //Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    // CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_4); //Настройка на PushPull работу 7-го пина GPIOB (Output Push-Pull)
    // SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR4_0); //Настройка скорости работы 7-го пина GPIOB на среднюю
    // CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD4_0); //Отключение PU/PD резисторов для 7-го пина GPIOB
}

// void GPIO_Init_With_Miself_Macros(void)
// {
//     SET_BIT(RCC_GPIO_EN, RCC_GPIOB_EN | RCC_GPIOC_EN);
//     SET_BIT(GPIOB_MODER, GPIOB_MODE_PIN7_OUT);
//     SET_BIT(GPIOB_OSPEEDR, GPIOB_OSPEED_PIN7_MID);
//     SET_BIT(GPIOB_PUPDR, GPIO_OFF);
//     SET_BIT(GPIOB_BSRR, GPIOB_BSRR_PIN7_RESET);

// }