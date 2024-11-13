#ifndef VIEWCONTACT_H
#define VIEWCONTACT_H

#include <QWidget>
#include <qdialog.h>

namespace Ui {
class ViewContact;
}

class ViewContact: public QDialog
{
    Q_OBJECT

    public:
        explicit ViewContact(const QString &name, const QString &phone, const QString &email, QWidget *parent = nullptr);
        ~ViewContact();

    private:
        Ui::ViewContact *ui;
};



#endif // VIEWCONTACT_H

