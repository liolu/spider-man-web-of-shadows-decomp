#include "m2c.h"

M2C_UNK func_02021fb4();                            /* extern */
M2C_UNK func_02025e74(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_021291cc;

void *func_02025dd0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_02021fb4(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021291cc;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    func_02025e74(arg0, arg1, arg2, arg3, arg4);
    return arg0;
}
