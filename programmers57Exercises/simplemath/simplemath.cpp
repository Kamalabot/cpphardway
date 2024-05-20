#include <iostream>

using namespace std;
enum operators {addition=0, subtract=1, multiply=3, divide=4}; 
/*
int main(int argc, char *argv[])
or equivalently:
int main(int argc, char **argv)

One challenge is CLI conversion to int is tedious
Probably there is a better way to handle it in a library / header*/
// int main(int argc, char** argv[]){
    // cout << "Count of arg is: " << argc << endl;
    // cout << "The arguments are: " << endl;
int main(){
    int op1;
    char op;
    int op2;
    cout << "Provide the first number: ";
    cin >> op1;
    cout << "Provide the second number: ";
    cin >> op2;
    cout << "Provide the operation (+, -, *, /)";
    cin >> op;

    switch (op) // must be integral or enum
    {
    case '+': cout << op1 + op2; break;
    case '-': cout << op1 - op2; break;
    case '*': cout << op1 * op2; break;
    case '/': cout << op1 / op2; break; 
    default: cout << "No Operator found" << endl; break;
    }
}