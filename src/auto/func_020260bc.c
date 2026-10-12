#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_0201a448(s32);                         /* extern */
M2C_UNK func_02022328(void *);                      /* extern */

void *func_020260bc(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_r4 != 0) {
        func_0201a448(temp_r4);
        func_02006188(temp_r4);
    }
    func_02022328(arg0);
    return arg0;
}
