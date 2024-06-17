#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char **argv){
    int sumation, temp, howmany;
    sumation = 0;
    cout << "How many numbers you want to enter: ";
    cin >> howmany;

    for(int i = 0; i < howmany; i++){
        cout << "Enter a number: ";
        cin >> temp;
        sumation += temp;
    }
    cout << "Sum of " << howmany << " numbers is " << sumation << endl;
}