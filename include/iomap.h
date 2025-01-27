#ifndef __IOMAP_H
#define __IOMAP_H

#ifdef __cplusplus
extern "C" {
#endif

#include "ch32v_conf.h"
#include "ch32v00x.h"

#include "memmap.h"
#include "clocktree.h"
#include "priorities.h"

/**
 * @name Application Specific GPIOs
 */
/**@{*/ 
#define DBG_SCOPE1_PIN       2
#define DBG_SCOPE1_PORT      GPIOC_BASE
#define GPIO_DBG_SCOPE1      DBG_SCOPE1_PORT, DBG_SCOPE1_PIN
/**@}*/ 

/**
 * @name GPIOs for User LEDs
 */
/**@{*/ 
#define LED1_PIN            2
#define LED1_PORT           GPIOC_BASE
#define GPIO_LED1           LED1_PORT, LED1_PIN 

#define LED2_PIN            3   
#define LED2_PORT           GPIOC_BASE
#define GPIO_LED2           LED2_PORT, LED2_PIN 
/**@}*/ 

/**
 * @name GPIOs associated with UART Interfaces
 * 
 */
/**@{*/ 
#define USART_TX_PIN        5
#define USART_TX_PORT       GPIOD_BASE
#define GPIO_USART_TX       USART_TX_PORT, USART_TX_PIN

#define USART_RX_PIN        6
#define USART_RX_PORT       GPIOD_BASE
#define GPIO_USART_RX       USART_RX_PORT, USART_RX_PIN
/**@}*/ 


#ifdef __cplusplus
}
#endif

#endif