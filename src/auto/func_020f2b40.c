#include "m2c.h"

M2C_UNK func_0203d298();                            /* extern */
M2C_UNK func_0203d514();                            /* extern */
M2C_UNK func_0203d524();                            /* extern */

void func_020f2b40(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 2) {
        return;
    }
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 1;
        func_0203d298();
        func_0203d514();
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_0203d298();
    func_0203d524();
}
