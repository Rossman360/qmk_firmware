// Copyright 2022 Rossman360 (@rossmontsinger)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

//#define VENDOR_ID 0x1234
//#define PRODUCT_ID 0x5678
//#define DEVICE_VER 0x0001


/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#define DIODE_DIRECTION ROW2COL

#define MATRIX_ROW_PINS { "GP28", "GP27", "GP29", "GP0", "GP1", "GP9", "GP26", "GP18", "GP10", "GP11", "GP25", "GP24", "GP12", "GP21", "GP13" }
#define MATRIX_COL_PINS { "GP5", "GP4", "GP3", "GP2", "GP1" }


/* #define RGB_DI_PIN GP12 */


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

