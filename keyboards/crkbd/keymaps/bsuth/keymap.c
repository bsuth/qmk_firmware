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
    ASCII,
    SYMBOLS,
    NUMBERS,
    ARROWS,
    MEDIA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ASCII] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, XXXXXXX,
        XXXXXXX, LALT_T(KC_A), LGUI_T(KC_S), RCTL_T(KC_D), LSFT_T(KC_F), LT(ARROWS, KC_G), KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RGUI_T(KC_L), RALT_T(KC_SCLN), XXXXXXX,
        XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, XXXXXXX,
        KC_CAPS, LT(NUMBERS, KC_TAB), LT(SYMBOLS, KC_ENT), LT(SYMBOLS, KC_SPC), LT(NUMBERS, KC_BSPC), MO(MEDIA)
    ),
    [SYMBOLS] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_TILD, KC_GRV, KC_DQUO, KC_QUOT, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_MINS, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX,  XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, KC_EQL, KC_PLUS, KC_PIPE, KC_BSLS, XXXXXXX,
        _______, _______, KC_ESC, KC_ESC, _______, _______
    ),
    [NUMBERS] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
        XXXXXXX, LALT_T(KC_1), LGUI_T(KC_2), RCTL_T(KC_3), LSFT_T(KC_4), KC_5, KC_6, RSFT_T(KC_7), RCTL_T(KC_8), RGUI_T(KC_9), RALT_T(KC_0), XXXXXXX,
        XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, XXXXXXX,
        _______, _______, _______, _______, _______, _______
    ),
    [ARROWS] = LAYOUT_split_3x6_3(
        XXXXXXX, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP, XXXXXXX,
        XXXXXXX, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
        XXXXXXX, _______, _______, _______, _______, _______, KC_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [MEDIA] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, XXXXXXX,
        XXXXXXX, KC_F11, XXXXXXX, KC_BRID, KC_BRIU, XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE, KC_F12, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______
    )
};
