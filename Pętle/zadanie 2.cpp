#include <iostream>
using namespace std;
auto ChTree(int height) -> void;
auto ChTree(int height) -> void {
    int width = 2 * height - 3;
    int emptys;
    int stars;
    for (int i = 0; i < height; i++) {
        if (i >= 1) {
            if (i == 1) {
                emptys = 1;
            } else {
                emptys = emptys + 2;
            }
            stars = (width - emptys) / 2;
        }
        int s = stars;
        int e = emptys;
        for (int j = 0; j < width; j++) {
            if (stars == 0) {
                cout << "*";
                continue;
            }
            if (s > 0) {
                cout << "*";
                s--;
            }
            if (s == 0) {
                if (e > 0) {
                    cout << " ";
                }
                e--;
                if (e == 0) {
                    s = stars;
                }
            }
        }
        cout << endl;
    }
}
auto main() -> int {
    int height;
    while (true) {
        cout << "Podaj wysokosc choinki, wieksza od 3: ";
        cout << endl;
        cin >> height;
        if (height >= 3) {
            break;
        }
        cout << "Wprowadziles liczbe 3 badz mniejsza" << endl;
    }
    ChTree(height);
    cout << endl;
    cout << "Oto twoja choinka!";
}
