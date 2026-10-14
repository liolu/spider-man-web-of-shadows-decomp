#include "m2c.h"

M2C_UNK func_0200ddb8(void *);                      /* extern */
M2C_UNK func_020eb1fc(void *, M2C_UNK);             /* extern */

void func_020eb420(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 var_r0;
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0xF8) != 0) {
        temp_r1                      = M2C_FIELD(arg0, s32 *, 0xFC) - 1;
        M2C_FIELD(arg0, s32 *, 0xFC) = temp_r1;
        if (temp_r1 <= 0) {
            func_020eb1fc(arg0, 0);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0xF4) & 1) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x108);
    var_r1  = M2C_FIELD(arg0, s32 *, 0x1A8);
    if (var_r1 == temp_r0) {
        return;
    }
    if (var_r1 > temp_r0) {
        temp_r0_2 = temp_r0 + 1;
        if (var_r1 >= temp_r0_2) {
            var_r1 = temp_r0_2;
        }
    } else {
        var_r0 = temp_r0 - 1;
        if (var_r1 >= var_r0) {
            var_r0 = var_r1;
        }
        var_r1 = var_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x108) = var_r1;
    if (M2C_FIELD(arg0, s32 *, 0x104) != var_r1) {
        func_0200ddb8(arg0 + 0x100);
    } else {
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x150);
        if (!(temp_r0_3 & 1) && !(temp_r0_3 & 0x20)) {
            M2C_FIELD(arg0, s32 *, 0x104) = -1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC4), s32 *, 0x3C);
}
