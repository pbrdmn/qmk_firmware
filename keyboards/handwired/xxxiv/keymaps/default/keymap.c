#include "xxxiv.h"
#include "action_layer.h"

extern keymap_config_t keymap_config;

/* LAYERS */
#define _BASE 0
#define _NUM  1
#define _SYM  2
#define _FUN  3

/* Layer switching */
#define BS_NUM LT(_NUM, KC_BSPC)
#define ESC_SYM LT(_SYM, KC_ESC)
#define SP_SFT SFT_T(KC_SPC)
#define TAB_FUN LT(_FUN, KC_TAB)

/* MOD-TAP Keys */
#define CT_Z CTL_T(KC_Z)
#define AL_X ALT_T(KC_X)
#define GU_C GUI_T(KC_C)
#define SH_A SFT_T(KC_A)
#define SH_QUOT SFT_T(KC_QUOT)
#define GU_COMM GUI_T(KC_COMM)
#define AL_DOT ALT_T(KC_DOT)
#define CT_ENT CTL_T(KC_ENT)

/* TRNS */
#define __ KC_TRNS


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = KEYMAP(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,
    SH_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,    KC_K,    KC_L,   SH_QUOT,
    CT_Z,    AL_X,    GU_C,    KC_V,    KC_B,   KC_N,   KC_M,    GU_COMM, AL_DOT, CT_ENT,
                               ESC_SYM, BS_NUM, SP_SFT, TAB_FUN
  ),
  
  [_NUM] = KEYMAP(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_UNDS, KC_MINS, KC_PLUS, KC_EQL,  KC_SCLN, KC_COLN, KC_QUES, KC_LBRC, KC_RBRC, KC_BSLS,
                               ESC_SYM, BS_NUM,  SP_SFT,  TAB_FUN
  ),

  [_SYM] = KEYMAP(
    KC_GRV,  KC_TILD, __,      __,       KC_MUTE, KC_VOLD, KC_VOLU, KC_MRWD, KC_MPLY, KC_MFFD,
    KC_TAB,  KC_CAPS, KC_DEL,  __,       KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    __,      __,      __,      __,       __,      __,      __,      KC_LT,   KC_GT,   KC_SLSH,
                               ESC_SYM,  BS_NUM,  SP_SFT,  TAB_FUN
  ),

  [_FUN] = KEYMAP(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_F11,  KC_F12,  KC_F13,  __,       KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    __,      __,      __,      __,       __,      __,      __,      KC_LCBR, KC_RCBR, KC_SLSH,
                               ESC_SYM,  BS_NUM,  SP_SFT,  TAB_FUN
  ),
};
