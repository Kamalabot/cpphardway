#include <iostream>


int main(){
   
   constexpr bool condition {false};
    /**
     * constexpr bool is_debug = true;
     * In this case, the compiler will replace is_debug with
     * the value true at compile-time, and the resulting code
     * will contain the literal value true instead of the
     * variable is_debug.
     */
   if constexpr (condition){
       std::cout << "Condition is true" << std::endl;
   }else{
       std::cout << "Condition is false" << std::endl;
   }
    return 0;
}