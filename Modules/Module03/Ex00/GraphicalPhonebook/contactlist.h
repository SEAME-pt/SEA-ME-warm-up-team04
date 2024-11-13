#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include "contact.h"
#include <deque>
#include <QTextStream>
using namespace std;

class ContactList
{
private:
    deque<Contact> contactList;
    void saveToFile(const QString &filename) const;
    void loadFromFile(const QString &filename);

public:
    ContactList();
    ContactList(const ContactList &copyContactList);
    ContactList &operator=(const ContactList &copyContactList);
    ~ContactList();

    void addContact(Contact c);
    deque<Contact> getContacts();
    void removeContact(int idx);
    Contact searchContact(int idx);
    int getLastIndex();
};

#endif // CONTACTLIST_H
