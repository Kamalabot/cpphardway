#include <iostream>

int main(){
    using std::string;
    using std::cout;
    using std::cin;

    string makes[] = {"honda", "maruti", "hyundai"};

    cout << makes << "\n";  // will provide the address
    cout << makes[0] << "\n";
    cout << makes[1] << "\n";
    cout << makes[2] << "\n";

    double prices[] = {76.5, 32.8, 51.6};

    cout << prices[0] << "\n"; 
    cout << prices[1] << "\n"; 
    cout << prices[2] << "\n"; 

    cout << sizeof(prices) << "bytes\n";
    cout << "Size of Double " << sizeof(double) << "bytes\n";
    cout << "Size of Strings " << sizeof(string) << "bytes\n";
}