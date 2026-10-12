#include "m2c.h"

M2C_UNK func_02101a6c(void *, s32);                 /* extern */
s32 func_02101ac8(void *, s32);                     /* extern */
s32 func_021026a4(s32);                             /* extern */
M2C_UNK func_021028b8();                            /* extern */

s32 func_0210294c(void *arg0) {
    func_02101a6c(arg0, func_02101ac8(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_021026a4(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_021028b8();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
