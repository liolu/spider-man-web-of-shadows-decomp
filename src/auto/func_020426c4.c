#include "m2c.h"

M2C_UNK func_020f3980(M2C_UNK, void *);             /* extern */
void *func_020f39e0(M2C_UNK, M2C_UNK);              /* extern */
s32 func_020ff7b0();                                /* extern */
M2C_UNK func_020ff7c4(s32);                         /* extern */

void *func_020426c4(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r4 = func_020ff7b0();
    temp_r0 = func_020f39e0(arg0, 0);
    if (temp_r0 != NULL) {
        func_020f3980(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    func_020ff7c4(temp_r4);
    return temp_r0;
}
