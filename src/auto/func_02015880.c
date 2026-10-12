#include "m2c.h"

M2C_UNK func_020158d0();                            /* extern */

s32 func_02015880(void *arg0, s32 arg1) {
    func_020158d0();
    return (arg1 * 0x14) + M2C_FIELD(arg0, s32 *, 0x1C);
}
