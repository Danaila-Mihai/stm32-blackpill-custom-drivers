#include "../ST_headers/stm32f401xc.h"
#include "../custom_headers/clock.h"
#include <stdint.h>

void GPIO_clock_init(GPIO_TypeDef* GPIOx) {
    // see reference manual page 118
    switch (GPIOx){
    case GPIOA:
        RCC->AHB1ENR |= GPIOA_CLOCK_ENABLE_BIT;
        break;
    case GPIOB:
        RCC->AHB1ENR |= GPIOB_CLOCK_ENABLE_BIT;
        break;
    case GPIOC:
        RCC->AHB1ENR |= GPIOC_CLOCK_ENABLE_BIT;
        break;
    case GPIOD:
        RCC->AHB1ENR |= GPIOD_CLOCK_ENABLE_BIT;
        break;
    case GPIOE:
        RCC->AHB1ENR |= GPIOE_CLOCK_ENABLE_BIT;
        break;
    case GPIOH:
        RCC->AHB1ENR |= GPIOH_CLOCK_ENABLE_BIT;
        break;
    default:
        break;
    }
}

void CRC_clock_init() {
    RCC->AHB1ENR |= CRC_CLOCK_ENABLE_BIT;
}

void DMA_clock_init(DMA_TypeDef* DMAx) {
    switch(DMAx) {
    case DMA1:
        RCC->AHB1ENR |= DMA1_CLOCK_ENABLE_BIT;
        break;
    case DMA2:
        RCC->AHB1ENR |= DMA2_CLOCK_ENABLE_BIT;
        break;
    default:
        break;
    }
}

void timer_clock_init(TIM_TypeDef* TIMx) {
    switch(TIMx) {
    case TIM1:
        RCC->APB2ENR |= TIMER1_CLOCK_ENABLE_BIT;
        break;
    case TIM2:
        RCC->APB1ENR |= TIMER2_CLOCK_ENABLE_BIT;
        break;
    case TIM3:
        RCC->APB1ENR |= TIMER3_CLOCK_ENABLE_BIT;
        break;
    case TIM4:
        RCC->APB1ENR |= TIMER4_CLOCK_ENABLE_BIT;
        break;
    case TIM5:
        RCC->APB1ENR |= TIMER5_CLOCK_ENABLE_BIT;
        break;
    case TIM9:
        RCC->APB2ENR |= TIMER9_CLOCK_ENABLE_BIT;
        break;
    case TIM10:
        RCC->APB2ENR |= TIMER10_CLOCK_ENABLE_BIT;
        break;
    case TIM11:
        RCC->APB2ENR |= TIMER11_CLOCK_ENABLE_BIT;
        break;
    default:
        break;
    }
}
