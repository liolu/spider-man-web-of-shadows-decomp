#include "m2c.h"

M2C_UNK func_020c9ec0();                            /* extern */
extern M2C_UNK data_021296ec;

void func_020c385c(void *arg0) {
    void *temp_r2;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        func_020c9ec0(arg0);
    }
    temp_r2                         = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_r2, s32 *, 0x18) = (s32) M2C_FIELD(&data_021296ec, s32 *, 0);
    M2C_FIELD(temp_r2, s32 *, 0x1C) = (s32) M2C_FIELD(&data_021296ec, s32 *, 4);
}
