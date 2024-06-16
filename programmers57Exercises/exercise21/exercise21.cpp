#include <iostream>

using namespace std;

struct mapMonth{
    int idx;
    string month;
};

void getMonth(int month);

enum Months {January, February, March, April, May, June, July, August, September, October, November, December};

int main(int argc, char **argv){
    int month;
    // trying to think of structs as maps...  
    mapMonth january;
    january.idx = 1;
    january.month = "jan";
    
    mapMonth february;
    february.idx = 2;
    february.month = "feb";

    while (true) {
        cout << "Provide the month number between [1 - 12]: ";
        cin >> month;
        if (month < 0 || month > 12){
            cout << "You have entered wrong choice. Enter number between 1 - 12." << endl;
        } else if (month == 0) {
            cout << "0 will trigger exit... see you!!! " << endl; 
            break;
        } else {
            getMonth(month);
        } 
    }
    cout << "Exiting array based soln and entering switch based soln" << endl;
    while (true){
        cout << "Lets try again. Provide the month number between [1 - 12]:\n";
        cin >> month;  // int 1 to 12 will take care of itself
        month = month - 1; // reduce the given number by 1
        switch (month){
            case January: cout << "Its January \n"; break;
            case February: cout << "Its February \n"; break;
            case March: cout << "Its March \n"; break;
            case April: cout << "Its April \n"; break;
            case May: cout << "Its May \n"; break;
            case June: cout << "Its June \n"; break;
            case July: cout << "Its July \n"; break;
            case August: cout << "Its August \n"; break;
            case September: cout << "Its September \n"; break;
            case October: cout << "Its October \n"; break;
            case November: cout << "Its November \n"; break;
            case December: cout << "Its December \n"; break;
            default: cout << "Try between 1 and 12 \n"; return 0;
        }
    }
    return 0;
}

void getMonth(int month){
    string months[] = {"January", "February", "March",
                        "April", "May", "June", "July",
                        "August", "September", "October",
                        "November", "December"};
    cout << "The month you are looking for is: " << months[month - 1] << endl;
    // return 0;
}