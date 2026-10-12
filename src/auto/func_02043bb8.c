#include "m2c.h"

void *func_02043bb8(void *arg0, s32 arg1) {
    void *var_r0;

    var_r0 = arg0;
    if (M2C_FIELD(var_r0, s32 *, 4) != 1) {
        var_r0 = M2C_FIELD(var_r0, void **, 0);
    }
    return var_r0 + (arg1 * 4);
}
