#include "m2c.h"

s32 func_02014750();                                /* extern */
s32 *func_02019af0(M2C_UNK *);                      /* extern */
extern M2C_UNK (*data_0213d8b8)(s32);
extern s32 data_0213fe48;
extern M2C_UNK data_02145a0c;

void func_0201dd80(s32 arg0) {
    s32 *temp_r0;
    s32 var_r4;

    var_r4 = 1;
    if ((data_0213fe48 != 0) && (func_02014750() != 0)) {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        data_0213d8b8(arg0);
        return;
    }
    temp_r0 = func_02019af0(&data_02145a0c);
    if (temp_r0 != NULL) {
        *temp_r0 = arg0;
    }
}
