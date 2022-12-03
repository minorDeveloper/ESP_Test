#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"

#define BLINK_GPIO GPIO_NUM_15
#define BUTTON_GPIO GPIO_NUM_2

static uint8_t led_state = 0;

void app_main(void)
{
    // Init GPIO22 as an input with pull up
    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

    gpio_reset_pin(BUTTON_GPIO);
    gpio_set_direction(BUTTON_GPIO, GPIO_MODE_INPUT);
    gpio_set_pull_mode(BUTTON_GPIO, GPIO_PULLUP_ONLY);
    
    while (true)
    {

        led_state = gpio_get_level(BUTTON_GPIO);
        //led_state = 0;
        gpio_set_level(BLINK_GPIO, !led_state);

        vTaskDelay(1);
    }
}
