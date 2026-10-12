#include "m2c.h"

M2C_UNK func_020f4730();                    /* extern */
extern M2C_UNK data_0214a3f4;

void func_020f4aa0(void) {
    func_020f4730(M2C_FIELD(&data_0214a3f4, s32 *, 0), M2C_FIELD(&data_0214a3f4, s32 *, 0xC));
    if (M2C_FIELD(&data_0214a3f4, s32 *, 0x10) == 0) {
        return;
    }
    func_020f4730(M2C_FIELD(&data_0214a3f4, s32 *, 4));
}
