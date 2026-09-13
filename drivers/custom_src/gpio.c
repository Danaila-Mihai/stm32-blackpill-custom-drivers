#include "../custom_headers/gpio.h"

void GPIO_pin_init(GPIO_TypeDef* GPIO_port, uint8_t pin, GPIO_pin_config config) {
    GPIO_port->MODER &= ~(0b11U << (2 * pin));
    GPIO_port->MODER |= (uint32_t)config->mode << (2 * pin);

    switch(config->output_type){
        case PUSH_PULL:
            GPIO_port->OTYPER &= ~(1U << pin);
            break;

        case OPEN_DRAIN:
            GPIO_port->OTYPER |= 1U << pin;
            break;

        default:
            break;
    }

    switch (config->pull_state) {
        case NO_PULL:
            GPIO_port->PUPDR &= ~(0b11U << (2 * pin));
            break;

        case PULL_UP:
            GPIO_port->PUPDR &= ~(0b11U << (2 * pin));
            GPIO_port->PUPDR |= 0b01U << (2 * pin);
            break;

        case PULL_DOWN:
            GPIO_port->PUPDR |= 0b11U << (2*pin);
            break;

        default:
            break;
    }
}

void GPIO_pin_digital_write(GPIO_TypeDef* GPIO_port, uint8_t pin, bool value) {
    if (value == HIGH) {
        GPIO_port->BSRR = 1U << pin;
    } else if (value == LOW) {
        GPIO_port->BSRR = 1U << (pin + 16);
    }
}

bool GPIO_pin_digital_read(GPIO_TypeDef* GPIO_port, uint8_t pin) {

}
