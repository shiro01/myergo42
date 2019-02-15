#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BASE 0
#define _LR1 1
#define _LR2 2

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define JP_AT   KC_LBRC         // @ `
#define JP_HAT  KC_EQL          // ^ ~
#define JP_LBRC KC_RBRC         // [ {
#define JP_RBRC KC_NUHS         // ] }
#define JP_COLN KC_QUOT         // : *
#define JP_BSLS KC_INT1         // \ _
#define JP_YEN  KC_INT3         // yen |

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_ESC,  KC_Q,         KC_W,    KC_E,           KC_R,              KC_T,              KC_PSCR,    KC_INS,  KC_Y,     KC_U,     KC_I,    KC_O,   KC_P,            KC_BSPC,
        KC_TAB,  KC_A,         KC_S,    KC_D,           KC_F,              KC_G,              KC_DELT,    JP_LBRC, KC_H,     KC_J,     KC_K,    KC_L,   RSFT_T(KC_SCLN), JP_COLN,
        KC_LSFT, KC_Z,         KC_X,    KC_C,           KC_V,              KC_B,              KC_HOME,    JP_RBRC, KC_N,     KC_M,     KC_COMM, KC_DOT, RCTL_T(KC_SLSH), KC_MINS,
        KC_LCTL, LCTL(KC_TAB), KC_LWIN, LALT_T(KC_ENT), LT(_LR1, KC_MHEN), LT(_LR2, KC_ZKHK), KC_SPC,     KC_ENT,  MO(_LR1), MO(_LR2), JP_HAT,  JP_AT,  JP_BSLS,         JP_YEN
    ),
    [_LR1] = LAYOUT(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,    KC_PAUSE,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        _______, _______, _______, _______, _______, _______, _______,    KC_PGUP,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, KC_DELT,
        _______, _______, _______, _______, _______, _______, _______,    KC_PGDOWN, KC_HOME, KC_END,  _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,    _______,   _______, _______, _______, _______, _______, _______
    ),
    [_LR2] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,       XXXXXXX, KC_WH_U, KC_MS_L, KC_MS_U, KC_MS_R, KC_BTN1, KC_BTN3,
        _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    S(KC_CAPS),    XXXXXXX, KC_WH_D, KC_WH_L, KC_MS_D, KC_WH_R, KC_BTN2, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    )
};
