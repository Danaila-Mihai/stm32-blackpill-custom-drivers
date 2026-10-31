#ifndef DRIVERS_CUSTOM_GPIO_H_
#define DRIVERS_CUSTOM_GPIO_H_
#include <stdint.h>
#include "../ST_headers/stm32f401xc.h"

// boolean values exist here primarily to prevent the programmer from accidentally
// passing the wrong argument to a function that expects one bit
typedef enum boolean_state {
    LOW = 0U,
    HIGH = 1U
} bool;

// enums rather than defines force programmer to insert valid values in config
// structs
// see reference manual pages 158-159
enum pin_mode {
    INPUT       = 0U,
    OUTPUT      = 1U,
    ALTERNATE   = 2U,
    ANALOG      = 3U
};

enum output_type {
    PUSH_PULL   = 0U,
    OPEN_DRAIN  = 1U
};

enum pull_resistors_state {
    NO_PULL     = 0U,
    PULL_UP     = 1U,
    PULL_DOWN   = 2U
};

typedef struct GPIO_pin_config {
    enum pin_mode mode;
    enum output_type output_type;
    enum pull_resistors_state pull_state;
} *GPIO_pin_config;

void GPIO_pin_init(GPIO_TypeDef* GPIO_port, uint8_t pin, GPIO_pin_config config);
void GPIO_pin_digital_write(GPIO_TypeDef* GPIO_port, uint8_t pin, bool value);
bool GPIO_pin_digital_read(GPIO_TypeDef* GPIO_port, uint8_t pin);
#endif
