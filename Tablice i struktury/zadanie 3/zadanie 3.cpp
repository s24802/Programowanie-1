#include <iostream>
#include "samochod.h"
#include <ctime>
using namespace std;
string Samochod::Opisy() const {
    string opis_auta = "Marka: " + Marka + "\nModel: " + Model + "\nRok Produkcji: " + to_string(RokProdukcji) + "\nPrzebieg: " + to_string(Przebieg);
    return opis_auta;
}
Samochod::Samochod(string  Marka, string  Model, unsigned const RokProdukcji, unsigned Przebieg) :
        Model{move(Model)},
        Marka{move(Marka)},
        RokProdukcji{RokProdukcji},
        Przebieg{Przebieg},
        CenaWyjsciowa{0},
        CenaKoncowa{0}
{
}

void Samochod::ustawianieCenyWyjsciowej(unsigned cena) {
    CenaWyjsciowa = cena;
}
int Samochod::ObecnyRok() {
    time_t now = time(nullptr);
    struct tm  tstruct{};
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y", &tstruct);
    return atoi(buf);
}

void Samochod::obliczanieCenyKoncowej() {
    CenaKoncowa = CenaWyjsciowa - (Samochod::ObecnyRok() - RokProdukcji) * 10000 - 3 * Przebieg;
    if (CenaKoncowa < 0) {
        CenaKoncowa = 0;
    }
}
auto main() -> int {
    Samochod samochod1 = Samochod("Ford", "Mondeo", 2012, 230000);
    samochod1.ustawianieCenyWyjsciowej(60000);
    samochod1.obliczanieCenyKoncowej();
    cout << samochod1.Opisy();
    cout << endl;
    cout << "cena koncowa: " << samochod1.CenaKoncowa;
    cout << endl;
    cout << endl;
    Samochod samochod2 = Samochod("BMW", "e36", 1999, 400000);
    samochod2.ustawianieCenyWyjsciowej(60000);
    samochod2.obliczanieCenyKoncowej();
    cout << samochod2.Opisy();
    cout << endl;
    cout << "cena koncowa: " << samochod2.CenaKoncowa;
    cout << endl;
    cout << endl;
    Samochod samochod3 = Samochod("Mclaren", "Senna", 2021, 12000);
    samochod3.ustawianieCenyWyjsciowej(13220000);
    samochod3.obliczanieCenyKoncowej();
    cout << samochod3.Opisy();
    cout << endl;
    cout << "cena koncowa: " << samochod3.CenaKoncowa;
}
