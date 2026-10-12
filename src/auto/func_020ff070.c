#include "m2c.h"

s32 func_020ff208(M2C_UNK);                         /* extern */
s32 func_020ff2ec(M2C_UNK);                         /* extern */
M2C_UNK func_020ff394(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ff3a8(M2C_UNK, s32);                /* extern */
extern s32 data_0214c178;

void func_020ff070(void) {
    if (data_0214c178 != 0) {
        return;
    }
    data_0214c178 = 1;
    func_020ff394(0, func_020ff208(0));
    func_020ff3a8(0, func_020ff2ec(0));
    func_020ff3a8(2, 0);
    func_020ff394(2, 0);
    func_020ff394(3, func_020ff208(3));
    func_020ff3a8(3, func_020ff2ec(3));
    func_020ff394(4, func_020ff208(4));
    func_020ff3a8(4, func_020ff2ec(4));
    func_020ff394(5, func_020ff208(5));
    func_020ff3a8(5, func_020ff2ec(5));
    func_020ff394(6, func_020ff208(6));
    func_020ff3a8(6, func_020ff2ec(6));
}
