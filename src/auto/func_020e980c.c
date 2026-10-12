#include "m2c.h"

M2C_UNK func_0200d344(void *);                      /* extern */
M2C_UNK func_02045680(void *);                      /* extern */
s32 *func_020eaadc(s32);                            /* extern */
extern M2C_UNK data_0213ca34;

void *func_020e980c(void *arg0) {
    s32 *temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213ca34;
    temp_r0 = func_020eaadc(M2C_FIELD(arg0, s32 *, 0xC8));
    *temp_r0 -= 1;
    func_0200d344(arg0 + 0x24);
    func_02045680(arg0 + 4);
    return arg0;
}
