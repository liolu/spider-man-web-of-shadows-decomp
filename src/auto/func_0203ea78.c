#include "m2c.h"

s32 func_02040dc8();                                /* extern */
s32 func_0204117c();                                /* extern */
M2C_UNK func_020411a4(M2C_UNK, s32);                /* extern */
s32 func_02041510(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_0203ea48;

s32 func_0203ea78(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = func_0204117c();
    if (var_r4 == 0) {
        var_r4 = func_02041510(arg0, &func_0203ea48, func_02040dc8(), arg0, arg1);
        if (var_r4 != 0) {
            func_020411a4(arg0, var_r4);
        }
    }
    return var_r4;
}
