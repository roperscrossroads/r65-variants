// @irfanjmdn

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT( /* LAYER 0 */
 KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_MUTE,
 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
 KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP, 
 KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN,
 KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), KC_LEFT, KC_DOWN, KC_RGHT
 ),

 [1] = LAYOUT( /* LAYER 0 FN */
 KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, _______,
 _______, _______, _______, _______, _______, _______, _______, _______, _______, MO(4), _______, KC_HOME, KC_SCRL, RGB_MOD, KC_INS,
 _______, TO(0), TO(2), _______, _______, _______, _______, _______, _______, MO(4), _______, KC_PSCR, _______, KC_PAUSE,
 _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUI, _______, _______, MO(4), RGB_VAI, KC_END,
 _______, _______, _______, EE_CLR, _______, _______, RGB_SPD, RGB_VAD, RGB_SPI
 ),
		
 [2] = LAYOUT( /* LAYER 2 */
 KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_MUTE,
 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
 KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP, 
 KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN,
 KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(3), KC_LEFT, KC_DOWN, KC_RGHT
 ),
 
 [3] = LAYOUT( /* LAYER 2 FN */
 KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, _______,
 _______, _______, _______, _______, _______, _______, _______, _______, _______, MO(4), _______, KC_HOME, KC_SCRL, RGB_MOD, KC_INS,
 _______, TO(0), TO(2), _______, _______, _______, _______, _______, _______, MO(4), _______, KC_PSCR, _______, KC_PAUSE,
 _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUI, _______, _______, MO(4), RGB_VAI, KC_END,
 _______, _______, _______, EE_CLR, _______, _______, RGB_SPD, RGB_VAD, RGB_SPI
 ),
 
 [4] = LAYOUT( /* BOOT */
 QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 _______, _______, _______, _______, _______, _______, _______, _______, _______
 ),
};

// clang-format on
