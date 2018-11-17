#include "lets_split.h"
#include "macros.c"

extern keymap_config_t keymap_config;
#define XXXXXXX KC_NO


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Base mode - alphas, mod_tap, layer_tap keys
  [0] = LAYOUT_ortho_4x12(
    KC_Q,         KC_W,         KC_E,         KC_R,        KC_T,  KC_LBRC,    KC_RBRC,    KC_Y,    KC_U,          KC_I,             KC_O,           KC_P,
    CTL_T(KC_A),  ALT_T(KC_S),  GUI_T(KC_D),  SFT_T(KC_F), KC_G,  S(KC_LBRC), S(KC_RBRC), KC_H,    SFT_T(KC_J),   GUI_T(KC_K),      ALT_T(KC_L),    CTL_T(KC_QUOT),
    CTL_T(KC_Z),  ALT_T(KC_X),  GUI_T(KC_C),  KC_V,        KC_B,  KC_SCLN,    S(KC_SCLN), KC_N,    KC_M,          GUI_T(KC_COMM),   ALT_T(KC_DOT),  CTL_T(KC_SLSH),
    KC_NO,        KC_NO,        KC_ESC,       MO(1),       MO(2), KC_BSPC,    KC_SPC,     KC_RSFT, LT(3, KC_ENT), KC_NO,            KC_TAB,         KC_ENT
  ),

  // System mode - media, navigation keys, macros 1-7
  [1] = LAYOUT_ortho_4x12(
    KC_GRV, KC_TILD, KC_TRNS,  RESET,   KC_MUTE, KC_NO, KC_NO, KC_VOLD,  KC_VOLU,   KC_MRWD,  KC_MPLY,  KC_MFFD,
    KC_TAB, KC_CAPS, KC_BSPC,  KC_DEL,  KC_HOME, KC_NO, KC_NO, KC_LEFT,  KC_DOWN,   KC_UP,    KC_RGHT,  KC_END,
    M_1,    M_2,     M_3,      M_4,     M_5,     KC_NO, KC_NO, M_6,      TG(5),     KC_LCBR,  KC_RCBR,  KC_TAB,
    KC_NO,  KC_NO,   KC_NO,    KC_NO,   TG(1),   TG(2), TG(4), TG(3),     KC_NO,    KC_NO,    KC_NO,   KC_NO
  ),
  
  // Number mode - numbers and symbols
  [2] = LAYOUT_ortho_4x12(
    KC_EXLM,          KC_AT,          KC_HASH,          KC_DLR,       KC_PERC,  KC_NO,   KC_NO,  KC_CIRC,  KC_AMPR,      KC_ASTR,        KC_LPRN,          KC_RPRN,
    CTL_T(KC_1),      ALT_T(KC_2),    GUI_T(KC_3),      SFT_T(KC_4),  KC_5,     KC_NO,   KC_NO,  KC_6,     SFT_T(KC_7),  GUI_T(KC_8),    ALT_T(KC_9),      CTL_T(KC_0), 
    CTL_T(KC_SCLN),   ALT_T(KC_EQL),  GUI_T(KC_MINS),   KC_PLUS,      KC_UNDS,  KC_NO,   KC_NO,  KC_COLN,  KC_QUES,      GUI_T(KC_LBRC), ALT_T(KC_RBRC),   CTL_T(KC_BSLS),
    KC_NO,            KC_NO,          KC_NO,            KC_NO,        TG(2),    KC_BSPC, KC_SPC, TG(3),    KC_NO,        KC_NO,          KC_NO,            KC_NO
  ),

  // Function mode - all the 'F' keys, duplicate navigation arrows, macros 8-14
  [3] = LAYOUT_ortho_4x12(
    KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_NO, KC_NO,  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
    KC_F11, KC_F12,  KC_F13,  KC_F14,  KC_HOME, KC_NO, KC_NO,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_END,
    M_8,    M_9,     M_10,    M_11,    M_12,    KC_NO, KC_NO,  M_13,     M_14,     KC_LCBR,  KC_RCBR,  KC_SLSH,
    KC_NO,  KC_NO,   KC_NO,   KC_NO,   TG(3),   TG(2), KC_SPC, TG(3),    KC_NO,    KC_NO,    KC_NO,   KC_NO
  ),

  // Gaming mode - disable mod_tap and layer_tap keys
  [4] = LAYOUT_ortho_4x12(
    KC_Q,  KC_W,  KC_E,  KC_R,    KC_T,  KC_NO,   KC_NO,   KC_Y,   KC_U,   KC_I,     KC_O,    KC_P,
    KC_A,  KC_S,  KC_D,  KC_F,    KC_G,  KC_NO,   KC_NO,   KC_H,   KC_J,   KC_K,     KC_L,    KC_QUOT,
    KC_Z,  KC_X,  KC_C,  KC_V,    KC_B,  KC_NO,   KC_NO,   KC_N,   KC_M,   KC_COMM,  KC_DOT,  TG(4),
    KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC,  KC_BSPC, KC_SPC,  KC_ENT, KC_NO,  KC_NO,    KC_NO,   KC_NO
  ),

};
