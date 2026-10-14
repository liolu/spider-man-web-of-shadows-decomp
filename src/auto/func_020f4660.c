#include "m2c.h"

u16 func_020f4334(void *, u16);                     /* extern */
s32 func_020f4354();                                /* extern */

s32 func_020f4660(void *arg0) {
    if (func_020f4354() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 8)   = func_020f4334(arg0, M2C_FIELD(arg0, u16 *, 8));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) - 1);
    return 1;
}
