#include "m2c.h"

M2C_UNK func_02074d54(s32);                         /* extern */
s32 func_02089dbc();                                /* extern */
M2C_UNK func_020cfc38(void *, s32 *);               /* extern */
s32 func_020cff10(void *, s32 *);                   /* extern */

s32 func_020b76c8(void *arg0) {
    s32 sp4;
    s32 sp0;
    s32 var_r4;

    var_r4 = 0;
    func_02074d54(M2C_FIELD(arg0, s32 *, 0x44));
    if (func_02089dbc() == 0) {
        sp4 = 2;
        if (func_020cff10(arg0 + 0x28, &sp4) != 0) {
            var_r4 = 1;
        }
    }
    if ((var_r4 != 0) && (M2C_FIELD(arg0, s32 *, 0x14) == 0x14)) {
        sp0 = 2;
        func_020cfc38(arg0 + 0x28, &sp0);
        return 0xF;
    }
    return 0x7FFFFFFF;
}
