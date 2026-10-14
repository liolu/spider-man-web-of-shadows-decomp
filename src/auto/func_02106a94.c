#include "m2c.h"

M2C_UNK func_020ff3f0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020ff7b0();                                /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */
s32 func_021067fc();                                /* extern */
extern s32 data_0214e8c8;

void func_02106a94(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_020ff7b0();
    data_0214e8c8 = arg0;
    if (func_021067fc() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_020ff3f0(0xF000, var_r1);
    }
    func_020ff7c4(temp_r4);
}
