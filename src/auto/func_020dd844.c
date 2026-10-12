#include "m2c.h"

s32 func_020228c0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020d93b8(void *, s32);                 /* extern */
M2C_UNK func_020dd9fc(void *);                      /* extern */
extern M2C_UNK data_0213b2c0;

void *func_020dd844(void *arg0) {
    func_020d93b8(arg0, 0x6D5);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213b2c0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s8 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = func_020228c0(arg0 + 0x10, 2);
    func_020dd9fc(arg0);
    return arg0;
}
