#include "m2c.h"

M2C_UNK func_020f391c();   /* extern */
void *func_020f39e0();            /* extern */
extern M2C_UNK data_021483e0;

void func_02040934(void *arg0) {
    void *var_r1;

    var_r1 = func_020f39e0(&data_021483e0, 0);
    if (var_r1 != NULL) {
loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020f39e0(&data_021483e0);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_020f391c(&data_021483e0, var_r1, arg0);
}
