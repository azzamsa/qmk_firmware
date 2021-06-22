#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

//#define TAPPING_FORCE_HOLD  // disable ability auto-repeat. WARN! will break anything that uses tapping toggles

#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200 // tapping timeout (in ms)
#endif

#define ONESHOT_TAP_TOGGLE 3  // Tapping N times holds the key until tapped once again. doesn't work!
//#define ONESHOT_TIMEOUT 200  // Time (in ms) before the one shot key is released
