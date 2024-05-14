// Dereferencing a pointer not assigned an adress
// will lead to undefined behaviour

// Pointer holding a Null value, its called a nullptr
// nullptr is the keyword representing nullptr literal

// nullptr are used as place holders for checking if 
// a pointer has assigned address.

#include <iostream>

int main(){
    int *pointer = nullptr;

    int x = 123;

    // pointer = &x;  // assigned address to pointer var

    if (pointer == nullptr) {
        // don't dereference the nullptr, can lead to undefined behaviour
        std::cout << "See what happens"; 
        std::cout << *pointer << "See what happens"; // Nothing happens, just skips, with no error
        // 
    }
    else{
        std::cout << "The pointer is assigned value" << *pointer << "\n";
    }
}
