#include QMK_KEYBOARD_H

#include "m_p.h"


enum custom_keycodes {
    M_P_S_P = SAFE_RANGE,
    M_P_U_L,
    M_P_U_M,
    M_P_U_P,
    M_P_S_P_A,
    M_P_5_SE_L,
    M_P_5_SE_P,
    M_P_5_W_L,
    M_P_5_W_P,
    M_P_5_W_C,
    M_P_5_U_L,
    M_P_5_M,
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
    [0] = LAYOUT_60_ansi(
                         KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
                         KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
                         MO(15), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
                         KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT,
                         KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(15), MO(8), KC_RCTL
                         ),
    [1] = LAYOUT_60_ansi(
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         MO(15),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(15), MO(9), KC_TRNS
                         ),
    [2] = LAYOUT_60_ansi(
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         MO(15),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(15), MO(10), KC_TRNS
                         ),
    [3] = LAYOUT_60_ansi(
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         MO(15),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(15), MO(8), KC_TRNS
                         ),
    [4] = LAYOUT_60_ansi(
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         MO(15),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(15), MO(11), KC_TRNS
                         ),
    [5] = LAYOUT_60_ansi(
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         MO(15),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(15), MO(12), KC_TRNS
                         ),
    [6] = LAYOUT_60_ansi(
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         MO(15),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(15), MO(13), KC_TRNS
                         ),
    [7] = LAYOUT_60_ansi(
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         MO(15),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(15), MO(14), KC_TRNS
                         ),
    [8] = LAYOUT_60_ansi(
                         KC_NO, TO(0), TO(1), TO(2), TO(3), TO(4), TO(5), TO(6), TO(7), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_WH_U, KC_MS_U, KC_WH_D, KC_NO, KC_NO, KC_NO, M_P_U_L, M_P_U_M, M_P_S_P_A, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, M_P_U_P, KC_NO, M_P_S_P, KC_NO, KC_NO, KC_NO,
                         KC_BTN3, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_BTN1, KC_NO, KC_NO, KC_TRNS, KC_NO
                         ),
    [9] = LAYOUT_60_ansi(
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_1,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO
                         ),
    [10] = LAYOUT_60_ansi(
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_1,  KC_NO, KC_NO, KC_NO, KC_NO, M_P_5_W_L, M_P_5_U_L, M_P_5_M, M_P_S_P_A, M_P_5_SE_L, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, M_P_5_W_P, M_P_5_W_P, KC_NO, M_P_S_P, M_P_5_SE_P, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, M_P_5_W_C, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO
                         ),
    [11] = LAYOUT_60_ansi(
                         KC_NO, TO(0), TO(1), TO(2), TO(3), TO(4), TO(5), TO(6), TO(7), BL_DEC, BL_INC, BL_BRTG, BL_STEP, BL_TOGG,
                         KC_NO, KC_WH_U, KC_MS_U, KC_WH_D, KC_NO, KC_NO, KC_NO, RGB_M_T, RGB_M_G, RGB_M_SW, RGB_M_R, RGB_M_B, RGB_M_K, RGB_M_SN,
                         KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_MOD, RGB_TOG,
                         KC_BTN3, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_NO, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_P,
                         KC_NO, KC_NO, KC_NO, KC_BTN1, KC_NO, KC_NO, KC_TRNS, RGB_M_X
                         ),
    [12] = LAYOUT_60_ansi(
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_1,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO
                         ),
    [13] = LAYOUT_60_ansi(
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_1,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO
                         ),
    [14] = LAYOUT_60_ansi(
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_1,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO
                         ),
    [15] = LAYOUT_60_ansi(
                          KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
                          KC_F13, KC_PGUP, KC_UP, KC_PGDN, KC_HOME, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_SLCK, KC_PAUS, RESET,
                          KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_BRID, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_NO,
                          KC_LSFT, RGB_M_B, RGB_M_X, TO(0), TO(1), TO(2), TO(3), TO(4), TO(5), TO(6), TO(7), KC_MUTE,
                          KC_LCTL, KC_LGUI, KC_LALT, RGB_TOG, RGB_M_R, KC_TRNS, KC_VOLD, KC_VOLU
                          )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  case M_P_U_L: {
    if (record->event.pressed) {
      send_string(m_p_u_l);
    }
    break;
  }

  case M_P_U_M: {
    if (record->event.pressed) {
      send_string(m_p_u_m);
    }
    break;
  }

  case M_P_U_P: {
    if (record->event.pressed) {
      send_string(m_p_u_p);
      tap_code(KC_ENT);
    }
    break;
  }

  case M_P_S_P: {
    if (record->event.pressed) {
      send_string(m_p_s_p);
    }
    break;
  }

  case M_P_S_P_A: {
    if (record->event.pressed) {
      send_string(m_p_s_p_a);
      tap_code(KC_ENT);
    }
    break;
  }

  case M_P_5_SE_L: {
    if(record->event.pressed) {
      send_string(m_p_5_se_l);
    }
    break;
  }

  case M_P_5_SE_P: {
    if(record->event.pressed) {
      send_string(m_p_5_se_p);
      tap_code(KC_ENT);
    }
    break;
  }

  case M_P_5_W_L: {
    if(record->event.pressed) {
      send_string(m_p_5_w_l);
    }
    break;
  }

  case M_P_5_W_P: {
    if(record->event.pressed) {
      send_string(m_p_5_w_p);
      tap_code(KC_ENT);
    }
    break;
  }

  case M_P_5_W_C: {
    if(record->event.pressed) {
      send_string(m_p_5_w_c);
      tap_code(KC_ENT);
    }
    break;
  }

  case M_P_5_U_L: {
    if(record->event.pressed) {
      send_string(m_p_5_u_l);
    }
    break;
  }

  case M_P_5_M: {
    if(record->event.pressed) {
      send_string(m_p_5_m);
    }
    break;
  }

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
