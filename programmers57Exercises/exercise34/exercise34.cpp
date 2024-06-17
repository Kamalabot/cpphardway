#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <fstream>

using namespace std;

int getEmployee(vector<string> employees, string employee){
    for(int i = 0; i < employees.size(); i++){
        if(employees[i] == employee){
            return i;
        }
    }
    return -1;
}

int main(int argc, char **argv){
    vector<string> employees({"John Smith",
                              "Jackie Jacson",
                              "Chris Jones",
                              "Amanda Cullen",
                              "Jeremy Goodwin"});
    cout << "Employees are: " << endl;

    ofstream empfile;
    empfile.open("employeelist.txt"); // writes file to cmake-build

    for(auto i = employees.begin(); i < employees.end(); i++){
        cout << *i << endl;
        empfile << *i << endl;
    }
    cout << endl;

    ifstream infile("employeelist.txt");
    string reader;

    cout << "reading employeelist.txt file" << endl;

    while(getline(infile, reader)){
        cout << reader << endl;
    }
    cout << endl;
    
    while (employees.size() > 0){
        string ejectEmp;
        getline(cin, ejectEmp);
        if (ejectEmp == ""){
            break;
        }
        int empIdx = getEmployee(employees, ejectEmp);
        if (empIdx != -1){
            employees.erase(employees.begin() + empIdx);
        }

        cout << "Updated employee list" << endl;

        for(auto i = employees.begin(); i < employees.end(); i++){
            cout << *i << endl;
        }
    }
}