/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* EXT_Printf from https://github.com/ntrtwl/NitroSDK libraries/ext/src/ext_scrntest.c (license: none), reused by
 * tools/donor_match.py */
typedef char *va_list;
extern void func_02007e14(const char *fmt, ...);
void func_02007e14(const char *fmt, ...) {
    va_list vlist;

    ((void) 0);
    ((vlist) = ((va_list) ((char *) ((unsigned long) (&fmt) & ~3) + ((sizeof(fmt) + 3) & ~3))));
    ((void) 0);
    ((void) 0);
}
