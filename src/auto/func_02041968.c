#include "m2c.h"

M2C_UNK func_021008a4(s32, s32);                    /* extern */
M2C_UNK func_021016e0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02101714(M2C_UNK, M2C_UNK);                /* extern */

void func_02041968(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_02101714(arg2, arg3)) {
        func_021016e0(arg2, arg3, 0);
    }
    func_021008a4(arg0, arg0 + arg1);
}
