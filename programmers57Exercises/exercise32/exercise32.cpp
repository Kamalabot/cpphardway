#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(int argc, char **argv){
    int level;
    cout << "Provide the difficulty level: ";
    cin >> level;
    srand(time(0));

    int randg;
    // https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
    if (level == 1){
        // randg = (rand() % (10 - 0 + 1)) + 1;
        randg = rand() % 10;
        for (int i = 0; i < 5; i++){
            cout << rand() % 10 << endl;
        }
        cout << "Random number between 0 and 10 is chosen" << endl;
    } else if (level == 2){
        randg = rand() % 100;
        for (int i = 0; i < 5; i++){
            cout << rand() % 100 << endl;
        }
        cout << "Random number between 0 and 100 is chosen" << endl;
    } else {
        randg = rand() % 1000;
        for (int i = 0; i < 5; i++){
            cout << rand() % 1000 << endl;
        }
        cout << "Random number between 0 and 1000 is chosen" << endl;
    }

    cout << "Random number chosen is: " << randg;
    int guessnum = 0;
    int yourguess;

    while (true){
        cout << "Make you guess :";
        cin >> yourguess;

        if (yourguess > randg){
            guessnum += 1;
            cout << "Too high..." << "Your Guess Num: " << guessnum << endl;
        } else if(yourguess < randg) {
            guessnum += 1;
            cout << "Too low..."  << "Your Guess Num: " << guessnum << endl;
        } else {
            cout << "Gotcha.. its " << randg << endl;
            if (guessnum == 1) {
                cout << "you are mind reader." << endl;
            } else if (guessnum > 1 && guessnum < 4) {
                cout << "Impressive" << endl;
            } else if (guessnum >= 4 && guessnum < 6) {
                cout << "Can do better" << endl;
            } else {
                cout << "Better luck next time" << endl;
            }
            break;
        }
    }
    return 0;
}