#include "m2c.h"

s32 func_020228c0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020d93b8(void *, s32);                 /* extern */
M2C_UNK func_020df3a0(void *);                      /* extern */
M2C_UNK func_0210f5a4(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_0213b54c;
extern M2C_UNK func_020d8740;
extern M2C_UNK func_020ddb98;

void *func_020df238(void *arg0) {
    func_020d93b8(arg0, 0x6E1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213b54c;
    func_0210f5a4(arg0 + 0x9C, 3, 4, &func_020ddb98, &func_020d8740);
    M2C_FIELD(arg0, s32 *, 8) = 2;
    M2C_FIELD(arg0, s32 *, 0x9C) = func_020228c0(arg0 + 0x10, 1);
    M2C_FIELD(arg0, s32 *, 0xA0) = func_020228c0(arg0 + 0x10, 2);
    M2C_FIELD(arg0, s32 *, 0xA4) = func_020228c0(arg0 + 0x10, 3);
    func_020df3a0(arg0);
    return arg0;
}
