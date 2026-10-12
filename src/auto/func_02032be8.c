#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_02006194(s32);                         /* extern */

void *func_02032be8(void *arg0) {
    func_02006194(M2C_FIELD(arg0, s32 *, 8));
    func_02006188(arg0);
    return arg0;
}
