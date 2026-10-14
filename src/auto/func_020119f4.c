#include "m2c.h"

s32 func_02006104(s32);                             /* extern */
M2C_UNK func_020102ec();                            /* extern */
M2C_UNK func_02106fc4();                            /* extern */
M2C_UNK func_02109994(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021280a4;
extern u32 data_02128394;
extern s32 data_021455d8;

void func_020119f4(void *arg0, u32 arg1) {
    s32 temp_r0;

    if (!(data_021455d8 & 1)) {
        data_02128394 = 0x3FFFFFFE;
        data_021455d8 |= 1;
    }
    if (arg1 > (u32) data_02128394) {
        func_020102ec();
    }
    temp_r0 = func_02006104((arg1 + 1) * 4);
    if (temp_r0 == 0) {
        func_02109994(&data_021280a4);
        func_02106fc4();
    }
    M2C_FIELD(arg0, s32 *, 0)   = temp_r0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg1 + 1);
}
