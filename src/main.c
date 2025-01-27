

#include <application.h>
#include <irq_handlers.h>
#include <hal/uc.h>

#include "bsp/gpio.h"
#include "ebs/time_if.h"
#include <ucdm/ucdm.h>

#include <blink.h>


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
    #if APP_ENABLE_OUTPUT_BLINK
        start_blink_task();
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
        #if APP_ENABLE_TIME_CRON
        tm_cron_poll();
        #endif
    }	
}
