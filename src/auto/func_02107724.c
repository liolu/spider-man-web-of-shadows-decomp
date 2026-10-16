/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned long size_t;
typedef unsigned short wchar_t;
extern char *func_02109cc0(char *dest, const char *src, size_t n);
int func_02107680(char *s, wchar_t wchar);

/* func_02107724 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/mbstring.c (license: none), reused by
 * tools/donor_match.py */
int func_02107724(char *s, const wchar_t *pwcs, unsigned int n) {
    int chars_written = 0;
    int result;
    char temp[3];
    const unsigned short *source;

    if (s == 0 || pwcs == 0) {
        return 0;
    }

    source = pwcs;
    while (chars_written <= n) {
        if (!*source) {
            *(s + chars_written) = '\0';
            break;
        } else {
            result = func_02107680(temp, *source++);
            if ((chars_written + result) <= n) {
                func_02109cc0(s + chars_written, temp, result);
                chars_written += result;
            } else {
                break;
            }
        }
    }

    return chars_written;
}
