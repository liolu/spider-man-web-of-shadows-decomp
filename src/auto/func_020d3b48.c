#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
extern s32 data_02145c3c;
extern s32 data_02149fbc;

s32 func_020d3b48(s32 arg0) {
    s32 temp_r0;

    temp_r0       = data_02149fbc - 1;
    data_02149fbc = temp_r0;
    if (temp_r0 == 0) {
        func_02006188(data_02145c3c);
        data_02145c3c = 0;
    }
    return arg0;
}
