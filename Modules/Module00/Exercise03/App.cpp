#include <iostream>
#include <string>
#include "PhoneBook.hpp"

class App {
public:
    void execute() {
        cout << "Hello and welcome to the PhoneBook app" << endl;
        cout << "Let's start choosing a name for your PhoneBook" << endl;
        string pbName;
        cin >> pbName;

        PhoneBook pb(pbName);

        bool run = true;
        while(run){
            cout << "What you gonna do? (type the number)" << endl;
            cout << "1 - Add a new contact" << endl;
            cout << "2 - Search Contacts" << endl;
            cout << "3 - Remove Contact" << endl;
            cout << "4 - List bookmarked contacts" << endl;
            cout << "5 - Exit" << endl;

            string name;
            string phone;
            string nickname;

            int o;
            cin >> o;
            switch (o)
            {
                case 5:
                    cout << "Thank you." << endl;
                    run=false;
                    break;
                case 4:
                    pb.showBookmarkeds();
                    break;
                case 3:
                    cout << "Type the contact ID to remove" << endl;
                    int id;
                    cin >> id;
                    pb.remove(id);
                    break;
                case 2:
                    pb.search();
                    break;
                case 1:
                    cout << "Let's add a new contact! Please type the contact name: " << endl;
                    cin >> name;
                    cout << "Type the contact phone: " << endl;
                    cin >> phone;
                    cout << "Type the contact nickname: " << endl;
                    cin >> phone;
                    pb.add(name, phone, nickname);
                    break;
                default:
                    break;
            }
        }
        

    }
};

int main() {
    App app;
    app.execute();
    return 0;
}