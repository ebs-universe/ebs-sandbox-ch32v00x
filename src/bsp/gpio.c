

#include "iomap.h"
#include <hal/uc/gpio.h>

static void gpio_init_board_leds(void){
    gpio_conf_output(GPIO_LED1);
    gpio_set_output_high(GPIO_LED1);
	gpio_conf_output(GPIO_LED2);
    gpio_set_output_high(GPIO_LED2);
}

static void gpio_init_board_debug(void){
    gpio_conf_output(GPIO_DBG_SCOPE1);
    gpio_conf_speed(GPIO_DBG_SCOPE1, GPIO_SPEED_MED);
    gpio_set_output_low(GPIO_DBG_SCOPE1);
}

void application_gpio_init (void){
    gpio_init();
    gpio_init_board_leds();
    gpio_init_board_debug();
}
