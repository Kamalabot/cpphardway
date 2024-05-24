#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]){
    cout << "Welcome to Pizza Calculator: " << endl;

    // double people, pizzas; // initial decision was to use double 
    // then reminder was required to be calculated.

    int people, pizzas;
    cout << "There are " << argc << " commandline inputs. You need to provide inputs" << endl;

    if (argc == 1){
        cout << "How many people are there? ";
        //  decltype is sort of an operator that evaluates the type of passed expression.
        // https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
        while (true) {
            cin >> people;
            cout << typeid(people).name() << " is the type of people variable"; 
            // when entering letters as input to people, the people variable acts differently
            // it doesn't throw error, but it doesn't take the next input.
            cout << people << " is the type of people variable"; 

            char* peopletype = (char *) typeid(people).name(); 
            // A value of type "const char *" cannot be used to initialize an entity of type "char *"
            // error: cast from 'const char*' to 'char' loses precision 
            cout << "How many pizzas do you have? ";
            cin >> pizzas;

            cout << typeid(pizzas).name() << " is the type of pizzas variable"; 
            char* pizzatype = (char *) typeid(pizzas).name(); 

            // error: ISO C++ forbids comparison between pointer and integer [-fpermissive] 
            if (*pizzatype != 'i' || *peopletype != 'i'){
                cout << "Enter only integers, not words or letters";
            }
            else {
                cout << "Thats great" << endl;
                break;
            }
        }
    }
    else {
        cout << "I see you have provided command line args...";
        people = atoi(argv[1]);
        pizzas = atoi(argv[2]);
    }

    cout << people << " people with " << pizzas << " pizzas" << endl;    

    int per_person = pizzas / people; 
    int left_over = pizzas % people; 

    cout << "Each person gets " << per_person << " pieces of pizza." << endl;
    cout << "There are " << left_over << " pieces of pizza." << endl;

}