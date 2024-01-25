#include QMK_KEYBOARD_H

#define CONFIG_VERSION "2.00.0"

#define HYPER(x) C(A(G(x)))
#define CARD_DISCORD HYPER(D)
#define CARD_POINTER HYPER(P)

#define DIS_ACT C(S(N))
#define DIS_PINS G(KC_P)
#define DIS_MENT G(A(S(KC_DOWN)))
#define DIS_NEXT A(S(KC_DOWN))
#define DIS_PREV A(S(KC_UP))
#define DIS_SECT_NAV KC_F6
#define DIS_NEXT_CHAN A(KC_DOWN)
#define DIS_PREV_CHAN A(KC_UP)
#define DIS_NEXT_HIST G(KC_RCBR)
#define DIS_PREV_HIST G(KC_LCBR)
#define DIS_NEXT_SERV G(A(KC_DOWN))
#define DIS_PREV_SERV G(A(KC_UP))

enum araxia_layers {
    _BASE,            // 0
    _SYMBOLS,         // 1
    _LNUM,            // 2
    _NUMPAD,          // 3
    _MEDIA,           // 4
    _ADJUST,          // 5
    _DISCORD,         // 6
    _POINTER,         // 7
    _WIN_LEFT,        // 8
    _WIN_RIGHT,       // 9
    _LIGHTING,        // 10
    _LAYER_LENGTH     // 11
};

enum custom_keycodes {
    WARPD_L = SAFE_RANGE,
    WARPD_R,
    WARPD_T,
    WARPD_MOV,
    WARPD_2P,
    ACT_RIGHT,
    ACT_LEFT,
    DISCORD_ON,
    POINTER_ON,
    MODE_OFF,
};

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
//    COMBO_RETURN_T_LEFT,
//    COMBO_RETURN_T_RIGHT,
    COMBO_STICKY_SHIFT,
    COMBO_CAPS_WORD,
    COMBO_DISCORD,
    COMBO_POINTER,
    COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_version[]         = {LT(_WIN_LEFT,KC_Q)   ,  KC_W                   ,  COMBO_END};
const uint16_t PROGMEM combo_tmux[]            = {KC_U                 ,  KC_I                   ,  KC_O         ,  COMBO_END};
const uint16_t PROGMEM combo_tmux_mode[]       = {KC_W                 ,  KC_E                   ,  KC_R         ,  COMBO_END};
const uint16_t PROGMEM combo_del[]             = {KC_O                 ,  LT(_WIN_RIGHT,KC_P)    ,  COMBO_END};
const uint16_t PROGMEM combo_gui_left[]        = {KC_Z                 ,  KC_X                   ,  COMBO_END};
const uint16_t PROGMEM combo_alt_left[]        = {LCTL_T(KC_A)         ,  KC_Z                   ,  COMBO_END};
const uint16_t PROGMEM combo_gui_right[]       = {KC_DOT               ,  KC_SLSH                ,  COMBO_END};
const uint16_t PROGMEM combo_alt_right[]       = {RCTL_T(KC_COLON)     ,  KC_SLSH                ,  COMBO_END};
const uint16_t PROGMEM combo_inverse_winl[]    = {LT(_WIN_LEFT,KC_Q)   ,  LT(_SYMBOLS,KC_ESC)    ,  COMBO_END};
const uint16_t PROGMEM combo_inverse_winr[]    = {LT(_MEDIA,KC_ESC)    ,  LT(_WIN_RIGHT,KC_P)    ,  COMBO_END};
const uint16_t PROGMEM combo_swap_left[]       = {LSFT_T(KC_F)         ,  KC_Z                   ,  COMBO_END};
const uint16_t PROGMEM combo_swap_right[]      = {RSFT_T(KC_J)         ,  KC_SLSH                ,  COMBO_END};
const uint16_t PROGMEM combo_tab_left[]        = {KC_G                 ,  KC_B                   ,  COMBO_END};
const uint16_t PROGMEM combo_tab_right[]       = {KC_H                 ,  KC_N                   ,  COMBO_END};
const uint16_t PROGMEM combo_return_left[]     = {KC_T                 ,  KC_G                   ,  COMBO_END};
const uint16_t PROGMEM combo_return_right[]    = {KC_Y                 ,  KC_H                   ,  COMBO_END};
//const uint16_t PROGMEM combo_return_t_left[]   = {LT(_LNUM,C(KC_W))    ,  LT(_SYMBOLS,KC_ESC)    ,  COMBO_END};
//const uint16_t PROGMEM combo_return_t_right[]  = {LT(_MEDIA,KC_ESC)    ,  LT(_NUMPAD,KC_SPC)     ,  COMBO_END};
const uint16_t PROGMEM combo_sticky_shift[]    = {LSFT_T(KC_F)         ,  RSFT_T(KC_J)           ,  COMBO_END};
const uint16_t PROGMEM combo_caps_word[]       = {LCTL_T(KC_A)         ,  RCTL_T(KC_SCLN)        ,  COMBO_END};
const uint16_t PROGMEM combo_discord[]         = {LT(_MEDIA,KC_ESC)    ,  LT(_NUMPAD,KC_SPC)     ,  COMBO_END};
const uint16_t PROGMEM combo_pointer[]         = {LT(_NUMPAD,KC_SPC)   ,  RGUI_T(KC_COLON)       ,  COMBO_END};

