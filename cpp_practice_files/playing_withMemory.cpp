// Every variable has a memory address
// Memory address can be located using & (address of operator)

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using uintaddr = unsigned long int;
// The memory address is having above type
// however not using the below function

void hex2dec(uintaddr hexval);
void swap(string x, string y);
void swapbyref(const string &x, const string &y);
// The addition of const to the parameters, renders 
// swap function erroneous. Remove it, and it will work
// This is example of const keyword, where the value of the 
// variable cannot be modified

int main() {
    /*
    int x = 25;
    std::string code = "Nice code";
    bool look = false;

    cout << "address of x is: " << &x << endl;
    cout << "address of code is: " << &code << endl;
    cout << "address of look is: " << &look<< endl;
    */
    /* converting hex to dec is done by multiplying digits with 
    powers of 16 starting with units place
    hex2dec(&code); // The procedure to pass the value and reference
    needs to be learnt in detail using swap functions */
    string x = "remarked";
    string y = "earmarked";

    cout << "address of x in main is: " << &x << endl;
    cout << "address of y in main is: " << &y << endl;

    swap(x, y);  // Here we are passing the values, basically copies of x and y
    
    cout << "Value of x: " << x << "\n";
    cout << "Value of y: " << y << "\n";

    swapbyref(x, y); // here we are passing by ref. How?? look at the definition
    cout << "The values will be switched this time \n";
    cout << "Value of x: " << x << "\n";
    cout << "Value of y: " << y << "\n";


}

void hex2dec(uintaddr hexval){
    cout << typeid(hexval).name();
}

void swap(string x, string y){
    string temp;
    cout << "address of x is: " << &x << endl;
    cout << "address of y is: " << &y << endl;
    temp = x;
    x = y;
    y = temp;
}

void swapbyref(const string &x, const string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;
}