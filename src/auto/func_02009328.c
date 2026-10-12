#include "m2c.h"

s8 func_02008bb8(s32 *);                            /* extern */
s32 func_02008c94(s32 *);                           /* extern */
s32 func_02008cd4(s32 *);                           /* extern */
extern M2C_UNK data_021282bc;

void *func_02009328(void *arg0, s32 *arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021282bc;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0xFFFFFF;
    M2C_FIELD(arg0, s32 *, 0xC) = 0xFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = func_02008c94(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = func_02008cd4(arg1);
    M2C_FIELD(arg0, s8 *, 0x28) = func_02008bb8(arg1);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) *arg1;
    return arg0;
}
