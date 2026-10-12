#include "m2c.h"

M2C_UNK func_02031520(void *, s32, s32);            /* extern */

void *func_0203149c(void *arg0) {
    func_02031520(arg0, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    return arg0;
}
