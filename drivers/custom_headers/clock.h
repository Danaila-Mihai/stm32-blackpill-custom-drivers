#ifndef DRIVERS_CUSTOM_CLOCK_H_
#define DRIVERS_CUSTOM_CLOCK_H_
#include "../ST_headers/stm32f401xc.h"
// AHB1 enable bits
// see reference manual pages 118-119
#define GPIOA_CLOCK_ENABLE_BIT 	1 << 0
#define GPIOB_CLOCK_ENABLE_BIT 	1 << 1
#define GPIOC_CLOCK_ENABLE_BIT 	1 << 2
#define GPIOD_CLOCK_ENABLE_BIT 	1 << 3
#define GPIOE_CLOCK_ENABLE_BIT 	1 << 4
#define GPIOH_CLOCK_ENABLE_BIT 	1 << 7
#define CRC_CLOCK_ENABLE_BIT 	1 << 12
#define DMA1_CLOCK_ENABLE_BIT 	1 << 21
#define DMA2_CLOCK_ENABLE_BIT 	1 << 22

void GPIO_clock_init(GPIO_TypeDef* GPIOx);

void CRC_clock_init();

void DMA_clock_init(DMA_TypeDef* DMAx);

// APB1 + APB2 enable bits
// see reference manual pages 120-123
#define TIMER1_CLOCK_ENABLE_BIT     1 << 0;
#define TIMER2_CLOCK_ENABLE_BIT     1 << 0;
#define TIMER3_CLOCK_ENABLE_BIT     1 << 1;
#define TIMER4_CLOCK_ENABLE_BIT     1 << 2;
#define TIMER5_CLOCK_ENABLE_BIT     1 << 3;
#define TIMER9_CLOCK_ENABLE_BIT     1 << 16;
#define TIMER10_CLOCK_ENABLE_BIT    1 << 17;
#define TIMER11_CLOCK_ENABLE_BIT    1 << 18;


void timer_clock_init(TIM_TypeDef* TIMx);

#endif
