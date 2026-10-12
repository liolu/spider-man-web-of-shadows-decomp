#include "m2c.h"

s32 func_0203f148(void *);                          /* extern */

s32 func_020d520c(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x210) <= 0) && (func_0203f148(arg0 + 0x214) == 0)) {
        return 1;
    }
    return 0;
}
