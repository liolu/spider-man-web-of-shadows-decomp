#include "m2c.h"

s32 func_02032d4c();                                /* extern */

s32 func_02032da4(void *arg0, s32 arg1) {
    return (arg1 * func_02032d4c()) + (M2C_FIELD(arg0, s32 *, 4) + 0x10);
}
