#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int *p;
    int x = 2;
    *p = &x; // this will error out.
    // p = &x; // this is the correct method.
    cout << "Pointer address data: " << p << endl;
    cout << "Pointer dereference value data: " << *p << endl;
}