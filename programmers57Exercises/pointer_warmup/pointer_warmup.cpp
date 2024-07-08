#include <iostream>

using namespace std;

int main(){
    cout << "Okay, my syntax works..." << endl;
    int pTgt = 120; // this variable is ptr target
    int *pStr = &pTgt; // address of pTgt is stored in pStr
    int &addrTgt = pTgt; // in this way the address can be assigned
    // addrTgt variable cannot be used to access the data it is referencing

    cout << "Lets print out whats there inside" << endl;
    cout << "Inside the pTgt we have : " << pTgt << endl;
    cout << "Inside the pStr we have : " << pStr << endl;
    cout << "Inside the &addrTgt we have : " << &addrTgt << endl;

    cout << "Lets now work on the double pointers first" << endl;

    int **dPstr = &pStr; // stores the address of ptr

    cout << "Print the address of the pStr " << dPstr << endl;

    char c1 = 'n';

    cout << "Char C1 is: " << c1 << endl;

    char c2[3] = {'x', 'f', 'd'};

    int i1[3] = {8, 2}; // giving lesser elems still works

    cout << "Array c2 address is " << &c2 << endl;

    cout << "So if I have to access the data @ c2 position 2 " << *(c2 + 2) << endl;
    // pointer arithmetic works 1 byte at a time. But why?
    
    // How to access the bits if required ?

    string nat = "Nature";

    cout << "Lets get the address of string nat: " << &nat << endl; 

    cout << "String manipulation with indexing " << nat[1] << endl;
    
    cout << "So if I type cast string to char array" << endl;

}