#include "m2c.h"

void func_0202fefc(s32 *arg0, s32 *arg1) {
    s32 *var_r1;
    s32 var_r1_2;

    if (*arg1 == 2) {
        var_r1 = ((s8 *) arg1 + 4);
    } else {
        var_r1 = NULL;
    }
    if (var_r1 != NULL) {
        var_r1_2 = *var_r1;
    } else {
        var_r1_2 = 0xA;
    }
    *arg0 = var_r1_2;
}
