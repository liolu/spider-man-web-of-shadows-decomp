#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_02045680(void *);                      /* extern */
M2C_UNK func_020e088c(void *);                      /* extern */

void *func_020e0cf8(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4 != NULL) {
        func_020e088c(temp_r4);
        func_02006188(temp_r4);
    }
    func_02045680(arg0 + 4);
    func_02006188(arg0);
    return arg0;
}
