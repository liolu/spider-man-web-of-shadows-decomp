#include "m2c.h"

M2C_UNK func_0201a854(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02043c5c();                            /* extern */
M2C_UNK func_0210f5a4(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_0201a38c;
extern M2C_UNK func_0201a444;

void *func_0201a3cc(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_02043c5c(arg0);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_0210f5a4(arg0 + 0x14, 0x21, 0x10, &func_0201a38c, &func_0201a444);
    M2C_FIELD(arg0, s32 *, 0x224) = arg1;
    M2C_FIELD(arg0, s32 *, 0x228) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x22C) = 0;
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    func_0201a854(arg0 + 0x23C, arg1, arg2);
    return arg0;
}
