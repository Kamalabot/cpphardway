#include <iostream>

int main(){
    srand(time(NULL));
    
    for (int x = 1; x < 5; x++){
        int num  = (rand() % 6) + 1;
        std::cout << "The random number under 6 is: " << num << "\n";
        int num1  = (rand() % 20) + 1;
        std::cout << "The random number under 20 is: " << num1 << "\n";
        int num2  = (rand() % 100) + 1;
        std::cout << "The random number under 100 is: " << num2 << "\n";

    }

}