#include <iostream>
#include <istream>
#include <string>
#include <time.h>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    // string storeNames[];
    // https://medium.com/@klausholder/incomplete-type-is-not-allowed-c-72f751c73e4b
    // cannot declare array without size, as the size details are required for array to 
    // be declared in C and C++
    // char **namelist;
    vector<string> storeNames;
    int idx = 0;
    while (true){
        cout << "Enter a Name: ";
        string tempnames;
        getline(cin, tempnames);
        if (tempnames == ""){
            break;
        }
        storeNames.push_back(tempnames);
    }
    int namelength = storeNames.size();
    cout << "writing the names to file" << endl;
    ofstream outfile("writenames.txt");
    for (int i = 0; i < storeNames.size(); i++){
        outfile << storeNames[i] << endl;
    }
    srand(time(0));
    cout << "Picking a random winner: " << endl;
    int select = rand() % namelength;
    cout << "The winner is: " << storeNames[select] << endl;
}