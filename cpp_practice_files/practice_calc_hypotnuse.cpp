#include <iostream>
#include <cmath>
// https://cplusplus.com/reference/iolibrary/
int main() {
    using std::cout;
    using std::cin;
    double a;
    double b;
    double hypot;

    cout << "Value of A: ";
    cin >> a;

    cout << "Value of B: ";
    cin >> b;   

    hypot = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The value of hypotnuse is " << hypot;
    return 0;
}