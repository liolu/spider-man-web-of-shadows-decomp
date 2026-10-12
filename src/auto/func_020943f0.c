#include "m2c.h"

s32 func_0209ebfc(void *, s32 *);                   /* extern */

s32 func_020943f0(void *arg0) {
    s32 sp0;

    sp0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (func_0209ebfc(arg0, &sp0) == 0) {
        return 1;
    }
    return 0;
}
