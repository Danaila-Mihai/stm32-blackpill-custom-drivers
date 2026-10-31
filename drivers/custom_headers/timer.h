#ifndef DRIVERS_CUSTOM_HEADERS_TIMER_H_
#define DRIVERS_CUSTOM_HEADERS_TIMER_H_

#endif /* DRIVERS_CUSTOM_HEADERS_TIMER_H_ */

enum counting_mode {
    UPCOUNTING_MODE,
    DOWNCOUNTING_MODE,
    CENTER_ALIGNED_MODE
};

typedef struct timer_config {
   counting_mode counting;

} *timer_config;
