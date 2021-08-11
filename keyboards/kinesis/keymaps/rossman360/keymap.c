#include QMK_KEYBOARD_H
#include "rossman360.h"

#define PGMOD LT(_NUM, KC_PGDN)
#define TABMOD LT(_FN1, KC_TAB)
#define SPCMOD LT(_FN1, KC_SPACE)
#define ENTMOD LT(_FN2, KC_ENTER)
#define DESK1 LCMD(KC_1)
#define DESK2 LCMD(KC_2)
#define DESK3 LCMD(KC_3)
#define DESK4 LCMD(KC_3)
#define EXPOSE LCMD(KC_UP)

enum layer_names {
  _BASE,
  _FN1,
  _FN2,
  _NUM,
  _DEL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_pretty(
    EXPOSE,   DESK1, DESK2, DESK3, DESK4, KC_F5, KC_F6, XPANDR, PMERGE,             KC_CAPS, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, KC_FN0, RESET,
    KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                   KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     NTAB,
    TABMOD,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                   KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     CTAB,
    JUMPBACK, KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                   KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_MINS,
              CMDBSP,   ALTDEL,   KC_LEFT,  KC_RGHT,                                                             KC_UP,    KC_DOWN,  KC_LBRC,  KC_RBRC,
                                                      CTRLSP,   KC_F4,              KC_VOLU,  MO(_DEL),
                                                                KC_F3,              KC_VOLD,
                                            KC_TAB,   PGMOD,    KC_ENTER,           KC_BSPC,  ENTMOD,   SPCMOD
  ),
  [_FN1] = LAYOUT_pretty(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_GRAVE, _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  CTAB,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  UNDO,     _______,  _______,  _______,  _______,
    KC_CAPS,  _______,  _______,  _______,  _______,  _______,                                KC_HOME,  KC_LEFT,  KC_UP,    KC_RIGHT, KC_END,   _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  PMERGE,   KC_DOWN,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,                                                            _______,  _______,  _______,  _______,
                                                      KC_HOME,  _______,            _______,  _______,
                                                                _______,            _______,
                                            LWORD,    RWORD,    KC_END,             _______,  _______,  _______
  ),
  [_FN2] = LAYOUT_pretty(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______,  SPEAK1 ,  SPEAK2 ,  SPEAK3 ,  SPEAK4 ,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,                                                            _______,  _______,  _______,  _______,
                                                      _______,  _______,            _______,  _______,
                                                                _______,            _______,
                                            PARADOWN, CSPEAK,   CSPEAK,             _______,  _______,  _______
  ),
  [_NUM] = LAYOUT_pretty(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_GRV,   _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  KC_7   ,  KC_8   ,  KC_9   ,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  KC_4   ,  KC_5   ,  KC_6   ,  KC_COLN,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  KC_1   ,  KC_2   ,  KC_3   ,  _______,  _______,
              _______,  _______,  _______,  _______,                                                            _______,  _______,  _______,  _______,
                                                      _______,  _______,            _______,  _______,
                                                                _______,            _______,
                                            _______,  _______,  XXXXXXX,            _______,  KC_COMM,  KC_0
  ),
  [_DEL] = LAYOUT_pretty(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,
    REMCAPS,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,                                                            _______,  _______,  _______,  _______,
                                                      BLINE,    _______,            _______,  _______,
                                                                _______,            _______,
                                            KC_BSPC,  BWORD,    KC_DEL,             _______,  _______, _______
  )
};
