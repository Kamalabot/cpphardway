#include <iostream>
#include <string>
#include <istream>

using namespace std;

int main(int argc, char **argv){
    string employees[] ={"John Smith",
                        "Jackie Jackson",
                        "Chris Jones",
                        "Amanda Cullen",
                        "Jeremy Goodwin"};
    int startSize = sizeof(employees)/ sizeof(string);
    cout << "Number  of employees: " << startSize << endl;
    cout << "Size of String is: " << sizeof(string) << endl;
    // print the employees
    for (int x = 0; x < startSize; x++){
        cout << employees[x] << endl;
    }

    while (startSize > 0)
    {
        string removeEmp;
        int newSize;
        newSize = startSize - 1;

        string *employeesv1= NULL;
        employeesv1 = new string[newSize * sizeof(string)];

        cout << "Which employee to be removed: ";
        getline(cin, removeEmp);
        if (removeEmp == ""){
            break;
        }
        for (int x = 0; x < startSize; x++){
            int head = 0; // new array head;
            if(employees[x] != removeEmp){
                employeesv1[head] = employees[x];
                head++;
            }
        }
        startSize = newSize;
        cout << "Updated array list: " << endl;

        for (int y=0; y < newSize; y++){
            cout << employeesv1[y] << endl;
        }
    }
    return 0; 
}