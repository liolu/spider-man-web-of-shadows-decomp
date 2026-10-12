#include "m2c.h"

s32 func_020069b0();                                /* extern */

s32 func_02084a54(void) {
    s32 temp_r0;

    temp_r0 = func_020069b0();
    switch (temp_r0) {                              /* irregular */
    case 0:
        return 0x7AC;
    case 1:
        return 0x7AA;
    case 2:
        return 0x7AC;
    default:
        return 0x7A6;
    }
}
