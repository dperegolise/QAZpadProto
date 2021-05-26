/* Copyright 2021 Noah Kiser
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define LT1_BSP     LT(1, KC_BSPC)
#define LT2_SPC     LT(2, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,             KC_P7,   KC_P8,   KC_P9,   \
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,           KC_P4,   KC_P5,   KC_P6,   \
        KC_Z,    KC_NO,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_DOT,  KC_RSFT,          KC_P1,   KC_P2,   KC_P3,   \
        KC_LCTL, KC_LGUI, KC_LALT, KC_BSPC, KC_ESC,  KC_TAB,  KC_CAPS, KC_SPC,  KC_UP,   KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT \
    ),

};
