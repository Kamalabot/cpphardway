#include <iostream>

using namespace std;
const double tax_pc = 0.055;

struct purchase {
    string name;
    double price;
    int qty;
};

class purchaseItem{
    string name;
    double price;
    int qty;

    double tax_calc(){
        double tax_val = this->price * this->qty * tax_pc;
        return tax_val, this->price * this->qty * tax_pc;
    } 
};


int main(){
    cout << "Welcome to Self-Checkout" << endl;
    // https://www.geeksforgeeks.org/how-to-create-an-array-of-structs-in-cpp/
    purchase items[3]; // creating the array of structs
    cout << "Starting the checkout for 3 items only: " << endl;

    for (int i = 0; i < 3; i++){
        // purchase item; is directly accessed as below
        cout << "Provide the name of the item: ";
        cin >> items[i].name;
    
        cout << "Provide the price of " << items[i].name << ": ";
        cin >> items[i].price;

        cout << "Provide the qty of " << items[i].name << "purchase: ";
        cin >> items[i].qty;
    }

    double subtotal, tax, totalPurc;

    for (int x = 0; x < 3; x++){
        // calculating the item qty * price
        subtotal += items[x].price * items[x].qty;
        tax += tax_pc * (items[x].price * items[x].qty); 
        totalPurc += (tax_pc + 1) * (items[x].price * items[x].qty);  
    }

    cout << "Sub Total is: " << subtotal << endl;
    cout << "Tax is: " << tax << endl;
    cout << "Total is: " << totalPurc << endl;
    return 0;
}