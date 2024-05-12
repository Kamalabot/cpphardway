#include <iostream>
#include <istream>
#include <string>

int main(){
    // introduces couple of useful string methods
    using text = std::string;
    using std::cout;
    using std::cin;

//     text your_name;

    // while (your_name.length() < 5){
        // cout << "So what your name, it better be more than 5 chars? ";
        // cin >> your_name;
    // }

    // cout << "length of your name is: " << your_name.length() << std::endl;
    // cout << "I see, you are " << your_name << "\n";
    // cout << "Erase some chars " << your_name.erase(5, 7) << " how is that? \n";
    // cout << "Does your name have 'e'? " << your_name.find('e') << "So does it?";  // returned huge number, when char not present
    // cout << "What your username? \n";
    // std::getline(cin, your_name); 
    // text usermail = your_name.append("@gmail.com");
    // cout << "So your mail id :" << usermail;
    // text newuser = usermail.insert(5, "x"); // some of the places, the "" are mandatory. 
    // cout << "Xserted user: " << newuser;

    int coins = 50;

    do {
        coins -= 5;
        cout << "I have still " << coins << "left \n";
    } while (coins > 0);
}