#include <iostream>
#include "painter.h"

using namespace std;

// There is a way to convert the enum to string, which involves mapping and 
// then writing a function to return the string

int main(){
    cout << "Ceiling Paint Gallon Calculator" << endl;
    int selected_shape;

    cout << "Enter the number of the room shape: " << endl;
    cout << "1) L-Shape \n2) Circular \n3) Rectangular \n4) Square " << endl;
    cin >> selected_shape;
    selected_shape = selected_shape - 1; // redude the shape by 1 to use in switch case
    switch (selected_shape)
    {
        // enum is just providing a better readability to the code.
    case Lshape: {
        int len, bdt, thick;
        cout << "Provide the length of the bend: ";
        cin >> len;
        cout << "Provide the breadth of the bend: ";
        cin >> bdt;
        cout << "Provide the bend thickness ";
        cin >> thick;
        cout << "Paint required in gallons: " << bend_area(len, bdt, thick) << endl; 
        break;
    }; 
    case Circular:{
        int rad;
        cout << "Provide the radius of wall";
        cin >> rad;
        cout << "Paint required in gallons" << circ_area(rad) << endl;
        break;
    }
    case Rectangular:{
        int len, bdt;
        cout << "Enter the wall length: ";
        cin >> len;
        cout << "Enter the wall breadth: ";
        cin >> bdt;
        cout << "Paint required in gallons: " << rect_area(len, bdt) << endl; 
        break;
    }
    case Square:{
        int side;
        cout << "Enter wall side length: ";
        cin >> side;
        cout << "Paint required in gallon: " << sqr_area(side) << endl;
        break;
    }
    default: cout << "The shape is not recognized";
            break;
    }
}