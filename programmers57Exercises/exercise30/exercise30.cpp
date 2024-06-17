#include <iostream>

using namespace std;

int main(int argc, char **argv){
    for(int x = 1; x <= 12; x++){
        for(int y = 1; y <= 12; y++){
            // cout << x << " X " << y << " = " << x * y << endl;
        }
    }
    for(int col = 0; col <= 12; col++){
            cout << col << " " ;
        }
    cout << endl;
    for(int row = 0; row <= 12; row++){
        for(int col = 0; col <= 12; col++){
            cout << col * row << " ";
        }
        cout << endl;
    }
}