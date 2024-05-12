#include <iostream>

int main(){
    using std::cout;
    using std::cin;

    // int grade = 50;

    // grade >= 60 ? cout << "You Pass" : cout << "You fail";
    
    int number = 9;
    number % 2 == 1 ? cout << "ODD\n" : cout << "EVEN\n";

    bool hungry = true;
    cout << (hungry ? "Yo..\n" : "No..\n");
}