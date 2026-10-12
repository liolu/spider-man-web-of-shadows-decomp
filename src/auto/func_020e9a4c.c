#include "m2c.h"

void func_020e9a4c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xDC) > 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xDB) != 0) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xD9) = 1;
    M2C_FIELD(arg0, s8 *, 0xCC) = 0;
}
