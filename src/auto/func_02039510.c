#include "m2c.h"

M2C_UNK func_0203b0e8(M2C_UNK *);                   /* extern */
M2C_UNK func_0203b14c(M2C_UNK *);                   /* extern */
M2C_UNK func_0203b1b0(M2C_UNK *);                   /* extern */

void func_02039510(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK sp4;
    M2C_UNK sp0;
    u8 temp_r0;

    temp_r0 = *M2C_FIELD(arg0, u8 **, 0xC);
    switch (temp_r0) {                              /* irregular */
    case 0:
        func_0203b1b0(&sp8);
        return;
    case 1:
        func_0203b14c(&sp4);
        return;
    case 2:
        func_0203b0e8(&sp0);
        return;
    }
}
