#include "m2c.h"

s32 func_020fc46c();                                /* extern */
M2C_UNK func_020ffac4(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020fffe4(M2C_UNK, s32, u32);           /* extern */
extern s32 data_0213da3c;

void func_020fd20c(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020fc46c();
    if ((data_0213da3c != -1) && (arg2 > 0x30U)) {
        func_020ffac4(data_0213da3c, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020fffe4(arg0, temp_ip + arg1, arg2);
}
