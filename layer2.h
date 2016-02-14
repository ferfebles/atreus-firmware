// the function/arrow/nav-cluster layer, aka L2.
// this is shared among several layouts.

int layer2[44] = {
    KEY_INSERT, KEY_HOME,    KEY_UP,            KEY_END,             KEY_PAGE_UP,   KEY_0,              KEY_UP,    0,               KEY_F7,  KEY_F8,  KEY_F9,
    KEY_DELETE, KEY_LEFT,    KEY_DOWN,          KEY_RIGHT,           KEY_PAGE_DOWN, KEY_0,              KEY_DOWN,  0,               KEY_F4,  KEY_F5,  KEY_F6,
    0,          0,           0,                 0,                   0,             KEYBOARD_LEFT_CTRL, KEY_LEFT,  KEY_RIGHT,       KEY_F1,  KEY_F2,  KEY_F3,
    0,          FUNCTION(0), KEYBOARD_LEFT_GUI, KEYBOARD_LEFT_SHIFT, KEY_BACKSPACE, KEYBOARD_LEFT_ALT,  KEY_SPACE, PRE_FUNCTION(1), KEY_F10, KEY_F11, KEY_F12 };
