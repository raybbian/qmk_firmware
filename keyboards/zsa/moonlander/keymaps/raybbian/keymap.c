// Copyright 2024 Raymond Bian
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "common.h"
#include "combos.h"

#define RAISE  MO(_RAISE)
#define LOWER  MO(_LOWER)
#define GAMING DF(_GAMING)
#define COLEMK DF(_COLEMAKDH)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAKDH] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX,           XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    XXXXXXX,           XXXXXXX, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SLSH, KC_BSPC,
        KC_ESC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    XXXXXXX,           GAMING,  KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                                KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SCLN, KC_RCTL,
        XXXXXXX, XXXXXXX, KC_LALT, KC_LGUI, KC_ENT,           XXXXXXX,           XXXXXXX,          KC_UNDS, KC_MINS, XXXXXXX, XXXXXXX, XXXXXXX,
                                            RAISE,   LOWER,   KC_LSFT,           KC_SPC,  LOWER,   RAISE
    ),
    [_GAMING] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX,           XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX,           XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX,           COLEMK,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        XXXXXXX, XXXXXXX, KC_LALT, KC_LGUI, KC_ENT,           XXXXXXX,           XXXXXXX,          KC_UNDS, KC_MINS, XXXXXXX, XXXXXXX, XXXXXXX,
                                            RAISE,   LOWER,   KC_SPC,            KC_GRV,  LOWER,   RAISE
    ),
    [_LOWER] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   XXXXXXX,           XXXXXXX, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, KC_F11,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC, XXXXXXX,           XXXXXXX, KC_CIRC, KC_PLUS, KC_ASTR, KC_AMPR, KC_F12,  _______,
        _______, XXXXXXX, KC_LABK, KC_LCBR, KC_LPRN, KC_LBRC, XXXXXXX,           _______, KC_RBRC, KC_RPRN, KC_RCBR, KC_RABK, XXXXXXX, _______,
        _______, XXXXXXX, KC_GRV,  KC_BSLS, KC_EQL,  KC_TILD,                             KC_EXLM, KC_MINS, KC_SLSH, KC_PIPE, XXXXXXX, _______,
        XXXXXXX, XXXXXXX, _______, _______, _______,          XXXXXXX,           XXXXXXX,          _______, _______, _______, XXXXXXX, XXXXXXX,
                                            _______, _______, _______,           _______, _______, _______
    ),
    [_RAISE] = LAYOUT(
        _______, XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX, KC_PSCR, KC_SCRL, KC_PAUS, XXXXXXX, _______,
        _______, XXXXXXX, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U, XXXXXXX,           XXXXXXX, KC_PGUP, KC_HOME, KC_UP,   KC_END,  XXXXXXX, _______,
        _______, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, XXXXXXX,           _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
        _______, XXXXXXX, KC_BTN4, KC_BTN3, KC_BTN5, XXXXXXX,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        XXXXXXX, XXXXXXX, _______, _______, _______,          XXXXXXX,           XXXXXXX,          _______, _______, _______, XXXXXXX, XXXXXXX,
                                            _______, _______, _______,           _______, _______, _______
    ),
    [_ADJUST] = LAYOUT(
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, RM_NEXT, RM_SPDU, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, RM_PREV, RM_SPDD, RM_HUED, RM_SATD, RM_VALD, XXXXXXX,           _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, RM_TOGG, RM_TOGG, XXXXXXX, XXXXXXX, XXXXXXX,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        XXXXXXX, XXXXXXX, _______, _______, _______,          XXXXXXX,           XXXXXXX,          _______, _______, _______, XXXXXXX, XXXXXXX,
                                            _______, _______, _______,           _______, _______, _______
    ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
