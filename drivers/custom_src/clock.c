#include "../ST_headers/stm32f401xc.h"
#include "../custom_headers/clock.h"
#include <stdint.h>

void clock_init(uint32_t clock_enable_bits_mask) {
    RCC->AHB1ENR |= clock_enable_bits_mask;
}
