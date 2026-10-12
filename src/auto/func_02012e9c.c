#include "m2c.h"

M2C_UNK func_0201399c(void *);                      /* extern */
M2C_UNK func_02013b18(s32);                         /* extern */
M2C_UNK func_02013b94(void *, void *);              /* extern */
M2C_UNK func_02016c74();                            /* extern */
extern M2C_UNK data_021284b4;

void *func_02012e9c(void *arg0) {
    func_02016c74();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021284b4;
    func_02013b18(arg0 + 0x1A0);
    func_0201399c(arg0 + 0x2A0);
    M2C_FIELD(arg0, s32 *, 0x2BC) = 0x1000;
    func_02013b94(arg0 + 0x1A0, arg0);
    return arg0;
}
