#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5A4C
#define PRODUCT_ID      0x4955
#define DEVICE_VER      0x0001
#define MANUFACTURER    Iris Lab
#define PRODUCT         IRIS 75RGB
#define DESCRIPTION     A custom 75% keyboard with per-key RGB

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* Key matrix pins */
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D4, D5 }
#define MATRIX_COL_PINS { C6, C7, B5, B6, B2, B3, B1, B4, E6, D7, F7, F6, F5, F4, F1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debouncing delay */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

/* Encoder support */
#define ENCODERS_PAD_A { F0 }
#define ENCODERS_PAD_B { F1 }
#define ENCODER_RESOLUTION 4

/* RGB Lighting */
#define RGB_DI_PIN E2
#ifdef RGB_DI_PIN
    #define RGBLED_NUM 87
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
    #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
    #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
    #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_LAYERS
#endif
