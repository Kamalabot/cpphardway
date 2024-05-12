// File introduces arithemetic operators in c++

// precedence for the operators are 
// parenthesis
// Multiplication & Division
// Addition & Subtraction

#include <iostream>

using num_t = int;
using deci_t = double;

int main() {
    using std::cout;

    num_t macaroons = 26;
    num_t samosas = 15;

    // Additions
    // macaroons = macaroons + 1;  // each below operation will incremement
    // macaroons += 1;
    // macaroons++;

    // Subtraction
    macaroons = macaroons - 1;  // Each operation will subtract by 1
    macaroons -= 1;
    macaroons--;

    // Multiplication
    macaroons = macaroons * 5;
    macaroons *= 5;

    // Division
    macaroons = macaroons / 2;
    macaroons /= 2;  // The answer will be int, if the source is int

    samosas /= 2;
    deci_t rem_samosas;  // We can declare the new var that holds the reminder as double
    rem_samosas = samosas % 2;  // we cannot calculate reminder for doubles

    // cout << "you have " << macaroons << " macaroons";
    // cout << "you have " << samosas << " samosas";
    // cout << "you have " << rem_samosas << " remaining samosas";

    double masti = 57 + 2 - 3 * 16 / 16;
    double masti2 = 57 + 2 - 3 * 32 / 16;
    double masti3 = 57 + (2 - 3) * 32 / 16;
    
    cout << "You are having " << masti << " Masti Time\n";
    cout << "You are having " << masti2 << " Masti Time\n";
    cout << "You are having " << masti3 << " Masti Time\n";

}