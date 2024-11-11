#ifndef CONTACT_H
#define CONTACT_H

#include <string>
using namespace std;

class Contact
{
private:
    string name;
    string phone;
    string email;
    bool isBookmarked = false;

public:
    Contact(string n, string p, string e);

    Contact(const Contact &copyContact);
    Contact &operator=(const Contact &copyContact);
    ~Contact();

    string getName();
    string getPhone();
    string getEmail();
    bool getIsBookmarked();
    void bookMark();
};

#endif // CONTACT_H
