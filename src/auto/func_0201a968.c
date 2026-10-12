#include "m2c.h"

M2C_UNK func_02005e8c(s32);                         /* extern */
M2C_UNK func_02006194(s32);                         /* extern */
M2C_UNK func_0201abf0(void *);                      /* extern */
extern M2C_UNK (*data_0213d8b8)(s32);

void *func_0201a968(void *arg0) {
    func_02005e8c(M2C_FIELD(arg0, s32 *, 0x40));
    data_0213d8b8(M2C_FIELD(arg0, s32 *, 0x38));
    func_0201abf0(arg0);
    func_02006194(M2C_FIELD(arg0, s32 *, 0x14));
    func_02006194(M2C_FIELD(arg0, s32 *, 0x10));
    func_02006194(M2C_FIELD(arg0, s32 *, 0xC));
    func_02006194(M2C_FIELD(arg0, s32 *, 8));
    func_02006194(M2C_FIELD(arg0, s32 *, 4));
    func_02006194(M2C_FIELD(arg0, s32 *, 0));
    return arg0;
}
