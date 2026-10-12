#include "m2c.h"

M2C_UNK func_020d5cf8(void *);                      /* extern */

void func_020d5cd0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) == arg1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    if (arg1 != 0) {
        return;
    }
    func_020d5cf8(arg0 + 0x34);
}
