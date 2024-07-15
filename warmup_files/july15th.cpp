#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int> swap_num(int num1, int num2);
void swap_numr(int& num1, int& num2);
void swap_nump(int* num1, int* num2);

int main(){

    int tGta = 5;
    int* pTgt = &tGta;
    int &rTgt = tGta;

    cout << "Data in tGta: " << tGta << endl;
    cout << "pointer address pointing: " << pTgt << endl;
    cout << "Refererence data is 5: " << rTgt << endl;
    cout << "Refererence is: " << &rTgt << endl;

    // changing values with different ways
    *pTgt = 65; // only after dereferencing the pointer 
    cout << "Data in tGta after &pTgt = 65: " << tGta << endl;
    cout << "pointer address pointing: " << pTgt << endl;
     
    // changing values with different ways
    rTgt = 98; // rTgt and tGta will be same
    cout << " rTgt and tGta will be same " << rTgt << endl;
    cout << "Refererence data is 5: " << rTgt << endl;
    cout << "Refererence is: " << &rTgt << endl;

    int a2 = 56;
    int b6 = 52;

    cout << "b6 before regular swap" << b6 << endl; 
    cout << "a2 before regular swap" << a2 << endl; 
    int tb1, tb2; 
    tie(tb1, tb2) = swap_num(a2, b6);

    cout << "first elem: " <<  tb2 << endl; 
    cout << "second elem: " <<  tb1 << endl; 

    swap_numr(a2, b6);

    cout << "first elem: " <<  a2 << endl; 
    cout << "second elem: " <<  b6 << endl; 

    swap_nump(&a2, &b6);

    cout << "first elem: " <<  a2 << endl; 
    cout << "second elem: " <<  b6 << endl;

}

// lets move to functions
tuple<int, int> swap_num(int num1, int num2){
    // Swapping numbers is fine
    // how to return the numbers
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    // will this work?
    // if we use the tie and tuple functions
    return tuple(num1, num2);
}
// passing by reference
void swap_numr(int& num1, int& num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

// passing by pointers 
void swap_nump(int* num1, int* num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
