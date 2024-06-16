#include <iostream>

using namespace std;

int main(int argc, char **argv){
    char c1, c2, c3, c4, c5, c6;
    cout << "Is the car silent when you turn the key?";
    cin >> c1;
    if (c1 == 'y' || c1 == 'Y'){
        cout << "Are the battery terminal corroded?";
        cin >> c2;
        if (c2 == 'Y' || c2 == 'y'){
            cout << "Clean terminal and try again.";
        } else {
            cout << "Replace cables and try again.";
        }
    } else {
        cout << "Does the car make clicking noise?";
        cin >> c3;
        if(c3 == 'y' || c3 == 'Y'){
            cout << "Replace the battery.";
        } else {
            cout << "Does the car crankup and die?";
            cin >> c4;
            if(c4 == 'y' || c4 == 'Y'){
                cout << "Check the spark plug";
            } else {
                cout << "Does the engine start and die?";
                cin >> c5;
                if(c5 == 'y' || c5 == 'Y'){
                    cout << "Check if the car has fuel injection?";
                    cin >> c6;
                    if (c6 == 'y' || c6 == 'Y'){
                        cout << "Check if choke is closing and opening";
                    } else {
                    cout << "Get it in for service";
                    }
                }
            }
        } 
    }
}