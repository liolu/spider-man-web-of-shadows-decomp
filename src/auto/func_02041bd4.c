#include "m2c.h"

void *func_02040dd8(s32);                           /* extern */
s32 func_02041c24(M2C_UNK, u8, u16, u8, void *, s32, s32); /* extern */

s32 func_02041bd4(M2C_UNK arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_02040dd8(arg1);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_02041c24(arg0, M2C_FIELD(temp_r0, u8 *, 9), M2C_FIELD(temp_r0, u16 *, 4), M2C_FIELD(temp_r0, u8 *, 8), temp_r0, arg1, arg2);
}
