#include "m2c.h"

s32 func_02040db0(s32);                             /* extern */
s32 func_0204117c(M2C_UNK);                         /* extern */
M2C_UNK func_020411a4(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020ff7b0();                                /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */

void func_02041868(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_020ff7b0();
    temp_r4 = func_02040db0(arg1);
    if (arg0 == func_0204117c(arg2)) {
        func_020411a4(arg2, 0);
    }
    func_02040db0(temp_r4);
    func_020ff7c4(temp_r5);
}
