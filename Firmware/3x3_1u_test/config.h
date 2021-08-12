#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1234
#define PRODUCT_ID      0x5678
#define DEVICE_VER      0x0000
#define MANUFACTURER    Alex Binos
#define PRODUCT         3x3_1u_test

/* Switch matrix dimensions */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

/* Micro controller pins */
#define MATRIX_ROW_PINS { F4, F5, F6, C6}
#define MATRIX_COL_PINS { E2, F1, F0}
#define UNUSED_PINS { B4, D0, D1, D2, D3, D4, D5, D6, D7, E6, F7 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* RGB array */
#define RGB_DI_PIN C7
#define RGBLED_NUM 9
#define RGBLIGHT_HUE_STEP 8         // HSV steps for animations
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 128      // Half brightness to save power
#define RGBLIGHT_DEFAULT_HUE 85     // Green in HSV
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RGB_TEST
#define RGBLIGHT_ANIMATIONS         // For more options see: https://beta.docs.qmk.fm/using-qmk/hardware-features/lighting/feature_rgblight

/* Indicator LEDs (active low) */
#define LED_NUM_LOCK_PIN B0
#define LED_CAPS_LOCK_PIN B7
#define LED_PIN_ON_STATE 0
