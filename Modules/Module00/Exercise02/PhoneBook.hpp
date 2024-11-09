
#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>
#include <deque>
#include "Contact.hpp"
using namespace std;

class PhoneBook
{
private:
    string name;
    deque<Contact> contacts;

    void wellCreated();

public:
    PhoneBook(string n);
    PhoneBook(string n, string cname, string cphone);

    Contact getContact(int id);
    deque<Contact> getContacts();

    void changeContact(int id, Contact contact);

    void showContacts();
    void showContact(int idx);

    void add(string cname, string cphone);
    void add(string cname, string cphone, string nickname);

    void search();

    void remove(int idx);

    void showBookmarkeds();

    void bookmark(int idx);
};

#endif