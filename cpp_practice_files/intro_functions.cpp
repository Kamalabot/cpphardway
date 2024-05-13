#include <iostream>
#include <istream>

// introducing functions and its associated parts
// The function needs to declared at the top before being called
// definition can happen anywhere
void saygd(std::string name);
void hbd(std::string name, int age);
// function that returns a value is declared
double square(double length);
double cube(double length);
// function that manipulates two strings are written 
std::string concatName(std::string name1, std::string name2);

int main(){
    using std::string;
    using std::cout;
    using std::cin;
    /*
    string name;
    int age;
    cout << "Your Name is: ";
    std::getline(cin, name);
    cout << "Got your name is " << name << "your age: ";
    cin >> age;

    saygd(name);
    hbd(name, age);
    double side;
    cout << "provide the side of square: ";
    cin >> side;

    double area = square(side);
    double volume = cube(side);

    cout << "The area of square of side " << side << "is :" << area;
    cout << "The volume of cube of side " << side << "is :" << volume;
    */
    std::string fname;
    std::string lname;
    cout << "Provide your first name: ";
    cin >> fname;
    cout << "Provide your last name: ";
    cin >> lname;

    std::string fullname = concatName(fname, lname);

    cout << "Your full name is " << fullname;

    return 0;
}
// std::string have to be used 
void saygd(std::string name){
    std::cout << "Great day to you " << name << "\n";
    std::cout << "Great day to your family " << name << "\n";
    std::cout << "Great day to your friends " << name << "\n";
    std::cout << "Great day to your universe " << name << "\n";
    std::cout << std::endl;
}

void hbd(std::string name, int age){
    std::cout << "Have a great year ahead & happy Bday " << name << "And you age is " << age << "\n";
    std::cout << std::endl;
}

double square(double side){
    return side * side;
}

double cube(double side){
    return side * side * side;
}

std::string concatName(std::string name1, std::string name2){
    return name1 + " " + name2;
}