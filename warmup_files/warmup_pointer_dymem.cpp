// recollecting the pointer usage and dynamic memory usage

#include <iostream>
#include <istream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    // int *p; // declaration
    // int x = 25;
    // p = &x;  // assigning, no * for ptr, but & for the value

    // cout << p << " Is the address \n";
    // cout << *p << " is the value at above address"; // dereferencing with *

    // int newarray[] = {1, 5, 7, 9, 6};

    // cout << newarray << " Is the address where the array is starting \n";
    // cout << *newarray << " Dereferencing will show the first element \n";
    // cout << *newarray + sizeof(int) << " Adding the size of type will show the next element \n";

    // adding dynamic memory 

    int *yourdl = NULL;

    yourdl = new int;

    *yourdl = 10;

    cout << yourdl << " This must be adress \n";
    cout << *yourdl << " This must be value \n";

    delete yourdl; // after usage, delete the memory used

    int *x = NULL;
    int *y = NULL;
    int *c;

    int vecsize = 10;

    x = new int[vecsize];
    y = new int[vecsize];
    c = new int[vecsize];

    for(int dx = 1; dx < vecsize; dx++){
        x[dx] = rand() % 9;
        cout << "X " << x[dx] << endl;
        y[dx] = rand() % 9;
        cout << "Y " << y[dx] << endl;
    }
    
    for(int dx = 1; dx < vecsize; dx++){
        c[dx] = x[dx] + y[dx];
        cout << "C " << c[dx] << endl;
    }

    delete x, y, c;

}