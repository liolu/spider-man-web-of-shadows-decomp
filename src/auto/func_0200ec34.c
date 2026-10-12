#include "m2c.h"

M2C_UNK func_0200ddb8();                            /* extern */

void func_0200ec34(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x50) & 1) {
            return;
        }
        func_0200ddb8(arg0);
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) & ~1);
}
