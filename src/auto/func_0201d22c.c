#include "m2c.h"

M2C_UNK func_020f4aa0();                            /* extern */

s32 func_0201d22c(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    if (arg3 == 0) {
        return 0;
    }
    if (arg2 == 0) {
        func_020f4aa0();
        return 0;
    }
    if ((u32) M2C_FIELD(arg1, u16 *, 0xC) <= (u32) ((u32) (arg2 & 0x7FFF0000) >> 0xF)) {
        return 1;
    }
    return 0;
}
