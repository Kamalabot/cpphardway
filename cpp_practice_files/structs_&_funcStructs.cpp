#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
// struct is group of variables related under one name. 
// it can hold multiple data types under one name
// each variable is called a member

struct pcomp{
    string make;
    char model;
    bool power_status;
    int qty;
};

struct Socket{
    string usage;
    double power;
    char line = 'F';
    string loc;
};

void printSocket(Socket &s);
void printSocket(Socket &s, string location);

int main(){
    pcomp comp1; // declare a struct like datatype
    pcomp comp2;
    comp1.make = "HP";
    comp1.model = 'a';
    comp1.power_status= false;
    comp1.qty = 15;

    comp2.make = "Lenova";
    comp2.model = 'b';
    comp2.power_status= true;
    comp2.qty = 25;

    Socket s1;
    Socket s21;

    s1.usage = "alltime";
    s1.power = 56.5;

    s21.usage = "Never";
    s21.power = 5687.5;

    // cout << "Computer Lab: ";
    // cout << "Make: " << comp1.make << endl;
    // cout << "Model: " << comp1.model << endl;
    // cout << "Power Status: " << comp1.power_status << endl;
    // cout << "Qty: " << comp1.qty << endl;

    // cout << "Make: " << comp2.make << endl;
    // cout << "Model: " << comp2.model << endl;
    // cout << "Power Status: " << comp2.power_status << endl;
    // cout << "Qty: " << comp2.qty << endl;

    printSocket(s1, "attic");
    printSocket(s21, "basement");
    printSocket(s1);
    printSocket(s21);
    // below lines have been moved to function
    // cout << "Power Socket: ";
    // cout << "Usage: " << s1.usage<< endl;
    // cout << "Power : " << s1.power << endl;
    // cout << "Line: " << s1.line << endl;

}

// the function is taking the address of the variable, and accessing its data
void printSocket(Socket &s){
    cout << "Power Socket: ";
    cout << "Usage: " << s.usage<< endl;
    cout << "Power : " << s.power << endl;
    cout << "Line: " << s.line << endl;
    cout << "Location: " << s.loc << endl;
}

void printSocket(Socket &s, string location){
    // this doesn't print another set of string
    // only updates the value of the structs
    s.loc = location;
}