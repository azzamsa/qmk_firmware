#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _LOWER,
    _RAISE,
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_LOWER,
    KC_RAISE,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | OSM  | OSL   | OSM  | LGui| /LCtL_T /       \ RCtl \  | RGui| OSM  | OSL   | OSM  |
 *            | LCtr | RAISE | LAlt |     |  ENTER /         \SPACE \ |     | RAlt | LOWER | RCtl |
 *            `-----------------------------------'           '-----------------------------------'
 */
[_QWERTY] = LAYOUT( \
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                                    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV, \
  KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC, \
  KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                                    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,  \
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,                  XXXXXXX, KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,   \
  OSM(MOD_LCTL), OSL(_RAISE), OSM(MOD_LALT), LCTL_T(KC_ENT), OSM(MOD_LGUI),    OSM(MOD_RGUI), RCTL_T(KC_SPC), OSM(MOD_RALT), OSL(_LOWER), OSM(MOD_RCTL) \
),

/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | OSM  | OSL   | OSM  | LGui| /LCtL_T /       \ RCtl \  | RGui| OSM  | OSL   | OSM  |
 *            | LCtr | RAISE | LAlt |     |  ENTER /         \SPACE \ |     | RAlt | LOWER | RCtl |
 *            `-----------------------------------'           '-----------------------------------'
 */
[_LOWER] = LAYOUT( \
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                            KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11, \
  KC_GRV , KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12,   \
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                          KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, \
  _______, KC_EQL,  KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,        _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,  \
                    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______\
),

/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |      |      |      |      |      |                    | PGup | Caps |      |      |      | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |      |      |      |      |-------.    ,-------| Left | Down | Up   | Rigth|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |Shift |      |      |      |      |      |-------|    |-------|PGdown|      |      |      |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | OSM  | OSL   | OSM  | LGui| /LCtL_T /       \ RCtl \  | RGui| OSM  | OSL   | OSM  |
 *            | LCtr | RAISE | LAlt |     |  ENTER /         \SPACE \ |     | RAlt | LOWER | RCtl |
 *            `-----------------------------------'           '-----------------------------------'
 */
[_RAISE] = LAYOUT( \
  _______, _______ , _______ , _______ , _______ , _______,                      _______,   _______, _______, _______, _______, _______, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          KC_PGUP,   KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          KC_LEFT,   KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,        _______, KC_PGDOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
                    _______, _______, _______, _______, _______,        _______, _______, _______,  _______, _______ \
)
};

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDOWN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

#endif
