#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ESC, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, RALT(KC_W), RALT(KC_A), RALT(KC_O), LT(1,KC_SPC), LT(2,KC_TAB), LT(3,KC_ENT), LT(4,KC_BSPC)),
	[1] = LAYOUT_split_3x5_2(G(S(KC_Z)), LGUI(KC_Z), OSM(MOD_LCTL), OSM(MOD_LALT), LGUI(KC_C), KC_NO, KC_PGDN, KC_UP, KC_PGUP, KC_NO, KC_ESC, KC_TAB, OSM(MOD_LGUI), OSM(MOD_LSFT), LGUI(KC_V), KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_DEL, KC_BSPC, KC_SPC, KC_ENT, LGUI(KC_X), KC_NO, KC_HOME, KC_LSFT, KC_END, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x5_2(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, HYPR(KC_P), HYPR(KC_1), HYPR(KC_UP), HYPR(KC_2), HYPR(KC_M), KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, LCA(KC_E), HYPR(KC_LEFT), HYPR(KC_DOWN), HYPR(KC_RGHT), LCA(KC_T), S(G(A(KC_TAB))), SGUI(KC_TAB), KC_F11, KC_F12, KC_NO, LCA(KC_D), HYPR(KC_3), HYPR(KC_ENT), HYPR(KC_4), LCA(KC_G), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x5_2(LSFT(KC_Q), LSFT(KC_W), LSFT(KC_E), LSFT(KC_R), LSFT(KC_T), LSFT(KC_Y), LSFT(KC_U), LSFT(KC_I), LSFT(KC_O), LSFT(KC_P), LSFT(KC_A), LSFT(KC_S), LSFT(KC_D), LSFT(KC_F), LSFT(KC_G), LSFT(KC_H), LSFT(KC_J), LSFT(KC_K), LSFT(KC_L), KC_CAPS, LSFT(KC_Z), LSFT(KC_X), LSFT(KC_C), LSFT(KC_V), LSFT(KC_B), LSFT(KC_N), LSFT(KC_M), LSA(KC_W), LSA(KC_A), LSA(KC_O), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x5_2(KC_NO, KC_CIRC, KC_MINS, KC_PLUS, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_AT, KC_LT, KC_COMM, KC_DOT, KC_PERC, KC_0, KC_4, KC_5, KC_6, KC_UNDS, KC_NO, KC_GT, KC_SLSH, KC_ASTR, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT_split_3x5_2(KC_NO, KC_TILD, KC_PIPE, KC_AMPR, KC_BSLS, KC_NO, KC_GRV, KC_DQUO, KC_QUOT, KC_NO, KC_NO, KC_LBRC, KC_LCBR, KC_LPRN, KC_NO, KC_DLR, KC_COLN, KC_SCLN, KC_EQL, KC_HASH, KC_NO, KC_RBRC, KC_RCBR, KC_RPRN, KC_NO, KC_NO, KC_EXLM, KC_QUES, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT_split_3x5_2(RESET, KC_NO, HYPR(KC_F9), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_MUTE, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_MPLY, KC_MFFD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[7] = LAYOUT_split_3x5_2(KC_NO, A(S(KC_F2)), LALT(KC_F2), C(S(KC_N)), KC_NO, HYPR(KC_F8), HYPR(KC_F4), HYPR(KC_F12), HYPR(KC_F13), HYPR(KC_F14), KC_NO, LGUI(KC_LBRC), LGUI(KC_RBRC), LGUI(KC_B), LGUI(KC_N), HYPR(KC_F), HYPR(KC_I), HYPR(KC_F5), HYPR(KC_F6), KC_NO, KC_NO, LGUI(KC_1), LGUI(KC_F12), A(G(KC_B)), HYPR(KC_B), HYPR(KC_F7), HYPR(KC_F10), HYPR(KC_F11), KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[8] = LAYOUT_split_3x5_2(KC_NO, KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_D, KC_MS_U, KC_WH_U, KC_NO, KC_ACL1, KC_ACL0, KC_BTN2, KC_BTN1, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[9] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_P1, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8)
};

// const uint16_t PROGMEM cmb_we[] = {KC_W, KC_E, COMBO_END};
// const uint16_t PROGMEM cmb_er[] = {KC_E, KC_R, COMBO_END};
// const uint16_t PROGMEM cmb_sd[] = {KC_S, KC_D, COMBO_END};
// const uint16_t PROGMEM cmb_df[] = {KC_D, KC_F, COMBO_END};
// const uint16_t PROGMEM cmb_xc[] = {KC_X, KC_C, COMBO_END};
// const uint16_t PROGMEM cmb_cv[] = {KC_C, KC_V, COMBO_END};

// const uint16_t PROGMEM cmb_ui[] = {KC_U, KC_I, COMBO_END};
// const uint16_t PROGMEM cmb_io[] = {KC_I, KC_O, COMBO_END};
// const uint16_t PROGMEM cmb_jk[] = {KC_J, KC_K, COMBO_END};
// const uint16_t PROGMEM cmb_kl[] = {KC_K, KC_L, COMBO_END};
// const uint16_t PROGMEM cmb_ma[] = {KC_M, KC_P2, COMBO_END};
// const uint16_t PROGMEM cmb_aa[] = {KC_P2, KC_P3, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
	//COMBO(cmb_we, MO(7)),
	//COMBO(cmb_er, KC_NO),
	//COMBO(cmb_sd, MO(5)),
	//COMBO(cmb_df, KC_NO),
	//COMBO(cmb_xc, KC_NO),
	//COMBO(cmb_cv, MO(6)),
	//COMBO(cmb_ui, KC_NO),
	//COMBO(cmb_io, KC_NO),
    //COMBO(cmb_jk, KC_NO),
    //COMBO(cmb_kl, MO(6)),
	//COMBO(cmb_ma, MO(5)),
	//COMBO(cmb_aa, KC_NO),
};

uint32_t layer_state_set_user(uint32_t state) {
  state = update_tri_layer_state(state, 1, 4, 5);
  state = update_tri_layer_state(state, 1, 3, 7);
  state = update_tri_layer_state(state, 2, 4, 6);
  state = update_tri_layer_state(state, 2, 3, 8);
  return state;
}