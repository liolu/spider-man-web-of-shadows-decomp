#include "m2c.h"

s32 func_02006104(s32);                             /* extern */
M2C_UNK func_02106fc4();                            /* extern */
M2C_UNK func_02109994(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021280e0;

void func_0201d120(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02006104(arg1);
    if (temp_r0 == 0) {
        func_02109994(&data_021280e0);
        func_02106fc4();
    }
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
