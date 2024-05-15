#include <iostream>
// introduces setter, getter and inheritance methods
using std::cout;
using std::cin;
using std::endl;

class Stove{
    private:
        int temperature = 0;
    public:
        // int temperature = 0; not done
    Stove(int temperature){
        setTemp(temperature);
    }
    // getter makes prvt attr readable
    int getTemp(){
        return temperature;
    }
    // setter makes private attr writable
    void setTemp(int temperature){
        if (temperature < 0){
            this->temperature = 0;
        }
        else{
            this->temperature = temperature;
        }
    }
};

class Animal{
    public:
        bool alive = true;

    void eat(){
        cout << "This animal is eating" << endl;
    }
};

class Dog : public Animal{
    public:

    void bark(){
        cout << "dog is barkingooo.." << endl;
    }
    // following method is overrided
    void eat(){
        cout << "Okay, this a dog that is eating..." << endl;
    }
};

int main(){
    Stove s1(10);

    cout << s1.getTemp() << endl;

    s1.setTemp(76);
    
    cout << s1.getTemp() << endl;

    Animal planet;

    planet.eat();
    cout << planet.alive << endl;
    Dog nemo;

    cout << nemo.alive << endl;
    nemo.bark();
    nemo.eat();
}