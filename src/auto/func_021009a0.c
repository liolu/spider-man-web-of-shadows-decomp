#include "m2c.h"

M2C_UNK func_020fed54(M2C_UNK *);                   /* extern */
M2C_UNK func_02100a00();                            /* extern */
M2C_UNK func_02101110();                            /* extern */
extern s32 data_0214c29c;
extern M2C_UNK data_0214c2a0;

void func_021009a0(void) {
    if (data_0214c29c != 0) {
        return;
    }
    data_0214c29c = 1;
    func_020fed54(&data_0214c2a0);
    func_02100a00();
    func_02101110();
}
