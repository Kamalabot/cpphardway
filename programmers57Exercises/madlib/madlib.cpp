#include <iostream>
using namespace std;

int main(){
    string noun, verb, adj, adv;

    cout << "Enter a noun: " << endl;
    cin >> noun;
    cout << "Enter a verb: " << endl;
    cin >> verb;
    cout << "Enter a adjective: " << endl;
    cin >> adj;
    cout << "Enter a adverb: " << endl;
    cin >> adv;

    if (noun == "dog" || noun == "Dog"){
        cout << "Do you " << verb << " your " << adj << " " << noun << " " << adv << "That's Funny" << endl; 
    }
    else{
        cout << "How are you " << verb << " your " << adj << " " << noun << " " << adv << "That's dangerous" << endl; 
    }

}