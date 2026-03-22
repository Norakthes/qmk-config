// Copyright 2026 Norakthes
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Base layer (QWERTY placeholder — remap freely in VIA)
    // Left half:  col 0 = pinky outer, col 5 = index inner
    // Right half: col 0 = index inner, col 5 = pinky outer
    [0] = LAYOUT(
        // Left rows 0-3
        KC_CAPS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        // Left thumb (3-key row, then 2-key row)
        KC_LALT, KC_LCTL, MO(1),
                 KC_BSPC, KC_SPC,

        // Right rows 0-3
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        // Right thumb (3-key row, then 2-key row)
        KC_ENT,  KC_UP, MO(1),
        KC_SPC,  KC_BSPC
    ),

    [1] = LAYOUT(
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______,
        _______, _______,

        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT,_______, _______,
        _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,
        _______, _______, KC_LWIN, 
        _______, _______
    ),
};



void keyboard_post_init_user(void) {
    debug_enable = false;
    debug_matrix = false;  
}