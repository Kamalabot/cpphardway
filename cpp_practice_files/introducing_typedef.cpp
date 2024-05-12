#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> vek_list_t; // this is how typedef is written
// typedef std::string text_t;
// typedef int num_t;
// typedef is replaced with using, as using is used with typedef
using text_t = std::string;
using num_t = int;

int main(){
    using std::cout;

    text_t your_name = "Flash";
    num_t your_age = 62; 

    cout << "Your name is " << your_name;
    cout << "Your age is " << your_age;

}