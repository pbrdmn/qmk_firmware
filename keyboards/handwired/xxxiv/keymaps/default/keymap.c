#include "xxxiv.h"
#include "macros.c"

extern keymap_config_t keymap_config;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Base mode - alphas, mod_tap, layer_tap keys
  [0] = KEYMAP(
    KC_Q,         KC_W,         KC_E,         KC_R,          KC_T,            KC_Y,           KC_U,         KC_I,           KC_O,           KC_P,
    CTL_T(KC_A),  ALT_T(KC_S),  GUI_T(KC_D),  SFT_T(KC_F),   KC_G,            KC_H,           SFT_T(KC_J),  GUI_T(KC_K),    ALT_T(KC_L),    CTL_T(KC_QUOT),
    CTL_T(KC_Z),  ALT_T(KC_X),  GUI_T(KC_C),  SFT_T(KC_V),   KC_B,            KC_N,           SFT_T(KC_M),  GUI_T(KC_COMM), ALT_T(KC_DOT),  CTL_T(KC_SLSH),
                                              LT(1, KC_ESC), LT(2, KC_BSPC),  SFT_T(KC_SPC),  LT(3, KC_ENT)
  ),

  // System mode - media, navigation keys, macros 1-7
  [1] = KEYMAP(
    KC_GRV,  KC_TILD, KC_TRNS, RESET,   KC_MUTE,  KC_VOLD, KC_VOLU, KC_MRWD, KC_MPLY, KC_MFFD,
    KC_TAB,  KC_CAPS, KC_BSPC, KC_DEL,  KC_HOME,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    M_1,     M_2,     M_3,     M_4,     M_5,      M_6,     M_7,     KC_LCBR, KC_RCBR, KC_TAB,
                               TG(1),   TG(2),    TG(4),    TG(3)
  ),
  
  // Number mode - numbers and symbols
  [2] = KEYMAP(
    KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC, KC_CIRC, KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,
    CTL_T(KC_1),    ALT_T(KC_2),    GUI_T(KC_3),    SFT_T(KC_4),    KC_5,    KC_6,    SFT_T(KC_7),    GUI_T(KC_8),    ALT_T(KC_9),    CTL_T(KC_0),
    CTL_T(KC_SCLN), ALT_T(KC_EQL),  GUI_T(KC_MINS), SFT_T(KC_PLUS), KC_UNDS, KC_COLN, SFT_T(KC_QUES), GUI_T(KC_LBRC), ALT_T(KC_RBRC), CTL_T(KC_BSLS),
                                                    TG(2),          KC_BSPC, KC_SPC,  TG(3)
  ),

  // Function mode - all the 'F' keys, duplicate navigation arrows, macros 8-14
  [3] = KEYMAP(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_F11,  KC_F12,  KC_F13,  KC_F14,   KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    M_8,     M_9,     M_10,    M_11,     M_12,    M_13,    M_14,    KC_LCBR, KC_RCBR, KC_SLSH,
                               TG(3),    TG(2),  KC_SPC,   TG(3)
  ),

  // Gaming mode - disable mod_tap and layer_tap keys
  [4] = KEYMAP(
    KC_Q, KC_W, KC_E, KC_R,    KC_T,    KC_Y,    KC_U, KC_I,    KC_O,   KC_P,
    KC_A, KC_S, KC_D, KC_F,    KC_G,    KC_H,    KC_J, KC_K,    KC_L,   KC_QUOT,
    KC_Z, KC_X, KC_C, KC_V,    KC_B,    KC_N,    KC_M, KC_COMM, KC_DOT, TG(4),
                      KC_ESC,  KC_BSPC, KC_SPC,  KC_ENT
  ),

};
