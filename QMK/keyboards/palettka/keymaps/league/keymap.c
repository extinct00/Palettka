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
    // Tap once for Escape, twice for Caps Lock
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_1, KC_ESC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(TD(TD_ESC_CAPS), KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_A, TG(1), KC_D, KC_F, KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_LCTL, KC_SPC, KC_NO, KC_NO, KC_NO),
    [1] = LAYOUT_split_3x5_3(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_Y, KC_TRNS, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_MINS, KC_NO, KC_LALT, KC_SPC, KC_ENT, KC_BSPC, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



