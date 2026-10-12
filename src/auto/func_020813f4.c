#include "m2c.h"

s32 func_020813f4(s32 arg0, s32 arg1) {
    if (M2C_FIELD((arg0 + arg1), u8 *, 0x113) == 0) {
        return 1;
    }
    return 0;
}
