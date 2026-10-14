#include "m2c.h"

M2C_UNK func_020fe88c(s32);                         /* extern */
M2C_UNK func_020feb94(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_020fec4c(void *);                      /* extern */
extern M2C_UNK data_0214befc;

void func_020fe830(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_0214befc, s32 *, 0x1C) != 0) {
        func_020feb94(arg0, func_020fe88c);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_020fec4c(arg0);
        return;
    }
    func_020fe88c(arg1);
}
