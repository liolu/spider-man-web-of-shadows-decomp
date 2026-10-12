#include "m2c.h"

s32 *func_02040e3c(M2C_UNK);                        /* extern */
void *func_0204117c(s32);                           /* extern */

void *func_0203d7f4(s32 arg0, M2C_UNK arg1) {
    s32 *temp_r0_2;
    void *temp_r0;

    temp_r0_2 = func_02040e3c(arg1);
    if (temp_r0_2 == NULL) {
        return NULL;
    }
    temp_r0 = func_0204117c(*temp_r0_2);
    if (temp_r0 == NULL) {
        return NULL;
    }
    return temp_r0 + M2C_FIELD(temp_r0, s32 *, 0x18);
}
