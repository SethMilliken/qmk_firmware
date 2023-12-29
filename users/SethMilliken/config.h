/* Add configuration options here
 * c.f. https://github.com/qmk/qmk_firmware/blob/master/docs/config_options.md
*/
#define CONFIG_VERSION "1.92.4"

#define TAPPING_TERM 200
#define HP_TAPPING_TERM 125
//#define TAPPING_TERM_PER_KEY
//#define PERMISSIVE_HOLD_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define QUICK_TAP_TERM 0            // for homerow mods
#define COMBO_TERM 50

#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 1000

//#define HOLD_ON_OTHER_KEY_PRESS   // not good for homerow mods
//#define PERMISSIVE_HOLD           // not great for homerow mods with high TAPPING_TERM

//#define TAPPING_FORCE_HOLD
//#define TAPPING_TERM_PER_KEY

// required for QK_MAKE
#define ENABLE_COMPILE_KEYCODE
