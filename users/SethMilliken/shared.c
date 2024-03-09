

#define CONFIG_VERSION "3.0.0"

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

#define COLONY RCTL_T(KC_SCLN)
#define EYES KC_I
//#define EYES TD(TD_I_I)

#define LTHUMB_O LGUI_T(KC_ENT)
#define LTHUMB_M LT(_LNUM,C(KC_W))
#define LTHUMB_I LT(_SYMBOLS,KC_ESC)

#define RTHUMB_I LT(_MEDIA,KC_ESC)
#define RTHUMB_M LT(_NUMPAD,KC_SPC)
#define RTHUMB_O RGUI_T(KC_COLON)

#define WIN_FULL    G(C(KC_1))
#define WIN_SCREEN  G(C(S(KC_1)))
#define WIN_HHALF   G(C(KC_2))
#define WIN_VHALF   G(C(S(KC_2)))
#define WIN_HTHIRD  G(C(KC_3))
#define WIN_VTHIRD  G(C(S(KC_3)))
#define WIN_HQUAD   G(C(KC_4))
#define WIN_VQUAD   G(C(S(KC_4)))

#define NAV_FORWARD  LGUI(KC_LBRC)
#define NAV_BACKWARD LGUI(KC_RBRC)
#define NAV_TAB_NEXT SGUI(KC_LCBR)
#define NAV_TAB_PREV SGUI(KC_RCBR)
#define NAV_WIN_NEXT LGUI(KC_GRV)
#define NAV_APP_NEXT LGUI(KC_TAB)

enum araxia_layers {
    _BASE,            // 0
    _SYMBOLS,         // 1
    _LNUM,            // 2
    _NUMPAD,          // 3
    _MEDIA,           // 4
    _ADJUST,          // 5
    _DISCORD,         // 6
    _POINTER,         // 7
    _MIRROR,          // 8
    _WIN_LEFT,        // 9
    _WIN_RIGHT,       // 10
    _LIGHTING,        // 11
    _LAYER_LENGTH     // 12
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
    TMUX_OZ,
    TMUX_PASTE,
    TMUX_NP,
    TMUX_PP,
    TMUX_NW,
    TMUX_PW,
    TMUX_NS,
    TMUX_PS,
    TMUX_SW,
};

enum tap_dances {
    TD_I_I,
    TD_SEMI_QUOTE,
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
    COMBO_MIRROR_LEFT,
    COMBO_MIRROR_RIGHT,
    COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_version[]         = {LT(_WIN_LEFT,KC_Q)   ,  KC_W                   ,  COMBO_END};
const uint16_t PROGMEM combo_tmux[]            = {KC_U                 ,  EYES                   ,  KC_O         ,  COMBO_END};
const uint16_t PROGMEM combo_tmux_mode[]       = {KC_W                 ,  KC_E                   ,  KC_R         ,  COMBO_END};
const uint16_t PROGMEM combo_del[]             = {KC_O                 ,  LT(_WIN_RIGHT,KC_P)    ,  COMBO_END};
const uint16_t PROGMEM combo_gui_left[]        = {KC_Z                 ,  KC_X                   ,  COMBO_END};
const uint16_t PROGMEM combo_alt_left[]        = {LCTL_T(KC_A)         ,  KC_Z                   ,  COMBO_END};
const uint16_t PROGMEM combo_gui_right[]       = {KC_DOT               ,  KC_SLSH                ,  COMBO_END};
const uint16_t PROGMEM combo_alt_right[]       = {RCTL_T(KC_COLON)     ,  KC_SLSH                ,  COMBO_END};
const uint16_t PROGMEM combo_inverse_winl[]    = {LT(_WIN_LEFT,KC_Q)   ,  LT(_SYMBOLS,KC_ESC)    ,  COMBO_END};
const uint16_t PROGMEM combo_inverse_winr[]    = {RTHUMB_I             ,  LT(_WIN_RIGHT,KC_P)    ,  COMBO_END};
const uint16_t PROGMEM combo_swap_left[]       = {LSFT_T(KC_F)         ,  KC_Z                   ,  COMBO_END};
const uint16_t PROGMEM combo_swap_right[]      = {RSFT_T(KC_J)         ,  KC_SLSH                ,  COMBO_END};
const uint16_t PROGMEM combo_tab_left[]        = {KC_G                 ,  KC_B                   ,  COMBO_END};
const uint16_t PROGMEM combo_tab_right[]       = {KC_H                 ,  KC_N                   ,  COMBO_END};
const uint16_t PROGMEM combo_return_left[]     = {KC_T                 ,  KC_G                   ,  COMBO_END};
const uint16_t PROGMEM combo_return_right[]    = {KC_Y                 ,  KC_H                   ,  COMBO_END};
//const uint16_t PROGMEM combo_return_t_left[]   = {LTHUMB_M             ,  LTHUMB_I               ,  COMBO_END};
//const uint16_t PROGMEM combo_return_t_right[]  = {RTHUMB_I             ,  RTHUMB_M               ,  COMBO_END};
const uint16_t PROGMEM combo_sticky_shift[]    = {LCTL_T(KC_A)         ,  COLONY                 ,  COMBO_END};
const uint16_t PROGMEM combo_caps_word[]       = {LSFT_T(KC_F)         ,  RSFT_T(KC_J)           ,  COMBO_END};
const uint16_t PROGMEM combo_discord[]         = {RTHUMB_I             ,  RTHUMB_O               ,  COMBO_END};
const uint16_t PROGMEM combo_pointer[]         = {RTHUMB_M             ,  RTHUMB_O               ,  COMBO_END};
const uint16_t PROGMEM combo_mirror_left[]     = {LTHUMB_M             ,  LTHUMB_I               ,  COMBO_END};
const uint16_t PROGMEM combo_mirror_right[]    = {RTHUMB_M             ,  RTHUMB_I               ,  COMBO_END};

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
    [COMBO_MIRROR_LEFT]     = COMBO(   combo_mirror_left        , OSL(_MIRROR)                  ),
    [COMBO_MIRROR_RIGHT]    = COMBO(   combo_mirror_right       , OSL(_MIRROR)                  ),
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

// Tap Dances
tap_dance_action_t tap_dance_actions[] = {
    // TODO: get this working with caps word
    [TD_I_I] = ACTION_TAP_DANCE_DOUBLE(KC_I, S(KC_I)),
    // TODO' get this working with hold-tap
    [TD_SEMI_QUOTE] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_QUOT),
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
        case LTHUMB_I:
        case LTHUMB_O:
        case LTHUMB_M:
        case RTHUMB_I:
        case RTHUMB_M:
        case RTHUMB_O:
            return HP_TAPPING_TERM;
        default:
            return TAPPING_TERM;
    }
}

