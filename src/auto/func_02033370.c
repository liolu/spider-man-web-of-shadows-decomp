#include "m2c.h"

M2C_UNK func_02006194(s32);                         /* extern */
M2C_UNK func_020334c8();                            /* extern */
extern M2C_UNK data_02129698;

void *func_02033370(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02129698;
    func_020334c8();
    func_02006194(M2C_FIELD(arg0, s32 *, 8));
    return arg0;
}
