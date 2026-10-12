#include "m2c.h"

M2C_UNK func_020f4fa8();                            /* extern */
extern M2C_UNK *data_0213d8bc;
extern M2C_UNK *data_0213d8c0;
extern M2C_UNK data_0214a410;
extern M2C_UNK func_020f4e98;
extern M2C_UNK func_020f4f64;

void func_020f4e44(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_0214a410, s32 *, 8) = arg0;
    M2C_FIELD(&data_0214a410, s32 *, 0xC) = arg1;
    M2C_FIELD(&data_0214a410, s32 *, 0x10) = arg2;
    func_020f4fa8();
    if (arg3 == 0) {
        return;
    }
    data_0213d8bc = &func_020f4e98;
    data_0213d8c0 = &func_020f4f64;
}
