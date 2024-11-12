#include "addcontact.h"
#include "ui_addcontact.h"

addContact::addContact(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addContact)
{
    ui->setupUi(this);
}

addContact::~addContact()
{
    delete ui;
}

void addContact::on_add_clicked()
{
    QString name = ui->name->text();
    QString phone = ui->phone->text();
    QString email = ui->mail->text();

    emit contactAdded(name, phone, email);

    close();
}
