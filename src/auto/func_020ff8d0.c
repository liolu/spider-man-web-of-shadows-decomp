/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02079e40 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_ownerinfo.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern void func_020fffb4(const void *src, void *dest, u32 size);
typedef struct UnkNvramUserInfo {
    u8 unk_00;
    u8 unk_01;
    u8 favoriteColor : 4;
    u8 : 4;
    u8 birthMonth;
    u8 birthDay;
    u8 unk_05;
    u16 nickName[10];
    u8 nickNameLength;
    u8 unk_1b;
    u16 comment[26];
    u8 commentLength;
    u8 unk_51;
    u8 unk_52[0x12];
    u16 language : 3;
    u16 : 13;
} UnkNvramUserInfo;
typedef struct UnkOwnerInfo {
    u8 language;
    u8 favoriteColor;
    u8 birthMonth;
    u8 birthDay;
    u16 nickName[10 + 1];
    u16 nickNameLength;
    u16 comment[26 + 1];
    u16 commentLength;
} UnkOwnerInfo;
void func_020ff8d0(UnkOwnerInfo *info) {
    UnkNvramUserInfo *src = ((UnkNvramUserInfo *) 0x027ffc80);

    info->language       = src->language;
    info->favoriteColor  = src->favoriteColor;
    info->birthMonth     = src->birthMonth;
    info->birthDay       = src->birthDay;
    info->nickNameLength = src->nickNameLength;
    info->commentLength  = src->commentLength;
    func_020fffb4(src->nickName, info->nickName, 10 * sizeof(u16));
    func_020fffb4(src->comment, info->comment, 26 * sizeof(u16));
    info->nickName[10] = 0;
    info->comment[26]  = 0;
}
