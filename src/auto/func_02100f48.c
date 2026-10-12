#include "m2c.h"
#include "engine.h"

M2C_UNK func_020ff7b0(void);
void func_020ff7c4(M2C_UNK);

extern M2C_UNK *data_0214c2c0;

s32 func_02100f48(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020ff7b0();
    var_r4 = 0;
    var_r1 = data_0214c2c0;
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_020ff7c4(temp_r0);
    return var_r4;
}
