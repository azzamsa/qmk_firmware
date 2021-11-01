#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QW,
    _CL,
    _L1,
    _L2,
};

enum custom_keycodes {
    KC_QW = SAFE_RANGE,
    KC_CL,
    KC_L1,
    KC_L2,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | TAB  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  B   |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  | RET  |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |  S   |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  '   |
 * `-----------------------------------------/      /      \      \-----------------------------------------'
 *               |      |      |  NO  | SPC | CTL  /        \  ALT | GUI |  L1  |      |      |
 *               `--------------------------------'          '--------------------------------'
 */
[_QW] = LAYOUT( \
  KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,  \
  KC_ESC,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_TAB,  \
  KC_BSPC, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_ENT,   \
  KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,   KC_NO,           KC_NO,   KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_QUOT,   \
                  KC_NO, KC_NO, KC_NO, KC_SPC, KC_LCTL,         KC_RALT, KC_RGUI, MO(_L1), KC_NO,   KC_NO                        \
),

/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  |  TAB |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  B   |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  RET |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |  S   |   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |  '   |
 * `-----------------------------------------/      /      \      \-----------------------------------------'
 *               |      |      |  NO  | SPC | CTL  /        \  ALT | GUI |  L1  |      |      |
 *               `--------------------------------'          '--------------------------------'
 */
[_CL] = LAYOUT( \
  KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,                           KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,  \
  KC_ESC,  KC_Q,  KC_W,  KC_F,  KC_P,    KC_B,                            KC_J,   KC_L,    KC_U,    KC_Y,   KC_SCLN, KC_TAB,  \
  KC_BSPC, KC_A,  KC_R,  KC_S,  KC_T,    KC_G,                            KC_M,   KC_N,    KC_E,    KC_I,   KC_O,    KC_ENT,   \
  KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_D,    KC_V,    KC_NO,         KC_NO,   KC_K,   KC_H,    KC_COMM, KC_DOT, KC_SLSH, KC_QUOT,   \
                  KC_NO, KC_NO, MO(_L1), KC_LGUI, KC_LCTL,       KC_RALT, KC_SPC, MO(_L1), KC_NO,   KC_NO                        \
),

/* L1
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   *  |   !  |   @  |   U  |   {  |   }  |                    |  UP  |   7  |   8  |   9  |   =  |  +   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  DEL |   #  |   L  |   D  |   R  |   $  |-------.    ,-------|  DN  |   4  |   5  |   6  |   -  |  \   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |   [  |   ]  |   (  |   )  |   &  |-------|    |-------|  `   |   1  |   2  |   3  |   0  |      |
 * `-----------------------------------------/      /      \      \-----------------------------------------'
 *               |      |      |      |     |      /        \     |      |      |      |      |
 *               `--------------------------------'          '--------------------------------'
 */
[_L1] = LAYOUT( \
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                          KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,  \
  KC_ASTR, KC_EXLM, KC_AT,   KC_UP,   KC_LCBR, KC_RCBR,                        KC_PGUP, KC_7,    KC_8,    KC_9,   KC_EQL,  KC_PLUS, \
  KC_DEL,  KC_HASH, KC_LEFT, KC_DOWN, KC_RGHT, KC_DLR,                         KC_PGDN, KC_4,    KC_5,    KC_6,   KC_MINS, KC_BSLS,  \
  KC_TRNS, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_AMPR, KC_NO,        KC_NO,   KC_GRV,  KC_1,    KC_2,    KC_3,   KC_0,    KC_NO,     \
                    KC_NO,   KC_NO,   TO(_L2), KC_TRNS, LCTL(KC_C),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS                      \
),

/* L2
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  QW  |  CL  |   U  |      |  UP  |                    |   U  |  F7  |  F8  |  F9  |  F12 |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  CAP |   L  |   D  |   R  |  DN  |-------.    ,-------|   D  |  F4  |  F5  |  F6  |  F11 |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |  F1  |  F2  |  F3  |  F10 |      |
 * `-----------------------------------------/      /      \      \-----------------------------------------'
 *               |      |      |      |     |      /        \     |      |       |      |     |
 *               `--------------------------------'          '--------------------------------'
 */
[_L2] = LAYOUT( \
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                            KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   \
  KC_TRNS, KC_QW,   KC_CL,   KC_UP,   KC_NO,   KC_PGUP,                          KC_UP,   KC_F7,   KC_F8,   KC_F7, KC_F12, KC_TRNS, \
  KC_TRNS, KC_CAPS, KC_LEFT, KC_DOWN, KC_LEFT, KC_PGDN,                          KC_DOWN, KC_F4,   KC_F5,   KC_F6, KC_F11, KC_TRNS,  \
  KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,          KC_NO,   KC_NO,   KC_F1,   KC_F2,   KC_3,  KC_F10, KC_TRNS,   \
                    KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, TO(_QW), KC_TRNS, KC_TRNS                    \
),
};

void keyboard_pre_init_user(void){
  // need to set the pin output at startup
  // otherwise the layer state won't work after power off
    setPinOutput(D5);
    setPinOutput(B0);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // D5: left LED, B0: right LED
    // High: off, Low: on
    if (layer_state_cmp(state, _QW)){
        writePinHigh(D5);
        writePinHigh(B0);
    } else if (layer_state_cmp(state, _L1)) {
        writePinHigh(D5);
        writePinLow(B0);
    }
    else if (layer_state_cmp(state, _L2)){
        writePinLow(D5);
        writePinHigh(B0);
    }
    return state;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QW:
            //  store layer persistently
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QW);
            }
            return false;
        case KC_CL:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_CL);
            }
            return false;
    }
    return true;
}
