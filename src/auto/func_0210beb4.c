/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* StrCopy16 from https://github.com/Yokimitsuro/khdays-decomp libs/msl/c/auto/StrCopy16.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
#pragma ipa file
unsigned short *func_0210beb4(unsigned short *dst, unsigned short *src) {
    unsigned short *p = dst, *q;
    unsigned short v;
    do {
        q  = p++;
        *q = *src++;
        v  = *(volatile unsigned short *) q;
    } while (v != 0);
    return dst;
}
