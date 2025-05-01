#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


// Tap Dance declarations
enum {
    TD_ESC_CAPS,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Q, tap twice for ESC
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(TD(TD_ESC_CAPS), KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, LCTL_T(KC_D), LSFT_T(KC_F), LGUI_T(KC_G), LGUI_T(KC_H), LSFT_T(KC_J), LCTL_T(KC_K), KC_L, KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MO(1), KC_LALT, KC_SPC, KC_ENT, KC_BSPC, MO(2)),
    [1] = LAYOUT_split_3x5_3(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_LBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TILD, KC_PLUS, KC_EQL, KC_TRNS, KC_LALT, KC_SPC, KC_TAB, KC_BSPC, MO(3)),
    [2] = LAYOUT_split_3x5_3(KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, RALT(KC_F), RALT(KC_G), KC_RCBR, KC_RBRC, KC_PAST, RALT(KC_SCLN), RALT(KC_W), RALT(KC_C), KC_GRV, KC_MINS, RALT(KC_B), RALT(KC_N), RALT(KC_COMM), RALT(KC_DOT), RALT(KC_X), KC_UNDS, KC_DQUO, KC_NO, KC_NO, KC_LCBR, MO(3), KC_LALT, KC_LGUI, KC_ENT, KC_BSPC, KC_TRNS),
    [3] = LAYOUT_split_3x5_3(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)