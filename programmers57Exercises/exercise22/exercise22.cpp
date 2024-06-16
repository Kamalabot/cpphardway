#include <iostream>

using namespace std;

int main(int argc, char **argv){
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    if (a != b && a != c){
        if (a > b && a > c){
            cout << "largest is a: " << a << endl;
        } else if (b > a && b > c){
            cout << "largest is b: " << b << endl;
        } else {
            cout << "largest is c: " << c << endl;
        }
    } else {
        cout << "The numbers are same... exiting";
        return 0;
    }
    return 0;
}