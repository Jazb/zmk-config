#define XXX &none
#define ___ &trans

#define DEF 0
#define LWR 1
#define RSE 2
#define NAV 3
#define ADJ 4
#define QWR 5
#define GME 6

#define SK(KEY) &nk KEY KEY
#define MO(LAYER) &mo_tap LAYER F24

// Apple's "Globe key" is mapped to Caps Lock at the operating system level
// https://github.com/zmkfirmware/zmk/issues/947
#define GLOBE CAPSLOCK

// Keep sticky keys active for a long time so they effectively do not time out
#define STICKY_KEY_TIMEOUT 60000