// check config.h to see if this is active
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // permissive-hold for thumb cluster
        case LTHUMB_I:
        case LTHUMB_O:
        case LTHUMB_M:
        case RTHUMB_I:
        case RTHUMB_M:
        case RTHUMB_O:
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
        case LTHUMB_I:
        case LTHUMB_O:
        case LTHUMB_M:
        case RTHUMB_I:
        case RTHUMB_M:
        case RTHUMB_O:
        case LT(_SYMBOLS, KC_BSPC):
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
                layer_clear();
                return false;
            case WARPD_R:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_S)SS_UP(X_LCTL)SS_UP(X_LGUI)"kf");
                layer_clear();
                return false;
            case WARPD_T:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_S)SS_UP(X_LCTL)SS_UP(X_LGUI)"lf");
                layer_clear();
                return false;
            case WARPD_MOV:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_J)SS_UP(X_LCTL)SS_UP(X_LGUI));
                layer_clear();
                return false;
            case WARPD_2P:
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LCTL)SS_TAP(X_K)SS_UP(X_LCTL)SS_UP(X_LGUI));
                layer_clear();
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
                // TODO: figure out how to only do this if Discord mode was active
                // swap to previously active app
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_TAB)SS_UP(X_LGUI));
                // remove mode card
                SEND_STRING(SS_DOWN(X_LGUI)SS_DOWN(X_LALT)SS_DOWN(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_DELETE)SS_UP(X_LGUI)SS_UP(X_LALT)SS_UP(X_LCTL)SS_UP(X_LSFT)SS_UP(X_LCTL)SS_UP(X_LSFT));
                // return to default layer
                layer_clear();
                return false;
            case TMUX_OZ:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL)"o");
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL)"z");
                return false;
            case TMUX_PASTE:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL)"]");
                return false;
            case TMUX_NP:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL)"o");
                return false;
            case TMUX_PP:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL)";");
                return false;
            case TMUX_NW:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL)"n");
                return false;
            case TMUX_PW:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL)"p");
                return false;
            case TMUX_NS:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL)")");
                return false;
            case TMUX_PS:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL)"(");
                return false;
            case TMUX_SW:
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL));
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_A)SS_UP(X_LCTL));
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
        case RTHUMB_O:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_COLON); // Send KC_COLON on tap
                return false;         // Return false to ignore further processing of key
            }
            break;
        case LTHUMB_M:
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
