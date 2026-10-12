#include "m2c.h"

M2C_UNK func_02043d98(M2C_UNK, s32 *, s32, s32);    /* extern */

void func_02043d70(M2C_UNK arg0, s32 *arg1, s32 arg2) {
    s32 temp_ip;

    temp_ip = *arg1;
    func_02043d98(arg0, arg1, arg2 >> temp_ip, arg2 & ((1 << temp_ip) - 1));
}
