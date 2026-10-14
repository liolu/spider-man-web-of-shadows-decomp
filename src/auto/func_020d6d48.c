#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
extern s32 data_02145c5c;
extern s32 data_0214a004;

s32 func_020d6d48(s32 arg0) {
    s32 temp_r0;

    temp_r0       = data_0214a004 - 1;
    data_0214a004 = temp_r0;
    if (temp_r0 == 0) {
        func_02006188(data_02145c5c);
        data_02145c5c = 0;
    }
    return arg0;
}
