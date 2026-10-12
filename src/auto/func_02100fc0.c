#include "m2c.h"

s32 func_02100f48();                                /* extern */
s32 func_02100f84();                                /* extern */

s32 func_02100fc0(void) {
    s32 temp_r4;

    temp_r4 = func_02100f48();
    return (0x100 - temp_r4) - func_02100f84();
}
