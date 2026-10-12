#include "m2c.h"

void *func_0200f1c0(void *);                        /* extern */

u16 func_0200ef6c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0x7FFFFFFF) {
        return 0U;
    }
    return M2C_FIELD(func_0200f1c0(arg0 + 0x8C), u16 *, 0xA);
}
