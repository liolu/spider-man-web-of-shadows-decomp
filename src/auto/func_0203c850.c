#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_0203164c(void *);                      /* extern */
M2C_UNK func_02035f2c(void *);                      /* extern */
M2C_UNK func_0203cfec(s32);                         /* extern */
M2C_UNK func_0203d014(s32);                         /* extern */

void **func_0203c850(void **arg0) {
    void *temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        func_0203cfec(temp_r4 + 0x14);
        func_0203d014(temp_r4 + 0x20);
        if (M2C_FIELD(temp_r4, u8 *, 4) != 0) {
            func_02035f2c(temp_r4 + 8);
        }
        func_0203164c(temp_r4);
        func_02006188(temp_r4);
    }
    return arg0;
}
