#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_02006194(s32);                         /* extern */
M2C_UNK func_02008680(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02008830(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0200d344(void *);                      /* extern */
M2C_UNK func_02021e50(void *);                      /* extern */
M2C_UNK func_020e1ff0(void *);                      /* extern */
extern M2C_UNK data_0213c6ac;

void *func_020e5980(void *arg0) {
    u8 sp0[8];

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213c6ac;
    func_02008680(sp0, 1, 3);
    func_02008830(sp0, 0);
    func_02021e50(arg0 + 0x24C);
    func_0200d344(arg0 + 0x1A4);
    func_0200d344(arg0 + 0xFC);
    func_02006194(M2C_FIELD(arg0, s32 *, 0xD8));
    func_020e1ff0(arg0);
    func_02006188(arg0);
    return arg0;
}
