#ifndef ADDCONTACT_H
#define ADDCONTACT_H

#include <QDialog>

namespace Ui {
class addContact;
}

class addContact : public QDialog
{
    Q_OBJECT

public:
    explicit addContact(QWidget *parent = nullptr);
    ~addContact();

signals:
    void contactAdded(const QString &name, const QString &phone, const QString &mail);

private slots:
    void on_add_clicked();

private:
    Ui::addContact *ui;
};

#endif // ADDCONTACT_H
