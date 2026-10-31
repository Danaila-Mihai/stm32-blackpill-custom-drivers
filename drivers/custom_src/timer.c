#include "../custom_headers/timer.h"

void timer_init(TIM_TypeDef* TIMx) {
    timer_clock_init(TIMx);
}
