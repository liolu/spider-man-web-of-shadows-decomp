#include "m2c.h"

M2C_UNK func_0210f5a4(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_020137f4;
extern M2C_UNK func_02013824;

void *func_02013b18(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_0210f5a4(arg0 + 0xC, 2, 0x78, &func_020137f4, &func_02013824);
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    return arg0;
}