combo_t key_combos[] = {
    [COMBO_VERSION]         = COMBO_ACTION(   combo_version    ),
    [COMBO_TMUX]            = COMBO_ACTION(   combo_tmux       ),
    [COMBO_TMUX_MODE]       = COMBO_ACTION(   combo_tmux_mode  ),
    [COMBO_DEL]             = COMBO(   combo_del                , KC_DEL                        ),
    [COMBO_GUI_LEFT]        = COMBO(   combo_gui_left           , KC_LGUI                       ),
    [COMBO_GUI_RIGHT]       = COMBO(   combo_gui_right          , KC_RGUI                       ),
    [COMBO_ALT_LEFT]        = COMBO(   combo_alt_left           , KC_LALT                       ),
    [COMBO_ALT_RIGHT]       = COMBO(   combo_alt_right          , KC_RALT                       ),
    [COMBO_INVERSE_WINL]    = COMBO(   combo_inverse_winl       , MO(_WIN_RIGHT)                ),
    [COMBO_INVERSE_WINR]    = COMBO(   combo_inverse_winr       , MO(_WIN_LEFT)                 ),
    [COMBO_SWAP_LEFT]       = COMBO(   combo_swap_left          , LGUI(KC_TAB)                  ),
    [COMBO_SWAP_RIGHT]      = COMBO(   combo_swap_right         , LGUI(KC_TAB)                  ),
    [COMBO_TAB_LEFT]        = COMBO(   combo_tab_left           , KC_TAB                        ),
    [COMBO_TAB_RIGHT]       = COMBO(   combo_tab_right          , KC_TAB                        ),
    [COMBO_RETURN_LEFT]     = COMBO(   combo_return_left        , KC_ENT                        ),
    [COMBO_RETURN_RIGHT]    = COMBO(   combo_return_right       , KC_ENT                        ),
//    [COMBO_RETURN_T_LEFT]   = COMBO(   combo_return_t_left      , KC_ENT                        ),
//    [COMBO_RETURN_T_RIGHT]  = COMBO(   combo_return_t_right     , KC_ENT                        ),
    [COMBO_STICKY_SHIFT]    = COMBO(   combo_sticky_shift       , OSM(MOD_LSFT)                 ),
    [COMBO_CAPS_WORD]       = COMBO(   combo_caps_word          , CW_TOGG                       ),
    [COMBO_DISCORD]         = COMBO(   combo_discord            , DISCORD_ON                    ),
    [COMBO_POINTER]         = COMBO(   combo_pointer            , POINTER_ON                    ),
};

bool flush_modifiers(bool key_down, void* context) {
    send_keyboard_report();
    return true;
}

const key_override_t override_control_h = {
    .trigger_mods           = MOD_MASK_CTRL,
    .trigger                = KC_H,
    .replacement            = KC_BSPC,
    .layers                 = ~0,
    .suppressed_mods        = MOD_MASK_CTRL,
    .options                = ko_options_default,
    .custom_action          = flush_modifiers,
    .enabled                = NULL
};

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

