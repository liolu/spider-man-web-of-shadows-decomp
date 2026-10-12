#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_0200d344(s32);                         /* extern */
M2C_UNK func_02022328(s32);                         /* extern */

s32 func_02021e94(s32 arg0) {
    func_0200d344(arg0 + 0x68);
    func_02022328(arg0);
    func_02006188(arg0);
    return arg0;
}
