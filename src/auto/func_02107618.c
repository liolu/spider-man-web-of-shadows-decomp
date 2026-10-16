/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* mbtowc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/mbstring.c (license: none), reused by
 * tools/donor_match.py */
typedef int (*__decode_mbyte)(unsigned short *, const char *, int);
typedef int (*__encode_mbyte)(char *, unsigned short);
struct _loc_coll_cmpt {
    int char_start_value;
    int char_coll_tab_size;
    short char_spec_accents;
    unsigned short *char_coll_table_ptr;
};
struct _loc_ctype_cmpt {
    __decode_mbyte decode_mb;
    __encode_mbyte encode_wc;
};
struct _loc_time_cmpt {
    char *am_pm;
    char *DateTime_Format;
    char *Twelve_hr_format;
    char *Date_Format;
    char *Time_Format;
    char *Day_Names;
    char *MonthNames;
    char *TimeZone;
};
struct __locale {
    struct _loc_time_cmpt *time_cmpt_ptr;
    struct _loc_coll_cmpt *coll_cmpt_ptr;
    struct _loc_ctype_cmpt *ctype_cmpt_ptr;
};
extern struct __locale data_0213dc58;
typedef unsigned short wchar_t;
int func_02107618(wchar_t *pwc, const char *s, int n) {
    return data_0213dc58.ctype_cmpt_ptr->decode_mb(pwc, s, n);
}
