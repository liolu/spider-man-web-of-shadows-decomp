#include "m2c.h"

M2C_UNK func_0201bf18(void *, void **, s32);        /* extern */

void *func_0201afdc(void *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    void *sp0;

    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s8 *, 4)     = 0;
    M2C_FIELD(arg0, s8 *, 5)     = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x80000000;
    M2C_FIELD(arg0, s32 *, 0x30) = 0x80000000;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s16 *, 0x40) = 0;
    M2C_FIELD(arg0, s16 *, 0x42) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) *arg1;
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) *arg2;
    sp0                          = arg0;
    func_0201bf18(arg0 + 0x70, &sp0, arg3);
    M2C_FIELD(arg0, s32 *, 0x90) = arg3;
    return arg0;
}
