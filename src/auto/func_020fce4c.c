#include "m2c.h"

s32 func_020fc180();                                /* extern */
M2C_UNK func_020ffb34(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020fffb4(M2C_UNK, s32, u32);           /* extern */
extern s32 data_0213da3c;

void func_020fce4c(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020fc180();
    if ((data_0213da3c != -1) && (arg2 > 0x1CU)) {
        func_020ffb34(data_0213da3c, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020fffb4(arg0, temp_ip + arg1, arg2);
}
