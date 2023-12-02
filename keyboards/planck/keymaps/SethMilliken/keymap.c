#include QMK_KEYBOARD_H

#define CONFIG_VERSION "1.70.0"

#define HYPE(x) C(A(G(x)))

// KEYMAP {{{
enum araxia_layers {
    _BASE,            // 0
    _SYMBOLS,         // 1
    _LNUM,            // 2
    _NUMPAD,          // 3
    _MEDIA,           // 4
    _WIN_LEFT,        // 5
    _WIN_RIGHT,       // 6
    _ADJUST,          // 7
    _LIGHTING,        // 8
    _DISCORD          // 9
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_planck_grid(
LT(_WIN_LEFT,KC_Q) ,  KC_W         ,  KC_E         ,  KC_R           ,  KC_T ,            , KC_F1                ,  KC_F2              ,  KC_Y               ,  KC_U             ,  KC_I         ,  KC_O         ,  LT(_WIN_RIGHT,KC_P) ,
LCTL_T(KC_A)       ,  LGUI_T(KC_S) ,  LALT_T(KC_D) ,  LSFT_T(KC_F)   ,  KC_G ,            , KC_F3                ,  KC_F4              ,  KC_H               ,  RSFT_T(KC_J)     ,  LALT_T(KC_K) ,  RGUI_T(KC_L) ,  RCTL_T(KC_SCLN)     ,
KC_Z               ,  KC_X         ,  KC_C         ,  KC_V           ,  KC_B ,            , KC_F5                ,  KC_F6              ,  KC_N               ,  KC_M             ,  KC_COMMA     ,  KC_DOT       ,  KC_SLSH             ,
KC_F7              ,  KC_F8        ,  KC_F9        ,  LGUI_T(KC_ENT) ,  LT(_LNUM,C(KC_W)) , LT(_SYMBOLS,KC_ESC)  ,  LT(_MEDIA,KC_ESC)  ,  LT(_NUMPAD,KC_SPC) ,  RGUI_T(KC_COLON) ,  KC_F10       ,  KC_F11       ,  KC_F12  
        ),
	[_SYMBOLS] = LAYOUT_planck_grid(
KC_COMMA ,  KC_AMPR   ,  KC_ASTERISK ,  KC_TAB   ,  KC_BSLS  ,    KC_TRANS ,  KC_TRANS ,    KC_LT   ,  KC_GT   ,  KC_LPRN ,  KC_RPRN ,  KC_SCLN ,
KC_DOT   ,  KC_DOLLAR ,  KC_PERCENT  ,  KC_CIRC  ,  KC_GRV   ,    KC_TRANS ,  KC_TRANS ,    KC_MINS ,  KC_EQL  ,  KC_LCBR ,  KC_RCBR ,  KC_QUOT ,
KC_EQL   ,  KC_EXLM   ,  KC_AT       ,  KC_HASH  ,  KC_ENT   ,    KC_TRANS ,  KC_TRANS ,    KC_UNDS ,  KC_PLUS ,  KC_LBRC ,  KC_RBRC ,  KC_GRV  ,
KC_TRNS  ,  KC_TRNS   ,  KC_TRNS     ,  KC_TRNS  ,  KC_TRNS  ,    KC_TRANS ,  KC_TRANS ,    KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
        ),
	[_LNUM] = LAYOUT_planck_grid(
KC_LT      ,  KC_7      ,  KC_8        ,  KC_9    ,  KC_0     ,    KC_TRNS ,  KC_TRNS ,    XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX     ,
KC_GT      ,  KC_4      ,  KC_5        ,  KC_6    ,  KC_TILDE ,    KC_TRNS ,  KC_TRNS ,    XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  S(KC_QUOT)  ,
KC_KP_PLUS ,  KC_1      ,  KC_2        ,  KC_3    ,  KC_PIPE  ,    KC_TRNS ,  KC_TRNS ,    XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX     ,
KC_TRNS    ,  KC_TRNS   ,  KC_TRNS     ,  KC_TRNS ,  KC_TRNS  ,    KC_TRNS ,  KC_TRNS ,    KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
        ),
	[_NUMPAD] = LAYOUT_planck_grid(
KC_COMMA ,  KC_KP_7 ,  KC_KP_8 ,  KC_KP_9 ,  KC_KP_0  ,    KC_TRNS ,  KC_TRNS ,    C(KC_F2) ,  C(KC_F3) ,  C(KC_8) ,  G(S(KC_SLSH)) ,  C(KC_F5)      ,
KC_DOT   ,  KC_KP_4 ,  KC_KP_5 ,  KC_KP_6 ,  KC_COLON ,    KC_TRNS ,  KC_TRNS ,    KC_LEFT  ,  KC_DOWN  ,  KC_UP   ,  KC_RGHT       ,  KC_GRV        ,
KC_EQL   ,  KC_KP_1 ,  KC_KP_2 ,  KC_KP_3 ,  KC_MINS  ,    KC_TRNS ,  KC_TRNS ,    KC_PGUP  ,  KC_PGDN  ,  KC_HOME ,  KC_END        ,  KC_NUM_LOCK   ,
KC_TRNS  ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS  ,    KC_TRNS ,  KC_TRNS ,    KC_TRNS  ,  KC_TRNS  ,  KC_TRNS ,  KC_TRNS       ,  KC_TRNS
        ),
	[_MEDIA] = LAYOUT_planck_grid(
KC_F1   ,  KC_F2   ,  KC_F3   ,  KC_F4   ,  KC_F5   ,    KC_TRNS ,  KC_TRNS ,    KC_MUTE ,  KC_MPRV ,  KC_MPLY ,  KC_MNXT ,  KC_BRID ,  
KC_F6   ,  KC_F7   ,  KC_F8   ,  KC_F9   ,  KC_F10  ,    KC_TRNS ,  KC_TRNS ,    KC_VOLD ,  KC_VOLU ,  XXXXXXX ,  XXXXXXX ,  KC_BRIU ,
KC_F11  ,  KC_F12  ,  KC_F13  ,  KC_F14  ,  KC_F15  ,    KC_TRNS ,  KC_TRNS ,    XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,
KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,    KC_TRNS ,  KC_TRNS ,    KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
        ),
	[_WIN_LEFT] = LAYOUT_planck_grid(
LGUI(KC_GRV) ,  LGUI(KC_LBRC) ,  LGUI(KC_RBRC) ,  SGUI(KC_LCBR) ,  SGUI(KC_RCBR) ,    KC_TRNS ,  KC_TRNS ,    RCS(KC_Y)  ,  RCS(KC_U) ,  RCS(KC_I)  ,  RCS(KC_O)  ,  RCS(KC_P)     ,
LGUI(KC_TAB) ,  G(C(KC_4))    ,  G(C(KC_3))    ,  G(C(KC_2))    ,  G(C(KC_1))    ,    KC_TRNS ,  KC_TRNS ,    RCS(KC_H)  ,  RCS(KC_J) ,  RCS(KC_K)  ,  RCS(KC_L)  ,  RCS(KC_COLON) ,
SGUI(KC_TAB) ,  G(C(S(KC_4))) ,  G(C(S(KC_3))) ,  G(C(S(KC_2))) ,  G(C(S(KC_1))) ,    KC_TRNS ,  KC_TRNS ,    RCS(KC_N)  ,  RCS(KC_M) ,  RCS(KC_LT) ,  RCS(KC_GT) ,  RCS(KC_SLSH)  ,
KC_TRNS      ,  KC_TRNS       ,  KC_TRNS       ,  KC_TRNS       ,  KC_TRNS       ,    KC_TRNS ,  KC_TRNS ,    KC_TRNS    ,  KC_TRNS   ,  KC_TRNS    ,  KC_TRNS    ,  KC_TRNS
        ),
	[_WIN_RIGHT] = LAYOUT_planck_grid(
RCS(KC_Q) ,  RCS(KC_W) ,  RCS(KC_E) ,  RCS(KC_R) ,  RCS(KC_T) ,    KC_TRNS ,  KC_TRNS ,    SGUI(KC_LCBR) ,  SGUI(KC_RCBR) ,  LGUI(KC_LBRC) ,  LGUI(KC_RBRC) ,  LGUI(KC_GRV) ,
RCS(KC_A) ,  RCS(KC_S) ,  RCS(KC_D) ,  RCS(KC_F) ,  RCS(KC_G) ,    KC_TRNS ,  KC_TRNS ,    G(C(KC_1))    ,  G(C(KC_2))    ,  G(C(KC_3))    ,  G(C(KC_4))    ,  LGUI(KC_TAB) ,
RCS(KC_Z) ,  RCS(KC_X) ,  RCS(KC_C) ,  RCS(KC_V) ,  RCS(KC_B) ,    KC_TRNS ,  KC_TRNS ,    G(C(S(KC_1))) ,  G(C(S(KC_2))) ,  G(C(S(KC_3))) ,  G(C(S(KC_4))) ,  SGUI(KC_TAB) ,
KC_TRNS   ,  KC_TRNS   ,  KC_TRNS   ,  KC_TRNS   ,  KC_TRNS   ,    KC_TRNS ,  KC_TRNS ,    KC_TRNS       ,  KC_TRNS       ,  KC_TRNS       ,  KC_TRNS       ,  KC_TRNS
        ),
        // tri-state layer; do not switch to directly
	[_ADJUST] = LAYOUT_planck_grid(
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX    ,    KC_TRNS ,  KC_TRNS ,    XXXXXXX    ,  CW_TOGG    ,  XXXXXXX    ,  XXXXXXX ,  XXXXXXX ,
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  QK_MACRO_0 ,    KC_TRNS ,  KC_TRNS ,    QK_MACRO_1 ,  QK_MACRO_2 ,  QK_MACRO_3 ,  XXXXXXX ,  XXXXXXX ,
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  KC_GRV     ,    KC_TRNS ,  KC_TRNS ,    KC_QUOT    ,  S(KC_QUOT) ,  XXXXXXX    ,  XXXXXXX ,  XXXXXXX ,
KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  XXXXXXX ,  XXXXXXX    ,    KC_TRNS ,  KC_TRNS ,    XXXXXXX    ,  XXXXXXX    ,  KC_TRNS    ,  KC_TRNS ,  KC_TRNS
        ),
        // tri-state layer; do not switch to directly
	[_LIGHTING] = LAYOUT_planck_grid(
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,    KC_TRNS ,  KC_TRNS ,    QK_BOOT ,  QK_RBT     ,  KC_F18  ,  KC_F17  ,  KC_F16 ,
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,    KC_TRNS ,  KC_TRNS ,    DB_TOGG ,  XXXXXXX    ,  KC_F21  ,  KC_F20  ,  KC_F19 ,
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  CW_TOGG ,    KC_TRNS ,  KC_TRNS ,    QK_MAKE ,  S(QK_MAKE) ,  KC_F24  ,  KC_F23  ,  KC_F22 ,
KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_LGUI ,  KC_LSFT ,    KC_TRNS ,  KC_TRNS ,    KC_TRNS ,  KC_TRNS    ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
        ),
        // tri-state layer; do not switch to directly
	[_DISCORD] = LAYOUT_planck_grid(
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,    KC_TRNS ,  KC_TRNS ,    C(S(KC_N)) ,  XXXXXXX       ,  XXXXXXX     ,  XXXXXXX ,  XXXXXXX ,
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,    KC_TRNS ,  KC_TRNS ,    KC_PGDN    ,  A(S(KC_DOWN)) ,  A(S(KC_UP)) ,  KC_PGUP ,  XXXXXXX ,
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,    KC_TRNS ,  KC_TRNS ,    KC_PGUP    ,  KC_PGDN       ,  KC_HOME     ,  KC_END  ,  XXXXXXX ,
KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,    KC_TRNS ,  KC_TRNS ,    KC_TRNS    ,  KC_TRNS       ,  KC_TRNS     ,  KC_TRNS ,  KC_TRNS
        )
};
// }}}
// COMBOS {{{
enum combos {
    COMBO_VERSION,
    COMBO_TMUX,
    COMBO_TMUX_MODE,
    COMBO_DEL,
    COMBO_GUI_LEFT,
    COMBO_ALT_LEFT,
    COMBO_GUI_RIGHT,
    COMBO_ALT_RIGHT,
    COMBO_INVERSE_WINL,
    COMBO_INVERSE_WINR,
    COMBO_SWAP_LEFT,
    COMBO_SWAP_RIGHT,
    COMBO_TAB_LEFT,
    COMBO_TAB_RIGHT,
    COMBO_RETURN_LEFT,
    COMBO_RETURN_RIGHT,
    COMBO_STICKY_SHIFT,
    COMBO_CAPS_WORD,
    COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_version[]       = {LT(_WIN_LEFT,KC_Q)   ,  KC_W                   ,  COMBO_END};
const uint16_t PROGMEM combo_tmux[]          = {KC_U                 ,  KC_I                   ,  KC_O         ,  COMBO_END};
const uint16_t PROGMEM combo_tmux_mode[]     = {KC_W                 ,  KC_E                   ,  KC_R         ,  COMBO_END};
const uint16_t PROGMEM combo_del[]           = {KC_O                 ,  LT(_WIN_RIGHT,KC_P)    ,  COMBO_END};
const uint16_t PROGMEM combo_gui_left[]      = {KC_Z                 ,  KC_X                   ,  COMBO_END};
const uint16_t PROGMEM combo_alt_left[]      = {LCTL_T(KC_A)         ,  KC_Z                   ,  COMBO_END};
const uint16_t PROGMEM combo_gui_right[]     = {KC_DOT               ,  KC_SLSH                ,  COMBO_END};
const uint16_t PROGMEM combo_alt_right[]     = {RCTL_T(KC_COLON)     ,  KC_SLSH                ,  COMBO_END};
const uint16_t PROGMEM combo_inverse_winl[]  = {LT(_WIN_LEFT,KC_Q)   ,  LT(_SYMBOLS,KC_ESC)    ,  COMBO_END};
const uint16_t PROGMEM combo_inverse_winr[]  = {LT(_MEDIA,KC_ESC)    ,  LT(_WIN_RIGHT,KC_P)    ,  COMBO_END};
const uint16_t PROGMEM combo_swap_left[]     = {LT(_WIN_LEFT,KC_Q)   ,  KC_R                   ,  COMBO_END};
const uint16_t PROGMEM combo_swap_right[]    = {KC_U                 ,  LT(_WIN_RIGHT,KC_P)    ,  COMBO_END};
const uint16_t PROGMEM combo_tab_left[]      = {KC_G                 ,  KC_B                   ,  COMBO_END};
const uint16_t PROGMEM combo_tab_right[]     = {KC_H                 ,  KC_N                   ,  COMBO_END};
const uint16_t PROGMEM combo_return_left[]   = {KC_T                 ,  KC_G                   ,  COMBO_END};
const uint16_t PROGMEM combo_return_right[]  = {KC_Y                 ,  KC_H                   ,  COMBO_END};
const uint16_t PROGMEM combo_sticky_shift[]  = {LSFT_T(KC_F)         ,  RSFT_T(KC_J)           ,  COMBO_END};
const uint16_t PROGMEM combo_caps_word[]     = {LCTL_T(KC_A)         ,  RCTL_T(KC_SCLN)        ,  COMBO_END};

combo_t key_combos[] = {
    [COMBO_VERSION]       = COMBO_ACTION(   combo_version    ),
    [COMBO_TMUX]          = COMBO_ACTION(   combo_tmux       ),
    [COMBO_TMUX_MODE]     = COMBO_ACTION(   combo_tmux_mode  ),
    [COMBO_DEL]           = COMBO(   combo_del                , KC_DEL                        ),
    [COMBO_GUI_LEFT]      = COMBO(   combo_gui_left           , KC_LGUI                       ),
    [COMBO_GUI_RIGHT]     = COMBO(   combo_gui_right          , KC_RGUI                       ),
    [COMBO_ALT_LEFT]      = COMBO(   combo_alt_left           , KC_LALT                       ),
    [COMBO_ALT_RIGHT]     = COMBO(   combo_alt_right          , KC_RALT                       ),
    [COMBO_INVERSE_WINL]  = COMBO(   combo_inverse_winl       , MO(_WIN_RIGHT)                ),
    [COMBO_INVERSE_WINR]  = COMBO(   combo_inverse_winr       , MO(_WIN_LEFT)                 ),
    [COMBO_SWAP_LEFT]     = COMBO(   combo_swap_left          , LGUI(KC_TAB)                  ),
    [COMBO_SWAP_RIGHT]    = COMBO(   combo_swap_right         , LGUI(KC_TAB)                  ),
    [COMBO_TAB_LEFT]      = COMBO(   combo_tab_left           , KC_TAB                        ),
    [COMBO_TAB_RIGHT]     = COMBO(   combo_tab_right          , KC_TAB                        ),
    [COMBO_RETURN_LEFT]   = COMBO(   combo_return_left        , KC_ENT                        ),
    [COMBO_RETURN_RIGHT]  = COMBO(   combo_return_right       , KC_ENT                        ),
    [COMBO_STICKY_SHIFT]  = COMBO(   combo_sticky_shift       , OSM(MOD_LSFT)                 ),
    [COMBO_CAPS_WORD]     = COMBO(   combo_caps_word          , CW_TOGG                       ),
};

const key_override_t override_control_h = ko_make_basic(MOD_MASK_CTRL, KC_H, KC_BSPC);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&override_control_h,
	NULL // Null terminate the array of overrides!
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index) {
        case COMBO_VERSION:
            if (pressed) {
                SEND_STRING(CONFIG_VERSION); 
            }
            break;
        case COMBO_TMUX:
            if (pressed) {
                SEND_STRING(SS_LCTL("a"));
            }
            break;
        case COMBO_TMUX_MODE:
            if (pressed) {
                SEND_STRING(SS_LCTL("a") "f");
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
    /* Workaround for mod-tap and layer-tap not supporting modified tap keycodes */
    switch (keycode) {
        case RGUI_T(KC_COLON):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_COLON); // Send KC_COLON on tap
                return false;         // Return false to ignore further processing of key
            }
            break;
        case LT(_LNUM,C(KC_W)):
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
//void liatris_power_led_off(void) {
  // Set our LED pin as output
  //setPinOutput(24);
  // Turn the LED off
  // (Due to technical reasons, high is off and low is on)
  //writePinHigh(24);
//}

//void keyboard_pre_init_user(void) {
//  liatris_power_led_off();
//}
// }}}
