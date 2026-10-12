#include "m2c.h"

M2C_UNK func_02006194(s32);                         /* extern */
M2C_UNK func_0210f654(void *, s32, M2C_UNK);        /* extern */

void func_0210f740(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    if (arg3 != 0) {
        func_0210f654(arg0, M2C_FIELD(arg0, s32 *, -4), arg1);
    }
    func_02006194(arg0 - arg2);
}
