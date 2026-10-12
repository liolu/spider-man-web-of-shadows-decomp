#include "m2c.h"

M2C_UNK func_02016368(void *);                      /* extern */
M2C_UNK func_02016530();                            /* extern */

void func_02016344(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_02016530(arg0);
    func_02016368(arg0);
}
