// filling up arrays with data

#include <iostream>
#include <istream>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
    /*
    const int SIZE = 60;
    string foods[SIZE];
    fill(foods, foods + (SIZE / 3), "Biscuits");
    fill(foods + (SIZE / 3), foods + 2 * (SIZE/3), "Chips");
    fill(foods + 2 * (SIZE / 3), foods + SIZE, "Ground Nuts");

    for(string food: foods){
        cout << "Food is " << food << ".\n";
    }
    */
    string newFoods[10];
    string temp;

    for(int i = 0; i < 10; i++){
        cout << "Enter your fav fruit: ";
        getline(cin, temp);
        if (temp != "q"){
            newFoods[i] = temp;
        }
        else{
            break;
        }
    }
    for(string food: newFoods){
        if (!food.empty()){
            cout << "New Food is " << food << ".\n";
        }
    }
}