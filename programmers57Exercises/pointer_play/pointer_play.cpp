#include <iostream>

using namespace std;

int main(){
    string twt = "cellphone";
    int bkCnt = 165;
    int data[5];
    int *aList = data; 

    string *pTweet = &twt;
    // When assigning the dereferencing is used
    int *pbkCnt = &bkCnt;

    cout << twt << "Is having the variable... " << endl;
    cout << *pTweet << "This is dereferenced " << endl;

    cout << pTweet << "Is containing address... " << endl;
    cout << pbkCnt << "This is containing address " << endl;

    cout << aList << " Address of the array starting " << endl;
    cout << "Filling up the array " << endl;
    data[0] = 56;
    for(int x = 1; x < 5; x++){
        data[x] = data[x-1] + bkCnt + 5;
    }
    cout << " Array is filled up and lets get the values" << endl;
    cout << " First element address is dereferenced " << *aList << endl;
    cout << " The address from *(aList + sizeof(int)) is " << aList + sizeof(int) << endl; 
    cout << " Second element address is dereferenced with *(aList + sizeof(int)) " << *(aList + sizeof(int)) << endl; 
    cout << " Second element address is dereferenced with *(aList + 1) " << *(aList + 1) << endl; 
    cout << " Second element address (aList + 1) " << aList + 1 << endl; 
    cout << "Modifying the value in address (aList + 1) " << aList + 1 << endl; 
    *(aList + 1) = 257; // dereference and assign
    cout << " Second element at *(aList + 1) after modification " << *(aList + 1) << endl; 

    // cout << " What is size of int: " << sizeof(int) << endl; 
    // cout << " Element accessed with index 0 " << data[0] << endl; 
    cout << " Element accessed with index 1 " << data[1] << endl; 
    // cout << " Element accessed with index 2 " << data[2] << endl; 
    // cout << " Element accessed with index 3 " << data[3] << endl; 
    // cout << " Element accessed with index 4 " << data[4] << endl; 
    cout << "Checking out the entire array by calling data: " << data << endl;
    cout << "The above will be a mem address, arry var is a pointer: " << endl;
    cout << "Try deref the arry var: " << *data << endl;
}