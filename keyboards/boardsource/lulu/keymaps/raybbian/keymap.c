// Copyright 2022 Cole Smith <cole@boadsource.xyz>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "common.h"
#include "combos.c"

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define GAMING DF(_GAMING)
#define COLEMK DF(_COLEMAKDH)

#define CTRLESC LCTL_T(KC_ESC)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAKDH] = LAYOUT(
        XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SLSH, KC_BSPC,
        CTRLESC, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                      KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
        RAISE,   KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    XXXXXXX, GAMING,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SCLN, LOWER,
                                   KC_LALT, KC_LGUI, KC_ENT,  KC_LSFT, KC_SPC,  KC_UNDS, KC_MINS, XXXXXXX
    ),
    [_GAMING] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_8,    COLEMK,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   KC_6,    KC_7,    KC_LALT, KC_SPC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [_LOWER] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, KC_F11,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_PLUS, KC_ASTR, KC_AMPR, KC_F12,  _______,
        _______, XXXXXXX, KC_LBRC, KC_BSLS, KC_EQL,  KC_TILD,                   KC_EXLM, KC_MINS, KC_SLSH, KC_RBRC, XXXXXXX, _______,
        _______, XXXXXXX, KC_GRV,  KC_LCBR, KC_LPRN, KC_LABK, _______, _______, KC_RABK, KC_RPRN, KC_RCBR, KC_PIPE, XXXXXXX, _______,
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_RAISE] = LAYOUT(
        _______, XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX,                   XXXXXXX, KC_PSCR, KC_SCRL, KC_PAUS, XXXXXXX, _______,
        _______, XXXXXXX, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U,                   KC_PGUP, KC_HOME, KC_UP,   KC_END,  XXXXXXX, _______,
        _______, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,                   KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
        _______, XXXXXXX, KC_BTN4, KC_BTN3, KC_BTN5, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_ADJUST] = LAYOUT(
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, UG_NEXT, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, UG_PREV, RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, UG_TOGG, RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                   _______, _______, _______, _______, _______,  _______, _______, _______
    )
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
