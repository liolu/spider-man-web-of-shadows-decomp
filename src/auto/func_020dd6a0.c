#include "m2c.h"

M2C_UNK func_020d93b8(M2C_UNK **, s32);             /* extern */
s32 func_020dd664();                                /* extern */
extern M2C_UNK data_0213b270;

M2C_UNK **func_020dd6a0(M2C_UNK **arg0) {
    func_020d93b8(arg0, func_020dd664());
    *arg0 = &data_0213b270;
    return arg0;
}
