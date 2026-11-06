
#include "unity.h"
#include "battery_monitor.h"

void setUp(void)
{
    // Runs before each test.
}

void tearDown(void)
{
    // Runs after each test.
}

void test_battery_percentage_at_minimum_voltage_should_be_zero(void)
{
    TEST_ASSERT_EQUAL_UINT8(0, battery_get_percentage(3000U));
}

void test_battery_percentage_at_maximum_voltage_should_be_100(void)
{
    TEST_ASSERT_EQUAL_UINT8(100, battery_get_percentage(4200U));
}

void test_battery_percentage_below_minimum_should_be_zero(void)
{
    TEST_ASSERT_EQUAL_UINT8(0, battery_get_percentage(2500U));
}

void test_battery_percentage_above_maximum_should_be_100(void)
{
    TEST_ASSERT_EQUAL_UINT8(100, battery_get_percentage(4500U));
}

void test_battery_percentage_at_3500mv_should_be_41(void)
{
    TEST_ASSERT_EQUAL_UINT8(41, battery_get_percentage(3500U));
}

void test_battery_status_at_10_percent_should_be_critical(void)
{
    TEST_ASSERT_EQUAL(BATTERY_STATUS_CRITICAL, battery_get_status(3120U));
}

void test_battery_status_at_11_percent_should_be_low(void)
{
    TEST_ASSERT_EQUAL(BATTERY_STATUS_LOW, battery_get_status(3132U));
}

void test_battery_status_at_21_percent_should_be_ok(void)
{
    TEST_ASSERT_EQUAL(BATTERY_STATUS_OK, battery_get_status(3252U));
}

void test_battery_status_at_80_percent_should_be_full(void)
{
    TEST_ASSERT_EQUAL(BATTERY_STATUS_FULL, battery_get_status(3960U));
}
