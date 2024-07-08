// file is a practice of comparing reference with pointers
// understanding how we can write through them is the targe

#include <iostream>

using namespace std;

int main(){
    int tgt = 25;
    int& rTgt = tgt;
    int* pTgt = &tgt;

    cout << "Integer value @ tgt " << tgt << endl; 
    cout << "Reference value of tgt " << rTgt << endl; 
    cout << "Printing reference of tgt " << &rTgt << endl; 
    cout << "Pointer value of tgt " << pTgt << endl; 
    cout << "Derefernce Pointer value of tgt " << *pTgt << endl; 

    // changing value thru pointer

    *pTgt = 56;

    cout << "Integer value @ tgt " << tgt << endl; 
    cout << "Reference value of tgt " << rTgt << endl; 
    cout << "Printing reference of tgt " << &rTgt << endl; 
    cout << "Pointer value of tgt " << pTgt << endl; 
    cout << "Derefernce Pointer value of tgt " << *pTgt << endl; 

    // changing value thru reference 

    rTgt = 557;

    cout << "Integer value @ tgt " << tgt << endl; 
    cout << "Reference value of tgt " << rTgt << endl; 
    cout << "Printing reference of tgt " << &rTgt << endl; 
    cout << "Pointer value of tgt " << pTgt << endl; 
    cout << "Derefernce Pointer value of tgt " << *pTgt << endl; 
    
    int new_val = 676;

    // rTgt = new_val; // here we are making reference to target a new variable
    
    rTgt = new_val; // here we are making reference to target a new variable
    cout << "Reference value of tgt " << rTgt << endl; 
    cout << "Printing reference of tgt " << &rTgt << endl; 

    // int& rTgt = new_val; // here we are making reference to new rtarget a new variable
    // above will throw error
    // only takes the variable's value. Not the address
    cout << "Integer value @ tgt " << tgt << endl; 
    cout << "Reference value of tgt " << rTgt << endl; 
    cout << "Printing reference of tgt " << &rTgt << endl; 
    cout << "Pointer value of tgt " << pTgt << endl; 
    cout << "Derefernce Pointer value of tgt " << *pTgt << endl; 

    return 0;

}