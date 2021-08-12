#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
       KC_MUTE,
    KC_7, KC_8, KC_9,
    KC_4, KC_5, KC_6,
    MO(1), KC_2, KC_3
  ),
  
  [1] = LAYOUT(
    _______,
    _______,   RGB_TOG,   RESET,
    RGB_MOD,   RGB_M_T,   RGB_RMOD,
    _______,   RGB_HUD,   RGB_HUI
  ),
};
