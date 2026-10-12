#include "m2c.h"

M2C_UNK func_02031578();                            /* extern */

void *func_02031538(void *arg0) {
    func_02031578();
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    return arg0;
}
