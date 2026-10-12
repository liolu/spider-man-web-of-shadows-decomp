#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_02045680(void *);                      /* extern */
M2C_UNK func_020d63ec(s32);                         /* extern */

void *func_020d6b0c(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r4 != 0) {
        func_020d63ec(temp_r4);
        func_02006188(temp_r4);
    }
    func_02045680(arg0 + 4);
    return arg0;
}
