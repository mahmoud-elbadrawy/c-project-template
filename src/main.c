#include <stdio.h>
#include "battery_monitor.h"

int main(void)
{
    uint16_t battery_voltage = 3500U;
    uint8_t battery_percentage = battery_get_percentage(battery_voltage);
    battery_status_t battery_status = battery_get_status(battery_voltage);

    while(1)
    {

    }

    return 0;
}
