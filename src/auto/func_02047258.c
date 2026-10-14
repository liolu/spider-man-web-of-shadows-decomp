#include "m2c.h"

extern M2C_UNK data_0212acb0;

void func_02047258(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212acb0;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC)    = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, u8 *, 0x10)    = (u8) M2C_FIELD(arg1, u8 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x14)   = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x18)   = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x1C)   = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x20)   = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x24)   = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x28)   = (s32) M2C_FIELD(arg1, s32 *, 0x24);
}
