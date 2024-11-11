#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include "contact.h"
#include <deque>
using namespace std;

class ContactList
{
private:
    deque<Contact> contactList;

public:
    ContactList();
    ContactList(const ContactList &copyContactList);
    ContactList &operator=(const ContactList &copyContactList);
    ~ContactList();

    void addContact(Contact c);
    void removeContact(int idx);
    Contact searchContact(int idx);
};

#endif // CONTACTLIST_H
