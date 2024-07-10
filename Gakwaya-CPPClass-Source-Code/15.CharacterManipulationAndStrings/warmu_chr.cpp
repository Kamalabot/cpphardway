#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
    char newLine[] = {"Ther is a lot more happening"};
    cout << "This is newline called directly: " << newLine << endl;
    // now decaying char to pointer only when using const
    const char* newPtrChr = {"THis is constant sentences"};
    // char* newPtrChr1 = {"THis is constant sentences"}; forbidden
    cout << "This prints the value stored the pointer " << newPtrChr << endl;
    cout << "This prints the value stored in the pointer " << newPtrChr << endl;
    cout << "Where is the address: " << &newPtrChr << endl;
    cout << "What is at the address: " << *newPtrChr << endl; // 'T'
    // there is another way of assigning with char
    // const char* reciver = {'h', 'y', 'p', 'e'};
    const char* reciver = "hyped"; // forbidden by c++ compiler
    char* reciver1 = new char[56]; // this is acceptable

    // cannot concatenate string literals 
    string new1 = "hold";
    string new5 = "him";    

    cout << new1 + new5 << endl; // this is not a problem

    // cout << "Hold" + "him" << endl; // this should throw the code out
    // circumvent it by converting one of the literal into c++ string.
    cout << (string)"Hold" + "him" << endl; // this should throw the code out
    // what happens when initialising size_t x{}
    size_t x{};
    cout << "Whats in the x? 0... " << x << endl;
    return 0;
}