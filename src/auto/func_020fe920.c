#include "m2c.h"

M2C_UNK func_020fe32c(s32, void *);                 /* extern */
M2C_UNK func_020fe504();                            /* extern */
s32 func_020ff7b0();                                /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */
extern M2C_UNK data_0214befc;

void func_020fe920(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_020ff7b0();
    temp_r5 = *M2C_FIELD(&data_0214befc, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_020fe32c(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_020fe504();
    func_020ff7c4(temp_r4);
}
