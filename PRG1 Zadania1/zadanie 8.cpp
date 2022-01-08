#include <string>
#include "iostream"
using namespace std;
auto main () -> int {
    auto str = string();
    cout << "podaj zdanie";
    getline(cin, str);
    int n;
        cout << "podaj co ktora litere chcesz wyswietlic";
        cin >> n;
    for (auto i = 0; i < str.size(); i+=n ) {
                cout << str[i];
            }
}
