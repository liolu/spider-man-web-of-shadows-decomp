#include "m2c.h"

M2C_UNK func_020faebc(u16);                         /* extern */
extern u16 data_0214be40;

u16 func_020fbd60(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_0214be40 |= temp_r4;
    func_020faebc(temp_r4);
    return temp_r4;
}
