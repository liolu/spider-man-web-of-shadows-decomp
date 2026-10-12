#include "m2c.h"

M2C_UNK func_020f4730(s32, s32);                    /* extern */
extern M2C_UNK data_0214a410;

void func_020f4e20(void) {
    func_020f4730(M2C_FIELD(&data_0214a410, s32 *, 0), M2C_FIELD(&data_0214a410, s32 *, 8));
}
