#include "m2c.h"

s32 func_0203d364();                                /* extern */
M2C_UNK func_0203f13c(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02041f68(void *, s32, s32);            /* extern */
M2C_UNK func_02041f90();                            /* extern */

void func_0203f0e8(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0xC) != 0) && (M2C_FIELD(arg0, s32 *, 4) != 0x13A)) {
        M2C_FIELD(arg0, u8 *, 0xC) = 0U;
        func_02041f90(arg0);
        func_02041f68(arg0, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
        func_0203f13c(arg0, func_0203d364(), 0);
    }
}
