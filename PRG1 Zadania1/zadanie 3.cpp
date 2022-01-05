#include <iostream>
#include <string>
using namespace std;

auto main() -> int {
    auto name1 = string();
    auto name2 = string();
    cout << "Tell me your name";
    cout << endl;
    cin >> name1;
    cout << "Tell me your second name";
    cout << endl;
    cin >> name2;
    if (name1.size() > name2.size()) {
        cout << "First name is longer than second!";
    }  else if( name1.size() == name2.size()) {
        cout << "Both names are the same length.";
    } else {
        cout << "Second name is longer than first...";
    }
}
