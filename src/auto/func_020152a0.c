#include "m2c.h"

M2C_UNK func_0201dd80(s32);                         /* extern */
extern M2C_UNK (*data_0213d8b8)(s32);
extern s32 data_0213fe48;

void func_020152a0(void *arg0) {
    if (data_0213fe48 == 0) {
        M2C_FIELD(arg0, u8 *, 0x3C) = 0U;
    }
    if (M2C_FIELD(arg0, u8 *, 0x3C) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x44) != 0) {
        func_0201dd80(M2C_FIELD(arg0, s32 *, 0x40));
    } else {
        data_0213d8b8(M2C_FIELD(arg0, s32 *, 0x40));
    }
    M2C_FIELD(arg0, u8 *, 0x3C) = 0U;
}
