#include <iostream>
#include <string>
#include <istream>

int main() {
    using std::cin;
    using std::cout;
    using std::string;

    /* int x = 10;
    double y = 9.5;
    char op = '+';
    std::string name = "Awesomel";

    cout << "The value of x is " << x << "\n";
    cout << "The value of y is " << y << "\n";
    cout << "The value of op is " << op << "\n";
    cout << "The value of name is " << name << "\n";
    string book;
    string designation;

    cout << "What is the book name: ";
    cin >> book;  

    cout << "What is the designation: ";
    // std::getline(cin, designation);
    cin >> designation;

    cout << "The book is " << book << "Designation is: " << designation;
    double d1;
    double d2;
    char op;

    // get the operation details
    cout << "Provide first number: ";
    cin >> d1;

    cout << "Provide the second number: ";
    cin >> d2;

    cout << "Provide an operator (+ - / *): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Addition of d1 and d2 is " << d1 + d2; 
        break;
    case '-':
        cout << "Subtraction of d1 and d2 is " << d1 - d2; 
        break;
    case '*':
        cout << "Multiplication of d1 and d2 is " << d1 * d2; 
        break;
    case '/':
        cout << "Division of d1 and d2 is " << d1 / d2; 
        break;
    default:
        cout << "Check the operator";
        break;
    }
    double temperature;
    string conversion;

    cout << "What is the temperature: ";
    cin >> temperature;

    cout << "What conversion you are looking for (C->F or F->C): ";
    cin >> conversion;

    if (conversion == "C-F" || conversion == "c-f"){
        cout << "Temperature in Farenheit is: " << (9 / 5) * temperature + 32;
    } 
    else if (conversion == "F-C" || conversion == "f-c"){
        cout << "Temperature in Celsius is: " << (temperature - 32) * (5 / 9);
    }
    else{
        cout << "Check what conversion you have provided";
    }
    int rows;
    int cols;
    char symb;

    cout << "How many rows: ";
    cin >> rows;

    cout << "How many cols: ";
    cin >> cols;

    cout << "What symbols: ";
    cin >> symb;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= cols; j++){
            cout << symb << " ";
        }
        cout << std::endl;
    }
    */
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "******* The Game Starts ********** \n";
    cout << "The rand number is " << num << "\n";
    do {
        cout << "Provide your guess: ";
        cin >> guess;
        tries++;
    }while (guess != num);
    // Further condtionals can be added to tell where guess 
    // is in comparison to num.
    cout << "********* The game is finished ***********";
}