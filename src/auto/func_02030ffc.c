#include "m2c.h"

s32 func_02030fcc();                                /* extern */

s32 func_02030ffc(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= (s32) M2C_FIELD(arg0, u8 *, 0xC))) {
        return 0;
    }
    return func_02030fcc(arg0);
}
