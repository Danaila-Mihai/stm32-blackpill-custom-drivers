#include "drivers/ST_headers/stm32f401xc.h"

void SystemInit() {

}

int main(void) {

	RCC->AHB1ENR |= 1U << 2;
	GPIOC->MODER &= ~(3U << (2 * 13));
	GPIOC->MODER |= 1U << (2 * 13);
	GPIOC->OTYPER &= ~(1U << 13);
	GPIOC->PUPDR &= ~(3U << (2 * 13));

	while(1) {
		GPIOC->ODR |= 1U << 13;
		for (volatile uint32_t i = 0; i < 500000; i++);
		GPIOC->ODR &= ~(1U << 13);
		for (volatile uint32_t i = 0; i < 500000; i++);
	}
	return 0;
}
