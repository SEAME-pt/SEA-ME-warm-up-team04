#include <iostream>
#include <string>
using namespace std;

string toUpper(string s, int len){

    char b;

    for (int i = 0; i < len; i++){
        b = s[i]; 
        b = toupper(b); 
    // b = to lower(b); //alternately 
        s[i] = b;    
    }

    return s;

}

string toLower(string s, int len){

    char b;

    for (int i = 0; i < len; i++){
        b = s[i]; 
        b = tolower(b); 
        s[i] = b;    
    }

    return s;
}


int main(int argc, char* argv[]) {

  if (argc < 3) {
    cout << "Please input: <up/down> <string>" << endl;
    return 1;
  }

  string command = argv[1];
  string s;
 
  for (int i = 2; i < argc; i++) {
    s += argv[i];
    if (i < argc - 1) s += " ";  
  }

  int len = s.size();

  if (command == "up") {
    cout << toUpper(s, len) << "\n";
  } 
  else if (command == "down") {
    cout << toLower(s, len) << "\n";
  } 
  else {
    cout << "Invalid Command, please input up or down\n";
  }

  return 0;  
}


