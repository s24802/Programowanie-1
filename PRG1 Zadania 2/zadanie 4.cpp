#include <iostream>
#include <string>
#include "sstream"
#include <vector>
#include <numeric>
#include <C:\Users\tiger\untitled13\Student.h>
using namespace std;

s24802::student::student(string imie, string nazwisko, vector<int> oceny)
: imie{imie}, nazwisko{nazwisko}, oceny{oceny} {}

auto s24802::student::average_of() -> int {
    int srednia;
    for (auto i = 0; i < oceny.size(); i++) {
        srednia = accumulate(oceny.begin(), oceny.end(), 0) / (oceny.size());
        return srednia;
    }
}

auto main() -> int{
    auto student = s24802::student("jan", "paweł", {7, 7});
    cout << student.average_of() << "\n";
}
