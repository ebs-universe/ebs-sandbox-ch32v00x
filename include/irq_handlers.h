#ifndef __CH32V_IT_H
#define __CH32V_IT_H

#ifdef __cplusplus
 extern "C" {
#endif

// These are inlineable handlers defined by application code. We 
// include them here for later inlining into the actual IRQ Handlers. 
#include <time/systick_handler.h>

// These IRQ handlers are defined by the HAL. These are included 
// here to bring the inclusion variable into scope.
#include <hal_platform/core_handlers.h>
#include <hal_platform/shared_handlers.h>
#include <hal_platform/exti_handlers.h>
#include <hal_platform/entropy_handlers.h>
#include <hal_platform/uart_handlers.h>
#include <hal_platform/adc_handlers.h>
#include <hal_platform/timer_handlers.h>

/**
 * @name Core IRQ Handlers
 */
/**@{*/
void SysTick_Handler(void)  INTERRUPT_DECORATOR;
/**@}*/ 

/**
 * @name GPIO EXTI IRQ Handlers
 */
/**@{*/   
/**@}*/ 

/**
 * @name Shared IRQ Handlers
 */
/**@{*/   
/**@}*/ 

/**
 * @name Entropy IRQ Handlers
 */
/**@{*/   
/**@}*/ 

/**
 * @name ADC IRQ Handlers
 */
/**@{*/   
/**@}*/ 

/**
 * @name Timer IRQ Handlers
 */
/**@{*/   
/**@}*/ 

/**
 * @name UART IRQ Handlers
 */
/**@{*/   
/**@}*/ 

/**
 * @name Other Handlers
 * 
 * This is not an IRQ, but needed by the HAL. Since there isn't a better 
 * place to put it, we put here for now. These are implemented with the 
 * shared handlers.
 */
/**@{*/    
void Error_Handler(void);
/**@}*/ 

#ifdef __cplusplus
}
#endif

#endif /* __STM32F4xx_IT_H */
