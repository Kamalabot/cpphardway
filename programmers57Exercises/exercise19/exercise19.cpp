#include <iostream>
#include <limits>
#include <sstream>
#include <regex>

using namespace std;
// need to implement a way to check the type of input
// https://stackoverflow.com/questions/1347691/static-vs-dynamic-type-checking-in-c

bool isNumber(const string &str){
    istringstream iss(str);
    int number;
    iss >> number;
    return !iss.fail() && iss.eof(); // ensure the full string is used
}

bool isRegNumber(const string &str){
    regex numberPattern("^-?\\d+$"); // this matches the integers include negatives
    return regex_match(str, numberPattern);
}

int main(int argc, char **argv){
    cout << "This where your BMI gets calculated" << endl;

    double height, weight, bmi;

    cout << "Provide your height:";
    while(true){
        cin >> height;
        if(cin.fail()){
            cin.clear(); // clearing error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Enter a Valid number for height..." << endl;
        } else {
            break;
        }
    }
    cout << "Provide your weight:";
    while(true){
        cin >> weight;
        if(cin.fail()){
            cin.clear(); // clearing error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Enter a Valid number for weight..." << endl;
        } else {
            break;
        }
    }

    string placeholder;
    cout << "Enter the weight again for regexMatching";
    while (true){
        getline(cin, placeholder);
        if(isRegNumber(placeholder)){
            weight = stoi(placeholder);
            break;
        } else {
            cout << "Nope, regex failed.";
        }
    }
    
    string placeholder1;
    cout << "Enter the weight again for iss casting";
    while (true){
        getline(cin, placeholder1);
        if(isNumber(placeholder1)){
            istringstream(placeholder1) >> weight;
            break;
        } else {
            cout << "Nope, isstream failed.";
        }
    }

    cout << "Now Lets get you BMI:";
    bmi = (weight / (height * height)) * 703;

    cout << "Your BMI is: " << bmi << endl;

}