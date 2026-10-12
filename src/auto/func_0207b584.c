#include "m2c.h"

M2C_UNK func_020f5b74(u16, M2C_UNK, M2C_UNK);       /* extern */

s32 func_0207b584(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) >= 3) {
        return 0;
    }
    func_020f5b74((u16) M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
    return 1;
}
