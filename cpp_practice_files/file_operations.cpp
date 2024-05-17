#include <iostream>  // in/out stream
#include <istream>  // getline is from here 
#include <fstream> // file stream

using std::cout;  // cout and cin objects are part of i/o stream
using std::cin;
using std::endl;
using std::string;
using std::ofstream;  // output file stream is part of fstream
using std::ifstream;  // input file stream is part of fstream

int main(){
    ofstream outfile; // here is a object of ofstream
    string fname;
    // cout << "Provide a file name: " << endl;
    // cin >> fname;
    fname = "outfile_prac.txt";
    outfile.open(fname, std::ios::app);

    outfile << "This is were the line is entering into the file\n";
    outfile << "more lines are entering..." << endl;

    ifstream infile (fname);  // here is object of ifstream
    string fdata;

    infile >> fdata;
    cout << "This where the file data comes out: " << endl;
    cout << fdata << endl;
    cout << "There is file.get() which gets a single char" << endl;
    cout << "The next single char is: a space" << (char)infile.get() << endl;
    cout << "The next single char is: " << (char)infile.get() << endl;
    cout << "The above code, only provides 1st word...\n";

    // while(infile >> fdata){
        // cout << fdata << endl;
    // }
    // the file is read line by line... Cool
    while (getline(infile, fdata)){
        cout << fdata << endl;
    };

    return 0;
}