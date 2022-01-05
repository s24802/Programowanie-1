#include <iostream>
#include <string>
using namespace std;

auto main() -> int {
    string name;
    double waga;
    int wzrost;
    cout << "Tell me your name";
    cout << endl;
    cin >> name;
    cout << "Tell me your weight";
    cout << endl;
    cin >> waga;
    cout << "Tell me your height";
    cout << endl;
    cin >> wzrost;
    cout << "Name: " << name;
    cout << endl;
    cout << endl;
    cout << "Weight: " << waga << "kg";
    cout << endl;
    cout << endl;
    cout << "Height: " << wzrost << "cm";
}
