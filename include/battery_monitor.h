#ifndef BATTERY_MONITOR_H
#define BATTERY_MONITOR_H

#include <stdint.h>

#define BATTERY_MIN_MV     3000U
#define BATTERY_MAX_MV     4200U

typedef enum {
    BATTERY_STATUS_CRITICAL = 0,
    BATTERY_STATUS_LOW,
    BATTERY_STATUS_OK,
    BATTERY_STATUS_FULL
} battery_status_t;

uint8_t battery_get_percentage(uint16_t millivolts);
battery_status_t battery_get_status(uint16_t millivolts);

#endif /* BATTERY_MONITOR_H */
