#include "m2c.h"

M2C_UNK func_020fe970(void *);                      /* extern */
s32 func_020ff7b0();                                /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */
s32 func_02101ac8(void *, s32);                     /* extern */
void *func_021026a4(s32);                           /* extern */

void func_021028b8(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0;
    void *var_r6;

    var_r6  = arg0;
    temp_r4 = M2C_FIELD(var_r6, volatile s32 *, 8);
    if (var_r6 == NULL) {
        return;
    }
loop_3:
    temp_r5                                = func_020ff7b0();
    M2C_FIELD(var_r6, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r6, volatile s32 *, 0xC) | 0x40);
    if (M2C_FIELD(var_r6, volatile s32 *, 0xC) & 4) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_020fe970(var_r6 + 0x18);
        func_020ff7c4(temp_r5);
        return;
    }
    M2C_FIELD(var_r6, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r6, volatile s32 *, 0xC) | 8);
    func_020ff7c4(temp_r5);
    if (func_02101ac8(var_r6, M2C_FIELD(var_r6, volatile s32 *, 0x10)) == 6) {
        return;
    }
    var_r6 = func_021026a4(temp_r4);
    if (var_r6 == NULL) {
        return;
    }
    goto loop_3;
}
