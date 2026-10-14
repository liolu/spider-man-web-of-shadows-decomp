#include "m2c.h"

M2C_UNK func_020e8110();                            /* extern */
extern M2C_UNK data_0213c918;

void *func_020e8704(void *arg0, void *arg1, s32 arg2) {
    func_020e8110();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213c918;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC)    = 0x419;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg2;
    return arg0;
}
