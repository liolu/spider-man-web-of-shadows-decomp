#include "m2c.h"

M2C_UNK func_02100198(s32, M2C_UNK, M2C_UNK);       /* extern */

s32 func_02102650(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    func_02100198(M2C_FIELD(arg0, s32 *, 0x28) + arg2, arg1, arg3);
    return 0;
}
