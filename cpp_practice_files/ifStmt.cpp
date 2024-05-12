#include <iostream>

int main(){
    using std::cin;
    using std::cout;

    int yourAge;

    while (true){
        cout << "Provide your Age: ";
        cin >> yourAge;

        if (yourAge >= 18){
            cout << "I am allowed!!!";
            // break;
        }
        else if(yourAge < 0){
            cout << "You are from a diff dimension??";
            // break;
        }
        else if(yourAge > 100){
            cout << "Woah, you must know everything";
            // break;
        }
        else{
            cout << "Oh.. Not allowed...";
            break;
        }
    }
}