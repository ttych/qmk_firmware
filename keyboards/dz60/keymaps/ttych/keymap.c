#include QMK_KEYBOARD_H

#include "m_p.h"


enum custom_keycodes {
    M_P_PP = SAFE_RANGE,
    M_P_UX,
    M_P_SSH1,
    M_P_SSH2,
    M_P_W_WIN,
    M_P_W_WCODE,
    M_P_W_SESA,
    M_AGE3_US_FOOD,
	M_AGE3_US_WOOD,
    M_AGE3_US_GOLD,
    M_AGE3_US_MAP,
    M_AGE3_US_EXP,
    M_AGE3_US_TUCK,
    M_AGE3_US_ALL10000,
    M_AGE3_US_SPEED,
    M_AGE3_US_VICTORY,
    M_AGE3_US_LAZERBEAR,
    M_AGE3_US_LEARICORN,
    M_AGE3_US_FLUFFY,
    M_AGE3_US_TAPIR,
    M_AGE3_US_ARTILLERY,
    M_AGE3_US_CRUSHINGTON,
    M_CSGO_US_HELMET,
    M_CSGO_US_HELMETP,
    M_CSGO_US_HELMETPD,
    M_CSGO_US_DEFUSE,
    M_CSGO_US_P250,
    M_CSGO_US_GUN4,
    M_CSGO_US_DEAGLE,
    M_CSGO_US_GRE1,
    M_CSGO_US_GRE2,
    M_CSGO_US_UMP45,
    M_CSGO_US_MP9,
    M_CSGO_US_P90,
    M_CSGO_US_AUTOPOMP,
    M_CSGO_US_MG,
    M_CSGO_US_RIFLE1,
    M_CSGO_US_RIFLE2,
    M_CSGO_US_RIFLESCOPE,
    M_CSGO_US_SCOUT,
    M_CSGO_US_AWP,
    M_CSGO_US_AUTOSNIPE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* 0 - l0 - default */
	LAYOUT(
		KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO,
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, MO(1), KC_NO, LT(2, KC_APP), LT(15, KC_RCTL)),

    /* 1 - fn1 */
	LAYOUT(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_DEL,
		KC_TRNS, KC_PGUP, KC_UP, KC_PGDN, KC_HOME, KC_TRNS, KC_CALC, KC_TRNS, KC_INS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS,
		KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_MRWD, KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(14), KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 2 - fn2 */
	LAYOUT(
		KC_GRV, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, KC_TRNS, KC_DEL,
		KC_TRNS, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U, KC_TRNS, KC_CALC, KC_TRNS, KC_INS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS,
		KC_CAPS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_BTN4, KC_BTN3, KC_BTN5, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 3 - l1 */
    LAYOUT(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_DEL,
		KC_TRNS, KC_P, KC_A, KC_S, KC_S, KC_W, KC_O, KC_R, KC_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC, BL_TOGG, BL_INC, BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 4 - l2 */
    LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 5 - l3 */
    LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 6 - l4 */
    LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_4, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 7 - l5 */
    LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_5, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 8 - l6 */
    LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 9 - l7 */
    LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_7, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 10 - l8 */
    LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_8, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 11 - l9 */
    LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 12 - l0 */
    LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 13 - l11 */
    LAYOUT(
		KC_TRNS, M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 14 - pass */
    LAYOUT(
		KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
		KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, M_P_UX, M_P_SSH1, M_P_SSH2, M_P_PP, KC_LBRC, KC_RBRC, KC_TRNS,
		KC_TRNS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, M_P_W_SESA, M_P_W_WCODE, M_P_W_WIN, KC_SCLN, KC_QUOT, KC_TRNS,
		KC_TRNS, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, M_P_PP, KC_NO,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(15, KC_RCTL)),

    /* 15 - layers & parameters */
    LAYOUT(
           TO(0), TO(0), TO(3), TO(4), TO(5), TO(6), TO(7), TO(8), TO(9), TO(10), TO(11), TO(12), TO(13), KC_NO, KC_NO,
		KC_NO, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD, KC_NO, RESET,
		KC_NO, BL_TOGG, BL_INC, BL_DEC, BL_STEP, BL_BRTG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  case M_P_W_WIN:
    if (record->event.pressed) {
      send_string(s_m_p_w_win);
      tap_code(KC_ENT);
    }
    break;

  case M_P_W_WCODE:
    if (record->event.pressed) {
      send_string(s_m_p_w_wcode);
      tap_code(KC_ENT);
    }
    break;

  case M_P_W_SESA:
    if (record->event.pressed) {
      send_string(s_m_p_w_sesa);
      tap_code(KC_ENT);
    }
    break;

  case M_P_UX:
    if (record->event.pressed) {
      send_string(s_m_p_ux);
      tap_code(KC_ENT);
    }
    break;

  case M_P_SSH1:
    if (record->event.pressed) {
      send_string(s_m_p_ssh1);
      tap_code(KC_ENT);
    }
    break;

  case M_P_SSH2:
    if (record->event.pressed) {
      send_string(s_m_p_ssh2);
      tap_code(KC_ENT);
    }
    break;

  case M_P_PP:
    if (record->event.pressed) {
      send_string(s_m_p_pp);
    }
    break;


  /* AGE3 US */
  case M_AGE3_US_FOOD:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("medium rare please");
      tap_code(KC_ENT);
    }
    break;
  case M_AGE3_US_WOOD:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("<censored>");
      tap_code(KC_ENT);
    }
    break;
  case M_AGE3_US_GOLD:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("give me liberty or give me coin");
      tap_code(KC_ENT);
    }
    break;
  case M_AGE3_US_MAP:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("x marks the spot");
      tap_code(KC_ENT);
    }
    break;
  case M_AGE3_US_EXP:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("nova & orion");
      tap_code(KC_ENT);
    }
    break;

