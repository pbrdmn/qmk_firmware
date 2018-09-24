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

/* MOD-TAP Keys */

// CTRL
#define CT_A CTL_T(KC_A)
#define CT_QUOT CTL_T(KC_QUOT)

#define CT_Z CTL_T(KC_Z)
#define CT_TAB CTL_T(KC_TAB)
#define CT_SCLN CTL_T(KC_SCLN)
#define CT_SLSH CTL_T(KC_SLSH)
#define CT_BSLS CTL_T(KC_BSLS)

// ALT
#define AL_S ALT_T(KC_S)
#define AL_L ALT_T(KC_L)

#define AL_X ALT_T(KC_X)
#define AL_DOT ALT_T(KC_DOT)
#define AL_EQL ALT_T(KC_EQL)
#define AL_RBRC ALT_T(KC_RBRC)
#define AL_GT ALT_T(KC_GT)

// GUI
#define GU_D GUI_T(KC_D)
#define GU_K GUI_T(KC_K)

#define GU_C GUI_T(KC_C)
#define GU_C GUI_T(KC_C)
#define GU_C GUI_T(KC_C)
#define GU_COMM GUI_T(KC_COMM)
#define GU_MINS GUI_T(S(KC_MINS))
#define GU_LBRC GUI_T(KC_LBRC)
#define GU_LT GUI_T(KC_LT)

// SHFT
#define SH_F SFT_T(KC_F)
#define SH_J SFT_T(KC_J)

#define SH_SPC SFT_T(KC_SPC)
#define SH_A SFT_T(KC_A)
#define SH_QUOT SFT_T(S(KC_QUOT))
#define SH_1 SFT_T(S(KC_1))
#define SH_0 SFT_T(KC_0)
#define SH_END SFT_T(KC_END)

/* Modified Keys */
#define GUI_Z LGUI(KC_Z)
#define GUI_X LGUI(KC_X)
#define GUI_C LGUI(KC_C)
#define GUI_V LGUI(KC_V)
#define GUI_A LGUI(KC_A)

/* Shortcuts */
#define SSC LGUI(LCTL(LSFT(KC_4)))

/* TRNS */
#define __ KC_TRNS


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Base mode - alphas, mod_tap, layer_tap keys
  [_BASE] = KEYMAP(
    KC_Q, KC_W, KC_E, KC_R,    KC_T,   KC_Y,   KC_U, KC_I,    KC_O,   KC_P,
    CT_A, AL_S, GU_D, SH_F,    KC_G,   KC_H,   SH_J, GU_K,    AL_L,   CT_QUOT,
    CT_Z, AL_X, GU_C, KC_V,    KC_B,   KC_N,   KC_M, GU_COMM, AL_DOT, CT_SLSH,
                      ESC_SYS, BS_NUM, SH_SPC, ENT_FUN
  ),

  // System mode - media, navigation keys
  [_SYS] = KEYMAP(
    KC_GRV,  KC_TILD, __,      RESET,    KC_MUTE, KC_VOLD, KC_VOLU, KC_MRWD, KC_MPLY, KC_MFFD,
    KC_TAB,  KC_CAPS, KC_BSPC, KC_DEL,  KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    KC_ENT,  __,      __,      __,       __,      __,      __,      KC_LCBR, KC_RCBR, KC_TAB,
                               __,       TG_NUM,  TG_GAM,  TG_FUN
  ),
  
  // Number mode - numbers and symbols
  [_NUM] = KEYMAP(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    SH_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    SH_0,
    CT_SCLN, AL_EQL,  GU_MINS, KC_PLUS, KC_UNDS, KC_COLN, KC_QUES, KC_LBRC, KC_RBRC, KC_BSLS,
                               TG_BASE, __,      TG_FUN,  TG_FUN
  ),

  // Function mode - all the 'F' keys, duplicate navigation arrows
  [_FUN] = KEYMAP(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_F11,  KC_F12,  SSC,     KC_F14,   KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    __,      __,      __,      __,       __,      __,      __,      KC_LCBR, KC_RCBR, KC_SLSH,
                               TG_BASE,  TG_NUM,  TG_FUN,  __
  ),

  // Gaming mode - disable mod_tap and layer_tap keys
  [_GAM] = KEYMAP(
    KC_Q, KC_W, KC_E, KC_R,    KC_T,    KC_Y,    KC_U, KC_I,    KC_O,   KC_P,
    KC_A, KC_S, KC_D, KC_F,    KC_G,    KC_H,    KC_J, KC_K,    KC_L,   KC_QUOT,
    KC_Z, KC_X, KC_C, KC_V,    KC_B,    KC_N,    KC_M, KC_COMM, KC_DOT, KC_SLSH,
                      TG_GAM,  KC_BSPC, KC_SPC,  KC_ENT
  ),

};
