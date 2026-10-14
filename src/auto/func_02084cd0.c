#include "m2c.h"

M2C_UNK func_0203ff04(M2C_UNK *, void *, void **, s32 *); /* extern */
M2C_UNK func_02045680(void *);                      /* extern */

void *func_02084cd0(void *arg0) {
    M2C_UNK sp8;
    void *sp4;
    s32 sp0;
    void *temp_r1;

    temp_r1 = arg0 + 4;
    sp0     = M2C_FIELD(arg0, s32 *, 8);
    sp4     = temp_r1;
    func_0203ff04(&sp8, temp_r1, &sp4, &sp0);
    func_02045680(arg0);
    return arg0;
}
