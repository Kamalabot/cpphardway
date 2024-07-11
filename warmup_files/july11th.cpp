#include <iostream>
using namespace std;

int main(){
    // create target variable
    double tgt = 56.67;
    // create ref for the tgt
    double& rTgt = tgt;
    // create pointer for the tgt
    double* pTgt = &tgt;
    // So only diff between ref and pointer is 
    // ref cannot be dereferenced, then why & 
    // where to use it
    cout << "Target tgt: " << tgt << endl;
    cout << "Ref of tgt is rTgt: " << rTgt << endl;
    cout << "Try deRef of tgt is rTgt: " << rTgt << endl;
    cout << "Try pointer of tgt is pTgt: " << pTgt << endl;
    cout << "deref the pTgt: " << *pTgt << endl;

    // ref of tgt, rTgt is still pointing at the tgt value when accessed
    rTgt = 78;
    cout << "Changed the value of tgt thru rTgt: " << tgt << endl;
    *pTgt = 97;
    cout << "Changed the value of tgt thru *pTgt: " << tgt << endl;

    char t1 = 't';
    cout << "This is a single char t1 : " << t1 << endl;

    char t2[] = {"This is a string of chars"};
    cout << "When I print t2, a string of chars: " << t2 << endl;
    cout << "When I print t2[5], see what happens: " << t2[5] << endl;

    cout << "Trying to deref *t2" << *t2 << endl;

    string t3 = "This is a real string";
    cout << "Printing a string t3: " << t3 << endl;
    cout << "Trying to use index in strings t3[6]: " << t3[6] << endl;
    /* try{
        cout << "Trying to deref & access *t3: " << *t3 << endl;
    }
    catch (char* excp){
        cout << "There is error: " << excp << endl;
    } Wont even compile*/ 

    cout << "Trying to create char array with pointers: " << endl;

    const char* t4 = "THis is a char array from pointers";

    cout << "Trying to access t4: " << t4 << endl;
    cout << "Trying to deref & access *t4: " << *t4 << endl; // T
}