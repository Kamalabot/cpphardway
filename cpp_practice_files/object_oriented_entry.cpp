#include <iostream>


using std::cout;
using std::cin;
using std::endl;
using std::string;

class Human{
    public:
        string name;
        string job;
        int age;
        // above is the attributes
        void work(){
            cout << "It is working \n";
        }

        void moving(){
            cout << "Look its able to translate and rotate... \n";
        }
        
        void sleeping(){
            cout << "Yep, they lay stand still for hours together, call it sleeping" << endl;
        }

        void selfdetails(){
            cout << "Will update once this keyword is introduced" << endl; 
        }
}; // Ensure you close out the class definition
// introducing constructor

class Motor{
    public:
        string make;
        int voltage;

    // constructor creates the object at the time of declaration
    Motor(string make, int voltage){
        this->make = make;
        this->voltage = voltage;
    }
    // overloaded constructor with a single params
    Motor(string make){
        this->make = make;
    }
};

int main(){
    /*Objects: Collection of attributes and methods. they can have charecteristics
    and perform action, mimic real world items. Made out of class template*/
    /*Constructor and Constructor overloading is introduced */
    // Human being1 {"kumar", "rider", 15}; wont work
    // Human being2 {"frezko", "moturner", 25};

    Human beng1;

    beng1.age = 12;
    beng1.name = "mongo";
    beng1.job = "db";

    beng1.work();
    beng1.sleeping();
    beng1.moving();
    beng1.selfdetails();

    Motor m1("Turbo", 257);

    cout << m1.make << endl;
    cout << m1.voltage << endl;
    
    Motor m2("Ramjet"); // created using overloaded constructor
    // even though one attr, it will still make an object
    cout << m2.make << endl;

}