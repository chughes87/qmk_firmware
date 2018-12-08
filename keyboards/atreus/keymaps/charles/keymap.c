// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H



// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _RS 1
#define _LW 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT( /* Qwerty */
    	 KC_Q,   KC_W,     KC_E,    KC_R,           KC_T,                       KC_Y,          KC_U,            KC_I,    KC_O, KC_P,
         KC_A,   KC_S,     KC_D,    KC_F,           KC_G,                       KC_H,          KC_J,            KC_K,    KC_L, KC_SCLN,
         KC_Z,   KC_X,     KC_C,    KC_V,           KC_B,    KC_BTN3, KC_ESC,   KC_N,          KC_M,            KC_COMM, KC_DOT, KC_SLSH,
         KC_TAB, KC_MINS,  KC_LALT, LGUI_T(KC_ESC), KC_LSHIFT, MO(_RS), MO(_RS),  KC_SPC, LCTL_T(KC_BSPC), MO(_LW), KC_QUOT, KC_ENT),

  [_RS] = LAYOUT( /* [> RAISE <] */
        KC_1,    KC_2,        KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,      KC_8,     KC_9,     KC_0,
        KC_LBRC, KC_RBRC,     KC_LCBR, KC_RCBR, KC_F3,                     KC_LEFT, KC_DOWN,   KC_UP,    KC_RIGHT, KC_PIPE,
        KC_HOME, KC_END,      KC_MPRV, KC_MPLY, KC_MNXT, RESET,   KC_ESC,  KC_VOLD, KC_VOLU,   KC_EQUAL, KC_GT,    KC_BSLS,
        KC_ESC,  S(KC_MINS),  KC_LALT, KC_LGUI, KC_LSHIFT, MO(_RS), MO(_RS), KC_SPC,  KC_DEL,    MO(_LW),  KC_GRAVE, KC_F8),

  [_LW] = LAYOUT( /* [> LOWER <] */
         KC_EXLM,  KC_AT,   KC_HASH,  KC_DLR,  KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_F11,   KC_F12,
         KC_F1,    KC_F2,   KC_F3,    KC_F4,   KC_F5,                      KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,
         KC_LBRC,  KC_RBRC, KC_LCBR,  KC_RCBR, KC_NO,   RESET,   KC_ESC,   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_ENT,
         KC_ESC,  S(KC_MINS),  KC_LALT, KC_LGUI, SFT_T(KC_SPC), MO(_RS), MO(_RS), SFT_T(KC_SPC),  KC_DEL,    MO(_LW),  KC_GRAVE, KC_F8)

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  // MACRODOWN only works in this function
  switch(id) {
    case 0:
      if (record->event.pressed) {
        register_code(KC_RSFT);
      } else {
        unregister_code(KC_RSFT);
      }
    break;
  }
  return MACRO_NONE;
};
