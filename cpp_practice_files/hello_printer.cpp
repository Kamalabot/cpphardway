#include <iostream>

int main(){
    // comment is ignored by compiler
    /*This is 
    a multi-line commment*/
    int x;
    x = 5;
    int y = 6;
    std::cout << x << "\n"; 
    std::cout << y << "\n"; 
    std::cout << "adding x with y gives: " << x + y << std::endl; 
    std::cout << "This is integer returning main function" << std::endl;
    std::cout << "This is will be next line beckause of std::endl" << std::endl;
    return 0;
}