#include <iostream>

using namespace std;

int main(){
    string pass_orig = "theSoper";
    string askpass;

    cout <<  "What is the password? ";
    cin >> askpass;

    // if (askpass == pass_orig) cout << "Welcome!!" << endl;
    askpass == pass_orig ? cout << "Welcome!!" : cout << "Don't Know..." ;
}