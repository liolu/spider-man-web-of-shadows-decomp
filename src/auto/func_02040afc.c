#include "m2c.h"

M2C_UNK func_020408e4(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02040934(void *);                      /* extern */
M2C_UNK func_020f3980(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_021483e0;

void func_02040afc(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_020f3980(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_020f3980(&data_021483e0, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_020408e4(temp_r4, arg0);
    }
    func_02040934(arg0);
}
