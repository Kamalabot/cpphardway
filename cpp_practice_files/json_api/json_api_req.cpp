// working on the JSON reading 
// https://www.geeksforgeeks.org/rapidjson-file-read-write-in-cpp/
// 
// https://stackoverflow.com/questions/64008069/how-to-use-rapidjson-library-in-my-c-code

#include <iostream>
#include <fstream>
#include "rapidjson/document.h"

using namespace std;
using namespace rapidjson;

int main(){
    cout << "Practicing to get Json Response from Server" << endl;
    
    // ifstream jsonfile ("example.json"); 
    ifstream makefile ("CMakeLists.txt"); 
    string jdada;
    // jsonfile >> jdada;
    // makefile >> jdada; // this was reading all data
    if (makefile.is_open()){
        getline(makefile, jdada);
    }
    // cout << "Json Raw char: " << makefile.get() << endl;
    // cout << "Next char: " << makefile.get() << endl;
    cout << "string data: " << jdada << endl;
    // string json((istreambuf_iterator<char>(jsonfile)),
                            // istreambuf_iterator<char>());

    Document doc; 

    // doc.Parse(json.c_str());

    if(doc.HasParseError()){
        cerr << "Error parsing json: " << doc.GetParseError() << endl;
        return 1;
    }

    return 0;
}