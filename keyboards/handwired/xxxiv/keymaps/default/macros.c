#include "xxxiv.h"

extern keymap_config_t keymap_config;


/* Macros */
enum custom_keycodes {
  M_1 = SAFE_RANGE,
  M_2,
  M_3,
  M_4,
  M_5,
  M_6,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      case M_1:
        SEND_STRING("Macro");
        return false;
      case M_2:
        SEND_STRING("Macro");
        return false;
      case M_3:
        SEND_STRING("Macro");
        return false;
      case M_4:
        SEND_STRING("Macro");
        return false;
      case M_5:
        SEND_STRING("http://www.keyboard-layout-editor.com/#/gists/bcad6264dffcbd81bf6376ffe14ca149");
        return false;
      case M_6:
        SEND_STRING("https://github.com/dustykeyboard/qmk_firmware/tree/keyboard/xxxiv/keyboards/handwired/xxxiv");
        return false;
    }
  }

  return true;
}; 
