#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
extern void *data_02145a2c;

void *func_0201ded4(void *arg0) {
    void *var_r0;
    void *var_r2;

    var_r2 = data_02145a2c;
    var_r0 = M2C_FIELD(var_r2, void **, 4);
    if (var_r2 == arg0) {
        data_02145a2c = var_r0;
    } else if (var_r0 != NULL) {
loop_3:
        if (var_r0 == arg0) {
            M2C_FIELD(var_r2, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
        } else {
            var_r2 = var_r0;
            var_r0 = M2C_FIELD(var_r0, void **, 4);
            if (var_r0 != NULL) {
                goto loop_3;
            }
        }
    }
    func_02006188(arg0);
    return arg0;
}
