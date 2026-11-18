/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include QMK_KEYBOARD_H

#define F13_SCLN LT(0, KC_SCLN)
#define F13_A    LT(0, KC_A)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,   KC_ESC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,   F13_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,F13_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RALT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(2),   KC_SPC, KC_LGUI,      KC_ENT, KC_BSPC,   MO(1)
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,  KC_F13, XXXXXXX, KC_MPLY, KC_MNXT, KC_VOLU,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,  KC_F13,  KC_APP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, QK_LLCK, XXXXXXX, KC_MSTP, KC_MPRV, KC_VOLD,                      XXXXXXX, XXXXXXX, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(3),    KC_SPC, KC_LGUI,      KC_ENT,  KC_DEL, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, KC_PSCR,  KC_INS, KC_HOME, KC_PGUP,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, QK_LLCK, KC_PAUS,  KC_DEL,  KC_END, KC_PGDN,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______,  KC_SPC, KC_LGUI,     KC_ENT,  KC_DEL,   MO(3)
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX, XXXXXXX,                      MS_LEFT, MS_DOWN,   MS_UP, MS_RGHT, MS_WHLU, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX,                      MS_WHLL, MS_BTN1, MS_BTN2, MS_WHLR, MS_WHLD, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______,  KC_SPC, KC_LGUI,     KC_ENT,  KC_DEL, _______
                                      //`--------------------------'  `--------------------------'
  )
};



#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case F13_SCLN:
        case F13_A:
            if (!record->tap.count) { // a HOLD
                if (record->event.pressed) {
                    register_code(KC_F13);
                } else {
                    unregister_code(KC_F13);
                }
                return false;
            }
            break;
    }
    return true;
}

#undef F13_SCLN
#undef F13_A

/*
Colors, converted using https://www.rapidtables.com/convert/color/rgb-to-hsv.html

#00ffaa -> H 160, S 100%, V 100%
#00ffff -> H 180, S 100%, V 100%
#00aaff -> H 200, S 100%, V 100%
#0000ff -> H 240, S 100%, V 100%

*/


void matrix_init_user(void) {
    // Original starting colour and brightness
    rgb_matrix_sethsv(160, 255, 160);
}

#define SET_HSV_AT_I(i, hsv) do { \
    rgb_t rgb = hsv_to_rgb(hsv); \
    rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b); \
} while (0)

#define SET_HSV_AT(row, col, hsv) \
    SET_HSV_AT_I(g_led_config.matrix_co[row][col], hsv)

#define HSV_BLANK ((hsv_t){0, 0, 0})

bool rgb_matrix_indicators_user(void) {
    uint8_t layer = get_highest_layer(layer_state);

    hsv_t hsv = rgb_matrix_get_hsv();
    uint8_t old_h = hsv.h;

    // Original thumb key colours
    hsv.h = old_h + 40;
    for (int col = 3; col <= 5; col++) {
        SET_HSV_AT(3, col, hsv);
        SET_HSV_AT(7, col, hsv);
    }

    switch (layer) {
        case 1:
            if (is_keyboard_left()) {
                // Number row darker blue
                hsv.h = old_h + 40;
                for (int col = 1; col <= 5; col++)
                    SET_HSV_AT(0, col, hsv);

                // Changed keys: lighter blue
                hsv.h = old_h + 20;
                for (int col = 3; col <= 5; col++) {
                    SET_HSV_AT(1, col, hsv);
                    SET_HSV_AT(2, col, hsv);
                }

                // thumb
                SET_HSV_AT(3, 3, hsv);

                // lock key set to red
                hsv.h = old_h - 100;
                SET_HSV_AT(2, 1, hsv);

                // no op
                SET_HSV_AT(1, 2, HSV_BLANK);
                SET_HSV_AT(2, 2, HSV_BLANK);

            } else {
                // Number row darker blue
                hsv.h = old_h + 40;
                for (int col = 1; col <= 5; col++)
                    SET_HSV_AT(4, col, hsv);

                // Changed keys: lighter blue
                hsv.h = old_h + 20;
                for (int col = 0; col <= 5; col++)
                    SET_HSV_AT(5, col, hsv);

                // no op
                SET_HSV_AT(6, 4, HSV_BLANK);
                SET_HSV_AT(6, 5, HSV_BLANK);
                // thumb pressed
                SET_HSV_AT(7, 3, HSV_BLANK);
            }
            break;
        case 2:
            if (is_keyboard_left()) {
                // Number row darker blue
                hsv.h = old_h + 40;
                for (int col = 1; col <= 5; col++)
                    SET_HSV_AT(0, col, hsv);

                // Changed keys: lighter blue
                hsv.h = old_h + 20;
                for (int col = 2; col <= 5; col++) {
                    SET_HSV_AT(1, col, hsv);
                    SET_HSV_AT(2, col, hsv);
                }

                // Lock key set to red
                hsv.h = old_h - 100;
                SET_HSV_AT(2, 1, hsv);

                // Disabled keys
                SET_HSV_AT(1, 1, HSV_BLANK);

                // Original thumb pressed indicator
                SET_HSV_AT(3, 3, HSV_BLANK);

            } else {
                // Number row darker blue
                hsv.h = old_h + 40;
                for (int col = 1; col <= 5; col++)
                    SET_HSV_AT(4, col, hsv);

                // Changed keys: lighter blue
                hsv.h = old_h + 20;
                for (int col = 0; col <= 5; col++) {
                    SET_HSV_AT(5, col, hsv);
                    SET_HSV_AT(6, col, hsv);
                }

                // Changed thumb actions
                SET_HSV_AT(7, 4, hsv);
            }
            break;

        case 3:
            if (is_keyboard_left()) {
                // Top row darker blue
                hsv.h = old_h + 40;
                for (int col = 0; col <= 5; col++) {
                    SET_HSV_AT(0, col, hsv);
                }

                // Changed keys: lighter blue
                hsv.h = old_h + 20;
                for (int col = 0; col <= 3; col++) {
                    SET_HSV_AT(1, col, hsv);
                    SET_HSV_AT(2, col, hsv);
                }

                hsv.h = 0;
                hsv.s = 45;
                for (int i = 0; i <= 5; i++) {
                    SET_HSV_AT_I(i, hsv);
                }

                SET_HSV_AT(1, 4, HSV_BLANK);
                SET_HSV_AT(1, 5, HSV_BLANK);
                SET_HSV_AT(2, 4, HSV_BLANK);
                SET_HSV_AT(2, 5, HSV_BLANK);


                // Thumb pressed indicator
                SET_HSV_AT(3, 3, HSV_BLANK);

            } else {
                // Top row darker blue
                hsv.h = old_h + 40;
                for (int col = 0; col <= 5; col++)
                    SET_HSV_AT(4, col, hsv);

                // Changed keys: lighter blue
                hsv.h = old_h + 20;
                for (int col = 1; col <= 5; col++) {
                    SET_HSV_AT(5, col, hsv);
                    SET_HSV_AT(6, col, hsv);
                }

                // Right LEDs 27–32: keep your existing HSV values
                hsv.h = 0;
                hsv.s = 45;
                for (int i = 27; i <= 32; i++)
                    SET_HSV_AT_I(i, hsv);

                SET_HSV_AT(5, 0, HSV_BLANK);
                SET_HSV_AT(6, 0, HSV_BLANK);

                SET_HSV_AT(7, 3, HSV_BLANK);
            }
            break;

    }

    return true;
}