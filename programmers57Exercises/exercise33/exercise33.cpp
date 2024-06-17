#include <iostream>
#include <cstdlib>
#include <time.h>
#include <istream>
#include <string>

using namespace std;

int main(int argc, char **argv){
    string answers[4] = {"Yes", "No", "May Be", "Ask later"};
    string yourQuery;
    while (true)
    {
        cout << "Shoot your question: " << endl;
        getline(cin, yourQuery);
        if (yourQuery == "q"){
            break;
        }
        srand(time(0));

        int randg = rand() % 4; 
        cout << answers[randg];

    }
    return 0;
}