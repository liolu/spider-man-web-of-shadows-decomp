#include "m2c.h"

s32 func_02084a54();                                /* extern */
M2C_UNK func_020db134(M2C_UNK **, s32);             /* extern */
extern M2C_UNK data_0213b71c;

M2C_UNK **func_020dfca4(M2C_UNK **arg0) {
    func_020db134(arg0, func_02084a54());
    *arg0 = &data_0213b71c;
    return arg0;
}
