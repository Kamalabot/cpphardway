#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char **argv){
    double year, rate;
    while (true){
        cout << "Provide the rate of return in number: ";
        cin >> rate;
        if (isalpha(rate)){
            cout << "Rate is invalid, recheck";
            break;
            // cin >> rate;
            // continue;
        } else if (rate <= 0){
            cout << "Rate has to be number, not alphabets";
            break;
            // cin >> rate;
            // continue;
        } else {
            cout << 72 / rate << " to double the intial investement" << endl;
            break;
        }
    }
    return 0;
}