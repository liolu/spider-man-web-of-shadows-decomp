#include "m2c.h"

s32 func_020fec98();                                /* extern */
s32 func_020ff208(M2C_UNK);                         /* extern */
s32 func_020ff2ec(M2C_UNK);                         /* extern */
M2C_UNK func_020ff394(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ff3a8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ff404(s32);                         /* extern */
M2C_UNK func_020ff40c(s32);                         /* extern */
extern M2C_UNK data_0214c178;

void func_020ff174(void) {
    func_020ff394(2, func_020ff208(2));
    func_020ff3a8(2, func_020ff2ec(2));
    if ((M2C_FIELD(&data_0214c178, s32 *, 4) != 0) && ((func_020fec98() & 3) != 1)) {
        return;
    }
    func_020ff404(0x0200002B);
    func_020ff40c(0x023E0021);
}
