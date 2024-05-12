#include <iostream>

int main(){
    using std::cout;
    using std::cin;

    char grade;

    cout << "What is your grade letter? ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "That is splendid, you are in top 90%";
        break;
    case 'D':
        cout << "That is alright, you are in top 70%";
        break;
    case 'B':
        cout << "That is marginal, you are in top 50%";
        break;
    case 'F':
        cout << "You are a gonner";
        break;
    default:
        cout << "There is no such option";
        break;
    }
}