/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>

enum Layers {
    ONE,
    TWO,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ONE] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_Q, KC_W, KC_E, KC_R, KC_T, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_A, KC_S, KC_D, KC_F, KC_G, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_TAB, MO(TWO), KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [TWO] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_Y, KC_U, KC_I, KC_O, KC_P, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_H, KC_J, KC_K, KC_L, KC_SCLN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    )
};
