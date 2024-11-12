#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contactList.h"
#include <QWidget>
#include <deque>

QT_BEGIN_NAMESPACE
namespace Ui {
class Phonebook;
}
QT_END_NAMESPACE

class Phonebook : public QWidget
{
    Q_OBJECT

public:
    Phonebook(QWidget *parent = nullptr);
    ~Phonebook();

private slots:
    void on_add_clicked();
    void showContacts();

private:
    ContactList contactList;
    Ui::Phonebook *ui;
    void add(const QString &name, const QString &phone, const QString &email);

};
#endif // PHONEBOOK_H
