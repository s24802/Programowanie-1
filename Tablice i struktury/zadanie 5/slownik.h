//
// Created by tiger on 29.12.2021.
//

#ifndef UNTITLED27_SLOWNIK_H
#define UNTITLED27_SLOWNIK_H
#include <vector>
using namespace std;
struct Slownik
{
    vector<string> slowa;

    Slownik() = default;

    static void Menu();
    bool dodaj(const string& slowo);
    bool usun(const string& slowo);
    void wypisz();
    string wyszukaj(string slowo);
    void sortuj();
    static bool porownanie(const string& a, const string& b);

};
#endif 
