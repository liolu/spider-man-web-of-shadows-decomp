#include "m2c.h"

M2C_UNK func_0201abf0(s32);                         /* extern */
M2C_UNK func_02043c98(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_0211957c;
extern M2C_UNK (*data_0213d8c0)(s32);

void func_0201a588(void *arg0) {
    func_0201abf0(arg0 + 0x23C);
    data_0213d8c0(M2C_FIELD(arg0, s32 *, 0x234));
    func_02043c98(arg0, &data_0211957c);
}
