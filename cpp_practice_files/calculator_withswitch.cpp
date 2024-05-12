#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using letter_t = char;
    using d_t = double;

    letter_t op;
    d_t a;
    d_t b;

    cout << "******** C++ Calculator ********** \n";
    cout << "Enter the operator between (+ * / -): ";
    cin >> op;
    cout << "Provide number a:"; 
    cin >> a;
    cout << "Provide number b:";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "Addition of a and b is " << a + b << std::endl;
        break;
    case '-':
        cout << "Subtraction of a and b is " << a - b << std::endl;
        break;
    case '*':
        cout << "Product of a and b is " << a * b << std::endl;
        break;
     case '/':
        cout << "Division of a and b is " << a / b << std::endl;
        break;
    default:
        cout << "There no such operator";
        break;
    }
    cout << "******** C++ Calculator ***********";
}