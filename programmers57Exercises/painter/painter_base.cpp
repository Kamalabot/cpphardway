#include <iostream>

using namespace std;

enum shape {Lshape, Circular, Rectangular, Square};

int calc_gallon(int a);
double rect_area(int l, int b);
double sqr_area(int l);
double bend_area(int l, int b, int thickness);
double circ_area(int rad);

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

int calc_gallon(int area){
    // calculate the gallon required in whole number
    return area / 350;
}

double bend_area(int len, int bdt, int thickness){
    // calculate the l-shape area
    int bend_len = len + thickness;
    int bend_bdt = bdt - thickness;
    int area =  (bend_len * thickness) + (bend_bdt * thickness);
    return calc_gallon(area);
}

double rect_area(int l, int b){
    // calculate the rectangular area
    int area = l * b;
    return calc_gallon(area);
}

double sqr_area(int l){
    // calculate square area
    int area = l * l;
    return calc_gallon(area);
}

double circ_area(int radius){
    // calculate circular area
    double area = 2 * 3.14 * radius * radius;
    return calc_gallon(area);
}