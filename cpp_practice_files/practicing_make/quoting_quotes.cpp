#include "quotes.h"
#include <iostream>
#include <istream>
#include <vector>
#include <fstream>

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

    std::vector<Quotes> store_quotes;

    fill_quotes(store_quotes);
    print_quotes(store_quotes);

    char saver;
    std::cout << "Want to save the data to file (Y/N)? \n";
    std::cin >> saver;
    std::string filename;
    if (saver == 'Y' || saver == 'y'){
        std::cout << "What is the filename: ";
        std::cin >> filename; 
        save_quotes(store_quotes, filename);
    }
    else {
        std::cout << "See you... " << std::endl;
    }
}

