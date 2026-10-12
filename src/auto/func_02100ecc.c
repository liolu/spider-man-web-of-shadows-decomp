#include "m2c.h"
#include "engine.h"

M2C_UNK func_020ff7b0(void);
void func_020ff7c4(M2C_UNK);

extern M2C_UNK data_0214c2c0;

s32 func_02100ecc(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020ff7b0();
    if (M2C_FIELD(&data_0214c2c0, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_0214c2c0, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_0214c2c0, s32 *, 0x20);
    }
    func_020ff7c4(temp_r0);
    return var_r4;
}
