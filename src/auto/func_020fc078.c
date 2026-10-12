#include "m2c.h"

s32 func_020fc078(s32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    if (arg0 & 1) {
        var_r1 += 0x20000;
    }
    if (arg0 & 2) {
        var_r1 += 0x20000;
    }
    if (arg0 & 4) {
        var_r1 += 0x20000;
    }
    if (arg0 & 8) {
        var_r1 += 0x20000;
    }
    if (arg0 & 0x10) {
        var_r1 += 0x10000;
    }
    if (arg0 & 0x20) {
        var_r1 += 0x4000;
    }
    if (arg0 & 0x40) {
        var_r1 += 0x4000;
    }
    if (arg0 & 0x80) {
        var_r1 += 0x8000;
    }
    if (arg0 & 0x100) {
        var_r1 += 0x4000;
    }
    return var_r1;
}
