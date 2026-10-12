#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_02045680(void *);                      /* extern */
M2C_UNK func_020e088c(s32);                         /* extern */

void *func_020e0cc4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r4 != 0) {
        func_020e088c(temp_r4);
        func_02006188(temp_r4);
    }
    func_02045680(arg0 + 4);
    return arg0;
}
