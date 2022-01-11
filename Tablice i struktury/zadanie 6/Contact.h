//
// Created by tiger on 28.12.2021.
//

#ifndef UNTITLED28_CONTACT_H
#define UNTITLED28_CONTACT_H
#include <string>

#ifndef KONTAKT_H
#define KONTAKT_H
using namespace std;
struct Contact {
private:
    int PhoneNumber{};
    string nazwisko;
    int DialCount{};

public:
    Contact(int PhoneNumber, string nazwisko, int DialCount);
    Contact() = default;
    void List();
    [[nodiscard]] int AskForPhoneNumber() const;
    void AddToDialCount();
    string GiveLastName();
};
