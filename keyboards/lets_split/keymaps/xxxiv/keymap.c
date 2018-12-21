#include "lets_split.h"
#include "macros.c"


#define _QWERTY 0
#define _GAME 1
#define _NUM 2
#define _SYS 3
#define _FUNC 4

extern keymap_config_t keymap_config;
#define XXXXXXX KC_NO


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Default
  * ,-----------------------------------------------------------------------------------.
  * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |Adjust| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
  * `-----------------------------------------------------------------------------------'
  */

  // Base mode - alphas, mod_tap, layer_tap keys
  [_QWERTY] = LAYOUT_ortho_4x12(
    KC_TAB,     KC_Q,         KC_W,         KC_E,         KC_R,             KC_T,               KC_Y,   KC_U,               KC_I,             KC_O,           KC_P,           KC_BSPC,
    KC_ESC,     CTL_T(KC_A),  ALT_T(KC_S),  GUI_T(KC_D),  SFT_T(KC_F),      KC_G,               KC_H,   SFT_T(KC_J),        GUI_T(KC_K),      ALT_T(KC_L),    CTL_T(KC_SCLN), KC_QUOT,
    KC_LSFT,    CTL_T(KC_Z),  ALT_T(KC_X),  GUI_T(KC_C),  KC_V,             KC_B,               KC_N,   KC_M,               GUI_T(KC_COMM),   ALT_T(KC_DOT),  CTL_T(KC_SLSH), KC_ENT,
    TG(_GAME),  KC_LCTL,      KC_LALT,      KC_LGUI,      LT(_SYS, KC_ESC), LT(_NUM, KC_BSPC),  KC_SPC, LT(_FUNC, KC_ENT),  KC_LEFT,          KC_DOWN,        KC_UP,          KC_RGHT
  ),

  // Gaming mode - disable mod_tap and layer_tap keys
  [_GAME] = LAYOUT_ortho_4x12(
    KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_ESC,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    TG(_GAME),  KC_LCTL, KC_LALT, KC_LGUI, KC_ESC,  KC_BSPC, KC_SPC,  KC_ENT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),
  
  // Number mode - numbers and symbols
  [_NUM] = LAYOUT_ortho_4x12(
    KC_TAB,   KC_EXLM,          KC_AT,          KC_HASH,          KC_DLR,       KC_PERC,  KC_CIRC,  KC_AMPR,      KC_ASTR,          KC_LPRN,          KC_RPRN,        KC_BSPC,
    KC_GRV,   CTL_T(KC_1),      ALT_T(KC_2),    GUI_T(KC_3),      SFT_T(KC_4),  KC_5,     KC_6,     SFT_T(KC_7),  GUI_T(KC_8),      ALT_T(KC_9),      CTL_T(KC_0),    KC_QUOT,
    KC_LSFT,  CTL_T(KC_SCLN),   ALT_T(KC_EQL),  GUI_T(KC_MINS),   KC_PLUS,      KC_UNDS,  KC_COLN,  KC_QUES,      GUI_T(KC_LBRC),   ALT_T(KC_RBRC),   CTL_T(KC_BSLS), KC_ENT,
    KC_NO,    KC_LCTL,          KC_LALT,        KC_LGUI,          TG(_NUM),     KC_BSPC,  KC_SPC,   TG(_FUNC),    KC_LEFT,          KC_DOWN,          KC_UP,          KC_RGHT
  ),

  // System mode - media, mouse keys, macros 1-7
  [_SYS] = LAYOUT_ortho_4x12(
    KC_TAB,   KC_GRV, KC_TILD, KC_TRNS,  RESET,   KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_MRWD,  KC_MPLY,  KC_MFFD,  KC_BSPC,
    KC_GRV,   KC_TAB, KC_CAPS, KC_BSPC,  KC_DEL,  KC_HOME,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_END,   KC_QUOT,
    KC_LSFT,  M_1,    M_2,     M_3,      M_4,     M_5,      M_6,      KC_PIPE,  KC_LCBR,  KC_RCBR,  KC_TAB,   KC_ENT,
    KC_NO,    KC_NO,  KC_NO,   KC_NO,    TG(1),   TG(2),    TG(4),    TG(3),    KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT
  ),

  // Function mode - all the 'F' keys, duplicate navigation arrows, macros 8-14
  [_FUNC] = LAYOUT_ortho_4x12(
    KC_F1,      KC_F2,        KC_F3,        KC_F4,        KC_F5,            KC_F6,              KC_F7,  KC_F8,              KC_F9,            KC_F10,         KC_F11,         KC_F12,
    KC_ESC,     CTL_T(KC_A),  ALT_T(KC_S),  GUI_T(KC_D),  SFT_T(KC_F),      KC_G,               KC_H,   SFT_T(KC_J),        GUI_T(KC_K),      ALT_T(KC_L),    CTL_T(KC_SCLN), KC_QUOT,
    KC_LSFT,    CTL_T(KC_Z),  ALT_T(KC_X),  GUI_T(KC_C),  KC_V,             KC_B,               KC_N,   KC_M,               GUI_T(KC_COMM),   ALT_T(KC_DOT),  CTL_T(KC_SLSH), KC_ENT,
    TG(_GAME),  KC_LCTL,      KC_LALT,      KC_LGUI,      LT(_SYS, KC_ESC), LT(_NUM, KC_BSPC),  KC_SPC, LT(_FUNC, KC_ENT),  KC_LEFT,          KC_DOWN,        KC_UP,          KC_RGHT
  ),

};
