#include "m2c.h"

s32 func_02006104(s32);                             /* extern */
M2C_UNK func_02006328();                            /* extern */
M2C_UNK func_02106fc4();                            /* extern */
M2C_UNK func_02109994(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02128ebc;

void func_02024530(void *arg0, u32 arg1) {
    s32 temp_r0;

    if (arg1 > 0x15555555U) {
        func_02006328();
    }
    temp_r0 = func_02006104(arg1 * 0xC);
    if (temp_r0 == 0) {
        func_02109994(&data_02128ebc);
        func_02106fc4();
    }
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    M2C_FIELD(arg0, u32 *, 8) = arg1;
}
