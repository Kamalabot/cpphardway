#include <iostream>

using namespace std;

// struct stateTax{
    // string name;
    // double tax;
// };

int main(){
    double purchAmt, finalAmt;
    string state;

    cout << "Provide the puchase amount: ";
    cin >> purchAmt;

    cout << "Which state the item is purchased: ";
    cin >> state;

    cout << "The subtotal is: " << purchAmt << endl;
    // using only the if stmt
    if (state != "WI" || state != "wi"){
        cout << "The total is $" << purchAmt << endl;
        return 0;
    }
    cout << "The tax is $" << 0.55 << endl;
    cout << "The total is: $" << 0.55 + purchAmt << endl;
    return 0;
}