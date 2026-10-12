#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_02016530();                            /* extern */

void *func_02015a54(void *arg0) {
    void **temp_r1_2;
    void *temp_r1;

    func_02016530();
    temp_r1 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 0x14);
        temp_r1_2 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_r1_2 != NULL) {
            *temp_r1_2 = M2C_FIELD(arg0, void **, 0x10);
        }
        M2C_FIELD(arg0, void **, 0x10) = NULL;
    }
    func_02006188(M2C_FIELD(arg0, s32 *, 4));
    return arg0;
}
