#include "m2c.h"

M2C_UNK func_020f4208();                            /* extern */
M2C_UNK func_020f421c(M2C_UNK);                     /* extern */

void func_020f42c0(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_020f4208();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_020f421c(arg0);
}
