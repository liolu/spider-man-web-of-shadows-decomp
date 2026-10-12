#include "m2c.h"

s32 func_02100ad4();                         /* extern */
s32 func_02100ef8();                         /* extern */
M2C_UNK func_02101060();                            /* extern */

void func_02100e60(M2C_UNK arg0) {
    if (func_02100ef8() != 0) {
        return;
    }
    do {

    } while (func_02100ad4(0) != 0);
    if (func_02100ef8(arg0) != 0) {
        return;
    }
    func_02101060();
    if (func_02100ef8(arg0) != 0) {
        return;
    }
    do {
        func_02100ad4(1);
    } while (func_02100ef8(arg0) == 0);
}
