#include <iostream>

using namespace std;

struct driveAge{
    string country;
    int age;
};

struct driveAgeList{
    string countries[3];
    int ages[3];
};

int main(){
    cout << "Legal Age calculator";
    int yourAge;
    cout << "Provide your age in numbers ";
    cin >> yourAge;
    string country;
    cout << "Which is your country? ";
    cin >> country;

    cout << "Your Age is " << yourAge << "and you belong to " << country << endl;
    
    driveAge ageLookup[3];
    // Using array of structs to create a look up tables 
    ageLookup[0].country = "india";
    ageLookup[0].age =  18;
    
    ageLookup[1].country = "china";
    ageLookup[1].age =  17;
    
    ageLookup[2].country = "turkey";
    ageLookup[2].age =  27;
    // using array of structs to populate the struct of arrays.
    driveAgeList structOfArray;
    for(int i = 0; i < 3; i++){
        structOfArray.countries[i] = ageLookup[i].country;
        structOfArray.ages[i] = ageLookup[i].age;
        cout << "populating " << i << " index data" << endl;
    }
    char onlyAge; // To use only age to decide
    cout << "Do you want to use only your age to find out driving allowance? (Y / N) ";
    cin >> onlyAge;
    if (onlyAge == 'Y'){
        if (yourAge <= 16){
            cout << "Prohibited to drive" << endl;
        }
        else if (yourAge > 16){
            cout << "You can drive carefully." << endl;
        }
    } else {
        cout << "Lets see if your country is in the list ..." << endl;
        for (int i = 0; i < 3; i++){
            if (country == ageLookup[i].country){
                cout << "Seems your country is available in lookup table... " << endl;
                if (yourAge <= ageLookup[i].age){
                    cout << "You are prohibited to drive in " << ageLookup->country << endl;
                    break;
                } else {
                    cout << "You can drive carefully in " << ageLookup[i].country << endl;
                    break;
                    // break out of loop, the moment first match is hit.
                }
            } else {
                cout << "Seems like you are alien, better fly with your saucer..." << endl;
            }
        }
    }
    cout << "Have a nice day" << endl;
}