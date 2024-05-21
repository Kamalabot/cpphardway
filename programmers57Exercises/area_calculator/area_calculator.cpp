#include <iostream>

using namespace std;

int main(){
    float room_length;
    float room_width;

    float area;
    while (true){
        cout << "What is the room length: " << endl;
        cin >> room_length;
        cout << "What is the room length: " << endl;
        cin >> room_width;
        if (room_length <= 0 || room_width <= 0) cout << "One of the dimensions are less than 0, not logical" << endl;
        else break;
    }
    area = room_length * room_width;

    if (room_length == room_width) cout << "Area of Square is: " << area << " SqUnits \n";
    else cout << "Area of rectangle is: " << area << " SqUnits \n";

    return 0;
}