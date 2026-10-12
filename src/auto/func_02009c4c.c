#include "m2c.h"

s32 func_02009c4c(s32 arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = 0;
    if (arg1 == 0) {
        var_r2 = ((u32) (*(s32 *)0x04000000 & 0x07000000) >> 0x18) << 0x10;
    }
    return var_r2 + ((arg1 << 0x15) + 0x06000000 + (arg0 << 0xE));
}
