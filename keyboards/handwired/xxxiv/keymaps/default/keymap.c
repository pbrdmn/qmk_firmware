#include "xxxiv.h"
#include "action_layer.h"

extern keymap_config_t keymap_config;

/* LAYERS */
#define _BASE 0
#define _SYS  1
#define _NUM  2
#define _FUN  3
#define _GAM  4

/* Toggle Layer Switching */
#define TG_BASE TG(_BASE)
#define TG_SYS TG(_SYS)
#define TG_NUM TG(_NUM)
#define TG_FUN TG(_FUN)
#define TG_GAM TG(_GAM)

/* Momentary Layer switching */
#define BS_NUM LT(_NUM, KC_BSPC)
#define ESC_SYS LT(_SYS, KC_ESC)
#define ENT_FUN LT(_FUN, KC_ENT)


/* Macros */
enum custom_keycodes {
  M_1 = SAFE_RANGE,
  M_2,
  M_3,
  M_4,
  M_5,
  M_6,
  M_7,
  M_8,
  M_9,
  M_10,
  M_11,
  M_12,
  M_13,
  M_14
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      case M_1:
        SEND_STRING("Testing keyboard macro 1");
        return false;
      case M_2:
        SEND_STRING("Testing keyboard macro 2");
        return false;
      case M_3:
        SEND_STRING("Testing keyboard macro 3");
        return false;
      case M_4:
        SEND_STRING("Testing keyboard macro 4");
        return false;
      case M_5:
        SEND_STRING("Testing keyboard macro 5");
        return false;

    }
  }

  return true;
}; 


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Base mode - alphas, mod_tap, layer_tap keys
  [_BASE] = KEYMAP(
    KC_Q,         KC_W,         KC_E,         KC_R,           KC_T,   KC_Y,           KC_U,         KC_I,           KC_O,           KC_P,
    CTL_T(KC_A),  ALT_T(KC_S),  GUI_T(KC_D),  SFT_T(KC_F),    KC_G,   KC_H,           SFT_T(KC_J),  GUI_T(KC_K),    ALT_T(KC_L),    CTL_T(KC_QUOT),
    CTL_T(KC_Z),  ALT_T(KC_X),  GUI_T(KC_C),  SFT_T(KC_V),    KC_B,   KC_N,           SFT_T(KC_M),  GUI_T(KC_COMM), ALT_T(KC_DOT),  CTL_T(KC_SLSH),
                                              ESC_SYS,        BS_NUM, SFT_T(KC_SPC),  ENT_FUN
  ),

  // System mode - media, navigation keys, macros 1-7
  [_SYS] = KEYMAP(
    KC_GRV,  KC_TILD, KC_TRNS, RESET,   KC_MUTE,  KC_VOLD, KC_VOLU, KC_MRWD, KC_MPLY, KC_MFFD,
    KC_TAB,  KC_CAPS, KC_BSPC, KC_DEL,  KC_HOME,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    M_1,     M_2,     M_3,     M_4,     M_5,      M_6,     M_7,     KC_LCBR, KC_RCBR, KC_TAB,
                               TG_SYS,  TG_NUM,   TG_GAM,  TG_FUN
  ),
  
  // Number mode - numbers and symbols
  [_NUM] = KEYMAP(
    KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC, KC_CIRC, KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,
    CTL_T(KC_1),    ALT_T(KC_2),    GUI_T(KC_3),    SFT_T(KC_4),    KC_5,    KC_6,    SFT_T(KC_7),    GUI_T(KC_8),    ALT_T(KC_9),    CTL_T(KC_0),
    CTL_T(KC_SCLN), ALT_T(KC_EQL),  GUI_T(KC_MINS), SFT_T(KC_PLUS), KC_UNDS, KC_COLN, SFT_T(KC_QUES), GUI_T(KC_LBRC), ALT_T(KC_RBRC), CTL_T(KC_BSLS),
                                                    TG_NUM,         KC_BSPC, KC_SPC,  TG_FUN
  ),

  // Function mode - all the 'F' keys, duplicate navigation arrows, macros 8-14
  [_FUN] = KEYMAP(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_F11,  KC_F12,  KC_F13,  KC_F14,   KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    M_8,     M_9,     M_10,    M_11,     M_12,    M_13,    M_14,    KC_LCBR, KC_RCBR, KC_SLSH,
                               TG_FUN,   TG_NUM,  KC_SPC, TG_FUN
  ),

  // Gaming mode - disable mod_tap and layer_tap keys
  [_GAM] = KEYMAP(
    KC_Q, KC_W, KC_E, KC_R,    KC_T,    KC_Y,    KC_U, KC_I,    KC_O,   KC_P,
    KC_A, KC_S, KC_D, KC_F,    KC_G,    KC_H,    KC_J, KC_K,    KC_L,   KC_QUOT,
    KC_Z, KC_X, KC_C, KC_V,    KC_B,    KC_N,    KC_M, KC_COMM, KC_DOT, TG_GAM,
                      KC_ESC,  KC_BSPC, KC_SPC,  KC_ENT
  ),

};
