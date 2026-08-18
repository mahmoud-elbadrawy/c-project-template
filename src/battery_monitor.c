#include "../include/battery_monitor.h"

uint8_t battery_get_percentage(uint16_t millivolts)
{
    if (millivolts <= BATTERY_MIN_MV)
    {
        return 0;
    }
    if (millivolts >= BATTERY_MAX_MV)
    {
        return 100;
    }

    /* Map the battery value to percentage*/
    uint8_t battery_percent = (uint8_t)((float)(millivolts) / (float)(BATTERY_MAX_MV) * 100U);

    return battery_percent;
}

battery_status_t battery_get_status(uint16_t millivolts)
{
    uint8_t battery_percent = battery_get_percentage(millivolts);
    battery_status_t battery_status = BATTERY_STATUS_CRITICAL;

    if (battery_percent <= 10U)
    {
        battery_status = BATTERY_STATUS_CRITICAL;
    }
    else if (battery_percent <= 20U)
    {
        battery_status = BATTERY_STATUS_LOW;
    }
    else if (battery_percent < 80U)
    {
        battery_status = BATTERY_STATUS_OK;
    }
    else
    {
        battery_status = BATTERY_STATUS_FULL;
    }

    return battery_status;
}