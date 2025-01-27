
#ifndef CLOCKTREE_H
#define CLOCKTREE_H

#include <ch32v003fun.h>

// This is largely infomational. Code can use these defines as inputs, 
// but any changes to this file will need code changes elsewhere. 
// Generally, updates will need to be made to the CubeMX ioc, the code
// must be regenerated, and relevent portions of the code will need to 
// be cherry picked and synced. 

#define CLOCKTREE_IN_LSI        128000ULL
#define CLOCKTREE_IN_HSE        HSE_VALUE
#define CLOCKTREE_IN_HSI        HSI_VALUE
#define CLOCKTREE_IN_FREQ       CLOCKTREE_IN_HSI

#define CLOCKTREE_SYSCLK_FREQ   FUNCONF_SYSTEM_CORE_CLOCK

#define CLOCKTREE_AHB_PRESCALER 1U
#define CLOCKTREE_HCLK_FREQ     (CLOCKTREE_SYSCLK_FREQ / CLOCKTREE_AHB_PRESCALER)

#define CLOCKTREE_CPU_FREQ      CLOCKTREE_HCLK_FREQ

#if FUNCONF_SYSTICK_USE_HCLK
    #define CLOCKTREE_SYSTICK_PRESCALER 1U
#else
    #define CLOCKTREE_SYSTICK_PRESCALER 8U
#endif

#define CLOCKTREE_SYSTICK_CLK   (CLOCKTREE_HCLK_FREQ / CLOCKTREE_SYSTICK_PRESCALER)

#define CLOCKTREE_AHB_FREQ      CLOCKTREE_HCLK_FREQ

#define CLOCKTREE_USART_FREQ    CLOCKTREE_AHB_FREQ
#define CLOCKTREE_TIM1_FREQ     CLOCKTREE_AHB_FREQ
#define CLOCKTREE_TIM2_FREQ     CLOCKTREE_AHB_FREQ

#define CLOCKTREE_ADC_PRESCALER 128U
#define CLOCKTREE_ADC_FREQ      (CLOCKTREE_HCLK_FREQ / CLOCKTREE_ADC_PRESCALER)

#define CLOCKTREE_WDG_PRESCALER 4096U
#define CLOCKTREE_WDG_FREQ      (CLOCKTREE_HCLK_FREQ / CLOCKTREE_WWDG_PRESCALER)

#endif
