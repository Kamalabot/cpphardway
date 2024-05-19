#include <iostream>

using namespace std;

int main(int argc, char** argv){
    cout << "argc value is: " << argc << endl;
    int count = 1;
    string name;
    while (count < argc){
        name += argv[count++];
    }
    cout << "before processing, name is: " << name << endl;
    name.erase(0, name.find_first_not_of(" \t\n\r\f\v"));
    name.erase(name.find_last_not_of(" \t\n\r\f\v") + 1);
    cout << name << endl;
    return 0;
}