#include <iostream>
#include <vector>
using namespace std;

auto main(int argc, char* argv[]) -> int {
    cout << argc;
    auto const a = stoi(argv[1]);
    auto const b = stoi(argv[2]);
    auto const c = stoi(argv[3]);
    auto const d = stoi(argv[4]);
    auto ints1 = vector<int>{a, b};
    auto ints2 = vector<int>{c, d};
    cout << ((ints1[0] * ints2[0]) + (ints1[1] * ints2[1]));
}
