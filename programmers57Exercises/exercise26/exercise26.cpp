#include <iostream>
#include "utils.h"
using namespace std;


int main(int argc, char **argv){
    cout << "How many months to payout your card?, let find out " << endl;

    double balance, apr, monthly, months;

    cout << "What is your balance? ";
    cin >> balance;
    cout << "What is card APR? ";
    cin >> apr;
    apr = apr / 36500; // convert to daily rate
    cout << "Daily apr is " << apr << endl;
    cout << "How much you can pay per month? ";
    cin >> monthly;
    months = repayMonth(balance, apr, monthly);
    cout << "You will take " << months << " to payout the card." << endl; 

}