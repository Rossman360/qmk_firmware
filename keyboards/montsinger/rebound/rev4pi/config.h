#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

#define DIODE_DIRECTION ROW2COL

#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5, GP26, GP27, GP28, GP29 }
#define MATRIX_COL_PINS { GP6, GP7, GP8, GP9, GP23, GP20, GP22 }

#define ENCODERS_PAD_A { GP1 }
#define ENCODERS_PAD_B { GP0 }

#define RGB_DI_PIN GP21


#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define TAP_CODE_DELAY 10
#define RP2040_FLASH_GENERIC_03H

