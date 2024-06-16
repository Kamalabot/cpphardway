#include <iostream>
#include <string>
#include <istream>
#include "utils.h"

using namespace std;

int main(int argc, char **argv){
    string pass;
    cout << "Provide your password here:";
    getline(cin, pass);

    if (checker_spl(pass) && pass.length() >= 8){
        cout << "Very strong password";
    } else if (checker_mix(pass) && pass.length() >= 8){
        cout << "Strong password.. Can be stronger";
    } else if (checker_num(pass) && pass.length() < 8){
        cout << "Weak Password... but okay";
    } else if (checker_alpha(pass) && pass.length() < 8){
        cout << "Very weak password";
    }
}

