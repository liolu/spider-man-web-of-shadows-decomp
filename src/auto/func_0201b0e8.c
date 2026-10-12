#include "m2c.h"

M2C_UNK func_0201b1e8(void *, s32);                 /* extern */
M2C_UNK func_0201bfb4(void *, s32);                 /* extern */
s32 func_0210db08(M2C_UNK, u16);                    /* extern */

void func_0201b0e8(void *arg0, void *arg1) {
    s32 temp_r0;
    void *temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x80000000;
    M2C_FIELD(arg0, s32 *, 0x30) = 0x80000000;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    func_0201bfb4(arg0 + 0x70, M2C_FIELD(arg1, s32 *, 4));
    func_0201b1e8(arg0, M2C_FIELD(arg1, s32 *, 0xC));
    M2C_FIELD(arg0, u16 *, 0x40) = (u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 8);
    M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 4);
    M2C_FIELD(arg0, s16 *, 0x3C) = (s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x3E) = (s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x4C) = func_0210db08(0x100, M2C_FIELD(arg0, u16 *, 0x40));
    temp_r0 = func_0210db08(0xC0, M2C_FIELD(arg0, u16 *, 0x42));
    M2C_FIELD(arg0, s32 *, 0x50) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (temp_r0 + 1);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + 1);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x54) * M2C_FIELD(arg0, u16 *, 0x42));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) * M2C_FIELD(arg0, u16 *, 0x40));
    temp_r0_2 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(temp_r0_2, s32 *, 0x10) * M2C_FIELD(temp_r0_2, s32 *, 0x14));
}
