#include "m2c.h"

M2C_UNK func_02006188(M2C_UNK **);                  /* extern */
M2C_UNK func_0203d380();                            /* extern */
extern M2C_UNK data_0212ab14;

M2C_UNK **func_0203d428(M2C_UNK **arg0) {
    *arg0 = &data_0212ab14;
    func_0203d380();
    func_02006188(arg0);
    return arg0;
}
