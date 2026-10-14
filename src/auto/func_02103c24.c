#include "m2c.h"

s32 func_020ff7b0();                                /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */
s32 func_021018cc(M2C_UNK, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_0214df10;

void func_02103c24(void) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = func_020ff7b0();
    if (func_021018cc(6, 0x03000200, 0) >= 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        func_020ff7c4(temp_r4);
        M2C_FIELD(&data_0214df10, u16 *, 0x38) = (u16) (M2C_FIELD(&data_0214df10, u16 *, 0x38) | 4);
        if (M2C_FIELD(&data_0214df10, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4) == NULL) {
            return;
        }
        M2C_FIELD(&data_0214df10, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4)(2, 4, 0);
        return;
    }
    M2C_FIELD(&data_0214df10, u16 *, 0x3A) = (u16) (M2C_FIELD(&data_0214df10, u16 *, 0x3A) | 4);
    M2C_FIELD(&data_0214df10, u16 *, 0x38) = (u16) (M2C_FIELD(&data_0214df10, u16 *, 0x38) & ~4);
    func_020ff7c4(temp_r4);
}
