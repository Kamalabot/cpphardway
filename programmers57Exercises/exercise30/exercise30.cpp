#include <iostream>

using namespace std;

int main(int argc, char **argv){
    for(int x = 1; x <= 12; x++){
        for(int y = 1; y <= 12; y++){
            cout << x << " X " << y << " = " << x * y << endl;
        }
    }
}