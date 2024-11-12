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
    showContacts();
}

Phonebook::~Phonebook()
{
    delete ui;
}

void Phonebook::on_add_clicked()
{
    addContact addContactDialog(this);

    connect(&addContactDialog, &addContact::contactAdded, this, &Phonebook::add);

    addContactDialog.setModal(true);
    addContactDialog.exec();
}

void Phonebook::add(const QString &name, const QString &phone, const QString &email)
{

    Contact newContact(name.toStdString(), phone.toStdString(), email.toStdString());
    contactList.addContact(newContact);

     showContacts();
}

void Phonebook::showContacts(){
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setRowCount(contactList.getLastIndex()-1);

    int i = 0;
    for (Contact c : contactList.getContacts()) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(c.getName())));


        QPushButton *viewButton = new QPushButton("Details");
        connect(viewButton, &QPushButton::clicked, this, [=]() { contactList.searchContact(i); });
        ui->tableWidget->setCellWidget(i, 1, viewButton);

        QPushButton *removeButton = new QPushButton("Remove");
        connect(removeButton, &QPushButton::clicked, this, [=]() { contactList.removeContact(i); });
        ui->tableWidget->setCellWidget(i, 2, removeButton);

        i++;
    }

}


