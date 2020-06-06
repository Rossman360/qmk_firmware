#pragma once

#include "quantum.h"

#define LED_ON          2
#define LED_DIM         1
#define LED_OFF         0

#define GPIO_STATE_LOW  0
#define GPIO_STATE_HIGH 1

#define PIN_LED         F0

void set_bit_c_LED(uint8_t mode) {
    switch(mode) {
        case LED_ON:
            setPinOutput(PIN_LED);
            writePin(PIN_LED, GPIO_STATE_HIGH);
        break;

        case LED_DIM:
            setPinInput(PIN_LED);
        break;

        case LED_OFF:
            setPinOutput(PIN_LED);
            writePin(PIN_LED, GPIO_STATE_LOW);
        break;

        default:
        break;
    }
}

#define _BASE 0
#define _FN1 2
#define _DEL 1

uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(state)) {
    case _BASE:
set_bit_c_LED(LED_DIM);
      break;
    case _FN1:
set_bit_c_LED(LED_ON);
      break;
    case _DEL:
set_bit_c_LED(LED_OFF);
      break;
case 3:
set_bit_c_LED(LED_ON);
      break;
  }
  return state;
}
