/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02003e90 from https://github.com/banatic/acww-decomp src/main/func_02003e90.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
struct UnkStruct_02003e90;
struct Vtbl {
    void (*func)(struct UnkStruct_02003e90 *);
};
struct UnkStruct_02003e90 {
    struct Vtbl *vtbl;
};
void func_02011c18(struct UnkStruct_02003e90 *obj) {
    obj->vtbl->func(obj);
}
