#include "m2c.h"

M2C_UNK func_02104044();                            /* extern */
s32 func_021044e0(M2C_UNK *, s32 *);                /* extern */
extern M2C_UNK func_02104084;

s32 func_0210458c(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_021044e0(&func_02104084, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02104044();
    return sp0;
}
