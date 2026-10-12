#include "m2c.h"

M2C_UNK func_020f3980(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020f8d08(s32);                         /* extern */
extern M2C_UNK data_02149b64;

void func_020438cc(void *arg0) {
    func_020f8d08(M2C_FIELD(arg0, s32 *, 0x40));
    func_020f3980(&data_02149b64, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
