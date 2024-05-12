#include <iostream>

int main(){
    for (int i = 1; i <= 15; i+=2){
        std::cout << i << std::endl;
    }
    std::cout << "Happy new year...\n";
    for (int i = 10; i > 0; i-=2){
        std::cout << i << std::endl;
    }
    for (int i = 50; i < 100; i+=5){
        if (i > 65){
            std::cout << "Its above 65 \n" << i << std::endl;
        }
        else {
            std::cout << "Its fine \n" << i << std::endl;
        }
    }
    for (int i = 10; i > 0; i-=2){
        for (int j = 20; j > 0; j -= 5){
            std::cout << "J value: " << j << std::endl;
        }
        std::cout << "I value: " << i << std::endl;
    }
}