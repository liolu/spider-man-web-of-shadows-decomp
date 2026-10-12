#include "m2c.h"

M2C_UNK func_0201d7f0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201de64();                            /* extern */
extern M2C_UNK data_021289c0;

void *func_0201d59c(void *arg0, M2C_UNK arg1) {
    func_0201de64();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021289c0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_0201d7f0(arg0, arg1);
    return arg0;
}
