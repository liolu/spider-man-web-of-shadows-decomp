#include "m2c.h"

M2C_UNK func_020fef94(s32, M2C_UNK);                /* extern */
M2C_UNK func_021009d8();                            /* extern */
M2C_UNK func_021009ec();                            /* extern */

void func_021016e0(s32 arg0, s32 arg1, s32 arg2) {
    func_021009d8();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_020fef94(arg0 + 0x3C + (arg1 * 4), 4);
    func_021009ec();
}
