#include "m2c.h"

M2C_UNK func_0202299c();                            /* extern */

void func_0202294c(void *arg0, u16 arg1) {
    u16 temp_r2;
    u16 temp_r2_2;

    if (M2C_FIELD(arg0, u8 *, 0) != 0) {
        func_0202299c();
        return;
    }
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 2) = arg1;
    temp_r2                   = M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(arg0, s16 *, 6) = (s16) (temp_r2 & (temp_r2 ^ M2C_FIELD(arg0, u16 *, 4)));
    temp_r2_2                 = M2C_FIELD(arg0, u16 *, 4);
    M2C_FIELD(arg0, s16 *, 8) = (s16) (temp_r2_2 & (M2C_FIELD(arg0, u16 *, 2) ^ temp_r2_2));
}
