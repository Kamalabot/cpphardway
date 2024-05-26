#include <iostream>

using namespace std;
// enums with floating /double are not allowed in CPP directly
// https://stackoverflow.com/questions/19408305/c-floating-point-enum
// enum currency {usd_to_inr = 83.5, inr_to_usd = 0.012};

class CurrencyPair{
    // if public kw is not there, then 
    // constructors & methods are inaccessible
    // double c1_2_c2; 
    // double c2_2_c1; 
    public:
        string c1_c2;
        double c1_2_c2; 
        double c2_2_c1; 
        CurrencyPair(string pairname, double c1c2, double c2c1){
            this->c1_c2 = pairname;
            this->c1_2_c2 = c1c2;
            this->c2_2_c1 = c2c1;
        };
        double convert_2_c2(double value){
            return value * this->c1_2_c2;
        };
        double convert_2_c1(double value){
            return value * this->c2_2_c1;
        };
        void updateConv(double c1c2, double c2c1){
            this->c1_2_c2 = c1c2;
            this->c2_2_c1 = c2c1;
        }
};

int main(){
    cout << "Currency Convertor in Action: " << endl;
    CurrencyPair usdinr("usd_inr", 83.5, 0.012); 

    double your_value;

    cout << "Enter the value you want to convert: ";
    cin >> your_value;

    char your_choice;

    cout << "You can convert from USD-2-INR and viceversa"<< endl;
    cout << "Choose between: \n 1) USD-2-INR \n 2) INR-2-USD" << endl;
    cin >> your_choice;

    if (your_choice == '1'){
        cout << "You will get " << usdinr.convert_2_c2(your_value) << " INR for " << your_value << "USD" << endl; 
    }
    else{
        cout << "You will get " << usdinr.convert_2_c1(your_value) << " USD for " << your_value << "INR" << endl; 
    }
}