#include "m2c.h"

s32 func_0200aa20(u16 *arg0) {
    u32 temp_r0;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r0 = (u32) (*arg0 << 0x1E) >> 0x1E;
    switch (temp_r0) {                              /* irregular */
    case 0:
        return 0;
    case 1:
        return 0x200;
    case 2:
        return 0x20;
    default:
        return 0;
    }
}
