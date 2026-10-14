#include "m2c.h"

M2C_UNK func_01ffbf04();                            /* extern */
extern s32 data_027e0120;

void func_02014948(void *arg0) {
    func_01ffbf04();
    M2C_FIELD((void *) 0x04000540, s32 *, 0) = (s32) ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0) * 2) | 1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0xC)  = (s32) M2C_FIELD((void *) 0x04000540, u16 *, 0xC4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x10) = (s32) M2C_FIELD((void *) 0x04000540, u16 *, 0xC6);
    data_027e0120                                          = 1;
}
