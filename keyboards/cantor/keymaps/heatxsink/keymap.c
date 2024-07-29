// Copyright 2024 Nick Granado (@heatxsink)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │ \ │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │BKP├───┐           ┌───┤SPC│
      *               └───┤DEL├───┐   ┌───┤ENT├───┘
      *                   └───┤Fn │   │Sup├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        SC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC,
                                            KC_BSPC, KC_DEL, MO(1),          KC_LGUI, KC_ENT, KC_SPC
    ),

     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ + │ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │ - │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│   │   │ ~ │Lt │Rt │       │Up │Dn │ [ │ ] │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│   │   │   │Hom│End│       │PgU│PgD│   │   │   │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Fn ├───┐           ┌───┤Sup│
      *               └───┤Bkp├───┐   ┌───┤Spc├───┘
      *                   └───┤Del│   │Ent├───┘
      *                       └───┘   └───┘
      */
    [1] = LAYOUT_split_3x6_3(
        KC_EQL,  KC_1,     KC_2,     KC_3,      KC_4,       KC_5,            KC_6,       KC_7,       KC_8,       KC_9,       KC_0,  KC_MINS,
        KC_ESC,  KC_NO,    KC_NO,    KC_GRV,    KC_LEFT,    KC_RIGHT,        KC_UP,      KC_DOWN,    KC_LBRC,    KC_RBRC,    KC_NO, KC_NO,
        SC_LSPO, KC_NO,  KC_NO,      KC_NO,     KC_HOME,    KC_END,          KC_PGUP,    KC_PGDN,    KC_NO,      KC_NO,      KC_NO, SC_RSPC,
                                            KC_BSPC, KC_DEL, MO(0),          KC_LGUI, KC_ENT, KC_SPC
	),
};

