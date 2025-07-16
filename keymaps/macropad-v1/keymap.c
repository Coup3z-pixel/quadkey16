// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


enum custom_keycodes { // custom keycodes because KC_COPY, etc does not work!
    MY_COPY = SAFE_RANGE,
    MY_PASTE,
    MY_CUT,
    MY_ALL
};


// records user input and performs switch case on event pressed
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case MY_COPY:
                tap_code16(C(KC_C)); // mimic control + c
                return false;
            case MY_PASTE:
                tap_code16(C(KC_V)); // mimic control + v
                return false;
            case MY_CUT:
                tap_code16(C(KC_X)); // mimic control + x
                return false;
            case MY_ALL:
                tap_code16(C(KC_A)); // mimic control + a
                return false;
        }
    }
    return true;
}



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    * ┌────┬──────┬───────┬──────┐
    * │All │Copy │Paste │Cut   │
    * ├────┼──────┼───────┼──────┤
    * │F13 │ F14 │  F15  │ F16  │
    * ├────┼──────┼───────┼──────┤
    * │▶/⏸ │⏭   │ ⏮    │Mute │
    * ├────┼──────┼───────┼──────┤
    * │Vol+│ Vol-│ Sleep │Boot │
    * └────┴──────┴───────┴──────┘
    */

    [0] = LAYOUT_ortho_4x4(
        MY_ALL, MY_COPY, MY_PASTE, MY_CUT, 
        KC_F13,   KC_F14,   KC_F15,   KC_F16,
        KC_MPLY,   KC_MNXT,   KC_MPRV,   KC_MUTE,
        KC_VOLU,   KC_VOLD, KC_SLEP, QK_BOOT
    )
};
