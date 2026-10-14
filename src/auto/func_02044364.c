#include "m2c.h"

M2C_UNK func_02006020(s32, s32, u32);               /* extern */
M2C_UNK func_02007b44(s32, s32, u32, u32);          /* extern */

u32 func_02044364(void *arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;
    s32 temp_r0;
    u32 temp_r1;
    u32 temp_r2;
    u32 temp_r2_2;
    u32 temp_r3;
    u32 var_r4;
    u32 var_r5;
    u32 var_r6;

    var_r6 = arg2;
    var_r4 = 0;
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        temp_r2 = M2C_FIELD(arg0, u32 *, 0x10);
        temp_r1 = M2C_FIELD(arg0, u32 *, 0x18);
        if ((u32) (temp_r2 + var_r6) > temp_r1) {
            var_r6 = temp_r1 - temp_r2;
        }
        func_02007b44(arg1, M2C_FIELD(arg0, s32 *, 0), temp_r2, var_r6);
        var_r4 += var_r6;
        M2C_FIELD(arg0, u32 *, 0x10) = (u32) (M2C_FIELD(arg0, u32 *, 0x10) + var_r6);
    } else if (var_r6 != 0) {
    loop_6:
        temp_r0 = M2C_FIELD(arg0, s32 *, 8);
        var_r5  = temp_r0 - M2C_FIELD(arg0, s32 *, 0xC);
        if (var_r6 < var_r5) {
            var_r5 = var_r6;
        }
        if (var_r5 == 0) {
            temp_r3   = M2C_FIELD(arg0, u32 *, 0x10);
            temp_r2_2 = M2C_FIELD(arg0, u32 *, 0x18);
            var_r5    = temp_r0 - ((M2C_FIELD(arg0, s32 *, 0x14) + temp_r3) & 0x1FF);
            if ((u32) (temp_r3 + var_r5) > temp_r2_2) {
                if (temp_r3 < temp_r2_2) {
                    var_r5 = temp_r2_2 - temp_r3;
                    goto block_12;
                }
            } else {
            block_12:
                temp_ip                     = temp_r0 - var_r5;
                M2C_FIELD(arg0, s32 *, 0xC) = temp_ip;
                func_02007b44(M2C_FIELD(arg0, s32 *, 4) + temp_ip, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u32 *, 0x10),
                              var_r5);
                if (var_r6 < var_r5) {
                    var_r5 = var_r6;
                }
                goto block_14;
            }
        } else {
        block_14:
            func_02006020(arg1 + var_r4, M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0xC), var_r5);
            var_r6 -= var_r5;
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + var_r5);
            var_r4 += var_r5;
            M2C_FIELD(arg0, u32 *, 0x10) = (u32) (M2C_FIELD(arg0, u32 *, 0x10) + var_r5);
            if (var_r6 != 0) {
                goto loop_6;
            }
        }
    }
    return var_r4;
}
