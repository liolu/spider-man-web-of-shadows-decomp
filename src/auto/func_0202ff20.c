#include "m2c.h"

s32 func_0202ff20(s32 *arg0) {
    s32 *var_r1;
    s32 temp_r1;
    s32 var_r0;
    s32 var_r1_2;
    void *var_r2;

    temp_r1 = *arg0;
    if (temp_r1 == 2) {
        var_r2 = ((s8 *) arg0 + 4);
    } else {
        var_r2 = NULL;
    }
    if (var_r2 != NULL) {
        return 0;
    }
    if (temp_r1 == 1) {
        var_r1 = ((s8 *) arg0 + 4);
    } else {
        var_r1 = NULL;
    }
    var_r0 = 1;
    if (var_r1 == NULL) {
        return 1;
    }
    var_r1_2 = *var_r1;
    if (var_r1_2 != 0) {
        var_r1_2 -= 0xC;
    }
    if (var_r1_2 != 0) {
        var_r0 = 0;
    }
    return var_r0;
}
