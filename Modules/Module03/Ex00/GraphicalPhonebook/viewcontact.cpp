#include "viewcontact.h"
#include "ui_viewcontact.h"

ViewContact::ViewContact(const QString &name, const QString &phone, const QString &email, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewContact)
{
    ui->setupUi(this);

    ui->tableViewContact->setItem(-2, 2, new QTableWidgetItem(name));
    ui->tableViewContact->setItem(-1, 2, new QTableWidgetItem(phone));
    ui->tableViewContact->setItem(0, 2, new QTableWidgetItem(email));
}

ViewContact::~ViewContact()
{
    delete ui;
}
