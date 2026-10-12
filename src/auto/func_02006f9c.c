#include "m2c.h"

u16 func_02006c2c(void *, u16);                     /* extern */
s32 func_02006c4c();                                /* extern */

s32 func_02006f9c(void *arg0) {
    if (func_02006c4c() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 0xA) = func_02006c2c(arg0, M2C_FIELD(arg0, u16 *, 0xA));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
    return 1;
}
