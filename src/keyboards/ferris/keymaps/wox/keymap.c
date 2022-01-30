#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, LCTL_T(KC_E), LALT_T(KC_R), KC_T, KC_Y, RALT_T(KC_U), RCTL_T(KC_I), KC_O, KC_P, KC_A, KC_S, LGUI_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RGUI_T(KC_K), KC_L, LSFT_T(KC_ESC), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, RALT(KC_W), RALT(KC_A), RALT(KC_O), LT(1,KC_SPC), LT(2,KC_TAB), LT(4,KC_ENT), LT(3,KC_BSPC)),
	[1] = LAYOUT_split_3x5_2(KC_NO, KC_TAB, KC_LCTL, KC_LALT, KC_NO, KC_NO, KC_PGDN, KC_UP, KC_PGUP, KC_LSFT, KC_ESC, KC_SPC, LGUI_T(KC_BSPC), LSFT_T(KC_ENT), KC_DEL, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_CAPS, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), G(S(KC_Z)), KC_NO, KC_HOME, KC_NO, KC_END, KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC),
	[2] = LAYOUT_split_3x5_2(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_split_3x5_2(KC_NO, KC_TILD, KC_PIPE, KC_AMPR, KC_NO, KC_NO, KC_GRV, KC_DQUO, KC_QUOT, KC_NO, KC_AT, KC_LBRC, KC_LCBR, KC_LPRN, KC_PERC, KC_DLR, KC_COLN, KC_SCLN, KC_EQL, KC_HASH, KC_NO, KC_RBRC, KC_RCBR, KC_RPRN, KC_NO, KC_NO, KC_EXLM, KC_QUES, KC_NO, KC_NO, KC_SPC, KC_TAB, KC_NO, KC_NO),
	[4] = LAYOUT_split_3x5_2(KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_MINS, KC_PLUS, KC_CIRC, KC_NO, KC_BSPC, KC_4, KC_5, KC_6, KC_ENT, KC_BSLS, KC_DOT, KC_COMM, KC_LT, KC_UNDS, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_SLSH, KC_ASTR, KC_GT, KC_NO, KC_0, KC_NO, KC_NO, KC_NO),
	[5] = LAYOUT_split_3x5_2(RESET, KC_NO, HYPR(KC_F9), KC_NO, KC_NO, HYPR(KC_P), HYPR(KC_1), HYPR(KC_UP), HYPR(KC_2), HYPR(KC_M), KC_NO, KC_VOLD, KC_MUTE, KC_VOLU, KC_NO, LCA(KC_E), HYPR(KC_LEFT), HYPR(KC_DOWN), HYPR(KC_RGHT), LCA(KC_T), KC_NO, KC_MRWD, KC_MPLY, KC_MFFD, KC_NO, LCA(KC_D), HYPR(KC_3), HYPR(KC_ENT), HYPR(KC_4), LCA(KC_G), KC_NO, KC_NO, S(C(G(KC_TAB))), C(G(KC_TAB))),
	[6] = LAYOUT_split_3x5_2(KC_NO, A(S(KC_F2)), LALT(KC_F2), C(S(KC_N)), KC_NO, HYPR(KC_F8), HYPR(KC_F4), HYPR(KC_F12), HYPR(KC_F13), HYPR(KC_F14), KC_NO, LGUI(KC_LBRC), LGUI(KC_RBRC), LGUI(KC_B), LGUI(KC_N), HYPR(KC_F), HYPR(KC_I), HYPR(KC_F5), HYPR(KC_F6), KC_NO, KC_NO, KC_NO, KC_NO, A(G(KC_B)), HYPR(KC_B), HYPR(KC_F7), HYPR(KC_F10), HYPR(KC_F11), KC_NO, KC_NO, LGUI(KC_F12), LGUI(KC_1), KC_NO, KC_NO),
	[7] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_ACL0, KC_ACL2, KC_NO, KC_WH_D, KC_MS_U, KC_WH_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL1, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_NO, KC_NO),
	[8] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_P1, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8)
};

const uint16_t PROGMEM cmb_we[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM cmb_er[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM cmb_sd[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM cmb_df[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM cmb_xc[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM cmb_cv[] = {KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM cmb_ui[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM cmb_io[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM cmb_jk[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM cmb_kl[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM cmb_ma[] = {KC_M, KC_P2, COMBO_END};
const uint16_t PROGMEM cmb_aa[] = {KC_P2, KC_P3, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
	COMBO(cmb_we, MO(7)),
	//COMBO(cmb_er, KC_NO),
	COMBO(cmb_sd, MO(5)),
	//COMBO(cmb_df, KC_NO),
	//COMBO(cmb_xc, KC_NO),
	COMBO(cmb_cv, MO(6)),
	//COMBO(cmb_ui, KC_NO),
	//COMBO(cmb_io, KC_NO),
    //COMBO(cmb_jk, KC_NO),
    COMBO(cmb_kl, MO(6)),
	COMBO(cmb_ma, MO(5)),
	//COMBO(cmb_aa, KC_NO),
};

