#include <iostream>

int main(){
    // && = check if two conditions are true
    // || = check either conditions are true
    // ! = check if two conditions are true
    int temp;

    std::cout << "Enter the temperature";
    std::cin >> temp;

    if (temp > 50 || temp > 70){
        std::cout << "Temperature is medium";
    }
    else if (temp < 30){
        std::cout << "Its lower than the usual";
    }
    else if (temp > 70){
        std::cout << "Much higher";
    }
    else if (temp > 10 && temp < 15){
        std::cout << "Thats were we want it";
    }
    else {
        std::cout << "Okay.. its weird";
    }

    return 0;
}