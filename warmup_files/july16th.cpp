#include <iostream>

using namespace std;

int main(){
    double tgt = 25.7;
    double& rtgt = tgt;
    // reference just points at the variable
    double* ptgt = &tgt;
    // while the pointer needs to point at the reference
    cout << "Target is: " << tgt << endl;
    cout << "Reference of Target is: " << rtgt << endl;
    cout << "Reference of Target is: " << rtgt << endl;
    cout << "Lets work with char a bit: " << endl;
    char x = 'x';
    cout << "Char in x is : " << x << endl;
    char* px = &x; 
    cout << "Addr of x variable is: " << px << endl;
    cout << "Addr of tgt variable is: " << ptgt << endl;
    cout << "Using Addr of x variable to get at x: " << *px << endl;
    cout << "Lets get the size of char x " << sizeof(x) << endl;
    cout << "Lets get the address of nearest mem location to x: " << px + 1 << endl;
    cout << "Lets get the size of double tgt " << sizeof(tgt) << endl;
    cout << "Lets try to deref the nearest mem, and observe: " << *(px + 1) << endl; 
    // need to understand why deref returned 3 ??
    cout << "Lets try to deref the nearest mem of tgt: " << *(ptgt + 8) << endl; 
    return 0;
}