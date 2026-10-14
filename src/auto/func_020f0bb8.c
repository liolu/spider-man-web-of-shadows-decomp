#include "m2c.h"

s32 func_020069c0(s32);                             /* extern */
M2C_UNK func_0200aab8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0200ab40(M2C_UNK *);                   /* extern */
M2C_UNK func_02021540(s32, s32, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020f0994(void *);                      /* extern */
M2C_UNK func_020f0c48(void *);                      /* extern */
M2C_UNK func_020f1774(void *);                      /* extern */
extern M2C_UNK data_0212015c;

void func_020f0bb8(void *arg0, s32 arg1) {
    u8 sp0[84];
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0x104) == arg1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x104) = arg1;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    func_0200aab8(sp0, 1, 0, 0);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC8);
    func_02021540(temp_r4, func_020069c0(*((M2C_UNK *) ((s8 *) &data_0212015c + (M2C_FIELD(arg0, s32 *, 0x104) * 4)))), sp0,
                  1);
    func_020f0994(arg0);
    func_020f0c48(arg0);
    func_020f1774(arg0);
    func_0200ab40(sp0);
}
