#include "m2c.h"

M2C_UNK func_0203f96c();                            /* extern */
extern M2C_UNK data_0212ab8c;

void *func_0203f790(void *arg0) {
    func_0203f96c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212ab8c;
    M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    return arg0;
}
