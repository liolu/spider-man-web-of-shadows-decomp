#include "m2c.h"

M2C_UNK func_020f3878(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020ff7b0();                                /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */
extern M2C_UNK data_02148d04;

void func_02042754(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020ff7b0();
    func_020f3878(&data_02148d04, arg0);
    func_020ff7c4(temp_r4);
}
