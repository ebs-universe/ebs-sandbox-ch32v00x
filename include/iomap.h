#ifndef __IOMAP_H
#define __IOMAP_H

#ifdef __cplusplus
extern "C" {
#endif

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

/**
 * @name GPIOs associated with the TM1637 7 segment driver
 * 
 */
/**@{*/ 
#define TM1637_CLK_PIN      2
#define TM1637_CLK_PORT     GPIOD_BASE
#define GPIO_TM1637_CLK     TM1637_CLK_PORT, TM1637_CLK_PIN

#define TM1637_DAT_PIN      3
#define TM1637_DAT_PORT     GPIOD_BASE
#define GPIO_TM1637_DAT     TM1637_DAT_PORT, TM1637_DAT_PIN
/**@}*/

/**
 * @name SPI GPIOs
 * 
 */
/**@{*/ 
#define GPIO_REMAP_SPI      1

#define SPI_MISO_PIN        7
#define SPI_MISO_PORT       GPIOC_BASE
#define GPIO_SPI_MISO       SPI_MISO_PORT, SPI_MISO_PIN

#define SPI_MOSI_PIN        6
#define SPI_MOSI_PORT       GPIOC_BASE
#define GPIO_SPI_MOSI       SPI_MOSI_PORT, SPI_MOSI_PIN

#define SPI_CLK_PIN         5
#define SPI_CLK_PORT        GPIOC_BASE
#define GPIO_SPI_CLK        SPI_CLK_PORT, SPI_CLK_PIN

#if GPIO_REMAP_SPI

#define SPI_NSS_PIN         0
#define SPI_NSS_PORT        GPIOC_BASE
#define GPIO_SPI_NSS        SPI_NSS_PORT, SPI_NSS_PIN

#else

#define SPI_NSS_PIN         1
#define SPI_NSS_PORT        GPIOC_BASE
#define GPIO_SPI_NSS        SPI_NSS_PORT, SPI_NSS_PIN

#endif

/**@}*/

#ifdef __cplusplus
}
#endif

#endif