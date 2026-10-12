#include "m2c.h"

M2C_UNK func_020e8e90();                            /* extern */

void func_020e8e70(void *arg0, void *arg1) {
    u8 temp_r2;

    temp_r2 = M2C_FIELD(arg1, u8 *, 0x53);
    if (M2C_FIELD(arg0, u8 *, 0x1C) == temp_r2) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x1C) = temp_r2;
    func_020e8e90();
}
