#include <iostream>
using namespace std;

auto main() -> int {
    int zmienna;
    cout << "Checking if the number is even or not.";
    cout << endl;
    cout << "Type the number:";
    cout << endl;
    cin >> zmienna;
    if(zmienna % 2 == 0) {
        cout << "true";
    } else {
        cout << "false";
    }
}
