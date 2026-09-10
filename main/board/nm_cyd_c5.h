#ifndef NM_CYD_C5_H
#define NM_CYD_C5_H

#include "driver/gpio.h"

#define BOARD_NAME "NM-CYD-C5"

/*
 * Screen removed.
 * WebUI is the primary interface.
 *
 * NM-CYD-C5:
 * WS2812 RGB LED = GPIO27
 */

#define PIN_NEOPIXEL GPIO_NUM_27

#endif
