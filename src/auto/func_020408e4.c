#include "m2c.h"

M2C_UNK func_020f391c();         /* extern */
void *func_020f39e0();                  /* extern */

void func_020408e4(s32 arg0, void *arg1) {
    void *var_r1;

    var_r1 = func_020f39e0(arg0, 0);
    if (var_r1 != NULL) {
loop_1:
        if ((u32) M2C_FIELD(arg1, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020f39e0(arg0);
            if (var_r1 != NULL) {
                goto loop_1;
            }
        }
    }
    func_020f391c(arg0, var_r1, arg1);
    M2C_FIELD(arg1, s32 *, 4) = arg0;
}
