#include <iostream>

using namespace std;
enum operators {addition=0, subtract=1, multiply=3, divide=4}; 
/*
int main(int argc, char *argv[])
or equivalently:
int main(int argc, char **argv)*/
int main(int argc, char** argv[]){
    cout << "Count of arg is: " << argc << endl;
    cout << "The arguments are: " << endl;

    for (int i = 0; i < argc; i++){
        cout << argv[i] << endl;
    }
    int op1 = (int)argv[1];
    char op = (char)argv[2];
    int op2 = (int)argv[3];

    switch (op) // must be integral or enum
    {
    case '+': cout << op1 + op2; break;
    case '-': cout << op1 - op2; break;
    case '*': cout << op1 * op2; break;
    case '/': cout << op1 / op2; break; 
    default: cout << "No Operator found" << endl; break;
    }
}