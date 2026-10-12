#include "m2c.h"

M2C_UNK func_02018164();                            /* extern */
extern M2C_UNK data_02128808;

void *func_020185e8(void *arg0) {
    func_02018164();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02128808;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    M2C_FIELD(arg0, s32 *, 0x5C) = -1;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s16 *, 0x64) = 0x7FFF;
    M2C_FIELD(arg0, s16 *, 0x66) = 0x7FFF;
    return arg0;
}
