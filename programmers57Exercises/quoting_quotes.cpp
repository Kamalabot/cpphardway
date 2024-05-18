#include <iostream>
#include <istream>
#include <vector>
#include <fstream>

using namespace std;
using std::ifstream;
using std::ofstream;

struct Quotes{
    string quote;
    string author;
};

void fill_quotes(vector<Quotes>& quote_vec);
void print_quotes(vector<Quotes> quote_vec);
void save_quotes(vector<Quotes> quote_vec, string file_name);

int main() {
//     string quote, author;
    // cout << "What is the quote: ";
    // // cin >> quote;  // this will only take the first string, and send the 
    // // rest to next cin
    // getline(cin, quote);
    // cout << endl;
    // cout << "Who said it: ";
    // //cin >> author;
    // getline(cin, author);
    // cout << endl;
    // string builtup = author + " says " + "\"" + quote + "\"";

    // cout << builtup;

    // cout << "Get ready to fill up some vectors. ";

    vector<Quotes> store_quotes;

    fill_quotes(store_quotes);
    print_quotes(store_quotes);

    char saver;
    cout << "Want to save the data to file (Y/N)? \n";
    cin >> saver;
    string filename;
    if (saver == 'Y' || saver == 'y'){
        cout << "What is the filename: ";
        cin >> filename; 
        save_quotes(store_quotes, filename);
    }
    else {
        cout << "See you... " << endl;
    }
}

// note the type of the vector still needs to be mentioned
void fill_quotes(vector<Quotes>& store_vec){

    while (true){
        Quotes data;
        cout << "Provide the quote: ";
        getline(cin, data.quote); 

        cout << endl;

        cout << "Provide author: ";

        getline(cin, data.author);
        cout << endl;

        cout << "Pushing quote to storage!!!" << endl;
        store_vec.push_back(data);
        cout << "Vector size: " << store_vec.size() << endl;
        if (store_vec.size() > 2){
            break;
        }
    }
}

void print_quotes(vector<Quotes> store_vec){
    int idx = 0;
    for (int i = 0; i < store_vec.size(); i++){
        cout << "Quote: " << i + 1 << endl;
        cout << "Quote is: " << store_vec[i].quote << endl;
        cout << "Author is: " << store_vec[i].author << endl;
        idx += 1;
    }
}


void save_quotes(vector<Quotes> store_vec, string file_name){
    ofstream storage;
    storage.open(file_name);
    int idx = 0;
    for (int i = 0; i < store_vec.size(); i++){
        storage << "Quote: " << i + 1 << endl;
        storage << "Quote is: " << store_vec[i].quote << endl;
        storage << "Author is: " << store_vec[i].author << endl;
        idx += 1;
    }
    storage << "Thats all here... \n";
}