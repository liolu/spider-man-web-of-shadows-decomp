/* compiler: 2.0/sp1p5 -flag no-opt_arithtransformation */
#include "m2c.h"

s32 func_0201c9a4(s32 arg0) {
    s32 temp_r1;

    temp_r1 = (arg0 * 3) + 3;
    return temp_r1 - (temp_r1 & 3);
}
