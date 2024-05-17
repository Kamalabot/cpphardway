// https://www.geeksforgeeks.org/vector-in-cpp-stl/
#include <fstream>
#include <vector>
#include <iostream>

using std::vector;
using std::ofstream;
using std::ifstream;
using std::cout;
using std::cin;
using std::string;
using std::endl;

struct Site{
    string name;
    string locality;
};

class Mobike{
    public:
        string shape;
        int height;
        Mobike(string shp, int ht){
            this->shape = shp;
            this->height = ht;
        }
};

int main(){
    vector<string> vec_string({"This", "is", "becoming", "very", "interesting"});

    // cout << vec_string << endl; // wont work
    // loop is using auto, not int
    // for(auto i = vec_string.begin(); i != vec_string.end(); i++)
        // cout << *i << endl; // just dereferencing works!!
    // cout << "Again with indexing " << endl;

    // for(int i = 0; i < vec_string.size(); i++)
        // cout << vec_string[i] << endl; // just dereferencing works!!

    vector<char> vec_char(10, 'o');

    // for(auto c = vec_char.begin(); c != vec_char.end(); c++)
        // cout << *c << endl;
    
    vector<string> store_data;
    string loader;

    ifstream infile ("outfile_prac.txt");

    while (getline(infile, loader)){
        store_data.push_back(loader);
    }

    for(auto ir = store_data.rbegin(); ir != store_data.rend(); ir++)
        cout << *ir << endl; // the file data will be printed in reverse
    
    cout << "Reviewing size and capacity of store_data" << endl;

    cout << "Size of Store_data is: " << store_data.size() << endl;
    cout << "Capacity is: " << store_data.capacity() << endl;
    cout << "Max Size is: " << store_data.max_size() << endl;
    // practicing ternary 
    (store_data.empty() == false) ? cout << "is not empty\n" : cout << "is empty\n";
    // using reference operators
    cout << "Ref at index 0: " << vec_string[0] << endl;

    cout << "at: vec_string.at(4) " << vec_string.at(4) << endl;

    cout << "front() " << vec_string.front();
    
    cout << "back() " << vec_string.back();

    cout << "Some element manipulation: " << endl;

    cout << "Assigning 'awesome' to 2 index" << endl;

    // be wary, the older elements are replaced, means removed
    // vec_string.assign(2, "awesome");
    // vec_char.assign(2, 'f');
    // The index value is in the memory location...
    vec_string.insert(vec_string.begin() + 3, "assign");
    vec_string.emplace(vec_string.begin() + 3, "new emplaed");
    // cout << "popped char " << vec_char.pop_back() << endl;
    // cout << "poped string: " << vec_string.pop_back() << endl;
    cout << "vec_char back() " << vec_char.back() << endl;
    cout << "vec_string back() " << vec_string.back() << endl;

    vec_string.pop_back();
//    vec_char.pop_back();

    //cout << "vec_char back() " << vec_char.back() << endl;
    //cout << "vec_string back() " << vec_string.back() << endl;
    
    //cout << "vec_string back() " << vec_string.back() << endl;
    ofstream vecfile;
    vecfile.open("vecfile.txt");

    for(int i = 0; i < vec_string.size(); i++){
        cout << vec_string[i] << endl;
        vecfile << vec_string[i] << endl;
    }

    cout << vec_string.size() << endl;

}