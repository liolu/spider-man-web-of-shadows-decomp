#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ff7b0(void);
void func_020ff7c4(M2C_UNK);

extern M2C_UNK data_0214df4c;

s32 func_02104008(void) {
    s32 temp_r0;

    temp_r0 = func_020ff7b0();
    if (M2C_FIELD(&data_0214df4c, s32 *, 0x18) != 0) {
        func_020ff7c4(temp_r0);
        return 0;
    }
    M2C_FIELD(&data_0214df4c, s32 *, 0x18) = 1;
    func_020ff7c4(temp_r0);
    return 1;
}
