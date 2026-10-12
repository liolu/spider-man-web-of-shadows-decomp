#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_020120f4();                            /* extern */
extern M2C_UNK data_02128434;

void *func_02011d04(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02128434;
    func_020120f4();
    func_02006188(M2C_FIELD(arg0, void **, 0x2C));
    func_02006188(arg0);
    return arg0;
}
