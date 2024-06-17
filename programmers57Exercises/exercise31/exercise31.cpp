#include <iostream>

using namespace std;

double tgtRate(int age, double intensity, int restrate){
    // cout << intensity << endl;;
    // cout << age << endl;;
    // cout << restrate << endl;;
    return (((220 - age) - restrate) * intensity) + restrate;
}

int main(int argc, char **argv){
    int pulse, age;
    double updtrate;
    cout << "Your resting pulse: ";
    cin >> pulse;

    cout << "Your age";
    cin >> age;

    cout << "Intensity | Rate" << endl;
    cout << "----------------" << endl;
    for(double x = 55; x < 100; x+=5){
        updtrate = (int)tgtRate(age, x / 100, pulse);
        cout << x << "%       | " << updtrate << endl; 
    }
}