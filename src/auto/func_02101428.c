/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207b160 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_bank.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
extern void func_020fef94(void *ptr, u32 size);
extern void func_021009d8(void);
extern void func_021009ec(void);
typedef struct UnkSndWaveArc UnkSndWaveArc;
typedef struct UnkSndWaveArcLink {
    UnkSndWaveArc *waveArc;
    struct UnkSndWaveArcLink *next;
} UnkSndWaveArcLink;
struct UnkSndWaveArc {
    u8 unk_00[8];
    u32 fileSize;
    u8 unk_0c[4];
    u8 blockHeader[8];
    UnkSndWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
};
typedef struct UnkSndBankData {
    u8 fileHeader[0x10];
    u8 blockHeader[8];
    UnkSndWaveArcLink waveArcLink[4];
    u32 instCount;
    u32 instOffset[1];
} UnkSndBankData;
void func_02101428(UnkSndBankData *bank) {
    s32 i;

    func_021009d8();
    for (i = 0; i < 4; i++) {
        UnkSndWaveArc *waveArc = bank->waveArcLink[i].waveArc;
        if (waveArc == 0) {
            continue;
        }
        if (&bank->waveArcLink[i] == waveArc->topLink) {
            waveArc->topLink = bank->waveArcLink[i].next;
            func_020fef94(waveArc, 0x3c);
        } else {
            UnkSndWaveArcLink *link;
            for (link = waveArc->topLink; link != 0; link = link->next) {
                if (&bank->waveArcLink[i] == link->next) {
                    break;
                }
            }
            link->next = bank->waveArcLink[i].next;
            func_020fef94(link, sizeof(UnkSndWaveArcLink));
        }
    }
    func_021009ec();
}
