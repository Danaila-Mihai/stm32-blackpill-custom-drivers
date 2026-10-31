#include "../custom_headers/clock.h"
#include <stdint.h>

void GPIO_clock_init(GPIO_TypeDef* GPIOx) {
    // see reference manual page 118
    if (GPIOx == GPIOA) {
        RCC->AHB1ENR |= GPIOA_CLOCK_ENABLE_BIT;
    } else if (GPIOx == GPIOB) {
        RCC->AHB1ENR |= GPIOB_CLOCK_ENABLE_BIT;
    } else if (GPIOx == GPIOC) {
        RCC->AHB1ENR |= GPIOC_CLOCK_ENABLE_BIT;
    } else if (GPIOx == GPIOD) {
        RCC->AHB1ENR |= GPIOD_CLOCK_ENABLE_BIT;
    } else if (GPIOx == GPIOE) {
        RCC->AHB1ENR |= GPIOE_CLOCK_ENABLE_BIT;
    } else if (GPIOx == GPIOH) {
        RCC->AHB1ENR |= GPIOH_CLOCK_ENABLE_BIT;
    } else {
    }
}

void CRC_clock_init() {
    RCC->AHB1ENR |= CRC_CLOCK_ENABLE_BIT;
}

void DMA_clock_init(DMA_TypeDef* DMAx) {
    if (DMAx == DMA1) {
        RCC->AHB1ENR |= DMA1_CLOCK_ENABLE_BIT;
    } else if (DMAx == DMA2) {
        RCC->AHB1ENR |= DMA2_CLOCK_ENABLE_BIT;
    } else {
    }
}

void timer_clock_init(TIM_TypeDef* TIMx) {
    if (TIMx == TIM1) {
        RCC->APB2ENR |= TIMER1_CLOCK_ENABLE_BIT;
    } else if (TIMx == TIM2) {
        RCC->APB1ENR |= TIMER2_CLOCK_ENABLE_BIT;
    } else if (TIMx == TIM3) {
        RCC->APB1ENR |= TIMER3_CLOCK_ENABLE_BIT;
    } else if (TIMx == TIM4) {
        RCC->APB1ENR |= TIMER4_CLOCK_ENABLE_BIT;
    } else if (TIMx == TIM5) {
        RCC->APB1ENR |= TIMER5_CLOCK_ENABLE_BIT;
    } else if (TIMx == TIM9) {
        RCC->APB2ENR |= TIMER9_CLOCK_ENABLE_BIT;
    } else if (TIMx == TIM10) {
        RCC->APB2ENR |= TIMER10_CLOCK_ENABLE_BIT;
    } else if (TIMx == TIM11) {
        RCC->APB2ENR |= TIMER11_CLOCK_ENABLE_BIT;
    } else {
    }
}
