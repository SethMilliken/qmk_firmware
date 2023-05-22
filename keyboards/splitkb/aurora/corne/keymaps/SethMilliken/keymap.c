#include QMK_KEYBOARD_H

#define CONFIG_VERSION "0.02"

#define HYPE(x) C(A(G(x)))

// KEYMAP {{{
enum araxia_layers {
    _BASE,            // 0
    _SYMBOLS,         // 6
    _MEDIA,           // 3
    _NUMPAD,          // 2
    _WIN_LEFT,        // 4
    _WIN_RIGHT,       // 5
    _ADJUST,          // 7
    _LIGHTING,        // 8
    _DISCORD          // 9
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x6_3(
                LT(_WIN_LEFT,KC_TAB) ,  KC_Q            ,  KC_W                ,  KC_E                 ,  KC_R                   ,  KC_T                 ,  KC_Y               ,  KC_U             ,  KC_I     ,  KC_O    ,  KC_P      ,  LT(_WIN_RIGHT,KC_BSPC)   ,
                      LCTL_T(KC_ESC) ,  KC_A            ,  KC_S                ,  KC_D                 ,  KC_F                   ,  KC_G                 ,  KC_H               ,  KC_J             ,  KC_K     ,  KC_L    ,  KC_SCLN   ,  RCTL_T(KC_QUOT)          ,
                      LALT_T(KC_GRV) ,  KC_Z            ,  KC_X                ,  KC_C                 ,  KC_V                   ,  KC_B                 ,  KC_N               ,  KC_M             ,  KC_COMMA ,  KC_DOT  ,  KC_SLSH   ,  RALT_T(KC_BSLS)          ,
                                                           LGUI_T(KC_ENT)      ,  LSFT_T(C(KC_W))      ,  LT(_SYMBOLS,KC_ESC)    ,  LT(_MEDIA,KC_ESC)    ,  LT(_NUMPAD,KC_SPC) ,  RGUI_T(KC_COLON)
        ),
	[_SYMBOLS] = LAYOUT_split_3x6_3(
                KC_BSPC ,  KC_LT   ,  KC_AMPR   ,  KC_ASTERISK ,  KC_LPRN  ,  KC_RPRN         ,  KC_LT   ,  KC_GT   ,  KC_LPRN ,  KC_RPRN ,  KC_SCLN ,  KC_BSPC  ,
                KC_SPC  ,  KC_GT   ,  KC_DOLLAR ,  KC_PERCENT  ,  KC_CIRC  ,  KC_NO           ,  KC_MINS ,  KC_EQL  ,  KC_LCBR ,  KC_RCBR ,  KC_BSLS ,  KC_GRAVE ,
                KC_TRNS ,  KC_PLUS ,  KC_EXLM   ,  KC_AT       ,  KC_HASH  ,  KC_UNDS         ,  KC_UNDS ,  KC_PLUS ,  KC_LBRC ,  KC_RBRC ,  KC_PIPE ,  KC_TRNS  ,
                                                    KC_TRNS    ,  KC_TRNS  ,  KC_TRNS         ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
        ),
	[_MEDIA] = LAYOUT_split_3x6_3(
                KC_TRNS ,  KC_F1   ,  KC_F2   ,  KC_F3   ,  KC_F4   ,  KC_F5   ,  KC_MUTE ,  KC_MPRV ,  KC_MPLY ,  KC_MNXT ,  KC_BRID ,  KC_BRIU ,
                KC_TRNS ,  KC_F6   ,  KC_F7   ,  KC_F8   ,  KC_F9   ,  KC_F10  ,  KC_VOLD ,  KC_VOLU ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,
                KC_TRNS ,  KC_F11  ,  KC_F12  ,  KC_F13  ,  KC_F14  ,  KC_F15  ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,
                KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
        ),
	[_NUMPAD] = LAYOUT_split_3x6_3(
                KC_NO   ,  KC_COMMA ,  KC_7    ,  KC_8    ,  KC_9    ,  KC_0          ,  C(KC_F2)  ,  C(KC_F3)  ,  C(KC_8) ,  G(S(KC_SLSH)) ,  C(KC_F5)      ,  KC_TAB    ,
                KC_NO   ,  KC_DOT   ,  KC_4    ,  KC_5    ,  KC_6    ,  KC_COLON      ,  KC_LEFT   ,  KC_DOWN   ,  KC_UP   ,  KC_RGHT       ,  KC_NO         ,  KC_ENT    ,
                KC_NO   ,  KC_EQL   ,  KC_1    ,  KC_2    ,  KC_3    ,  KC_MINS       ,  KC_PGUP   ,  KC_PGDN   ,  KC_HOME ,  KC_END        ,  KC_NUM_LOCK   ,  A(KC_F4)  ,
                                                  KC_TRNS ,  KC_TRNS ,  KC_TRNS       ,  KC_TRNS   ,  KC_TRNS   ,  KC_TRNS
        ),
	[_WIN_LEFT] = LAYOUT_split_3x6_3(
                XXXXXXX ,  LGUI(KC_GRV) ,  LGUI(KC_LBRC) ,  LGUI(KC_RBRC) ,  SGUI(KC_LCBR) ,  SGUI(KC_RCBR)     ,  RCS(KC_Y)  ,  RCS(KC_U) ,  RCS(KC_I)  ,  RCS(KC_O)  ,  RCS(KC_P)     ,  KC_NO ,
                KC_PWR  ,  LGUI(KC_TAB) ,  G(C(KC_4))    ,  G(C(KC_3))    ,  G(C(KC_2))    ,  G(C(KC_1))        ,  RCS(KC_H)  ,  RCS(KC_J) ,  RCS(KC_K)  ,  RCS(KC_L)  ,  RCS(KC_COLON) ,  KC_NO ,
                KC_SLEP ,  SGUI(KC_TAB) ,  G(C(S(KC_4))) ,  G(C(S(KC_3))) ,  G(C(S(KC_2))) ,  G(C(S(KC_1)))     ,  RCS(KC_N)  ,  RCS(KC_M) ,  RCS(KC_LT) ,  RCS(KC_GT) ,  RCS(KC_SLSH)  ,  KC_NO ,
                                                             KC_TRNS      ,  KC_TRNS       ,  KC_TRNS           ,  KC_TRNS    ,  KC_TRNS   ,  KC_TRNS
        ),
	[_WIN_RIGHT] = LAYOUT_split_3x6_3(
                KC_NO  ,  RCS(KC_Q) ,  RCS(KC_W) ,  RCS(KC_E) ,  RCS(KC_R) ,  RCS(KC_T)       ,  SGUI(KC_LCBR) ,  SGUI(KC_RCBR) ,  LGUI(KC_LBRC) ,  LGUI(KC_RBRC) ,  LGUI(KC_GRV) ,  LGUI(KC_TRNS) ,
                KC_NO  ,  RCS(KC_A) ,  RCS(KC_S) ,  RCS(KC_D) ,  RCS(KC_F) ,  RCS(KC_G)       ,  G(C(KC_1))    ,  G(C(KC_2))    ,  G(C(KC_3))    ,  G(C(KC_4))    ,  LGUI(KC_TAB) ,  KC_PWR        ,
                KC_NO  ,  RCS(KC_Z) ,  RCS(KC_X) ,  RCS(KC_C) ,  RCS(KC_V) ,  RCS(KC_B)       ,  G(C(S(KC_1))) ,  G(C(S(KC_2))) ,  G(C(S(KC_3))) ,  G(C(S(KC_4))) ,  SGUI(KC_TAB) ,  KC_SLEP       ,
                                                     KC_TRNS   ,  KC_TRNS   ,  KC_TRNS         ,  KC_TRNS       ,  KC_TRNS       ,  KC_TRNS
        ),
        // tri-state layer; do not switch to directly
	[_ADJUST] = LAYOUT_split_3x6_3(
                KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO      ,  KC_NO      ,  KC_NO      ,  KC_NO      ,  KC_NO ,  KC_NO ,  KC_NO  ,
                KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  QK_MACRO_0 ,  QK_MACRO_1 ,  QK_MACRO_2 ,  QK_MACRO_3 ,  KC_NO ,  KC_NO ,  KC_NO  ,
                KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_DOT     ,  CW_TOGG    ,  KC_NO      ,  KC_NO      ,  KC_NO ,  KC_NO ,  KC_NO  ,
                KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO
        ),
        // tri-state layer; do not switch to directly
	[_LIGHTING] = LAYOUT_split_3x6_3(
                KC_NO ,  KC_NO ,  KC_NO ,  RGB_HUI ,  RGB_HUD ,  RGB_TOG ,  QK_BOOT ,  QK_RBT     ,  KC_F18 ,  KC_F17 ,  KC_F16 ,  KC_NO ,
                KC_NO ,  KC_NO ,  KC_NO ,  RGB_VAI ,  RGB_VAD ,  RGB_MOD ,  DB_TOGG ,  KC_NO      ,  KC_F21 ,  KC_F20 ,  KC_F19 ,  KC_NO ,
                KC_NO ,  KC_NO ,  KC_NO ,  RGB_SAI ,  RGB_SAD ,  CW_TOGG ,  QK_MAKE ,  S(QK_MAKE) ,  KC_F24 ,  KC_F23 ,  KC_F22 ,  KC_NO ,
                KC_NO ,  KC_NO ,  KC_NO ,  KC_NO   ,  KC_NO   ,  KC_NO
        ),
        // tri-state layer; do not switch to directly
	[_DISCORD] = LAYOUT_split_3x6_3(
                KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO ,  KC_NO         ,  KC_NO       ,  KC_NO ,  KC_NO ,  KC_NO ,
                KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO ,  A(S(KC_DOWN)) ,  A(S(KC_UP)) ,  KC_NO ,  KC_NO ,  KC_NO ,
                KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO ,  KC_NO         ,  KC_NO       ,  KC_NO ,  KC_NO ,  KC_NO ,
                KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
        )
};
// }}}
// COMBOS {{{
enum myCombos {
    COMBO_VERSION,
    COMBO_DEL,
    COMBO_TMUX,
    COMBO_TMUX_MODE,
    COMBO_GUI_LEFT,
    COMBO_ALT_LEFT,
    COMBO_GUI_RIGHT,
    COMBO_ALT_RIGHT,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_version[]    = {LT(_WIN_LEFT,KC_TAB) ,  KC_Q                   ,  COMBO_END};
const uint16_t PROGMEM combo_del[]        = {KC_P                 ,  LT(_WIN_RIGHT,KC_BSPC) ,  COMBO_END};
const uint16_t PROGMEM combo_tmux[]       = {KC_F                 ,  KC_J                   ,  COMBO_END};
const uint16_t PROGMEM combo_tmux_mode[]  = {KC_R                 ,  KC_U                   ,  COMBO_END};
const uint16_t PROGMEM combo_gui_left[]   = {LALT_T(KC_GRV)       ,  KC_Z                   ,  COMBO_END};
const uint16_t PROGMEM combo_alt_left[]   = {LCTL_T(KC_ESC)       ,  LALT_T(KC_GRV)         ,  COMBO_END};
const uint16_t PROGMEM combo_gui_right[]  = {KC_SLSH              ,  RALT_T(KC_BSLS)        ,  COMBO_END};
const uint16_t PROGMEM combo_alt_right[]  = {RCTL_T(KC_QUOT)      ,  RALT_T(KC_BSLS)        ,  COMBO_END};

combo_t key_combos[] = {
    [COMBO_VERSION]    = COMBO_ACTION(combo_version)   ,
    [COMBO_DEL]        = COMBO_ACTION(combo_del)       ,
    [COMBO_TMUX]       = COMBO_ACTION(combo_tmux)      ,
    [COMBO_TMUX_MODE]  = COMBO_ACTION(combo_tmux_mode) ,
    [COMBO_GUI_LEFT]   = COMBO_ACTION(combo_gui_left) ,
    [COMBO_GUI_RIGHT]  = COMBO_ACTION(combo_gui_right) ,
    [COMBO_ALT_LEFT]   = COMBO_ACTION(combo_alt_left) ,
    [COMBO_ALT_RIGHT]  = COMBO_ACTION(combo_alt_right) ,
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case COMBO_VERSION:
      if (pressed) {
        SEND_STRING(CONFIG_VERSION);
      }
      break;
    case COMBO_DEL:
      if (pressed) {
        tap_code16(KC_DEL);
      }
      break;
    case COMBO_TMUX:
      if (pressed) {
        tap_code16(C(KC_A));
      }
      break;
    case COMBO_TMUX_MODE:
      if (pressed) {
        tap_code16(C(KC_A));
        tap_code16(KC_F);
      }
      break;
    case COMBO_GUI_LEFT:
      if (pressed) {
        tap_code16(KC_LGUI);
      }
      break;
    case COMBO_GUI_RIGHT:
      if (pressed) {
        tap_code16(KC_RGUI);
      }
      break;
    case COMBO_ALT_LEFT:
      if (pressed) {
        tap_code16(KC_LALT);
      }
      break;
    case COMBO_ALT_RIGHT:
      if (pressed) {
        tap_code16(KC_RALT);
      }
      break;
  }
}

