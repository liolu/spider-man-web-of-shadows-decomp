#include "m2c.h"

s32 func_02014750();                                /* extern */
s32 *func_02019af0(M2C_UNK *);                      /* extern */
extern M2C_UNK (*data_0213d8c0)(s32);
extern s32 data_0213fe48;
extern M2C_UNK data_02145924;

void func_020199bc(s32 arg0) {
    s32 *temp_r0;
    s32 var_r4;

    var_r4 = 1;
    if ((data_0213fe48 != 0) && (func_02014750() != 0)) {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        data_0213d8c0(arg0);
        return;
    }
    temp_r0 = func_02019af0(&data_02145924);
    if (temp_r0 != NULL) {
        *temp_r0 = arg0;
    }
}
