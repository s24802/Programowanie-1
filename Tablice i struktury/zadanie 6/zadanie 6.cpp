#include "Contact.h"
#include "PhoneBook.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
    PhoneBook PhoneBook;
    Contact found;
    if (PhoneBook.SearchFor(669, found)) {
        cout << endl;
        found.List();
    }
    int choice;
    int PhoneNumber;
    string nazwisko;
    while (true) {
        PhoneBook::Menu();
        cin >> choice;

        switch (choice) {
            case 1: {
                PhoneBook.ContactList();
                cout << endl;
                break;
            }
            case 2: {
                cout << "Podaj numer: ";
                cin >> PhoneNumber;

                Contact kontakt;
                if (PhoneBook.SearchFor(PhoneNumber, kontakt)) {
                    cout << endl;
                    kontakt.List();
                } else {
                    cout << "Nie ma takiego numeru" << endl;
                }
                cout << endl;
                break;
            }
            case 3: {
                cout << "Podaj numer: ";
                cin >> PhoneNumber;
                cout << "Podaj nazwisko: ";
                cin >> nazwisko;
                PhoneBook.AddContact(PhoneNumber, nazwisko);
                cout << endl;
                break;
            }
            case 4: {
                cout << "Podaj numer: ";
                cin >> PhoneNumber;
                if (!PhoneBook.DeleteContact(PhoneNumber))
                {
                    cout << "Nie ma takiego numeru" << endl;
                    cout << endl;
                }
                break;
            }
            case 5: {
                cout << "Podaj nazwisko: ";
                cin >> nazwisko;
                PhoneBook.Dial(nazwisko);
                cout << endl;
                break;
            }

            case 0: {
                exit(0);
            }
            default: {
                cout << "Dostepne sa tylko opcje 0-5" << endl;
                cout << endl;
                break;
            }
        }
    }
}
