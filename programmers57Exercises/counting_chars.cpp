#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
    string words;
    cout << "Provide a word: " << endl;
    cin >> words;

    cout << words << " has " << words.size() << " characters." << endl;
}