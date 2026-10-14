#include "engine.h"
#include "m2c.h"

void func_020e77ac(M2C_UNK);
void func_020e7bb0(M2C_UNK);

void func_020e0a58(s32 arg0, s32 arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 1) == arg1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 1) = (u8) arg1;
    temp_r0                  = arg0 + 0xC;
    if (arg1 != 0) {
        func_020e77ac(temp_r0);
        return;
    }
    func_020e7bb0(temp_r0);
}
