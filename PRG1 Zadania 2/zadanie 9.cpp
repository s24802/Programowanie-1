#include <iostream>
#include <algorithm>
#include "sstream"
#include <string>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    int number1;
    string line1;
    int number2;
    string line2;
    vector<int> a;
    vector<int> b;
    vector<int>::iterator ip;
    cout << "podaj pierwszy wektor(wektor pierwszy musi byc dluzszy od drugiego):" << endl;
    getline(cin, line1);
    istringstream stream1(line1);
    while (stream1 >> number1)
        a.push_back(number1);
    sort(a.begin(), a.end());
    ip = std::unique(a.begin(), a.begin() + (a.size()));
    a.resize(std::distance(a.begin(), ip));
    cout << "podaj drugi wektor" << endl;
    getline(cin, line2);
    istringstream stream2(line2);
    while (stream2 >> number2)
        b.push_back(number2);
    sort(b.begin(), b.end());
    ip = std::unique(b.begin(), b.begin() + (b.size()));
    b.resize(std::distance(b.begin(), ip));
    if (a.size() > b.size()) {
        if(includes(a.begin(), a.end(), b.begin(), b.end())) {
            ;
            cout << "prawda";
        }
        else {
            cout << "falsz";
        }
        }
    else {
        cout << "drugi wektor jest dluzszy od pierwszego";
    }
}
