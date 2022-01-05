#include <iostream>
#include <string>
using namespace std;

auto main() -> int {
    string name1;
    string name2;
    string name3;
    string name4;
    string name5;
    cout << "Tell me first name";
    cout << endl;
    cin >> name1;
    cout << "Tell me second name";
    cout << endl;
    cin >> name2;
    cout << "Tell me third name";
    cout << endl;
    cin >> name3;
    cout << "Tell me fourth name";
    cout << endl;
    cin >> name4;
    cout << "Tell me fifth name";
    cout << endl;
    cin >> name5;
    if(name1 == "Kuba" || name1 == "kuba" || name1 == "Barnaba" || name1 == "barnaba") {
        cout << name1 << " is a man's name";
        cout << endl;
    } else if(name1[name1.length() - 1] == 'a' || name1[name1.length() -1] == 'A') {
        cout << name1 << " is a woman's";
        cout << endl;
    } else {
        cout << name1 << " is a man's";
        cout << endl;
    } if(name2 == "Kuba" || name2 == "kuba" || name2 == "Barnaba" || name2 == "barnaba") {
        cout << name2 << " is a man's name";
        cout << endl;
    } else if(name2[name2.length() - 1] == 'a' || name2[name2.length() -1] == 'A') {
        cout << name2 << " is a woman's name";
        cout << endl;
    } else {
        cout << name2 << " is a man's name";
        cout << endl;
    } if(name3 == "Kuba" || name3 == "kuba" || name3 == "Barnaba" || name3 == "barnaba") {
        cout << name3 << " is a man's name";
        cout << endl;
    } else if(name3[name3.length() - 1] == 'a' || name3[name3.length() -1] == 'A') {
        cout << name3 << " is a woman's name";
        cout << endl;
    } else {
        cout << name3 << " is a man's name";
        cout << endl;
    } if(name4 == "Kuba" || name4 == "kuba" || name4 == "Barnaba" || name4 == "barnaba") {
        cout << name4 << " is a man's name";
        cout << endl;
    } else if(name4[name4.length() - 1] == 'a' || name4[name4.length() -1] == 'A') {
        cout << name4 << " is a woman's name";
        cout << endl;
    } else {
        cout << name4 << " is a man's name";
        cout << endl;
    } if(name5 == "Kuba" || name5 == "kuba" || name5 == " Barnaba" || name5 == "barnaba") {
        cout << name5 << " is a man's name";
        cout << endl;
    } else if(name5[name5.length() - 1] == 'a' || name5[name5.length() -1] == 'A') {
        cout << name5 << " is a woman's name";
        cout << endl;
    } else {
        cout << name5 << "Is a men's name";
        cout << endl;
    }
}
