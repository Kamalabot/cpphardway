#include <iostream>
#include <cmath>

// https://cplusplus.com/reference/cmath/

int main() {
    using std::cout;
    using std::cin;

    int x = 3;
    int y = 5;
    double za = 5.25;
    int az;

    //az = std::max(x, y);
    // az = std::min(x, y);
    //az = pow(x, y);
    //az = abs(za);
    //az = sqrt(y);
    //az = floor(za);
    az = ceil(za);

    cout << "Value of z is " << az;
    return 0;
}