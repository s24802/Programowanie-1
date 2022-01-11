#include <iostream>
#include <vector>
#include <string>
#include "slownik.h"
using namespace std;
void Slownik::Menu() {
    cout << "Slownik:";
    cout << endl;
    cout << "1 - dodaj";
    cout << endl;
    cout << "2 - usun";
    cout << endl;
    cout << "3 - wyszukaj";
    cout << endl;
    cout << "4 - wypisz";
    cout << endl;
    cout << "5 - sortuj";
    cout << endl;
    cout << "6- wyjdz";
    cout << endl;
}
bool Slownik::dodaj(const string& slowo) {
    string slowo1 = wyszukaj(slowo);

    if (slowo1.empty()) {
        slowa.push_back(slowo);
        return true;
    } else {
        return false;
    }
}

void Slownik::wypisz() {
    for (const string& slowo : slowa) {
        cout << slowo << endl;
    }
}

bool Slownik::usun(const string& slowo) {
    for (auto it = slowa.begin(); it != slowa.end(); ++it) {
        if (it->compare(slowo) == 0) {
            slowa.erase(it);
            return true;
        }
    }
    return false;
}

string Slownik::wyszukaj(string slowo) {
    for (vector<string>::iterator it = slowa.begin(); it != slowa.end(); ++it) {
        if (it->compare(slowo)==0) {
            return slowo;
        }
    }
    return "";
}
void Slownik::sortuj() {
    sort(slowa.begin(), slowa.end(), Slownik::porownanie);
}

bool Slownik::porownanie(const string& a, const string& b) {
    return a < b;
}
int main() {
    Slownik slownik = Slownik();

    int wybor;
    string slowo;

    while (true) {
        slownik.Menu();
        cin >> wybor;
        switch (wybor) {
            case 1:
                cout << "Podaj slowo: ";
                cin >> slowo;
                if (slownik.dodaj(slowo)) {
                    cout << "Słowo: " << slowo << "zostało dodane" << endl;
                } else {
                    cout << slowo << " juz wystepuje w slowniku" << endl;
                }
                break;
            case 2:
                cout << "Podaj slowo: ";
                cin >> slowo;
                if (slownik.usun(slowo)) {
                    cout << "Usunieto slowo: " << slowo << endl;
                } else {
                    cout << "Brak takiego slowa w slowniku!" << endl;
                }
                break;
            case 3:
                cout << "Podaj slowo: ";
                cin >> slowo;
                if (slownik.wyszukaj(slowo).empty()) {
                    cout << "Brak takiego slowa w slowniku!" << endl;
                } else {
                    cout << "Znaleziono slowo: " << slowo << endl;
                }
                break;
            case 4:
                slownik.wypisz();
                break;
            case 5:
                slownik.sortuj();
                break;
            case 6:
                return 0;
            default:
                cout << "Dostepne sa tylko opcje 1-6" << endl;
                break;
        }
    }
}
