#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_0208367c(M2C_UNK *, void *, void **, s32 *); /* extern */
extern void *data_02145c44;
extern s32 data_02149e0c;

s32 func_02083108(s32 arg0) {
    s32 sp8;
    void *sp4;
    M2C_UNK sp0;
    s32 temp_r0;
    void *temp_r1;
    void *temp_r5;

    temp_r0       = data_02149e0c - 1;
    data_02149e0c = temp_r0;
    if (temp_r0 == 0) {
        temp_r5 = data_02145c44;
        if (temp_r5 != NULL) {
            temp_r1 = temp_r5 + 8;
            sp8     = M2C_FIELD(temp_r5, s32 *, 0xC);
            sp4     = temp_r1;
            func_0208367c(&sp0, temp_r1, &sp4, &sp8);
            func_02006188(temp_r5);
        }
        data_02145c44 = NULL;
    }
    return arg0;
}
