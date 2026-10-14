#include "m2c.h"

M2C_UNK func_0203d314(s32);                         /* extern */
s32 func_0203d334();                                /* extern */
M2C_UNK func_0203d564(M2C_UNK *);                   /* extern */
M2C_UNK func_0203d580(M2C_UNK *);                   /* extern */
M2C_UNK func_0203d5b8(M2C_UNK *, s32 *, M2C_UNK);   /* extern */

void func_020d8458(s32 arg0, s32 arg1) {
    u8 sp4[8];
    s32 sp0;
    s32 temp_r4;

    M2C_FIELD((void *) 0x04000280, volatile u16 *, 0)    = 0U;
    M2C_FIELD((void *) 0x04000280, volatile s32 *, 0x10) = (s32) (arg1 << 0xC);
    M2C_FIELD((void *) 0x04000280, volatile s32 *, 0x18) = 0x64;
    M2C_FIELD((void *) 0x04000280, volatile s32 *, 0x1C) = 0;
    do {

    } while (M2C_FIELD((void *) 0x04000280, volatile u16 *, 0) & 0x8000);
    temp_r4 = (s32) (*(s32 *) 0x040002A0 * 0x7F) >> 0xC;
    if (temp_r4 != func_0203d334()) {
        func_0203d564(sp4);
        sp0 = 0x12F;
        func_0203d5b8(sp4, &sp0, 0);
        func_0203d580(sp4);
    }
    func_0203d314(temp_r4);
}