// check config.h to see if this is active
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // hold-preferred tapping-term for thumb cluster
        case LT(_SYMBOLS,KC_ESC):
        case LGUI_T(KC_ENT):
        case LT(_LNUM,C(KC_W)):
        case LT(_MEDIA,KC_ESC):
        case LT(_NUMPAD,KC_SPC):
        case RGUI_T(KC_COLON):
            return HP_TAPPING_TERM;
        default:
            return TAPPING_TERM;
    }
}

// check config.h to see if this is active
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // permissive-hold for thumb cluster
        case LT(_SYMBOLS,KC_ESC):
        case LGUI_T(KC_ENT):
        case LT(_LNUM,C(KC_W)):
        case LT(_MEDIA,KC_ESC):
        case LT(_NUMPAD,KC_SPC):
        case RGUI_T(KC_COLON):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}

// check config.h to see if this is active
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // hold on other key for thumb cluster
        case LT(_SYMBOLS,KC_ESC):
        case LGUI_T(KC_ENT):
        case LT(_LNUM,C(KC_W)):
        case LT(_MEDIA,KC_ESC):
        case LT(_NUMPAD,KC_SPC):
        case RGUI_T(KC_COLON):
        case LT(1, KC_BSPC):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

// }}}
// MACROS {{{
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case WARPD_L:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_S)SS_UP(X_LCTL)SS_UP(X_LGUI)"jf");
                return false;
            case WARPD_R:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_S)SS_UP(X_LCTL)SS_UP(X_LGUI)"kf");
                return false;
            case WARPD_T:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_S)SS_UP(X_LCTL)SS_UP(X_LGUI)"lf");
                return false;
            case WARPD_MOV:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_J)SS_UP(X_LCTL)SS_UP(X_LGUI));
                return false;
            case WARPD_2P:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_K)SS_UP(X_LCTL)SS_UP(X_LGUI));
                return false;
            case ACT_RIGHT:
                layer_move(_WIN_RIGHT);
                return false;
            case ACT_LEFT:
                layer_move(_WIN_LEFT);
                return false;
            case DISCORD_ON:
                // activate Discord
                SEND_STRING(SS_DOWN(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_N)SS_UP(X_LCTL)SS_UP(X_LSFT));
                // put up mode card
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LALT)SS_DOWN(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_D)SS_UP(X_LGUI)SS_UP(X_LALT)SS_UP(X_LCTL)SS_UP(X_LSFT)SS_UP(X_LCTL)SS_UP(X_LSFT));
                // switch to Discord layer
                layer_move(_DISCORD);
                return false;
            case POINTER_ON:
                // put up mode card
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LALT)SS_DOWN(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_P)SS_UP(X_LGUI)SS_UP(X_LALT)SS_UP(X_LCTL)SS_UP(X_LSFT)SS_UP(X_LCTL)SS_UP(X_LSFT));
                // switch to Discord layer
                layer_move(_POINTER);
                return false;
            case MODE_OFF:
                // swap to previously active app
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_TAB)SS_UP(X_LGUI));
                // remove mode card
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LALT)SS_DOWN(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_DELETE)SS_UP(X_LGUI)SS_UP(X_LALT)SS_UP(X_LCTL)SS_UP(X_LSFT)SS_UP(X_LCTL)SS_UP(X_LSFT));
                // return to default layer
                layer_clear();
                return false;
        }
    }

    // handle key released
    if (!record->event.pressed) {
        switch (keycode) {
            case ACT_RIGHT:
                // fallthrough
            case ACT_LEFT:
                // remove mode card
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LALT)SS_DOWN(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_DELETE)SS_UP(X_LGUI)SS_UP(X_LALT)SS_UP(X_LCTL)SS_UP(X_LSFT)SS_UP(X_LCTL)SS_UP(X_LSFT));
                layer_clear();
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
    state = update_tri_layer_state(state ,  _WIN_RIGHT ,  _WIN_LEFT ,  _LIGHTING);
    return state;
}

// }}}
