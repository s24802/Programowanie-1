#include <iostream>
using namespace std;
void game();
int Playernumber(char corc, char Playerchoice1);
void Board();
bool circleorcross(char corc, int position);
char Playerchoosecircleorcross();
bool Win(int &PlayerNmbr, char Player1choice);
int Playerchange(int Playernmbr);
char Playerchoice(int nrGracza, char Player1choice);
char tab[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int main() {
    Board();
    game();
}
int Playernumber(char corc, char Playerchoice1) {
    if (Playerchoice1 == corc)
    {
        return 1;
    }
    return 2;
}
void Board() {
    for (int i = 0; i < 3; i++) {
        cout << tab[i][0] << "|" << tab[i][1] << "|" << tab[i][2] << endl;
        if (i != 2) {
            cout << "-----" << endl;
        } else {
            cout << endl << endl;
        }
    }
}
bool circleorcross(char corc, int position) {
    int column=0;
    int line=0;
    if (position <= 3) {
        line = 0;
        column = position - 1;
    } else if (position <= 6) {
        line = 1;
        column = position - 4;
    } else if (position <= 9) {
        line = 2;
        column = position - 7;
    }
    int PositionNumber = tab[line][column] - '0';
    if (PositionNumber >= 1 && PositionNumber <= 9) {
        tab[line][column] = corc;
        return true;
    }
    return false;
}
char Playerchoosecircleorcross() {
    int choice = 0;
    char Player1choice;
    while (true) {
        cout << "Gracz pierwszy: Wybierz znak wpisujac 1 lub 2: " << endl;
        cout << " 1 = O" << endl;
        cout << " 2 = X" << endl;
        cin >> choice;
        if (choice < 1 || choice > 2) {
            cout << "Wprowadz 1 lub 2" << endl;
            cout << endl;
            continue;
        }
        break;
    }
    if (choice == 1) {
        Player1choice = 'O';
    } else {
        Player1choice = 'X';
    }
    return Player1choice;
}

void game() {
    int position;
    int PlayerNow=1;
    int Winnernmbr = 0;
    char Player1choice = Playerchoosecircleorcross();
    for (int i = 0; i < 9; i++) {
        while (true) {
            cout << "Graczu nr" << PlayerNow << " podaj swoj ruch " << ": ";
            cin >> position;
            if (position < 0 || position > 9) {
                cout << "Wybierz liczbe od 1-9" << endl;
                continue;
            }
            if (!circleorcross(Playerchoice(PlayerNow, Player1choice), position)) {
                cout << "Twój przeciwnik zajal ta pozycje" << endl;
                continue;
            }
            break;
        }
        Board();
        if (Win(Winnernmbr, Player1choice)) {
            cout << "Gracz " << Winnernmbr << " wygral! "<< endl;

            exit(0);
        }
        PlayerNow = Playerchange(PlayerNow);
    }
    cout << "Remis" << endl;
}
bool Win(int &PlayerNmbr, char Player1choice) {
    char corc;

    for (int i = 0; i < 3; i++) {
        if (tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2]) {
            corc = tab[i][0];
            PlayerNmbr = Playernumber(corc, Player1choice);
            return true;
        }
        if (tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i]) {
            corc = tab[0][i];
            PlayerNmbr = Playernumber(corc, Player1choice);
            return true;
        }
    }
    if (tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2]) {
        corc = tab[0][0];
        PlayerNmbr = Playernumber(corc, Player1choice);
        return true;
    }
    if (tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0]) {
        corc = tab[0][2];
        PlayerNmbr = Playernumber(corc, Player1choice);
        return true;
    }
    return false;
}
char Playerchoice(int PlayerNmber, char Player1choice) {
    if (PlayerNmbr == 1) {
        return Player1choice;
    }
    if (Player1choice == 'O') {
        return 'X';
    } else {
        return 'O';
    }
}
int Playerchange(int Playernmbr) {
    if (Playernmbr == 1) {
        return 2;
    }
    return 1;
}
