#include "m2c.h"
#include "engine.h"

void func_0204249c(M2C_UNK);
void func_020f9224(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02042444(s32 arg0, s32 arg1) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) == 0) {
        func_0204249c(arg0);
        return;
    }
    if (arg1 == 0) {
        func_0204249c(arg0);
        return;
    }
    func_020f9224(arg0 + 0xE8, 0, arg1);
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (M2C_FIELD(arg0, s32 *, 0x110) | 8);
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
}
