#include "m2c.h"

M2C_UNK func_02006188(M2C_UNK *);                   /* extern */
extern s32 data_02149e24;
extern M2C_UNK *data_02149e28;

s32 func_0208451c(s32 arg0) {
    M2C_UNK *temp_r5;
    s32 temp_r0;

    temp_r0       = data_02149e24 - 1;
    data_02149e24 = temp_r0;
    if (temp_r0 == 0) {
        temp_r5 = data_02149e28;
        if (temp_r5 != NULL) {
            func_02006188(*temp_r5);
            func_02006188(temp_r5);
        }
        data_02149e28 = NULL;
    }
    return arg0;
}
