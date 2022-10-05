# How to run Demo3

- `cd /src/Demo3`
- `mkdir build \ cd build`
- `CC=/AFLplusplus/afl-clang-lto CXX=/AFLplusplus/afl-clang-lto++ cmake ..`
- `make`
- `cd ..` - `mkdir seeds` - `dd if=/dev/urandom of=seed_2 bs=64 count=10`
- `/AFLplusplus/afl-fuzz -i /src/Demo3/seeds -o out -m none -d -- ./specs-slice`
- or `/AFLplusplus/afl-fuzz -i /src/Demo3/seeds -o out -m none -d -- ./drone`
- `/AFLplusplus/afl-plot ./out/default /src/Demo3/afl-results/graph_res`

`afl-cov -d ../build/out/default -c ../build --enable-branch-coverage --coverage-cmd "cat AFL_FILE | LD_LIBRARY_PATH=./lib/.libs ./bin/.libs/somebin -a -b -c"`