/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0210bed4 from https://github.com/zeldaret/st libs/c/src/wstring.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short wchar_t;
extern const wchar_t *func_0210bed4(const wchar_t *str, wchar_t chr);
const wchar_t *func_0210bed4(const wchar_t *str, wchar_t chr) {
    const wchar_t *p = str;
    wchar_t c        = chr;
    wchar_t ch;

    while (ch = *p++) {
        if (ch == c) {
            return ((char *) (p - 1));
        }
    }

    return (c ? 0 : (char *) (p - 1));
}