  case M_AGE3_US_TUCK:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("tuck tuck tuck");
      tap_code(KC_ENT);
    }
    break;

  case M_AGE3_US_ALL10000:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("a whole lot of love");
      tap_code(KC_ENT);
    }
    break;

  case M_AGE3_US_SPEED:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("speed always wins");
      tap_code(KC_ENT);
    }
    break;

  case M_AGE3_US_VICTORY:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("this is too hard");
      tap_code(KC_ENT);
    }
    break;

  case M_AGE3_US_LAZERBEAR:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("o Canada 2005");
      tap_code(KC_ENT);
    }
    break;

  case M_AGE3_US_LEARICORN:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("dont't kick the pitbull");
      tap_code(KC_ENT);
    }
    break;

  case M_AGE3_US_FLUFFY:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("we <3 fluffy!1!");
      tap_code(KC_ENT);
    }
    break;

  case M_AGE3_US_TAPIR:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("wuv woo vol.2");
      tap_code(KC_ENT);
    }
    break;

  case M_AGE3_US_ARTILLERY:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("ya gotta make do with what ya got");
      tap_code(KC_ENT);
    }
    break;

  case M_AGE3_US_CRUSHINGTON:
    if (record->event.pressed) {
      tap_code(KC_ENT);
      SEND_STRING("where's that axe?");
      tap_code(KC_ENT);
    }
    break;


  /* CS:GO US */
  case M_CSGO_US_HELMET:
    if (record->event.pressed) {
      send_string_with_delay("b51", 50);
      tap_code(KC_ESC);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_HELMETP:
    if (record->event.pressed) {
      send_string_with_delay("b52", 50);
      tap_code(KC_ESC);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_DEFUSE:
    if (record->event.pressed) {
      send_string_with_delay("b54", 50);
      tap_code(KC_ESC);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_HELMETPD:
    if (record->event.pressed) {
      send_string_with_delay("b524", 50);
      tap_code(KC_ESC);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_P250:
    if (record->event.pressed) {
      send_string_with_delay("b13", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_GUN4:
    if (record->event.pressed) {
      send_string_with_delay("b14", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_DEAGLE:
    if (record->event.pressed) {
      send_string_with_delay("b15", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_GRE1:
    if (record->event.pressed) {
      send_string_with_delay("b6345", 50);
      tap_code(KC_ESC);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_GRE2:
    if (record->event.pressed) {
      send_string_with_delay("b6351", 50);
      tap_code(KC_ESC);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_UMP45:
    if (record->event.pressed) {
      /* SEND_STRING("b33"); */
      send_string_with_delay("b33", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_MP9:
    if (record->event.pressed) {
      send_string_with_delay("b31", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_P90:
    if (record->event.pressed) {
      send_string_with_delay("b34", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_AUTOPOMP:
    if (record->event.pressed) {
      send_string_with_delay("b22", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_MG:
    if (record->event.pressed) {
      send_string_with_delay("b24", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_RIFLE1:
    if (record->event.pressed) {
      send_string_with_delay("b41", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_RIFLE2:
    if (record->event.pressed) {
      /* SEND_STRING("b42"); */
      send_string_with_delay("b42", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_RIFLESCOPE:
    if (record->event.pressed) {
      send_string_with_delay("b44", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_SCOUT:
    if (record->event.pressed) {
      send_string_with_delay("b43", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_AWP:
    if (record->event.pressed) {
      send_string_with_delay("b45", 50);
      tap_code(KC_ESC);
    }
    break;

  case M_CSGO_US_AUTOSNIPE:
    if (record->event.pressed) {
      send_string_with_delay("b46", 50);
      tap_code(KC_ESC);
    }
    break;


  }
  return true;
}
