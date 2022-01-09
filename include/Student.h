#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;
namespace s24802 {
    struct student {

    public:


        string const imie;
        string const nazwisko;
        vector<int> oceny{};

        student(string imie, string nazwisko, vector<int> oceny);

        auto average_of() -> int;


    };
}
#endif
