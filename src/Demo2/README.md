# How to run demo2

- `cd /src/Demo2`
- `mkdir build \ cd build`
- `CC=/AFLplusplus/afl-clang-lto CXX=/AFLplusplus/afl-clang-lto++ cmake ..`
- `make`
- `/AFLplusplus/afl-fuzz`
- `cd ..` - `mkdir seeds` - `dd if=/dev/urandom of=seed_4 bs=64 count=10`
- `/AFLplusplus/afl-fuzz -i /src/Demo2/seeds -o out -m none -d -- ./Demo2`

## Execution crashes

With inputs

- `|;ϰ|;ϰmff.)L:d.lll:ZAG_`
- `llllllllllllMlllllllllllflllll}llllllflllll}`
- `ff;t|llll[AG_G_:`
- `|_tfEf)lm\n:lm\n:__:`
- `.l/Dfphff.llllllllUlllf)L:d.llllld_pz||||^`
- `ff҉ff);ҁllllMllllll``hllllllllll``hllllll``YAGL`
- `fflll~lllllllllllllllllUllllt`
