#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_020d95d0(s32);                         /* extern */
M2C_UNK func_0210f6e4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020d8740;

s32 func_020ddbd4(s32 arg0) {
    func_0210f6e4(arg0 + 0x9C, 3, 4, &func_020d8740);
    func_020d95d0(arg0);
    func_02006188(arg0);
    return arg0;
}
