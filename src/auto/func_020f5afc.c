#include "m2c.h"

M2C_UNK func_01ffc004(s32, s32 *, M2C_UNK);         /* extern */
extern M2C_UNK data_027e0828;
extern s32 data_027e082c;
extern s32 data_027e0874;
extern s32 data_027e08a4;

void func_020f5afc(void) {
    s32 sp0;

    func_01ffc004(0x1610, &data_027e082c, 0x11);
    func_01ffc004(0x19, &data_027e0874, 0xC);
    sp0 = 2;
    func_01ffc004(0x10, &sp0, 1);
    func_01ffc004(0x15, &data_027e08a4, 0x20);
    M2C_FIELD(&data_027e0828, s32 *, 0xFC) = (s32) ((M2C_FIELD(&data_027e0828, s32 *, 0xFC) & ~1) | 2);
}
