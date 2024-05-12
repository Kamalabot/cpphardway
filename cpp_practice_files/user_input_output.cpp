#include <iostream>
#include <string>
#include <istream>

int main() {
    using std::cin;
    using std::cout;
    using std::ws;  // ws is white space characters

    std::string name;
    int age;

    cout << "What is your name" ;  // this will take only strings without spaces
    // cin >> name; 
    std::getline(cin >> ws, name);  // getline required additional two headers to be included

    cout << "Your age? " ;
    cin >> age;

    cout << "You are " << name << "and your are " << age << "Years old.";
    return 0;
}
