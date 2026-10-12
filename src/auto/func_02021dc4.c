#include "m2c.h"

M2C_UNK func_0200ddb8(void *);                      /* extern */

void func_02021dc4(void *arg0) {
    s32 temp_r1;

    M2C_FIELD(arg0, s32 *, 0x98) = 1;
    if (M2C_FIELD(arg0, s32 *, 0x94) != 1) {
        func_0200ddb8(arg0 + 0x90);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0xE0);
    if (temp_r1 & 1) {
        return;
    }
    if (!(temp_r1 & 0x20)) {
        M2C_FIELD(arg0, s32 *, 0x94) = -1;
    }
}
