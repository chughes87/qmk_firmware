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
     _______, KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,_______,
     _______, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,_______,
     _______, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,_______,
     _______, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,_______,
                                       KC_TAB, KC_MINS,                     KC_QUOT, KC_ENT,
                               LGUI_T(KC_ESC), KC_LSHIFT,                   KC_SPC, LCTL_T(KC_BSPC),
                                        RAISE, KC_LALT,                     KC_GRV, RAISE,
                                        TG(LOWER), _______,                  _______, TG(LOWER)
  ),

  [_RAISE] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 ,    KC_F8 ,   KC_F9,    KC_F10,  KC_F11 ,
       _______, KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                       KC_CIRC, KC_AMPR,   KC_ASTR,  KC_LPRN,  KC_RPRN, _______,
       _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_F5,                     KC_LEFT, KC_DOWN,   KC_UP,    KC_RIGHT, KC_PIPE, _______,
       _______, KC_HOME, KC_END,  KC_MPRV, KC_MPLY, KC_MNXT,                   KC_VOLD, KC_VOLU,   KC_EQUAL, KC_GT,    KC_BSLS, _______,
                                       KC_TAB, KC_MINS,                     KC_GRV, KC_ENT,
                               LGUI_T(KC_ESC), KC_LSHIFT,                   KC_SPC, KC_DEL,
                                        RAISE, RESET,                       RESET, RAISE,
                                        TG(LOWER), _______,                  _______, TG(LOWER)
  ),

  [_LOWER] = LAYOUT_5x6(
     _______, KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  ,                          KC_5, KC_6  , KC_7  , KC_8  , KC_9  , _______,
     _______, KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  ,                          KC_T, KC_Y  , KC_U  , KC_I  , KC_O  , _______,
     _______, KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  ,                          KC_G, KC_H  , KC_J  , KC_K  , KC_L  , _______,
     _______, KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  ,                          KC_B, KC_N  , KC_M  ,KC_COMM,KC_DOT , _______,
                                       KC_Y, KC_N,                     KC_QUOT, KC_ENT,
                               KC_LALT, KC_SPC,                   KC_SPC, LCTL_T(KC_BSPC),
                                        KC_LCTL, KC_GRV,                     KC_GRV, RAISE,
                                        TG(LOWER), _______,                  _______, TG(LOWER)
  ),
};
