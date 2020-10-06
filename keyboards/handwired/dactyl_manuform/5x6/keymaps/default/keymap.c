/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define _______ KC_TRNS



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
     KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
                                       KC_TAB, KC_MINS,                     KC_QUOT, KC_ENT,
                               LGUI_T(KC_ESC), KC_LSHIFT,                   KC_SPC, LCTL_T(KC_BSPC),
                                        RAISE, KC_LALT,                     KC_GRV, RAISE,
                                        KC_QUOT, KC_EQUAL,                    KC_MINS, KC_F8
  ),

  [_LOWER] = LAYOUT_5x6(

     KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
     _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
     _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
     _______,_______,_______,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
                                       KC_TAB, KC_MINS,                     KC_QUOT, KC_ENT,
                               LGUI_T(KC_ESC), KC_LSHIFT,                   KC_SPC, LCTL_T(KC_BSPC),
                                        RAISE, KC_LALT,                     KC_GRV, RAISE, 
                                        LOWER, KC_EQUAL,                    KC_MINS, LOWER

  ),

  [_RAISE] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 ,    KC_F8 ,   KC_F9,    KC_F10,  KC_F11 ,
       _______, KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                       KC_CIRC, KC_AMPR,   KC_ASTR,  KC_LPRN,  KC_RPRN, _______,
       _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_F5,                     KC_LEFT, KC_DOWN,   KC_UP,    KC_RIGHT, KC_PIPE, _______,
       _______, KC_HOME, KC_END,  KC_MPRV, KC_MPLY, KC_MNXT,                   KC_VOLD, KC_VOLU,   KC_EQUAL, KC_GT,    KC_BSLS, _______,
                                       KC_TAB, KC_MINS,                     KC_GRV, KC_ENT,
                               LGUI_T(KC_ESC), KC_LSHIFT,                   KC_SPC, KC_DEL,
                                        RAISE, RESET,                       RESET, RAISE,
                                        KC_QUOT, KC_EQUAL,                  KC_MINS, KC_F8
  ),
};
