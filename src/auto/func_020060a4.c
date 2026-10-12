#include "m2c.h"

M2C_UNK func_020fefb0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020ffac4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020ffb34(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_020060a4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_020fefb0(arg1, arg3);
    func_020fefb0(arg2, arg3);
    if (arg4 == 0x20) {
        func_020ffac4(arg0, arg1, arg2, arg3);
        return;
    }
    func_020ffb34(arg0, arg1, arg2, arg3);
}
