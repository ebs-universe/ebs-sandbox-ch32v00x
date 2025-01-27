

#include <application.h>
#include <irq_handlers.h>
#include <hal/uc.h>

#include "bsp/gpio.h"
#include "ebs/time_if.h"

#include <ucdm/ucdm.h>

static void setup_handlers(void) {
	__core_handler_inclusion = 1;
	__exti_handler_inclusion = 1;
}

static ucdm_addr_t setup_core(ucdm_addr_t ucdm_address) {
	setup_handlers();
	core_init();
	ucdm_init();
    ucdm_address = tm_init(ucdm_address);
    #if APP_ENABLE_QDELAY
        qdelay_init();
    #endif
	return ucdm_address;			
}

static ucdm_addr_t setup_peripherals(ucdm_addr_t ucdm_address) {
    application_gpio_init();

	#if APP_ENABLE_ID 
        id_init();
    #endif
	#if APP_ENABLE_TIME_SYNC
        setup_time_sync();
    #endif
    
	return ucdm_address;
}

ucdm_addr_t setup_system(ucdm_addr_t ucdm_address) {
    ucdm_address = setup_core(ucdm_address);
    ucdm_address = setup_peripherals(ucdm_address);
    return ucdm_address;
}

static ucdm_addr_t setup_application(ucdm_addr_t ucdm_address) {
	return ucdm_address;
}

int main(void)
{
	ucdm_addr_t ucdm_address = 1;
	ucdm_address = setup_system(ucdm_address);
	ucdm_address = setup_application(ucdm_address);
	
	while(1)
	{
		gpio_set_output_low(GPIO_LED1);
		// Delay_Ms(250);
		// gpio_set_output_low(GPIO_LED1);
		// Delay_Ms(250);
	}
}
