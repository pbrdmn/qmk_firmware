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

      case M_6:
        SEND_STRING("Testing keyboard macro 6");
        return false;
      case M_7:
        SEND_STRING("Testing keyboard macro 7");
        return false;
      case M_8:
        SEND_STRING("Testing keyboard macro 8");
        return false;
      case M_9:
        SEND_STRING("Testing keyboard macro 9");
        return false;
      case M_10:
        SEND_STRING("Testing keyboard macro 10");
        return false;

      case M_11:
        SEND_STRING("Testing keyboard macro 11");
        return false;
      case M_12:
        SEND_STRING("Testing keyboard macro 12");
        return false;
      case M_13:
        SEND_STRING("Testing keyboard macro 13");
        return false;
      case M_14:
        SEND_STRING("Testing keyboard macro 14");
        return false;
    }
  }

  return true;
}; 
