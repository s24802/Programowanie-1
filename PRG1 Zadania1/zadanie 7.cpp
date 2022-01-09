#include <string>
#include <iostream>
using namespace std;
int count_chars(std::string slowo, char litera);
int main() {
string slowo;
char litera='a';
cout << "Wprowadz slowo: ";
cout << endl;
cin >> slowo;
cout << "Wprowadz litere ktorej ilosc wystapien chcesz sprawdzic:";
cin >> litera;
cout << endl;
cout << "Litera '" << litera << "' wystepuje " << count_chars(slowo, litera) << " razy w podanym slowie" << endl;
return 0;
}
int count_chars(string slowo, char litera) {
int ilosc_liter = 0;
for (int i = 0; i < slowo.length(); i++) {
    if (slowo[i] == litera) {
            ++ilosc_liter;
    }
}
    return ilosc_liter;
}
