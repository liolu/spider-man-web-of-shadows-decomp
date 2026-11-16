/* compiler: 2.0/sp1p5 -pid */
#include "engine.h"
#include "m2c.h"

void func_0201caa0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_0201cd5c(s32 arg0, s32 arg1) {
    s32 var_r6;
    u16 temp_r0;
    u16 temp_r1;

    if (arg1 == M2C_FIELD(arg0, s32 *, 0x44)) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x14);
    var_r6  = arg1 + 1;
    if (var_r6 >= (s32) M2C_FIELD(arg0, u16 *, 4)) {
        var_r6 = 0;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x16);
    if (temp_r1 == arg1) {
        if (temp_r0 != var_r6) {
            func_0201caa0(arg0, arg0 + 0x48, var_r6, 1);
        }
    } else if (temp_r0 == arg1) {
        if (temp_r1 != var_r6) {
            func_0201caa0(arg0, arg0 + 0x48, var_r6, 0);
        }
    } else if (temp_r1 == var_r6) {
        func_0201caa0(arg0, arg0 + 0x48, arg1, 1);
    } else if (temp_r0 == var_r6) {
        func_0201caa0(arg0, arg0 + 0x48, arg1, 0);
    } else {
        func_0201caa0(arg0, arg0 + 0x48, arg1, 0);
        func_0201caa0(arg0, arg0 + 0x48, var_r6, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}
