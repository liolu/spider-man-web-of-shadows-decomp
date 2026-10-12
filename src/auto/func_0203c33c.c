#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_02012ee0(void *);                      /* extern */
M2C_UNK func_02019ca0(void *);                      /* extern */
M2C_UNK func_02045680(void *);                      /* extern */

void *func_0203c33c(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    func_02012ee0(arg0 + 0x3A4);
    func_02019ca0(arg0 + 0x344);
    var_r1 = M2C_FIELD(arg0, void ***, 0x338);
    if (var_r1 != NULL) {
        var_r2 = *var_r1;
        temp_r0 = arg0 + 0x338;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x33C);
    }
    func_02012ee0(arg0 + 0x78);
    func_02019ca0(arg0 + 0x18);
    func_02045680(arg0 + 4);
    func_02006188(arg0);
    return arg0;
}
