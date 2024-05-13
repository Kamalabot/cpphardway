// File introduces advanced functions topics like multi-version function
// with different signature.

#include <iostream>

void tellName();
void tellName(std::string godName);
// introducing local and global variables
void printNum(int myNum);
void globalPrint();

int myNum = 5;

int main(){
    /*
    tellName();
    tellName("Mario");
    */
    int myNum = 1;  // This also looks like local!!! 
    printNum(521);
    globalPrint();
    // std::cout << "My Num is " << myNum;
    std::cout << "My Num in main is " << ::myNum << std::endl;
    return 0;
}

void tellName(){
    std::cout << "The Name is Thor god\n";
}

void tellName(std::string godName){
    std::cout << "The Name is " << godName << "\n";
}

void printNum(int myNum){ // myNum here is local
    std::cout << "The value is " << myNum << std::endl;
}

void globalPrint(){
    std::cout << "The value is " << myNum;
    // This is expected to print 5
}