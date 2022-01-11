#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int pierwsza(vector<int>& lcz);
bool pierwszacheck(int liczba, int &Iteracje);
int pierwsza(vector<int> &lcz) {
    int Iteracje = 0;
    for (int & i : lcz) {
        Iteracje++;
        i = 1;
    }
    lcz[0];
    lcz[1];
    int i = 2;
        while (i * i <= lcz.size()) {
            if (lcz[i] == 0) {
                Iteracje++;
                i++;
                continue;
            }
            int j = i * i;
                while (j < lcz.size()) {
                    lcz[j] = 0;
                    j += i;
                    Iteracje++;
                }
            i++;
        }
    return Iteracje;
}
bool pierwszacheck(int liczba, int &Iteracje) {
    int pierwiastek = (int) sqrt(liczba);
    vector<int> lcz(pierwiastek + 1);
    Iteracje = pierwsza(lcz);
    int i = 2;
        while (i < lcz.size()) {
            Iteracje++;
            if (lcz[i] == 1) {
                if (liczba % i == 0) {
                    return false;
                }
            }
            i++;
        }
    return true;
}
auto main() -> int {
    int liczba;
    int Iteracjie;
    cout << "Podaj liczbe: ";
    cout << endl;
    cin >> liczba;
    if (pierwszacheck(liczba, Iteracjie)) {
        cout << liczba << ": jest liczba pierwsza" << endl;
    } else {
        cout << liczba << ": nie jest liczba pierwsza" << endl;
    }
    cout << "Program wykonal iteracje: " << Iteracjie << " razy" << endl;
}
//program używa sita eratostenesa(jedyny sposób jakiego mogłem się doszukać)
