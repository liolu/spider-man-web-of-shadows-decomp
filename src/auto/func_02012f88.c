#include "m2c.h"

M2C_UNK func_02013b9c(s32);                         /* extern */

void func_02012f88(void *arg0, s8 arg1) {
    func_02013b9c(arg0 + 0x1A0);
    M2C_FIELD(arg0, s8 *, 0x2A8) = arg1;
}
