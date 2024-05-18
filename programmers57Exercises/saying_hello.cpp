#include <iostream>
#include <istream>

using std::cin;
using std::cout;
using std::string;

int main(){
    string yourname;

    cout << "What is your name? ";
    // cin >> yourname;  // gets only the 1st string, after space stuff ignored
    std::getline(cin, yourname);

    string outstr = "Hello " + yourname + " nice to meeet you!";

    cout << outstr;
}