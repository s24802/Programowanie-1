#include <iostream>
#include <vector>
using namespace std;

auto main() -> int {
    auto ints = vector<int>{6, 6, 6, 6, 6, 6};
    cout << ((ints[0] + ints[1] + ints[2] + ints[3] + ints[4] + ints[5]) / 6 );
}
