#include "m2c.h"

M2C_UNK func_02041ff0();                            /* extern */

void *func_0203eff8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4)  = 0x13A;
    M2C_FIELD(arg0, s32 *, 8)  = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    func_02041ff0(arg0);
    return arg0;
}
