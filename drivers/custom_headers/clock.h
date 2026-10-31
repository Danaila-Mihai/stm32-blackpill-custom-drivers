#ifndef DRIVERS_CUSTOM_CLOCK_H_
#define DRIVERS_CUSTOM_CLOCK_H_

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

void clock_init(uint32_t clock_enable_bits_mask);

#endif
