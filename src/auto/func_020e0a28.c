#include "m2c.h"

M2C_UNK func_020e7e7c(s32);                         /* extern */
M2C_UNK func_020e9150(s32);                         /* extern */

void func_020e0a28(void *arg0) {
    func_020e9150(arg0 + 0x1D0);
    func_020e7e7c(arg0 + 0x30);
    M2C_FIELD(arg0, s32 *, 4) = 4;
}
