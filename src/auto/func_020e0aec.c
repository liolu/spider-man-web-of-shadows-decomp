#include "m2c.h"

M2C_UNK func_020e77b8(void *);                      /* extern */
M2C_UNK func_020e7d4c(s32);                         /* extern */
M2C_UNK func_020e83c0(void *, s32);                 /* extern */
M2C_UNK func_020e85c8(void *, s32);                 /* extern */
M2C_UNK func_020e87a4(void *);                      /* extern */
M2C_UNK func_020e8e70(void *, s32);                 /* extern */
M2C_UNK func_020e9450(void *, s32);                 /* extern */
extern s32 data_02145c5c;

void func_020e0aec(void *arg0) {
    s32 temp_r4;

    temp_r4 = data_02145c5c;
    func_020e7d4c(arg0 + 0x30);
    if (M2C_FIELD(arg0, u8 *, 1) != 0) {
        func_020e77b8(arg0 + 0xC);
    }
    func_020e8e70(arg0 + 0x1B0, temp_r4);
    func_020e83c0(arg0 + 0xF0, temp_r4);
    func_020e85c8(arg0 + 0x18C, temp_r4);
    func_020e9450(arg0 + 0x1F4, temp_r4);
    func_020e87a4(arg0 + 0x214);
}
