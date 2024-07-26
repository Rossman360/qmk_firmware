// Copyright 2023 Ross Montsinger
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "rossman360.h"

#define PGMOD LT(_NUM, KC_PGDN)
#define TABMOD LT(_FN1, KC_TAB)
#define SPCMOD LT(_FN1, KC_SPACE)
#define ENTMOD LT(_FN2, KC_ENTER)
#define ESCMOD LT(_NUM, KC_ESC)
#define RSMOD LT(_FN1, KC_RSFT)
#define CAPSALT MT(MOD_LALT, KC_QUOT)
#define BSGUI MT(MOD_LGUI, KC_BSPC)
#define SFTPG MT(MOD_LSFT, KC_PGUP)
#define CTLBC MT(MOD_LCTL, KC_LBRC)
#define ESCGUI MT(MOD_LGUI, KC_ESC)
#define HOME LCTL(KC_LEFT)
#define END LCTL(KC_RIGHT)

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE,
    _FN1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_60_ansi(
    ESCGUI,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6, KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y, KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSLS,
    CAPSALT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H, KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,           KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N, KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                    KC_UP,
    BSGUI,   KC_DEL,  CTLBC,                     SPCMOD,                                   KC_RALT, KC_LEFT, KC_DOWN,  KC_RIGHT
  ),

  [_FN1] = LAYOUT_60_ansi(
    KC_GRV, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_VOLD, KC_VOLU, KC_MUTE,
    KC_F7,  KC_F11,  _______, KC_F12,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_F8,  KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, HOME,    KC_LEFT, KC_UP,   KC_RIGHT,END,     _______,          KC_PGDN,
    _______,BL_DOWN, BL_TOGG, _______, _______, _______, _______, _______, KC_DOWN, _______, _______,                   _______,
    KC_F10, _______, _______, KC_NO,                                                       _______, _______, _______, QK_BOOT
  )
};
