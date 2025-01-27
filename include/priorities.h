

#include "funconfig.h"

#define uC_NVIC_PRIORITY_CONF   NVIC_PriorityGroup_0

#define PRIO_INT_HIGHEST        1
#define PRIO_INT_HIGH           1
#define PRIO_INT_NORMAL         0
#define PRIO_INT_LOW            0
#define PRIO_NONE               0xFF

typedef enum {
    _PRIO_INT_HIGHEST = PRIO_INT_HIGHEST,
    _PRIO_INT_HIGH    = PRIO_INT_HIGH,
    _PRIO_INT_NORMAL  = PRIO_INT_NORMAL,
    _PRIO_INT_LOW     = PRIO_INT_LOW,
    _PRIO_NONE        = PRIO_NONE
} EBS_PRIORITY_t;

#define PRIO_SYSTICK            PRIO_INT_LOW
#define PRIO_ADC                PRIO_INT_LOW
#define PRIO_ENTROPY            PRIO_INT_LOW

#define PRIO_GPIO7_0            PRIO_INT_LOW
#define PRIO_TIMER1             PRIO_INT_LOW
#define PRIO_TIMER2             PRIO_INT_LOW

#define PRIO_USART              PRIO_INT_LOW

