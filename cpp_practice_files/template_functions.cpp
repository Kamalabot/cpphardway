#include <iostream>

using std::cout;
using std::cin;
using std::string;

template <typename T>
T maxVal(T x, T b)
{
    return (x > b) ? x : b;
}

template <typename T, typename U>  // twice the template needs to be defined
auto minVal(T x, U b)
{
    return (x < b) ? x : b;
}
// Template can be used create as overloaded function as needed,
// each using different datatypes
int main(){
    int x = 25;
    int y = 7;

    cout << maxVal(x, y) << "\n"; // Code executes, without 
    cout << minVal(x, y) << "\n"; // Code executes, without 

    double za = 25.0;
    double ab = 7.0;

    cout << maxVal(za, ab) << "\n";
    cout << minVal(za, ab) << "\n";

    // char x = '2'; // if the same var name with diff data type
    //char y = '7'; // is it allowed? Nope, not allowed. Compile error
    
    char xi = '2';    
    char yi = '7'; 

    cout << maxVal(xi, yi) << "\n";
    cout << minVal(xi, yi) << "\n";

}

