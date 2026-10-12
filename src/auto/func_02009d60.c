#include "m2c.h"

s32 func_02009d60(s32 arg0, s32 arg1) {
    if (!(arg0 & 0x100)) {
        return 0;
    }
    if (arg0 & 0x40) {
        return arg1 >> 8;
    }
    return arg1 >> 4;
}
