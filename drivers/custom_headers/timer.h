#ifndef DRIVERS_CUSTOM_HEADERS_TIMER_H_
#define DRIVERS_CUSTOM_HEADERS_TIMER_H_
#include "clock.h"
#endif /* DRIVERS_CUSTOM_HEADERS_TIMER_H_ */

enum counting_mode {
    UPCOUNTING_MODE,
    DOWNCOUNTING_MODE,
    CENTER_ALIGNED_MODE
};

typedef struct timer_config {
   enum counting_mode counting;
} *timer_config;

void timer_init(TIM_TypeDef* TIMx);
