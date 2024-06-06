#include <iostream>

using namespace std;

class AlcoCalc{
    public:
        double consumedAlco;
        double bodywt;
        char gender;
        double duration_since;
    AlcoCalc(double alco, double bwt, char gen, double dur){
        this->consumedAlco = alco;
        this->bodywt = bwt;
        this->gender = gen;
        this->duration_since = dur;
    }
    double bac(){
        if (this->gender == 'M'){
            return ((this->consumedAlco * 5.14)/(this->bodywt * 0.73)) - (.015 * this->duration_since);
        } else {
            return ((this->consumedAlco * 5.14)/(this->bodywt * 0.66)) - (.015 * this->duration_since);
        }
    }

};

int main(){
    double alco, bwt, dur;
    char gen;

    cout << "Provide the alcohol in ounces: ";
    cin >> alco;
    cout << "Provide the body weight in Kg: ";
    cin >> bwt;
    cout << "Provide the Gender (M/F): ";
    cin >> gen;
    cout << "How long since drinking in hrs: ";
    cin >> dur;

    AlcoCalc data1(alco, bwt, gen, dur);
    cout << "The alcohol content is: " << data1.bac() << endl;
}