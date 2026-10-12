#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */

void func_0201dd34(void **arg0) {
    void *var_r4;

    var_r4 = *arg0;
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_02006188(M2C_FIELD(var_r4, s32 *, 0x10));
        var_r4 = M2C_FIELD(var_r4, void **, 0);
    } while (var_r4 != NULL);
}
