#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2,
            wednesday = 4, thursday = 5, friday = 6,
            saturday = 7}; // observe the Day definition has no assignment
enum Makes {honda, hyundai, toyota, maruti}; // default values are 0, 1, 2, ...
enum Caps {csk = 25, hun = 85, mar = 75, tru = 15}; // Can be paired with any number

int main() {
// enums = user defined datatype that consists of 
// paired named-integer constants. Great if you have 
// potential options.
// Usage of enum is bit confusing...
    Day today = sunday;

    std::cout << today; 
    int daynum;
    std::cout << "Select a new day number (0 - 6) ";
    std::cin >> daynum;  // you see the choice selector is different from created enum
    // how the daynum will link with the enum??
    switch (daynum)  // the switch is again different from created enum
    {
    case sunday: std::cout << "Awesome day";
                break;
    case monday: std::cout << "Start day";
                break;
    case tuesday: std::cout << "Twisting day";
                break;
    case wednesday: std::cout << "Hump day";
                break;
    case thursday: std::cout << "Thump day";
                break;
    case friday: std::cout << "Delicious day";
                break;
    case saturday: std::cout << "sitting out day";
                break;
    default: std::cout << "Doesn't match";
        break;
    }

}