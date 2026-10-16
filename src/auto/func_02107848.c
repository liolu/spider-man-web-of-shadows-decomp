/* func_02001634 from projets/rayman-rr/src/auto/func_02001634.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
u8 *func_02107848(s32 arg0, s32 arg1, s32 arg2) {
    u8 c;
    u8 *p;

    c = arg1;
    p = (u8 *) arg0 + arg2;
    while (arg2 != 0) {
        p -= 1;
        if (*p == c) {
            return p;
        }
        arg2 -= 1;
    }
    return ((void *) 0);
}
