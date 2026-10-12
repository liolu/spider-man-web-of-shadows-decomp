#include "m2c.h"

M2C_UNK func_02031328();                            /* extern */

void *func_020312f0(void *arg0) {
    func_02031328();
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    return arg0;
}
