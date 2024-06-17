#include <iostream>
#include <istream>
#include <string>
#include <cctype>

using namespace std;

string checkName(string nstring, string ntype);
string checkZip(string nZip);
string checkEmp(string nEmp);

int main(int argc, char **argv){
    string firstname, lastname, empid, zipcode;
    cout << "Enter first name: ";
    getline(cin, firstname);
    cout << "Enter last name: ";
    getline(cin, lastname);
    cout << "Enter zip code: ";
    getline(cin, zipcode);
    cout << "Enter emp id: ";
    getline(cin, empid);
    cout << checkName(firstname, "first") << endl;
    cout << checkName(lastname, "last") << endl;
    cout << checkZip(zipcode) << endl;
    cout << checkEmp(empid) << endl;
}

string checkName(string nstring, string ntype){
    if (nstring == ""){
        return ntype + " name must be filled in \n";
    } else if (nstring.length() < 2){
        return ntype + " name must be atleast 2 characters.\n";
    } else {
        return nstring + " pass";
    }
}

string checkZip(string nZip){
    for (int i = 0; i < nZip.length(); i++){
        if (!isdigit(nZip[i])){
            return "Zip code has to be numbers.";
        }
    }
    return nZip + " pass";
}

string checkEmp(string nEmp){
    if (!isalpha(nEmp[0])){
        return nEmp + " Is not valid";
    } else if (!isalpha(nEmp[1])){ 
        return nEmp + " Is not valid";
    } else if (nEmp[2] != '-'){
        return nEmp + " Is not valid";
    }
    for(int i = 3; i < nEmp.length(); i++){
        if(!isdigit(nEmp[i])){
            return nEmp + " Is not valid";
        }
    }
    return nEmp + " pass";
}