#include <iostream>
#include <istream>
#include <string>

using namespace std;

double eauclaire(double price);
double dunn(double price);
double commontax(double price);

int main(){
    cout << "We will collect taxes at County levels!!!" << endl;
    string state, county;
    double amount, tax, total;
    cout << "Wht is your purchase amount?";
    cin >> amount;

    // cout << "which state do you live?" << endl;
    cout << "which state do you live?";
    cin >> state;

    if (state == "Wisconsin" || state == "wisconsin"){
        cout << "You have to provide your county:";
        // getline(cin, county);
        cin >> county;
        if (county == "eauclaire"){
            cout << "Tax is: " << amount * 0.005 << endl;
            cout << "Total amount is: " << eauclaire(amount) << endl;
        }else if (county == "dunn"){
            cout << "Tax is: " << amount * 0.004 << endl;
            cout << "Total amount is: " << dunn(amount) << endl;
        }
    } else {
        cout << "Total amount is: " << commontax(amount) << endl;
    }

}
double commontax(double price){
    return price * (1 + 0.08);
}
double eauclaire(double price){
    return price * (1 + 0.005);
}

double dunn(double price){
    return price * (1 + 0.004);
}

int MAC(int x, int y, int &sum){
    return sum + x * y;
}