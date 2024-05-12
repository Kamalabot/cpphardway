#include <iostream>

int main(){
    const double PI = 3.1425;  // const values cannot be changed
    // PI = 567.6;  // will throw error that const cannot be assigned new variable
    const int LIGHT = 299568;
    const double AREA = 55.62; 
    int rad = 56;
    double circumference = rad * PI * 2;
    std::cout << "The constants are " << PI, LIGHT, AREA;
    std::cout << "The circumference is " << circumference;
}