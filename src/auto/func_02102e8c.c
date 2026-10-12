#include "m2c.h"

M2C_UNK func_0210348c();                            /* extern */
extern s32 data_0214de98;

void func_02102e8c(s32 arg0) {
    if (data_0214de98 != 0) {
        return;
    }
    data_0214de98 = 1;
    func_0210348c(arg0);
}
