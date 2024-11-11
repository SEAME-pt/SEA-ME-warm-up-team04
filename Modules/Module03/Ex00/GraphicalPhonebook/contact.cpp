#include "Contact.h"

Contact::Contact(string n, string p, string e)
    : name(n), phone(p), email(e), isBookmarked(false) {}


Contact::Contact(const Contact &copyContact)
    : name(copyContact.name), phone(copyContact.phone), email(copyContact.email), isBookmarked(copyContact.isBookmarked) {}


Contact &Contact::operator=(const Contact &copyContact) {
    if (this != &copyContact) {
        name = copyContact.name;
        phone = copyContact.phone;
        email = copyContact.email;
        isBookmarked = copyContact.isBookmarked;
    }
    return *this;
}


Contact::~Contact() {}

string Contact::getName() {
    return name;
}

string Contact::getPhone() {
    return phone;
}

string Contact::getEmail() {
    return email;
}

bool Contact::getIsBookmarked() {
    return isBookmarked;
}

void Contact::bookMark() {
    isBookmarked = true;
}
