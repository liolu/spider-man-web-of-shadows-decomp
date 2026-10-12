#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_02006194(s32);                         /* extern */
M2C_UNK func_0201d894();                            /* extern */
M2C_UNK func_0201df30(void *);                      /* extern */
M2C_UNK func_02045680(void *);                      /* extern */
extern M2C_UNK data_021289c0;

void *func_0201d618(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021289c0;
    func_0201d894();
    func_02006194(M2C_FIELD(arg0, s32 *, 0x10));
    func_02045680(arg0 + 8);
    func_0201df30(arg0);
    func_02006188(arg0);
    return arg0;
}
