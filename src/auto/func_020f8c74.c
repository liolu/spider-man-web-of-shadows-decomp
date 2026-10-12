#include "m2c.h"

M2C_UNK func_021007b0(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0214b834;

void func_020f8c74(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_021007b0(arg0, 0);
    M2C_FIELD(&data_0214b834, s32 *, 8) = (s32) (M2C_FIELD(&data_0214b834, s32 *, 8) & ~arg0);
}
