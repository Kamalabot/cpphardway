// Advanced use of functions to work on Account manipulation

#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

using std::cout;
using std::cin;

int main(){
    double balance = 127.08;
    int choice = 0;
    // where the while loop is placed matters
    do {
        cout << "*** Your Choices ****\n";
        cout << "1. Show Balance \n";
        cout << "2. Deposit Money \n";
        cout << "3. Withdraw Money \n";
        cout << "4. Exit\n";
        cin >> choice;
        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1: showBalance(balance); 
                break;
        case 2: balance += deposit(); 
                showBalance(balance);
                break;
        case 3: balance -= withdraw(balance); 
                showBalance(balance);
                break;
        case 4: cout << "Thanks Visit next time\n"; 
                break;
        default: cout << "No such choice\n";
                break;
        }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
    cout << "The balance is: $ " << std::setprecision(2) << std::fixed << balance;
}

double deposit(){
    double locAmt = 0;
    cout << "Enter amount to be deposited: ";
    cin >> locAmt;
    if (locAmt < 0){
        cout << "That is invalid\n";
        return 0;
    }
    return locAmt;
}

double withdraw(double balance){
    double locAmt = 0;
    cout << "Enter amount to be withdrawn: ";
    cin >> locAmt;
    if (locAmt < 0){
        cout << "That is invalid\n";
        return 0;
    }
    else if (locAmt > balance){
        cout << "Funds are insufficient";
        cout << "Can withdraw max " << balance << "Here you go...";
        return balance;
    }
    return locAmt;
}