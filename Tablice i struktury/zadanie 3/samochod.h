//
// Created by tiger on 29.12.2021.
//

#ifndef UNTITLED25_SAMOCHOD_H
#define UNTITLED25_SAMOCHOD_H
#include <string>
using namespace std;
struct Samochod {
    Samochod(string  Marka, string  Model, unsigned RokProdukcji, unsigned Przebieg);
    string Marka;
    string Model;
    unsigned RokProdukcji;
    unsigned Przebieg;
    unsigned CenaWyjsciowa;
    int CenaKoncowa;
    void obliczanieCenyKoncowej();
    void ustawianieCenyWyjsciowej(unsigned cena);
    [[nodiscard]] string Opisy() const;
private:
    static int ObecnyRok();
};
#endif
