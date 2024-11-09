#include "Contact.hpp"
#include <iostream>
#include <string>
using namespace std;

Contact::Contact(string n, string p) : name(n), phone(p){}
Contact::Contact(string n, string p, string nn) : name(n), phone(p), nickname(nn){}

string Contact::getName()
{
    return name;
}

string Contact::getPhone()
{
    return phone;
}

string Contact::getNickname()
{
    return nickname;
}

bool Contact::getIsBookmarked()
{
    return isBookmarked;
}

void Contact::bookMark()
{
    isBookmarked = true;
    cout << "Contact "+ getName() + " bookmarked."  << endl;
}
