#include <iostream>
using namespace std;

auto main() -> int {
    int number1;
    int number2;
    cout << "Checking if the number is divisible or not.";
    cout << endl;
    cout << "Type the number you want to divide:";
    cout << endl;
    cin >> number1;
    cout << "Type the dividing number;";
    cout << endl;
    cin >> number2;
    if(number1 % number2 == 0) {
        cout << "true";
    } else {
        cout << "false";
    }
}
