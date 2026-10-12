#include "m2c.h"

M2C_UNK func_02100104(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02102b34(void *arg0) {
    func_02100104(arg0, 0, 0x5C);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
