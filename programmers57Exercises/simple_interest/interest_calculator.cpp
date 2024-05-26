#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main(){
    cout << "Calculating simple interest:" << endl;
    double principle, interest, year, amount;
    string interest_type;
    int times_compounded;
    cout << "Enter type of si / ci";
    cin >> interest_type;

    cout << "Enter the principal: ";
    cin >> principle; 

    cout << "Enter the interest as per-cent: ";
    cin >> interest;

    cout << "Enter the year of investment: ";
    cin >> year;

    if (interest_type == "si"){
        amount = principle * interest * year * 0.01; 
        cout <<"After " << year << " years at " << interest << "%, the investment will be worth $" << amount + principle;
    }
    else {
        cout << "We are calculating Compound Interest: " << endl;
        cout << "Number of times the interest is compounded: ";
        cin >> times_compounded;

        double nt = times_compounded * year;
        double power_comp = pow((1 + (interest * 0.01 / year)), nt);
        amount = principle * power_comp;  

        cout <<"After " << year << " years at " << interest << "%, the investment will be worth $" << amount + principle;
    }

}