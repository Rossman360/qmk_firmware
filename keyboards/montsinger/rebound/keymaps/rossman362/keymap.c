#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layer_names
{
  _BASE,
  _FN1,
};

enum custom_keycodes {
  BASE = SAFE_RANGE,
  FN1
};





const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_ortho_4x12(
    KC_ESC  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC  ,
    KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,   KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_MINS,
    KC_LCMD  , KC_LALT , KC_NO  , KC_LCTRL , KC_TAB , LT(_FN1, KC_PGDN),   KC_ENTER , KC_SPC , KC_BSPC,KC_NO  , KC_BSPC, KC_DEL
  ),
   
[_FN1] = LAYOUT_ortho_4x12(
    _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,     KC_6   , KC_7   , KC_8   , KC_9   , KC_MINS, KC_EQL, 
    KC_CAPS, _______, _______, _______, _______, _______,     KC_MINS, KC_4   , KC_5   , KC_6   , KC_COLN, _______,
    _______, _______, _______, _______, _______, KC_LBRC,     KC_RBRC, KC_1   , KC_2   , KC_3   , KC_BSLS, _______, 
    _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU,     _______, _______, KC_0   , _______, _______, _______
  )
};
