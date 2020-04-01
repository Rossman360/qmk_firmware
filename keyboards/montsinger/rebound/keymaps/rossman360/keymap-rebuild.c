#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define PGMOD LT(_NUM, KC_PGDN)
#define TABMOD LT(_FN1, KC_TAB)
#define SPCMOD LT(_FN1, KC_SPACE)
#define ENTMOD LT(_FN2, KC_ENTER)
#define ESCMOD LT(_NUM, KC_ESC)
#define RSMOD LT(_FN1, KC_RSHIFT)

enum layer_names
{
  _QWERTY,
  _DEL,
  _FN1,
  _FN2,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_ortho_4x12(
    KC_ESC  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC  ,
    KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,   KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_MINS,
    KC_LCMD  , KC_LALT , KC_NO  , KC_LCTRL , KC_TAB , LT(_FN2, KC_PGDN),   KC_E , KC_S , MO(_DEL),KC_NO  , KC_BSPC, KC_DEL
),


[_DEL] = LAYOUT_ortho_4x12(
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, 
  KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, 
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,S(KC_NUHS),S(KC_NUBS),_______, _______, _______, 
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ 
),

[_FN1] = LAYOUT_ortho_4x12(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, 
  KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, 
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, _______, _______, _______, 
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, _______, _______, KC_MPLY 
),


[_FN2] =  LAYOUT_ortho_4x12(
  _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_MINS, KC_EQL, 
  KC_CAPS, _______, _______, _______, _______, _______, KC_MINS, KC_4   , KC_5   , KC_6   , KC_COLN, _______,
  _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_1   , KC_2   , KC_3   , KC_BSLS, _______, 
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ 
)


};




