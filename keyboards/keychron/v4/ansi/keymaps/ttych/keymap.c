/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#include "m_p2.h"

// clang-format off

enum layers {
    /* MAC, */
    PC1,
    PC,
    /* _FN1, */
    /* _FN2, */
    /* _FN3, */
    _FNM,
    _FNC,
    _FN
};

enum custom_keycodes {
    MS_MP = SAFE_RANGE,
    MS_MSP,
    MS_MPP,
    MS_WWL,
    MS_WWP,
    MS_WWC,
    MS_WUL,
    MS_WHL,
    MS_WHP,
    MS_WPP,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  case MS_MP:
    if (record->event.pressed) {
      SEND_STRING(ms_mp);
    }
    break;

  case MS_MSP:
    if (record->event.pressed) {
      SEND_STRING(ms_msp);
    }
    break;

  case MS_MPP:
    if (record->event.pressed) {
      SEND_STRING(ms_mpp);
    }
    break;

  case MS_WWL:
    if (record->event.pressed) {
      SEND_STRING(ms_wwl);
    }
    break;

  case MS_WWP:
    if (record->event.pressed) {
      SEND_STRING(ms_wwp);
    }
    break;

  case MS_WWC:
    if (record->event.pressed) {
      SEND_STRING(ms_wwc);
    }
    break;

  case MS_WUL:
    if (record->event.pressed) {
      SEND_STRING(ms_wul);
    }
    break;

  case MS_WHL:
    if (record->event.pressed) {
      SEND_STRING(ms_whl);
    }
    break;

  case MS_WHP:
    if (record->event.pressed) {
      SEND_STRING(ms_whp);
    }
    break;

  case MS_WPP:
    if (record->event.pressed) {
      SEND_STRING(ms_wpp);
    }
    break;

    }
    return true;
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* [MAC] = LAYOUT_60_ansi( */
    /*     QK_GESC,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, */
    /*     KC_TAB,   KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS, */
    /*     MO(_FNC), KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT, */
    /*     KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT, */
    /*     KC_LCTL,  KC_LOPT,  KC_LCMD,                            KC_SPC,                             KC_RCMD,  MO(_FN), MO(_FNM), KC_RCTL), */

    [PC1] = LAYOUT_60_ansi(
        QK_GESC,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        MO(_FNC), KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL,  KC_LWIN,  KC_LALT,                            KC_SPC,                             KC_RALT,  MO(_FN), MO(_FNM), KC_RCTL),

    [PC] = LAYOUT_60_ansi(
        QK_GESC,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        MO(_FNC), KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL,  KC_LWIN,  KC_LALT,                            KC_SPC,                             KC_RALT,  MO(_FN), KC_APP, KC_RCTL),

    /* [_FN1] = LAYOUT_60_ansi( */
    /*     KC_GRV,  KC_BRID,  KC_BRIU, KC_NO,   KC_NO,   RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  RGB_MOD, */
    /*     RGB_TOG, RGB_MOD,  RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, KC_INS,   KC_PGUP,  KC_HOME,  _______, */
    /*     _______, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, KC_UP,   _______, KC_PGDN,  KC_END,             _______, */
    /*     _______,           _______, _______, _______, _______, _______, NK_TOGG, KC_LEFT, KC_DOWN, KC_RIGHT, KC_DEL,             _______, */
    /*     _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______), */

    /* [_FN2] = LAYOUT_60_ansi( */
    /*     KC_GRV,  KC_BRID,  KC_BRIU, KC_TASK, KC_FLXP, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  RGB_MOD, */
    /*     RGB_TOG, RGB_MOD,  RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, KC_APP,  KC_SCRL, KC_INS,   KC_PGUP,  KC_HOME,  _______, */
    /*     _______, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, KC_UP,   KC_PSCR, KC_PGDN,  KC_END,             _______, */
    /*     _______,           _______, _______, _______, _______, _______, NK_TOGG, KC_LEFT, KC_DOWN, KC_RIGHT, KC_DEL,             _______, */
    /*     _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______), */

    /* [_BLANK] = LAYOUT_60_ansi( */
    /*     _______,  _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______, */
    /*     _______,  _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______, */
    /*     _______,  _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______, */
    /*     _______,            _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______, */
    /*     _______,  _______,  _______,                            _______,                            _______,  _______,  _______,  _______), */

    [_FNM] = LAYOUT_60_ansi(
        _______,  _______,  _______, _______, _______, _______, _______, _______, _______, _______, MS_MP,    MS_MSP,   MS_MPP,   _______,
        _______,  _______,  _______, _______, _______, _______, _______, _______, MS_WHL,  MS_WWL,  MS_WUL,   MS_WPP,   _______,  _______,
        _______,  _______,  _______, _______, _______, _______, _______, _______, MS_WHP,  MS_WWP,  _______,  _______,            _______,
        _______,            _______, _______, _______, _______, _______, _______, _______, _______, MS_WWC,   _______,            _______,
        _______,  _______,  _______,                            _______,                            _______,  _______,  _______,  _______),

    [_FNC] = LAYOUT_60_ansi(
        KC_GRV,   KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL,
        KC_F13,   KC_PGUP,  KC_UP,   KC_PGDN, KC_HOME, KC_VOLU, KC_BRIU, KC_WH_U, KC_MS_U, KC_WH_D, KC_PSCR,  KC_SCRL,  KC_PAUS,  KC_INS,
        MO(_FNC), KC_LEFT,  KC_DOWN, KC_RGHT, KC_END,  KC_VOLD, KC_BRID, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN1,  KC_BTN2,            RGB_TOG,
        _______,            _______, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU,  KC_BTN3,            KC_MUTE,
        _______,  _______,  _______,                            _______,                            _______,  MO(_FN),  KC_APP,   NK_TOGG),

    [_FN] = LAYOUT_60_ansi(
        KC_GRV,   KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL,
        KC_F13,   KC_PGUP,  KC_UP,   KC_PGDN, KC_HOME, KC_VOLU, KC_BRIU, _______, _______, _______, KC_PSCR,  KC_SCRL,  KC_PAUS,  KC_INS,
        KC_CAPS,  KC_LEFT,  KC_DOWN, KC_RGHT, KC_END,  KC_VOLD, KC_BRID, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,  RGB_MOD,            RGB_TOG,
        _______,            _______, RGB_M_P, RGB_M_SW, RGB_M_R, RGB_M_B, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,  RGB_RMOD,           KC_MUTE,
        _______,  _______,  _______,                            _______,                            _______,  MO(_FN),  KC_APP,   NK_TOGG)

};
