#include "m2c.h"

s32 func_0203d298();                                /* extern */
M2C_UNK func_0203d534(s32, M2C_UNK, s16);           /* extern */
extern s32 data_0213d7bc;

s32 *func_020f2f94(s32 *arg0) {
    *arg0 = data_0213d7bc;
    func_0203d534(func_0203d298(), 0, (s16) *arg0);
    return arg0;
}
