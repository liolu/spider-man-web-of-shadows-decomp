#include "m2c.h"

M2C_UNK func_020f4c38();                            /* extern */
extern M2C_UNK *data_0213d8b4;
extern M2C_UNK *data_0213d8b8;
extern M2C_UNK data_0214a3f4;
extern M2C_UNK func_020f4b34;
extern M2C_UNK func_020f4bc4;

void func_020f4adc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&data_0214a3f4, s32 *, 0xC) = arg0;
    M2C_FIELD(&data_0214a3f4, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_0214a3f4, s32 *, 0x14) = arg2;
    M2C_FIELD(&data_0214a3f4, s32 *, 0x18) = arg3;
    func_020f4c38();
    if (arg4 == 0) {
        return;
    }
    data_0213d8b4 = &func_020f4b34;
    data_0213d8b8 = &func_020f4bc4;
}
