//
// Created by tiger on 28.12.2021.
//

#include <iostream>
#include "Contact.h"
using namespace std;
Contact::Contact(int PhoneNumber, string nazwisko, int DialCount) :
        PhoneNumber{PhoneNumber},
        nazwisko{move(nazwisko)},
        DialCount{DialCount}
{
}

void Contact::List() {
    cout << "Numer telefonu: " << PhoneNumber << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Ilosc wykonanych polaczen: " << DialCount << endl;
}

int Contact::AskForPhoneNumber() const {
    return PhoneNumber;
}

void Contact::AddToDialCount() {
    DialCount++;
}

string Contact::GiveLastName() {
    return nazwisko;
}
