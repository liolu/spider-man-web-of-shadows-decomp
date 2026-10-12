#include "m2c.h"

M2C_UNK func_02006194(s32);                         /* extern */

void *func_02043acc(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 4) > 1U) {
        func_02006194(M2C_FIELD(arg0, s32 *, 0));
    }
    return arg0;
}
