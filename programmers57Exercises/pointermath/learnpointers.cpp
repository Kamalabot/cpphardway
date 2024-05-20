#include <iostream>
#include <string.h>

using namespace std;
// Void pointers are pointers that point to a value that has no type 
// (and thus also an undetermined length and undetermined dereferencing properties)

int main(){
    int var = 10;

    int *ptr = &var;
    int *num; 
// reason we associate data type with a pointer is that it knows how many bytes the data 
// is stored in. When we increment a pointer, we increase the pointer by the size of the data type to which it points.
    *num = 20;  // assigning val to pointer is going to assign an address

    cout << "Pointer of var is ptr with addr : " << ptr << endl; 
    cout << "Pointer of 20 is num with addr : " << num << endl; 
    
    // cout << "What is the address of ptr num" << &num << endl;
    // when trying to access the num's address the entire code doesn't run, but it compiles.
    cout << "Address of ptr variable that contains address of var " << &var << endl; 
    // when ** is used? if we need the address of a pointer. 
    // why we might need the pointer address? 

    int **dbptr;

    dbptr = &ptr;

    cout << "Address of the pointer ptr is inside dbptr " << dbptr << endl;
    // Need to convert the pointer address to integer
    // int dbptr0 = stoul(dbptr, 0, 16);
    // if we want to updt the value of var by adding 20, we can do so 

    *ptr = *ptr + 20;

    cout << "Value of var after operation on ptr is : " << var << endl; 

    // Now do the same on the dbptr, and see what happen to ptr;

    dbptr += 1;

    cout << "Address dbptr is pointing elsewhere.. but where? " << dbptr << endl;

    // int dbptr1 = (int)dbptr;

    float data[] = {5.8f, 8.0f, 7.8f, 6.5f};

    cout << "what does data do? " << data << endl; // array's address
    cout << "what does *data deference to? " << *data << endl;
    cout << "what does *data + 1 deference to? " << *data + 1 << endl; // oh ooh, it increments the value on that location
    cout << "what does data + 1 do? " << data + 1 << endl; // it increments address it is pointing to 
    cout << "what does *(data + 1) do? " << *(data + 1) << endl; // 
    cout << "what does *(data + 2) do? " << *(data + 2) << endl; // 

    float** datum;

    // datum = &data; // you cannot do this way

}