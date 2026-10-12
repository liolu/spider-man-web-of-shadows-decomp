#include "m2c.h"

M2C_UNK func_02014f08(void *);                      /* extern */

void func_02014e5c(void *arg0, s32 arg1) {
    if (arg1 == M2C_FIELD(arg0, s32 *, 0x10)) {
        return;
    }
    func_02014f08(arg0 + 0xC);
}
