#include <iostream>

int main(){
   
   //Compile time error, more like spelling error 
   // that makes no difference to the code logic
   std::cout << "Hello Word!" << std::endl;

   //Run time error
   int value = 7/0;
   std::cout << "value : " << value << std::endl;

    return 0;
}