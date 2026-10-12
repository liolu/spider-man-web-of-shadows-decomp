#include "m2c.h"

M2C_UNK func_020e8e20(void *);                      /* extern */

void func_020e7ed0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xBE) = 0;
    func_020e8e20(arg0 + 0x1C);
    func_020e8e20(arg0 + 0x64);
}
