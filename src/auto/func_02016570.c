#include "m2c.h"

s32 func_020f7974();                                /* extern */

s32 func_02016570(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return 0;
    }
    return func_020f7974();
}
