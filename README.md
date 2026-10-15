# Spider-Man: Web of Shadows decompilation (X)

Nintendo DS, game code `CS5X`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`█░░░░░░░░░░░░░░░░░░░` **7.40%** of the code matched · data 0.00% · 2277/5847 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 2230 | 2230/2230 | 6.93% |
| Reused from other decompilations, not merged into files yet | 47 | 47/47 | 0.47% |

*Updated 2026-10-15 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py x
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
