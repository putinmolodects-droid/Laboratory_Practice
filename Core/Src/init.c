#include "init.h"

void GPIO_Ini(void)
{
    RCC_GPIO_EN|=RCC_GPIOB_EN + RCC_GPIOC_EN; //Включение тактирования портов GPIOB и GPIOC
    GPIOB_MODER|=GPIOB_MODE_PIN7_OUT; //Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    GPIOB_OTYPER|=GPIOB_OTYPE_PIN7_PP; //Настройка на PushPull работу 7-го пина GPIOB (Output Push-Pull)
    GPIOB_OSPEEDR|=GPIOB_OSPEED_PIN7_MID; //Настройка скорости работы 7-го пина GPIOB на среднюю
    GPIOB_PUPDR|=GPIOB_PUPDR_PIN7_NOPUPD; //Отключение PU/PD резисторов для 7-го пина GPIOB
}

void GPIO_Init_With_Miself_Macros(void)
{
    SET_BIT(RCC_GPIO_EN, RCC_GPIOB_EN | RCC_GPIOC_EN);
    SET_BIT(GPIOB_MODER, GPIOB_MODE_PIN7_OUT);
    SET_BIT(GPIOB_OSPEEDR, GPIOB_OSPEED_PIN7_MID);
    SET_BIT(GPIOB_PUPDR, GPIO_OFF);
    SET_BIT(GPIOB_BSRR, GPIOB_BSRR_PIN7_RESET);

}