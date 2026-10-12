#include "m2c.h"

M2C_UNK func_0200ae1c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0210be00(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_021282e8;

void func_0200ae48(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[32];

    func_0210be00(sp0, 0x10, &data_021282e8, arg1);
    func_0200ae1c(arg0, sp0);
}
