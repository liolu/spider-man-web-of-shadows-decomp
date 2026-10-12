#include "m2c.h"

M2C_UNK func_02104044();                            /* extern */
s32 func_021043c0(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK func_02104084;

s32 func_02104414(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_021043c0(arg0, &func_02104084, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02104044();
    return sp0;
}
