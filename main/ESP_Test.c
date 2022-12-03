#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"

#define LED_GPIO GPIO_NUM_4
#define BUTTON_GPIO GPIO_NUM_34

static uint8_t led_state = 0;

void app_main(void)
{
    // Init GPIO22 as an input with pull up
    gpio_reset_pin(LED_GPIO);
    gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT);

    gpio_reset_pin(BUTTON_GPIO);
    gpio_set_direction(BUTTON_GPIO, GPIO_MODE_INPUT);
    gpio_set_pull_mode(BUTTON_GPIO, GPIO_PULLUP_ONLY);
    
    while (true)
    {
        gpio_set_level(LED_GPIO, led_state);
        led_state=!led_state;
        vTaskDelay(100);
    }
}
