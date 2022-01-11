//
// Created by tiger on 28.12.2021.
//

#ifndef UNTITLED28_PHONEBOOK_H
#define UNTITLED28_PHONEBOOK_H
#include <vector>
#include "Contact.h"
#ifndef KSIAZKA_KONTAKTOW_H
#define KSIAZKA_KONTAKTOW_H
using namespace std;
class PhoneBook {
public:
    vector<Contact> contacts;
    static void Menu();
    void ContactList();
    bool SearchFor(int PhoneNumber, Contact& contact);
    void AddContact(int phoneNumber, string nazwisko);
    bool DeleteContact(int phoneNumber);
    bool Dial(const string& nazwisko);
};
#endif
#endif
