#include "m2c.h"

M2C_UNK func_020ffa18();                            /* extern */
extern s16 data_0214c260;

void func_020ff89c(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_0214c260 = 1;
        return;
    }
    func_020ffa18();
}
