#include "ContactList.h"
#include <stdexcept>

ContactList::ContactList() {

}

ContactList::ContactList(const ContactList &copyContactList) {
    contactList = copyContactList.contactList;
}

ContactList &ContactList::operator=(const ContactList &copyContactList) {
    if (this != &copyContactList) {
        contactList = copyContactList.contactList;
    }
    return *this;
}

ContactList::~ContactList() {
}

void ContactList::addContact(Contact c) {
    contactList.push_back(c);
}

void ContactList::removeContact(int idx) {
    if (idx < 0 || idx >= contactList.size()) {
        throw std::out_of_range("Invalid index");
    }
    contactList.erase(contactList.begin() + idx);
}

Contact ContactList::searchContact(int idx) {
    if (idx < 0 || idx >= contactList.size()) {
        throw std::out_of_range("Index Invalid");
    }
    return contactList[idx];
}
