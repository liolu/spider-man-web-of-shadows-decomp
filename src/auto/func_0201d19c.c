/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern M2C_UNK func_01ff8bc0;

void func_0201d19c(void *arg0, s32 arg1, void *arg2) {
    s32 var_ip;

    M2C_FIELD(arg0, s32 *, 8)        = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &func_01ff8bc0;
    var_ip                           = 0;
    M2C_FIELD(arg0, u8 *, 0x19)      = (u8) M2C_FIELD(arg2, u8 *, 0x17);
    if ((s32) M2C_FIELD(arg2, u8 *, 0x17) <= 0) {
        return;
    }
    do {
        M2C_FIELD((arg0 + (var_ip * 2)), s16 *, 0x1A) = (s16) (var_ip | 0x100);
        var_ip += 1;
    } while (var_ip < (s32) M2C_FIELD(arg2, u8 *, 0x17));
}
