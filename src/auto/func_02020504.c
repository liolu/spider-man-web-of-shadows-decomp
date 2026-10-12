#include "m2c.h"

s32 func_02020504(void *arg0, s32 *arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 8) <= (s32) *arg1) {
        return 1;
    }
    return 0;
}
