#include "phonebook.h"
#include "./ui_phonebook.h"
#include "addcontact.h"

Phonebook::Phonebook(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Phonebook)
    , contactList()
{
    ui->setupUi(this);

    connect(ui->add, &QPushButton::clicked, this, &Phonebook::on_add_clicked);
}

Phonebook::~Phonebook()
{
    delete ui;
}

void Phonebook::on_add_clicked()
{
    addContact addContactDialog(this);
    addContactDialog.setModal(true);
    addContactDialog.exec();

    connect(&addContactDialog, &addContact::contactAdded, this, &Phonebook::add);

    addContactDialog.setModal(true);
    addContactDialog.exec();
}

void Phonebook::add(const QString &name, const QString &phone, const QString &email)
{

    Contact newContact(name.toStdString(), phone.toStdString(), email.toStdString());
    contactList.addContact(newContact);

}

