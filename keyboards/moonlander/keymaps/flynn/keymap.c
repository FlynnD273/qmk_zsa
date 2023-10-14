#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  XX_TERM,
};

enum layers {
    L_DEFAULT,
    L_FUNCTION,
    L_NUMPAD,
    L_CAPS,
    L_GAMING,
    L_MEDIA,
};

enum tap_dance_codes {
  TD_SPC_DOT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_DEFAULT] = LAYOUT_moonlander(
    KC_ESC,                KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_HOME,                        KC_END,                  KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_GRAVE,              KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LGUI(KC_ESC),                 KC_PGUP,                 KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    LT(L_CAPS,KC_CAPSLOCK),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           LGUI(KC_EQUAL),                 KC_PGDN,                 KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSPO,               KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                                    KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSPC,
    KC_LCTRL,              MO(L_MEDIA),    KC_LALT,        KC_TAB,         KC_TAB,      LGUI(LCTL(KC_C)),                               LT(L_FUNCTION,KC_ESCAPE),                KC_MINUS,       KC_EQUAL,       KC_LBRACKET,    KC_RBRACKET,    KC_RCTL,
    TD(TD_SPC_DOT),        KC_BSPACE,      KC_LGUI,                                                                        KC_DEL, KC_TAB,         KC_ENTER
  ),
  [L_FUNCTION] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_4,        KC_KP_5,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_6,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_0,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(L_GAMING),   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(L_NUMPAD),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [L_NUMPAD] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       TO(L_DEFAULT),
    KC_TRANSPARENT,        KC_TRANSPARENT,        KC_TRANSPARENT,                 RESET,          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [L_CAPS] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_PSCREEN,     LALT(KC_LEFT),  LCTL(KC_R),     KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_E),     LALT(KC_F4),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [L_GAMING] = LAYOUT_moonlander(
    KC_ESCAPE,          KC_1, KC_2,           KC_3,           KC_4,           KC_5,           KC_UP,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_DOWN,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_6,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           LALT(LSFT(KC_R)),                                                                      KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_RSHIFT,
    KC_LCTRL,       MO(L_MEDIA), KC_LALT, KC_7,         KC_SPC,         KC_8,                                                                                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       TO(L_DEFAULT),
    KC_9,       KC_M,      KC_N,                        KC_LALT,        KC_TAB,         KC_ENTER
  ),
  [L_MEDIA] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_R), XX_TERM,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  LGUI(KC_V),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_TAB),   KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LGUI(KC_UP),    KC_DEL, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [L_DEFAULT] = { {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204} },

    [L_FUNCTION] = { {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204} },

    [L_NUMPAD] = { {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204}, {150,218,204} },

    [L_CAPS] = { {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204}, {232,218,204} },

    [L_GAMING] = { {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204}, {32,218,204} },

    [L_MEDIA] = { {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return;
  }
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case L_DEFAULT:
      set_layer_color(0);
      break;
    case L_FUNCTION:
      set_layer_color(1);
      break;
    case L_NUMPAD:
      set_layer_color(2);
      break;
    case L_MEDIA:
      set_layer_color(3);
      break;
    case L_CAPS:
      set_layer_color(4);
      break;
    case L_GAMING:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
        case XX_TERM:
            if (record-> event.pressed) {
                register_code(KC_LGUI);
                tap_code(KC_R);
                unregister_code(KC_LGUI);
                SEND_STRING(SS_DELAY(250) "wezterm-gui.exe" SS_DELAY(250));
                tap_code(KC_ENTER);
                return false;
            }
            break;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

void dance_space_each(qk_tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            // tap_code(KC_SPC);
            register_code(KC_SPC);
            break;
        case 2: // .
            unregister_code(KC_SPC);
            tap_code(KC_BACKSPACE);
            send_string(". ");
            // register_code(KC_LALT);
            // tap_code(KC_KP_4);
            // tap_code(KC_KP_6);
            // unregister_code(KC_LALT);
            // tap_code(KC_SPC);
            break;
    }
}

void dance_space_end(qk_tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            // tap_code(KC_SPC);
            unregister_code(KC_SPC);
            break;
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [TD_SPC_DOT] = ACTION_TAP_DANCE_FN_ADVANCED(dance_space_each, NULL, dance_space_end),
};
