#include "m2c.h"

M2C_UNK func_02084d44(s32, M2C_UNK **);             /* extern */
extern M2C_UNK data_02132774;
extern s32 data_02149e2c;

M2C_UNK **func_02084c7c(M2C_UNK **arg0) {
    *arg0 = &data_02132774;
    if (data_02149e2c != 0) {
        func_02084d44(data_02149e2c, arg0);
    }
    return arg0;
}
