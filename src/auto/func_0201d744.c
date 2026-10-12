#include "m2c.h"

M2C_UNK func_0201dad8();                            /* extern */
extern s32 data_0213fe48;

void func_0201d744(void *arg0) {
    void *temp_r1;

    if (data_0213fe48 != 0) {
        func_0201dad8(arg0);
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r1 == NULL) {
        return;
    }
    M2C_FIELD(temp_r1, u16 *, 0x10) = (u16) (M2C_FIELD(temp_r1, u16 *, 0x10) & ~1);
    M2C_FIELD(temp_r1, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r1, u16 *, 0x20) & ~1);
    M2C_FIELD(temp_r1, u16 *, 0x32) = (u16) (M2C_FIELD(temp_r1, u16 *, 0x32) & ~1);
}
