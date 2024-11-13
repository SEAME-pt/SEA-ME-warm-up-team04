#include "ContactList.h"
#include <stdexcept>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

ContactList::ContactList() {
    loadFromFile("contacts.txt");
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

deque<Contact> ContactList::getContacts(){
    loadFromFile("contacts.txt");
    return contactList;
}

void ContactList::addContact(Contact c) {
    contactList.push_back(c);
    saveToFile("contacts.txt");
}

void ContactList::removeContact(int idx) {
    if (idx < 0 || idx >= contactList.size()) {
        throw std::out_of_range("Invalid index");
    }
    contactList.erase(contactList.begin() + idx);
    saveToFile("contacts.txt");
}

Contact ContactList::searchContact(int idx) {
    if (idx < 0 || idx >= contactList.size()) {
        throw std::out_of_range("Index Invalid");
    }
    return contactList.at(idx);
}

int ContactList::getLastIndex(){
    return contactList.size()+1;
};

void ContactList::saveToFile(const QString &filename) const {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Cannot open file for writing.");
        return;
    }
    QTextStream out(&file);
    for (Contact contact : contactList) {
        out << QString::fromStdString(contact.getName()) << ","
            << QString::fromStdString(contact.getPhone()) << ","
            << QString::fromStdString(contact.getEmail()) << ","
            << (contact.getIsBookmarked() ? "1" : "0") << "\n";
    }

    file.close();
}

void ContactList::loadFromFile(const QString &filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "Error", "Cannot open file for reading.");
        return;
    }

    QTextStream in(&file);
    contactList.clear();

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if (fields.size() == 4) {
            QString name = fields[0];
            QString phone = fields[1];
            QString email = fields[2];
            bool isBookmarked = (fields[3] == "1");

            Contact contact(name.toStdString(), phone.toStdString(), email.toStdString());
            if (isBookmarked) {
                contact.bookMark();
            }
            contactList.push_back(contact);
        }
    }

    file.close();
}

