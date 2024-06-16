#include <iostream>
#include <string>
#include <istream>
#include "utils.h"

using namespace std;

int main(int argc, char **argv){
    string pass;
    cout << "Provide your password here:";
    getline(cin, pass);

    if (checker(pass)){
        cout << "Password passes";
    } else {
        cout << "Password fails";
    }
}

