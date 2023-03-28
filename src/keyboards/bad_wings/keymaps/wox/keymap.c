#include QMK_KEYBOARD_H

enum custom_keycodes {
    DRAG_SCROLL = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0]  = LAYOUT(KC_Q,       KC_W,        LCTL_T(KC_E),   LALT_T(KC_R),   KC_T,    KC_Y,        RALT_T(KC_U), RCTL_T(KC_I),  KC_O,         KC_P,       KC_A,       KC_S,          LGUI_T(KC_D),  LSFT_T(KC_F), KC_G,       KC_H,       RSFT_T(KC_J),  RGUI_T(KC_K),  KC_L,          OSM(MOD_LSFT), KC_Z,    KC_X,       KC_C,         KC_V,       KC_B,       KC_N,        KC_M,         RALT(KC_W),   RALT(KC_A), RALT(KC_O), MO(8), LT(1,KC_SPC), LT(2,KC_TAB), LT(3,KC_ENT), LT(4,KC_BSPC), KC_NO),
	[1]  = LAYOUT(SGUI(KC_Z), KC_DEL,      LCTL_T(KC_ENT), LALT_T(KC_ESC), KC_LEAD, KC_PGUP,     KC_HOME,      KC_UP,         KC_END,       KC_NO,      LGUI(KC_Z), KC_BSPC,       KC_LGUI,       KC_LSFT,      KC_SPC,     KC_PGDN,    KC_LEFT,       KC_DOWN,       KC_RGHT,       KC_NO,         CW_TOGG, LGUI(KC_X), LGUI(KC_C),   LGUI(KC_V), KC_TAB,     KC_NO,       KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO, KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_NO),
	[2]  = LAYOUT(KC_F10,     KC_F7,       KC_F8,          KC_F9,          KC_NO,   HYPR(KC_P),  HYPR(KC_1),   HYPR(KC_UP),   HYPR(KC_2),   HYPR(KC_M), KC_F11,     KC_F4,         KC_F5,         KC_F6,        KC_NO,      LCA(KC_E),  HYPR(KC_LEFT), HYPR(KC_DOWN), HYPR(KC_RGHT), LCA(KC_T),     KC_F12,  KC_F1,      KC_F2,        KC_F3,      KC_NO,      LCA(KC_D),   HYPR(KC_3),   HYPR(KC_ENT), HYPR(KC_4), LCA(KC_G),  KC_NO, KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_NO),
	[3]  = LAYOUT(KC_NO,      A(S(KC_F2)), LALT(KC_F2),    C(S(KC_N)),     KC_NO,   HYPR(KC_F8), HYPR(KC_F4),  HYPR(KC_F12),  HYPR(KC_F13), LCA(KC_P),  KC_NO,      LGUI(KC_LBRC), LGUI(KC_RBRC), LGUI(KC_B),   LGUI(KC_N), HYPR(KC_F), HYPR(KC_I),    HYPR(KC_F5),   HYPR(KC_F6),   HYPR(KC_F15),  KC_NO,   LGUI(KC_1), LGUI(KC_F12), A(G(KC_B)), HYPR(KC_B), HYPR(KC_F7), HYPR(KC_F10), HYPR(KC_F11), KC_NO,      KC_NO,      KC_NO, KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_NO),
	[4]  = LAYOUT(KC_NO,      KC_CIRC,     KC_MINS,        KC_PLUS,        KC_NO,   KC_NO,       KC_7,         KC_8,          KC_9,         KC_NO,      KC_AT,      KC_LT,         KC_COMM,       KC_DOT,       KC_PERC,    KC_UNDS,    KC_4,          KC_5,          KC_6,          KC_0,          KC_NO,   KC_GT,      KC_SLSH,      KC_ASTR,    KC_NO,      KC_NO,       KC_1,         KC_2,         KC_3,       KC_NO,      KC_NO, KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_NO),
	[5]  = LAYOUT(KC_NO,      KC_TILD,     KC_PIPE,        KC_AMPR,        KC_NO,   KC_NO,       KC_GRV,       KC_DQUO,       KC_QUOT,      KC_NO,      KC_DLR,     KC_LBRC,       KC_LCBR,       KC_LPRN,      KC_BSLS,    KC_NO,      KC_COLN,       KC_SCLN,       KC_EQL,        KC_HASH,       KC_NO,   KC_RBRC,    KC_RCBR,      KC_RPRN,    KC_NO,      KC_NO,       KC_EXLM,      KC_QUES,      KC_NO,      KC_NO,      KC_NO, KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_NO),
	[6]  = LAYOUT(QK_BOOT,    KC_NO,       HYPR(KC_F9),    KC_NO,          TO(10),  KC_NO,       LGUI(KC_EQL), LGUI(KC_MINS), KC_NO,        KC_NO,      KC_NO,      KC_VOLD,       KC_MUTE,       KC_VOLU,      KC_NO,      KC_NO,      KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,   KC_MRWD,    KC_MPLY,      KC_MFFD,    KC_NO,      KC_NO,       KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO, KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_NO),
	[7]  = LAYOUT(KC_NO,      KC_NO,       KC_NO,          KC_NO,          KC_NO,   KC_NO,       KC_NO,        KC_NO,         KC_NO,        KC_NO,      KC_NO,      KC_NO,         KC_NO,         KC_NO,        KC_NO,      KC_NO,      KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,   KC_NO,      KC_NO,        KC_NO,      KC_NO,      KC_NO,       KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO, KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_NO),

	[8]  = LAYOUT(KC_NO,      KC_ACL2,     KC_NO,          KC_NO,          KC_NO,   KC_NO,       KC_WH_D,      KC_MS_U,       KC_WH_U,      KC_NO,      
                KC_ACL1,    KC_ACL0,     KC_BTN2,        KC_BTN1,        KC_NO,   KC_NO,       KC_MS_L,      KC_MS_D,       KC_MS_R,      KC_ESC,       
                KC_NO,      KC_NO,       KC_NO,          DRAG_SCROLL,    KC_NO,   KC_NO,       KC_NO,        KC_NO,         KC_NO,        KC_NO,     
                                         KC_NO,          KC_TRNS,       KC_TRNS,  KC_TRNS,     KC_TRNS,      KC_NO),

	[9]  = LAYOUT(KC_Q,       KC_W,        KC_E,           KC_R,           KC_T,    KC_Y,        KC_U,         KC_I,          KC_O,         KC_P,       KC_A,       KC_S,          KC_D,          KC_F,         KC_G,       KC_H,       KC_J,          KC_K,          KC_L,          KC_P1,         KC_Z,    KC_X,       KC_C,         KC_V,       KC_B,       KC_N,        KC_M,         KC_P2,        KC_P3,      KC_P4,      KC_NO, KC_P5,        KC_P6,        KC_P7,        KC_P8,         KC_NO),
	[10] = LAYOUT(KC_Q,       KC_F,        KC_E,           KC_R,           KC_T,    TO(0),       KC_P7,        KC_P8,         KC_P9,        KC_NO,      KC_C,       KC_LEFT,       KC_UP,         KC_RGHT,      KC_G,       KC_NO,      KC_P4,         KC_P5,         KC_P6,         KC_P0,         KC_Z,    KC_X,       KC_DOWN,      KC_V,       KC_B,       KC_NO,       KC_P1,        KC_P2,        KC_P3,      KC_NO,      KC_NO, KC_SPC,       KC_LSFT,      KC_NO,        KC_N,          KC_NO)
};

layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, 1, 4, 5); // symbols
  // state = update_tri_layer_state(state, 1, 3, 8); // mouse
  state = update_tri_layer_state(state, 2, 3, 6); // media
  return state;
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(4, KC_BSPC):
            return true;
        default:
            return false;
    }
}

bool set_scrolling = false;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    static int16_t scroll_buffer_x = 0;
    static int16_t scroll_buffer_y = 0;
    
    if (set_scrolling) {
        scroll_buffer_x += mouse_report.x;
        scroll_buffer_y -= mouse_report.y;
        mouse_report.x = 0;
        mouse_report.y = 0;
        if (abs(scroll_buffer_x) > 6) {
            mouse_report.h = scroll_buffer_x > 0 ? 1 : -1;
            scroll_buffer_x = 0;
        }
        if (abs(scroll_buffer_y) > 6) {
            mouse_report.v = scroll_buffer_y > 0 ? 1 : -1;
            scroll_buffer_y = 0;
        }
    }
    return mouse_report;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == DRAG_SCROLL && record->event.pressed) {
        set_scrolling = !set_scrolling;
        if (set_scrolling) {
          pointing_device_set_cpi(100);
        } else {
          pointing_device_set_cpi(600);
        }
    }
    return true;
}

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

	SEQ_ONE_KEY(KC_LEAD) {
	  register_code(KC_ESC);
      unregister_code(KC_ESC);
    }
	
	SEQ_ONE_KEY(KC_J) {
	  set_oneshot_mods(MOD_BIT(KC_LSFT));
    }

	SEQ_ONE_KEY(KC_F) {
	  caps_word_on();
    }

    SEQ_ONE_KEY(KC_M) {
      SEND_STRING("martin@woxneryd.com");
    }
	
	SEQ_ONE_KEY(KC_N) {
      SEND_STRING("Martin Woxneryd");
    }
  }
}