// }}}
// MACROS {{{
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case QK_MACRO_0:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_S)SS_UP(X_LCTL)SS_UP(X_LGUI)"jf");
                return false;
            case QK_MACRO_1:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_S)SS_UP(X_LCTL)SS_UP(X_LGUI)"kf");
                return false;
            case QK_MACRO_2:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_J)SS_UP(X_LCTL)SS_UP(X_LGUI));
                return false;
            case QK_MACRO_3:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_K)SS_UP(X_LCTL)SS_UP(X_LGUI));
                return false;
        }
    }
    /* Workaround for mod-tap not supporting modified tap keycodes */
    switch (keycode) {
        case RGUI_T(KC_COLON):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_COLON); // Send KC_COLON on tap
                return false;         // Return false to ignore further processing of key
            }
            break;
        case LSFT_T(KC_W):
            if (record->tap.count && record->event.pressed) {
                tap_code16(C(KC_W));  // Send C(KC_W) on tap
                return false;         // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}

// }}}
// TRILAYERS {{{
layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state ,  _SYMBOLS   ,  _MEDIA    ,  _ADJUST);
    state = update_tri_layer_state(state ,  _MEDIA     ,  _NUMPAD   ,  _DISCORD);
    state = update_tri_layer_state(state ,  _WIN_RIGHT ,  _WIN_LEFT ,  _LIGHTING);
    return state;
}

// }}}
// MISC {{{
void liatris_power_led_off(void) {
  // Set our LED pin as output
  setPinOutput(24);
  // Turn the LED off
  // (Due to technical reasons, high is off and low is on)
  writePinHigh(24);
}

void keyboard_pre_init_user(void) {
  liatris_power_led_off();
}
// }}}
