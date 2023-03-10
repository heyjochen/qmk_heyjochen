#include QMK_KEYBOARD_H

#include "layer_names.h"
#include "keycodes.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_COLEMAK] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______,_______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______,     KC_Q,    KC_W,    KC_F,   KC_P,     KC_B,                              KC_J,    KC_L,    KC_U,    KC_Y,  KC_SCLN, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______,  LGUI_KA, LALT_KR, LCTL_KS, LSFT_KT, ALL_KG,                             ALL_KM,  RSFT_KN, RCTL_KE, RALT_KI, RGUI_KO, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V, _______,          _______,    KC_K,    KC_H,  KC_COMM, KC_DOT,KC_SLSH,  _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     LSY_ESC,  LNU_TAB, LNA_SPC,                   KC_ENT, LME_BSPC, LFU_DEL
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),


  [_SYM] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______,_______, _______,                             _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______,   _______, _______, _______, _______, _______,                            KC_CIRC, KC_PERC, KC_ASTR, KC_AMPR, KC_BSLS, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______,  _______, _______, _______, _______, _______,                             KC_GRV, KC_QUOT, KC_DQUO, KC_EXLM, KC_PLUS, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______,  _______,  _______, _______, _______, _______, _______,         _______,  KC_TILD, KC_HASH,   KC_AT,  KC_DLR, KC_PIPE, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______, _______, _______,                   KC_MINS, KC_UNDS,  KC_EQL 
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),


  [_NUM] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______,   _______, _______, _______, _______, _______,                           _______,   KC_P7,    KC_P8,   KC_P9, _______,  _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______,  _______, _______, _______, _______, _______,                            _______,  KC_P4,    KC_P5,   KC_P6, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______,   _______, _______, _______, _______, _______, _______,          _______,   KC_P0,   KC_P1,   KC_P2,  KC_P3,  _______,  _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______,   _______, _______,                  _______,  _______, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),


  [_NAV] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      _______,   _______, _______, _______,_______,  _______,                           _______, _______, _______,  _______, _______,_______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______,  _______, _______, _______, _______,  _______,                           _______, KC_LPRN, KC_RPRN,  KC_LCBR, KC_RCBR, _______,  
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______,  _______, _______,  _______,_______,  _______,                           KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______, _______, 
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______,   _______, _______, _______, _______,_______,  _______,          _______, _______, KC_LBRC, KC_RBRC,   KC_GT,   KC_LT, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______,  _______, _______,                   _______, _______,  _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),
   

  [_FUN] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      _______,  _______, _______, _______, _______,  _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______,   _______, _______, _______,_______,  _______,                             KC_F12,   KC_F7,   KC_F8,   KC_F9,_______,  _______,  
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______,  _______, _______, _______, _______, _______,                             KC_F11,   KC_F4,   KC_F5,   KC_F6, _______, _______, 
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______,   _______, _______, _______, _______, _______, _______,          _______,  KC_F10,   KC_F1,   KC_F2,   KC_F3, _______, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______, _______, _______,                  _______,  _______, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),   


  [_MEDIA] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      _______,   _______, _______, _______, _______, _______,                           _______,  _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______, _______,                            RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______,  
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______,  _______, _______, _______, _______, _______,                           _______, KC_MPRV,  KC_VOLD, KC_VOLU, KC_MNXT, _______, 
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      _______,  _______, _______, _______, _______, _______, _______,          _______, _______, KC_MSTP, KC_MPLY,  KC_MUTE, _______, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______, _______, _______,                  _______,  _______, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),
};
enum combo_events {
  SCREENSHOT,
  CAPSWORD,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM screenshot_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM capsword_combo[] = {KC_C, KC_D, COMBO_END};

combo_t key_combos[] = {
  [SCREENSHOT] = COMBO_ACTION(screenshot_combo),
  [CAPSWORD] = COMBO_ACTION(capsword_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case SCREENSHOT:
      if (pressed) {
        tap_code16(LSG(KC_4));
      }
      break;
    case CAPSWORD:
      if (pressed) {
        caps_word_on();
      }
      break;
  }
}

