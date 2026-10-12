#include "m2c.h"

M2C_UNK func_01ff9660();                            /* extern */

void *func_02027e68(void *arg0) {
    func_01ff9660();
    M2C_FIELD(arg0, s16 *, 0x6C) = 0;
    M2C_FIELD(arg0, s16 *, 0x6E) = 0;
    M2C_FIELD(arg0, s16 *, 0x70) = 0;
    return arg0;
}
