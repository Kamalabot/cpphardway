// dynamic memory : Memory that is allocated after the program
// is already compiled and running. Use the new operator to 
// allocate memory in heap rather than stack.
// Used when memory requirement is unknown ahead of time.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int *yourVar = NULL;
    
    yourVar = new int; // can we assign string?
    // yourVar = new std::string; // Nope cannot assign 

    *yourVar = 23;

    cout << "Address of the yourVar " << yourVar << endl;
    cout << "value of the yourVar " << *yourVar << endl; 
     
    delete yourVar; // delete the memory allocated, else it will leak 

    // Now work on the arrays
    int size;
    cout << "What is the number of grades? ";
    cin >> size;
    char *pGrades = NULL;
    pGrades = new char[size];

    for (int i = 0; i < size; i++){
        cout << "Enter the grade " << i + 1 << endl;
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++){
        cout << pGrades[i] << "\n";
    }
    delete[] pGrades;
}