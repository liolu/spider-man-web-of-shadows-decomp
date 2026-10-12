#include "m2c.h"

M2C_UNK func_020ffa18();                            /* extern */
extern s16 data_0214e8cc;

void func_02106d84(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_0214e8cc = 1;
        return;
    }
    func_020ffa18();
}
