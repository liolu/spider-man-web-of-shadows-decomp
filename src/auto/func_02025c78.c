#include "m2c.h"

M2C_UNK func_02021fb4();                            /* extern */
extern M2C_UNK data_0212915c;

void *func_02025c78(void *arg0, s32 arg1, s32 arg2) {
    func_02021fb4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212915c;
    M2C_FIELD(arg0, s32 *, 0x68)   = arg1;
    M2C_FIELD(arg0, s32 *, 0x6C)   = arg2;
    return arg0;
}
