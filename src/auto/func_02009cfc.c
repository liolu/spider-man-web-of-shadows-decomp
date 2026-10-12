#include "m2c.h"

s32 func_02009cfc(s32 arg0) {
    if (arg0 & 0x80) {
        return 2;
    }
    if (arg0 & 0x10) {
        return 1;
    }
    return 0;
}
