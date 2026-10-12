#include "m2c.h"

M2C_UNK func_020e8110();                            /* extern */
extern M2C_UNK data_0213c9bc;

void *func_020e93a4(void *arg0, void *arg1, s32 arg2) {
    func_020e8110();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213c9bc;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    return arg0;
}
