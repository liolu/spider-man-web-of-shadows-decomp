#include "m2c.h"

u32 *func_02074d78(s32);                            /* extern */
M2C_UNK func_02093e0c(s32 *, void *);               /* extern */

void func_020af5cc(s32 *arg0, void *arg1) {
    u32 temp_r0;

    temp_r0 = *func_02074d78(M2C_FIELD(arg1, s32 *, 0x80));
    switch (temp_r0) {                              /* irregular */
    case 0x3F:
        *arg0 = 0x1F;
        return;
    case 0x37:
        *arg0 = 0x33;
        return;
    case 0x88:
        *arg0 = 0x1C;
        return;
    case 0x1E:
        *arg0 = 0x35;
        return;
    case 0xB:
        *arg0 = 0x20;
        return;
    default:
        func_02093e0c(arg0, arg1);
        return;
    }
}
