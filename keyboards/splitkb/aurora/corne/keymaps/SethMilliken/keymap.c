#include QMK_KEYBOARD_H

#include "users/SethMilliken/shared.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_BASE] = LAYOUT_split_3x6_3(
XXXXXXX ,  LT(_WIN_LEFT,KC_Q) ,  KC_W         ,  KC_E         ,  KC_R         ,  KC_T     ,    KC_Y     ,  KC_U         ,  EYES         ,  KC_O         ,  LT(_WIN_RIGHT,KC_P) , XXXXXXX ,
XXXXXXX ,  LCTL_T(KC_A)       ,  LGUI_T(KC_S) ,  LALT_T(KC_D) ,  LSFT_T(KC_F) ,  KC_G     ,    KC_H     ,  RSFT_T(KC_J) ,  LALT_T(KC_K) ,  RGUI_T(KC_L) ,  COLONY              , POINTER_ON ,
XXXXXXX ,  KC_Z               ,  KC_X         ,  KC_C         ,  KC_V         ,  KC_B     ,    KC_N     ,  KC_M         ,  KC_COMMA     ,  KC_DOT       ,  KC_SLSH             , DISCORD_ON ,
                                                 LTHUMB_O     ,  LTHUMB_M     ,  LTHUMB_I ,    RTHUMB_I ,  RTHUMB_M     ,  RTHUMB_O
        ),
        [_SYMBOLS] = LAYOUT_split_3x6_3(
XXXXXXX ,  KC_COMMA ,  KC_AMPR   ,  KC_ASTERISK ,  KC_TILDE ,  KC_BSLS ,    KC_LT   ,  KC_GT   ,  KC_LPRN ,  KC_RPRN ,  S(KC_QUOT) ,  XXXXXXX ,
XXXXXXX ,  KC_DOT   ,  KC_DOLLAR ,  KC_PERCENT  ,  KC_CIRC  ,  KC_TAB  ,    KC_MINS ,  KC_EQL  ,  KC_LCBR ,  KC_RCBR ,  KC_QUOT    ,  XXXXXXX ,
XXXXXXX ,  KC_EQL   ,  KC_EXLM   ,  KC_AT       ,  KC_HASH  ,  KC_PIPE ,    KC_UNDS ,  KC_PLUS ,  KC_LBRC ,  KC_RBRC ,  KC_GRV     ,  XXXXXXX ,
                                    KC_TRNS     ,  KC_TRNS  ,  KC_TRNS ,    KC_TRNS ,  KC_TRNS ,  KC_TRNS
        ),
        [_LNUM] = LAYOUT_split_3x6_3(
XXXXXXX ,  KC_COMMA ,  KC_7 ,  KC_8    ,  KC_9    ,  KC_0     ,    XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX    , XXXXXXX ,
XXXXXXX ,  KC_DOT   ,  KC_4 ,  KC_5    ,  KC_6    ,  KC_COLON ,    XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  S(KC_QUOT) , XXXXXXX ,
XXXXXXX ,  KC_EQL   ,  KC_1 ,  KC_2    ,  KC_3    ,  KC_MINS  ,    XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX    , XXXXXXX ,
                               KC_TRNS ,  KC_TRNS ,  KC_TRNS  ,    KC_TRNS ,  KC_TRNS ,  KC_TRNS
        ),
        [_NUMPAD] = LAYOUT_split_3x6_3(
XXXXXXX ,  KC_COMMA ,  KC_7 ,  KC_8    ,  KC_9    ,  KC_0     ,    C(KC_F2) ,  C(KC_F3) ,  C(KC_8) ,  G(S(KC_SLSH)) ,  C(KC_F5)    , XXXXXXX ,
XXXXXXX ,  KC_DOT   ,  KC_4 ,  KC_5    ,  KC_6    ,  KC_COLON ,    KC_LEFT  ,  KC_DOWN  ,  KC_UP   ,  KC_RGHT       ,  KC_GRV      , XXXXXXX ,
XXXXXXX ,  KC_EQL   ,  KC_1 ,  KC_2    ,  KC_3    ,  KC_MINS  ,    KC_PGUP  ,  KC_PGDN  ,  KC_HOME ,  KC_END        ,  KC_NUM_LOCK , XXXXXXX ,
                               KC_TRNS ,  KC_TRNS ,  KC_TRNS  ,    KC_TRNS  ,  KC_TRNS  ,  KC_TRNS
        ),
        [_MEDIA] = LAYOUT_split_3x6_3(
XXXXXXX ,  KC_F1   ,  KC_F2   ,  KC_F3   ,  KC_F4   ,  KC_F5   ,  KC_MUTE ,  KC_MPRV ,  KC_MPLY ,  KC_MNXT ,  KC_BRIU , XXXXXXX ,
XXXXXXX ,  KC_F6   ,  KC_F7   ,  KC_F8   ,  KC_F9   ,  KC_F10  ,  KC_VOLD ,  KC_VOLU ,  XXXXXXX ,  XXXXXXX ,  KC_BRID , XXXXXXX ,
XXXXXXX ,  KC_F11  ,  KC_F12  ,  KC_F13  ,  KC_F14  ,  KC_F15  ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
                                 KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
        ),
        // tri-state layer; do not switch to directly
        [_ADJUST] = LAYOUT_split_3x6_3(
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,    XXXXXXX ,  CW_TOGG    ,  XXXXXXX  ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  WARPD_L ,    WARPD_R ,  WARPD_MOV  ,  WARPD_2P ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  KC_GRV  ,    KC_QUOT ,  S(KC_QUOT) ,  XXXXXXX  ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
                                 KC_TRNS ,  KC_TRNS ,  KC_TRNS ,    KC_TRNS ,  KC_TRNS    ,  KC_TRNS
        ),
        [_DISCORD] = LAYOUT_split_3x6_3(
XXXXXXX ,  XXXXXXX ,  KC_TAB  ,  KC_UP   ,  KC_PLUS  ,  DIS_SECT_NAV ,      XXXXXXX      ,  DIS_PREV_SERV ,  DIS_NEXT_SERV ,  DIS_PINS      ,  ACT_RIGHT     , XXXXXXX ,
XXXXXXX ,  XXXXXXX ,  KC_LEFT ,  KC_DOWN ,  KC_RIGHT ,  XXXXXXX      ,      KC_PGDN      ,  DIS_NEXT      ,  DIS_PREV      ,  DIS_PREV_CHAN ,  DIS_NEXT_CHAN , XXXXXXX ,
XXXXXXX ,  XXXXXXX ,  KC_HOME ,  KC_ESC  ,  KC_END   ,  XXXXXXX      ,      KC_PGUP      ,  DIS_PREV_HIST ,  DIS_NEXT_HIST ,  XXXXXXX       ,  DIS_MENT      , XXXXXXX ,
                                 KC_TRNS ,  KC_TRNS  ,  MODE_OFF     ,      MODE_OFF     ,  KC_TRNS       ,  KC_TRNS
        ),
        [_POINTER] = LAYOUT_split_3x6_3(
XXXXXXX ,  KC_ACL0 ,  KC_BTN1 ,  KC_MS_U ,  KC_BTN2 ,  KC_WH_U  ,    XXXXXXX  ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
XXXXXXX ,  KC_ACL1 ,  KC_MS_L ,  KC_MS_D ,  KC_MS_R ,  KC_WH_D  ,    KC_MS_L  ,  KC_MS_D ,  KC_MS_U ,  KC_MS_R ,  XXXXXXX , XXXXXXX ,
XXXXXXX ,  KC_ACL2 ,  WARPD_L ,  WARPD_T ,  WARPD_R ,  XXXXXXX  ,    KC_BTN1  ,  KC_BTN2 ,  XXXXXXX ,  XXXXXXX ,  XXXXXXX , XXXXXXX ,
                                 KC_TRNS ,  KC_TRNS ,  MODE_OFF ,    MODE_OFF ,  KC_TRNS ,  KC_TRNS
        ),
        [_MIRROR] = LAYOUT_split_3x6_3(
XXXXXXX    ,  LT(_WIN_RIGHT,KC_P) ,  KC_O         ,  EYES         ,  KC_U         ,  KC_Y     ,    KC_T     ,  KC_R         ,  KC_E         ,  KC_W         ,  LT(_WIN_LEFT,KC_Q) , XXXXXXX    ,
POINTER_ON ,  COLONY              ,  RGUI_T(KC_L) ,  LALT_T(KC_K) ,  RSFT_T(KC_J) ,  KC_H     ,    KC_G     ,  LSFT_T(KC_F) ,  LALT_T(KC_D) ,  LGUI_T(KC_S) ,  LCTL_T(KC_A)       , POINTER_ON ,
DISCORD_ON ,  KC_SLSH             ,  KC_DOT       ,  KC_COMMA     ,  KC_M         ,  KC_N     ,    KC_B     ,  KC_V         ,  KC_C         ,  KC_X         ,  KC_Z               , DISCORD_ON ,
                                                     RTHUMB_O     ,  RTHUMB_M     ,  RTHUMB_I ,    LTHUMB_I ,  LTHUMB_M     ,  LTHUMB_O
        ),
        [_WIN_LEFT] = LAYOUT_split_3x6_3(
XXXXXXX ,  KC_TRNS   ,  NAV_FORWARD  ,  NAV_BACKWARD ,  NAV_TAB_NEXT ,  NAV_TAB_PREV ,    RCS(KC_Y) ,  RCS(KC_U) ,  RCS(KC_I)  ,  RCS(KC_O)  ,  LT(_WIN_RIGHT,RCS(KC_P)) , XXXXXXX ,
XXXXXXX ,  WIN_HQUAD ,  NAV_WIN_NEXT ,  WIN_HTHIRD   ,  WIN_HHALF    ,  WIN_FULL     ,    RCS(KC_H) ,  RCS(KC_J) ,  RCS(KC_K)  ,  RCS(KC_L)  ,  RCS(KC_COLON)            , XXXXXXX ,
XXXXXXX ,  WIN_VQUAD ,  NAV_APP_NEXT ,  WIN_VTHIRD   ,  WIN_VHALF    ,  WIN_SCREEN   ,    RCS(KC_N) ,  RCS(KC_M) ,  RCS(KC_LT) ,  RCS(KC_GT) ,  RCS(KC_SLSH)             , XXXXXXX ,
                                        KC_TRNS      ,  KC_TRNS      ,  KC_TRNS      ,    KC_TRNS   ,  KC_TRNS   ,  KC_TRNS
        ),
        [_WIN_RIGHT] = LAYOUT_split_3x6_3(
XXXXXXX ,  LT(_WIN_LEFT,RCS(KC_Q)) ,  RCS(KC_W) ,  RCS(KC_E) ,  RCS(KC_R) ,  RCS(KC_T) ,    NAV_TAB_PREV ,  NAV_TAB_NEXT ,  NAV_BACKWARD ,  NAV_FORWARD  ,  KC_TRNS   , XXXXXXX ,
XXXXXXX ,                RCS(KC_A) ,  RCS(KC_S) ,  RCS(KC_D) ,  RCS(KC_F) ,  RCS(KC_G) ,    WIN_FULL     ,  WIN_HHALF    ,  WIN_HTHIRD   ,  NAV_WIN_NEXT ,  WIN_HQUAD , XXXXXXX ,
XXXXXXX ,                RCS(KC_Z) ,  RCS(KC_X) ,  RCS(KC_C) ,  RCS(KC_V) ,  RCS(KC_B) ,    WIN_SCREEN   ,  WIN_VHALF    ,  WIN_VTHIRD   ,  NAV_APP_NEXT ,  WIN_VQUAD , XXXXXXX ,
                                                   KC_TRNS   ,  KC_TRNS   ,  KC_TRNS   ,    KC_TRNS      ,  KC_TRNS      ,  KC_TRNS
        ),
        // tri-state layer; do not switch to directly
        [_LIGHTING] = LAYOUT_split_3x6_3(
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  RGB_VAI ,  RGB_VAD ,  RGB_TOG ,  QK_BOOT ,  QK_RBT     ,  KC_F18 ,  KC_F17 ,  KC_F16 , XXXXXXX ,
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  RGB_SAI ,  RGB_SAD ,  RGB_MOD ,  DB_TOGG ,  XXXXXXX    ,  KC_F21 ,  KC_F20 ,  KC_F19 , XXXXXXX ,
XXXXXXX ,  XXXXXXX ,  XXXXXXX ,  RGB_HUI ,  RGB_HUD ,  CW_TOGG ,  QK_MAKE ,  S(QK_MAKE) ,  KC_F24 ,  KC_F23 ,  KC_F22 , XXXXXXX ,
                                 KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS    ,  KC_TRNS
        )
};
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
