#include "m2c.h"

M2C_UNK func_020fe504();                            /* extern */
s32 func_020ff7b0();                                /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */

void func_020fea28(void) {
    s32 temp_r4;

    temp_r4 = func_020ff7b0();
    func_020fe504();
    func_020ff7c4(temp_r4);
}
