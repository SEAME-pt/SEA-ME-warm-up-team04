#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
using namespace std;

class Contact{
    private:
        string name;
        string phone;
        string nickname;
        bool isBookmarked = false;

    public:
        Contact(string n, string p);
        Contact(string n, string p, string nn);

        string getName();
        string getPhone();
        string getNickname();
        bool getIsBookmarked();
        void bookMark();
        
};

#endif