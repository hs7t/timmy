// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    *  #  #  #  | C     X   V
    *  #  #  #  | CTRL  W   Q
    *  #  #  #  | A     S   D
    */

    [0] = LAYOUT_macropad_3x3(
        KC_C,       KC_X,    KC_V,
        KC_LCTL,    KC_W,    KC_Q,
        KC_A,       KC_S,    KC_D
    )
};
