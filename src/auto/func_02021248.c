#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_02022328(void *);                      /* extern */
M2C_UNK func_02043ff8(void *);                      /* extern */

void *func_02021248(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    var_r1 = M2C_FIELD(arg0, void ***, 0x78);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 0x78;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x7C);
    }
    func_02043ff8(arg0 + 0x68);
    func_02022328(arg0);
    func_02006188(arg0);
    return arg0;
}
