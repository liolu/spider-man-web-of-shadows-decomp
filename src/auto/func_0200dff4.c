#include "m2c.h"
#include "engine.h"

void func_0200d54c(void);
void func_0200dfd0(M2C_UNK, M2C_UNK);

void func_0200dff4(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x60);
    if (temp_r1 == 0x7FFFFFFF) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x64) & 1) {
        func_0200d54c();
    } else {
        func_0200dfd0(arg0, temp_r1);
    }
    M2C_FIELD(arg0, s32 *, 0x60) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
}
