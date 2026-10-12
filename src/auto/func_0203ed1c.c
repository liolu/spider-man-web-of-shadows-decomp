#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_0203d48c(void *);                      /* extern */

void *func_0203ed1c(void *arg0) {
    func_02006188(M2C_FIELD(arg0, s32 *, 4));
    func_0203d48c(arg0);
    return arg0;
}
