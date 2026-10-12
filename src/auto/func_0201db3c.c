#include "m2c.h"

extern s32 data_0213fe48;
extern u8 data_021459c0;

s32 func_0201db3c(void) {
    if ((data_021459c0 == 0) && (data_0213fe48 != 0)) {
        return 1;
    }
    return 0;
}
