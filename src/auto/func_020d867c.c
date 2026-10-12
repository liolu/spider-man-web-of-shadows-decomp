#include "m2c.h"

s32 func_020228c0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020d8984(void *);                      /* extern */
M2C_UNK func_020d93b8(void *, s32);                 /* extern */
extern M2C_UNK data_0213a720;

void *func_020d867c(void *arg0) {
    func_020d93b8(arg0, 0x189);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213a720;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = func_020228c0(arg0 + 0x10, 1);
    M2C_FIELD(arg0, s32 *, 0xA0) = func_020228c0(arg0 + 0x10, 2);
    M2C_FIELD(arg0, s32 *, 0xA4) = func_020228c0(arg0 + 0x10, 3);
    M2C_FIELD(arg0, s32 *, 0xA8) = func_020228c0(arg0 + 0x10, 4);
    M2C_FIELD(arg0, s32 *, 0xAC) = func_020228c0(arg0 + 0x10, 5);
    M2C_FIELD(arg0, s32 *, 0xB0) = func_020228c0(arg0 + 0x10, 6);
    M2C_FIELD(arg0, s32 *, 0xB4) = func_020228c0(arg0 + 0x10, 7);
    func_020d8984(arg0);
    return arg0;
}
