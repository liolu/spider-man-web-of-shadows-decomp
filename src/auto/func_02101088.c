#include "m2c.h"
#include "engine.h"

M2C_UNK func_020ff7b0(void);
void func_020ff7c4(M2C_UNK);

extern M2C_UNK data_0214c2c0;

s32 func_02101088(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_020ff7b0();
    temp_r4 = M2C_FIELD(&data_0214c2c0, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        func_020ff7c4(temp_r0);
        return 0;
    }
    temp_r2 = *temp_r4;
    M2C_FIELD(&data_0214c2c0, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_0214c2c0, s32 *, 0x10) = 0;
    }
    func_020ff7c4(temp_r0);
    return (s32) temp_r4;
}
