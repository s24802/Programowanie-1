#include "PhoneBook.h"
#include <iostream>

using namespace std;
void PhoneBook::Menu()
{
    cout << "Symulator telefonu";
    cout << endl;
    cout << "Wybierz funkcje:";
    cout << endl;
    cout << "1 - Pokaz numery";
    cout << endl;
    cout << "2 - Wyszukaj dany numer";
    cout << endl;
    cout << "3 - Dodaj numer";
    cout << endl;
    cout << "4 - Usun numer";
    cout << endl;
    cout << "5 - Polacz";
    cout << endl;
    cout << "0 - Wyjdz";
    cout << endl;

}
void PhoneBook::ContactList() {
    for (Contact contact : contacts) {
        contact.List();
        cout << endl;
    }
}
bool PhoneBook::SearchFor(int PhoneNumber, Contact& contact) {
    for (auto & it : contacts) {

        if (it.AskForPhoneNumber() == PhoneNumber) {
            contact = it;
            return true;
        }
    }
    return false;
}
void PhoneBook::AddContact(int phoneNumber, string nazwisko) {
    Contact contact;
    if (SearchFor(phoneNumber, contact)) {
        cout << phoneNumber << " juz istnieje" << endl;
        return;
    }
    contact = Contact(phoneNumber, move(nazwisko), 0);
    contacts.push_back(contact);
}

bool PhoneBook::DeleteContact(int phoneNumber) {
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->AskForPhoneNumber() == phoneNumber) {
            contacts.erase(it);
            return true;
        }
    }
    return false;
}
bool PhoneBook::Dial(const string& nazwisko) {
    for (auto & it : contacts) {
        if (it.GiveLastName() == nazwisko) {
            it.AddToDialCount();
            return true;
        }
    }
    return false;
}
