/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02109ef4 from https://github.com/RonyxDumb/mkds src/arm9/0213c9c0_wmemchr.c (license: none), reused by
 * tools/donor_match.py
 */
#pragma ipa file
unsigned int func_02109ef4(unsigned int r0, unsigned int r1, unsigned int r2, unsigned int r3) {
    unsigned int cmp_a, cmp_b;
L_213c9c0:
    cmp_a = r2;
    cmp_b = 0x0u;
L_213c9c4:
    if ((cmp_a == cmp_b)) {
        goto L_213c9e0;
    }
L_213c9c8:
    r3 = (unsigned int) (*(unsigned short *) ((unsigned char *) r0 + 0));
L_213c9cc:
    cmp_a = r3;
    cmp_b = r1;
L_213c9d0:
    if ((cmp_a == cmp_b)) {
        return r0;
    }
L_213c9d4:
    r0 = (r0 + 0x2u);
L_213c9d8:
    r2    = (r2 - 0x1u);
    cmp_a = r2;
    cmp_b = 0;
L_213c9dc:
    if ((cmp_a != cmp_b)) {
        goto L_213c9c8;
    }
L_213c9e0:
    r0 = 0x0u;
L_213c9e4:
    return r0;
}
