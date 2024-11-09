#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <deque>
#include "Contact.hpp"

using namespace std;

PhoneBook::PhoneBook(string n) : name(n){ wellCreated(); };

PhoneBook::PhoneBook(string n, string cname, string cphone): name(n){
        add(cname, cphone);
        wellCreated();
    }

    Contact PhoneBook::getContact(int id)
    {
        return contacts.at(id);
    }

    void PhoneBook::changeContact(int id, Contact contact)
    {
        contacts.at(id) = contact;
    }

    deque<Contact> PhoneBook::getContacts()
    {
        return contacts;
    }

    void PhoneBook::showContacts()
    {
        cout << "Your contacts: ";
        deque<Contact> contactsDeque = getContacts();
        for (size_t i = 0; i < contacts.size(); i++){
            cout << "ID: " << i << " -  Name: " << contacts[i].getName() << endl;
        } 
    }

    void PhoneBook::showContact(int idx)
    {
        Contact c = contacts.at(idx);
         cout << "ID: " << idx << endl;
         cout << "Name: " << c.getName() << endl;
         cout << "Phone: " << c.getPhone() << endl;
         cout << "Nickname: " << c.getNickname() << endl;
         cout << "Is Bookmarked?: " << c.getIsBookmarked() << endl;
    }

    void PhoneBook::add(string cname, string cphone) {
        Contact c(cname, cphone);
        contacts.push_back(c);
    }
    void PhoneBook::add(string cname, string cphone, string nickname) {
        Contact c(cname, cphone, nickname);
        contacts.push_back(c);
    }
    void PhoneBook::search() {

        showContacts();
  
        cout << "Insert the contact ID to display:";
        int id;
        cin >> id;

        if (id >= 0 && id < static_cast<int>(contacts.size())) {
            int opt;

            showContact(id);
            cout << "Do you want to bookmark the contact?" << endl;
            cout << "1 - Yes" << endl;
            cout << "2 - No" << endl;
            cin >> opt;

            if(opt == 1){
                bookmark(id);
            }
        } 
        else {
            cout << "Invalid ID. Please insert a value between 0 e " << contacts.size() - 1 << "." << endl;
        }

    }
    void PhoneBook::remove(int idx)
    {
        contacts.erase(contacts.begin() + idx);
        cout << "Contact removed!";
    }

    void PhoneBook::showBookmarkeds()
    {
        cout << "Your bookmarked contacts: ";
        deque<Contact> contactsDeque = getContacts();
        for (size_t i = 0; i < contacts.size(); i++){
            if (contacts[i].getIsBookmarked()){
                cout << "ID: " << i << " -  Name: " << contacts[i].getName() << endl;
            }     
        } 
    }

    void PhoneBook::bookmark(int idx)
    {
        Contact c = getContact(idx);
        c.bookMark();
        changeContact(idx, c);
    };

    void PhoneBook::wellCreated()
    {
        cout << "Your PhoneBook " + name + " was successfull created." << endl;
    }   




