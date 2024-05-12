#include <iostream>

int main(){
    using std::cout;
    using std::cin;

    int dayofweek;
    cout << "Which day are you thinking about?";
    cin >> dayofweek;

    switch (dayofweek)
    {
        case 1:
            cout << "This is awesome day";
            break;
        case 2:
            cout << "The day looks blue"; 
            break;
        case 3:
            cout << "Turning around slowly";
            break;
        case 4:
            cout << "Thor is having a field day";
            break;
        case 5:
            cout << "Things are looking good.";
            break;
        case 6:
            cout << "Day of light";
            break;
        case 7:
            cout << "Saturday is start";
            break;
        default:
            cout << "There is a lot numbers, I can see.";
            break;
    }
}