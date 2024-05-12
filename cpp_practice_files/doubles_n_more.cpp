#include <iostream>

int main(){
    //Introducing double
    int age = 11;
    int year = 2025;
    int temperature = 5.8;

    // std::cout << "The age is " << age << "\n";
    // std::cout << "The year is " << year << "\n";
    // std::cout << "The temperature is " << temperature << "\n";
    // temperature will not print with the decimal values.

    double rice = 66.7;
    double flour = 87.8;

    // std::cout << "The price of rice is " << rice << std::endl; 
    // std::cout << "The price of flour is " << flour << std::endl; 

    char garden = 'S';
    char plant = 'I';
    // char ic = 'IC';  // Will throw WMultichar error that overflow in coversion
    char ic = 'I';  // Will throw WMultichar error that overflow in coversion

    // std::cout << "The garden is " << garden << std::endl;
    // std::cout << "The plant is " << plant << std::endl;
    // std::cout << "The IC is " << ic << std::endl;

    bool teacher = true;  // this will print out as 1
    bool student = false;  // this will print out as 0
    bool sales = false;

    std::cout << teacher;
    std::cout << student;
    std::cout << sales;

    // Introducing strings, a sequence of characters representing text
    std::string name = "SuperMan";
    std::string user = "Super";
    std::string address = "Avenue Complex, 12th Floor, 5th Building";

    std::cout << name;
    std::cout << user;

    std::cout << "Where do you live? " << "I live at " << address;

    return 0;
}