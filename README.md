# Spider-Man: Web of Shadows decompilation (X)

> **This game moved to [liolu/All-nds-decomp-games](https://github.com/liolu/All-nds-decomp-games/tree/main/games/S/spider-man-web-of-shadows)** (`games/S/spider-man-web-of-shadows`), with its whole history: every Nintendo DS decompilation in one repository, one game downloadable on its own (`python nds.py get spider-man-web-of-shadows`). This repository is archived; issues and pull requests go there.

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/spider-man-web-of-shadows-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/spider-man-web-of-shadows-decomp) [![Data](https://bytematch.dev/liolu/spider-man-web-of-shadows-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/spider-man-web-of-shadows-decomp) [![Functions](https://bytematch.dev/liolu/spider-man-web-of-shadows-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/spider-man-web-of-shadows-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `CS5X`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`██░░░░░░░░░░░░░░░░░░` **9.67%** of the code matched · data 0.00% · 2503/5848 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 2454 | 2454/2454 | 9.19% |
| Reused from other decompilations, not merged into files yet | 47 | 47/47 | 0.47% |
| NitroSDK (Nintendo's system library) | 2 | 2/2 | 0.01% |

*Updated 2026-11-17 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py x
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
