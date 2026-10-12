#include "m2c.h"

M2C_UNK func_02013108();                            /* extern */
M2C_UNK func_0201cb2c(s32);                         /* extern */
extern M2C_UNK data_02128570;

void *func_020137f4(void *arg0) {
    func_02013108();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02128570;
    func_0201cb2c(arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    return arg0;
}
