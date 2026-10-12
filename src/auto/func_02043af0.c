#include "m2c.h"

M2C_UNK func_02043b2c(void *, s32);                 /* extern */

void func_02043af0(void *arg0) {
    s32 temp_r1;
    s32 var_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (M2C_FIELD(arg0, s32 *, 8) == temp_r1) {
        if (temp_r1 == 1) {
            var_r1 = 8;
        } else {
            var_r1 = temp_r1 * 2;
        }
        func_02043b2c(arg0, var_r1);
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}
