#include "m2c.h"

extern s32 *data_0214b82c;

void func_020f72e4(s32 *arg0) {
    if (data_0214b82c == NULL) {
        *arg0 = 0;
        data_0214b82c = arg0;
    }
}
