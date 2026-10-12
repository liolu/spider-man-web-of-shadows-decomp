#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_02085404(void *);                      /* extern */
M2C_UNK func_02085484(void *);                      /* extern */

void **func_02084efc(void **arg0) {
    void *temp_r4;
    void *temp_r5;

    temp_r5 = *arg0;
    if (temp_r5 != NULL) {
        temp_r4 = M2C_FIELD(temp_r5, void **, 8);
        if (temp_r4 != NULL) {
            func_02085484(temp_r4);
            func_02006188(temp_r4);
        }
        func_02085404(temp_r5 + 4);
        func_02006188(temp_r5);
    }
    return arg0;
}
