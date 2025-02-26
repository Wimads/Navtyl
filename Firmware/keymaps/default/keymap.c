/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

/*
* This is a fork of the Bastardkb Skeletyl by Wimads, adding an adafruit 5-way switch on each side
* For guide on wiring of the switches: [insert github link]
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* -------- -------- -------- -------- --------                                -------- -------- -------- -------- --------
* |  NAV-L | NAV-UP | NAV-DN |  NAV-R | NAV-IN |                              |  NAV-L | NAV-UP | NAV-DN |  NAV-R | NAV-IN |
* |--------|--------|--------|--------|--------|                              |--------|--------|--------|--------|--------|
* |    Q   |    W   |    E   |    R   |    T   |                              |    Q   |    W   |    E   |    R   |    T   | 
* |--------|--------|--------|--------|--------|                              |--------|--------|--------|--------|--------|
* |    A   |    S   |    D   |    F   |    G   |                              |    H   |    J   |    K   |    L   |   ; :  | 
* |--------|--------|--------|--------|--------|                              |--------|--------|--------|--------|--------|
* |    Z   |    X   |    C   |    V   |    B   |                              |    N   |    M   |  , <   |   . >  |   / ?  | 
*  -------- -------- --------|--------|--------|--------              --------|--------|--------|--------|--------|--------|
*                            |   DEL  |  ENTER |  SHIFT |            |   CTRL |  SPACE | B-SPCE | 
*                             -------- -------- --------              -------- -------- --------
*/

 [0] = LAYOUT(
    KC_LEFT,  KC_UP,   KC_DOWN,  KC_RGHT,  KC_NO,                            KC_NO,   KC_HOME,  KC_PGUP,  KC_PGDN,  KC_END,
    KC_Q,     KC_W,    KC_E,     KC_R,     KC_T,                             KC_Y,    KC_U,     KC_I,     KC_O,     KC_P,
    KC_A,     KC_S,    KC_D,     KC_F,     KC_G,                             KC_H,    KC_J,     KC_K,     KC_L,     KC_SCLN,
    KC_Z,     KC_X,    KC_C,     KC_V,     KC_B,                             KC_N,    KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
                                 KC_DEL,   KC_ENT,  KC_LSFT,        C_LCTL,  KC_SPC,  KC_BSPC
  )
};
