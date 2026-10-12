#include "m2c.h"

M2C_UNK func_020c9ad4(void *, s32 *, M2C_UNK *);    /* extern */
M2C_UNK func_020c9ec0(void *);                      /* extern */
extern M2C_UNK data_021296ec;
extern M2C_UNK data_0213434c;

void func_020be150(void *arg0) {
    s32 sp0;
    void *temp_r2;

    if ((s32) M2C_FIELD(arg0, s8 *, 0x91) > 0) {
        temp_r2 = M2C_FIELD(arg0, void **, 0x44);
        M2C_FIELD(temp_r2, s32 *, 0x18) = (s32) M2C_FIELD(&data_021296ec, s32 *, 0);
        M2C_FIELD(temp_r2, s32 *, 0x1C) = (s32) M2C_FIELD(&data_021296ec, s32 *, 4);
        return;
    }
    sp0 = 0;
    func_020c9ad4(arg0, &sp0, &data_0213434c);
    func_020c9ec0(arg0);
    M2C_FIELD(arg0, u8 *, 0x92) = (u8) (M2C_FIELD(arg0, u8 *, 0x92) + 1);
}
