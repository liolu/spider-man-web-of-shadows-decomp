#include "m2c.h"

M2C_UNK func_020fe830(s32, M2C_UNK);                /* extern */
M2C_UNK func_020ff7b0();                            /* extern */
extern M2C_UNK data_0214befc;

void func_020fe810(void) {
    func_020ff7b0();
    func_020fe830(M2C_FIELD(&data_0214befc, s32 *, 0x28), 0);
}
