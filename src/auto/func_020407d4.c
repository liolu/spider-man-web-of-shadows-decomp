#include "m2c.h"
#include "engine.h"

void func_02040988(M2C_UNK);
void func_02040afc(M2C_UNK, M2C_UNK);
void func_020f9224(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020407d4(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (M2C_FIELD(arg0, u8 *, 0x2C) != 0)) {
        if (arg1 == 0) {
            func_02040988(arg0);
            return;
        }
        func_020f9224(arg0 + 0x1C, 0, arg1);
        func_02040afc(arg0, 0);
        M2C_FIELD(arg0, u8 *, 0x2C) = 2U;
    }
}
