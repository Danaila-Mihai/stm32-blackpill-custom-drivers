#include "drivers/ST_headers/stm32f401xc.h"
#include "drivers/custom_headers/clock.h"
#include "drivers/custom_headers/gpio.h"

// This main file's primary purpose is to highlight the use of the custom rivers,
// which may be found in ../drivers/custom_src and ../drivers/custom_headers.
void SystemInit() {
// This function serves no purpose in bare-metal code, but is left here to
// prevent compiler errors.
}

int main(void) {

    GPIO_clock_init(GPIOC);

    struct GPIO_pin_config output_config;
    output_config.mode = OUTPUT;
    output_config.output_type = PUSH_PULL;
    output_config.pull_state = NO_PULL;
    GPIO_pin_init(GPIOC, 13, &output_config);

    while(1) {
        GPIO_pin_digital_write(GPIOC, 13, HIGH);
        for (volatile uint32_t i = 0; i < 500000; i++);
        GPIO_pin_digital_write(GPIOC, 13, LOW);
        for (volatile uint32_t i = 0; i < 500000; i++);
    }
    return 0;
}
