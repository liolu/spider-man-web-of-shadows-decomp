#include "m2c.h"

void *func_02015880(void *, M2C_UNK);               /* extern */
M2C_UNK func_020158d0();                            /* extern */

s32 func_020158a0(void *arg0, M2C_UNK arg1) {
    func_020158d0();
    return M2C_FIELD(arg0, s32 *, 0x1C) + (M2C_FIELD(func_02015880(arg0, arg1), s32 *, 4) - 0x1C);
}
