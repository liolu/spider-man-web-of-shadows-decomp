#include "m2c.h"

s32 func_02104b18(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_02105194();                            /* extern */
extern M2C_UNK data_0214dfb4;
extern M2C_UNK func_02105184;

s32 func_02104b8c(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_02104b18(arg0, &func_02105184, 0);
    M2C_FIELD(&data_0214dfb4, s32 *, 0x24) = temp_r0;
    if (temp_r0 == 0) {
        func_02105194();
    }
    return M2C_FIELD(&data_0214dfb4, s32 *, 0x24);
}
