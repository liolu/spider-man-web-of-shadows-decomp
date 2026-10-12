#include "m2c.h"

s32 func_020ff7b0();                                /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */
M2C_UNK func_02101190(M2C_UNK);                     /* extern */

void func_02100fdc(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020ff7b0();
    func_02101190(arg1);
    func_020ff7c4(temp_r4);
}
