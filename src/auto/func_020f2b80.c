#include "m2c.h"

s32 func_0203d298();                                /* extern */
M2C_UNK func_0203ede0(s32, M2C_UNK);                /* extern */

void func_020f2b80(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 2;
    func_0203ede0(func_0203d298(), 0);
}
