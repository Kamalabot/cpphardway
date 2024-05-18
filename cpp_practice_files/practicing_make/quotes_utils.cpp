#include "quotes.h"
#include <fstream>

// note the type of the vector still needs to be mentioned
void fill_quotes(std::vector<Quotes>& store_vec){

    while (true){
        Quotes data;
        std::cout << "Provide the quote: ";
        getline(std::cin, data.quote); 

        std::cout << std::endl;

        std::cout << "Provide author: ";

        getline(std::cin, data.author);
        std::cout << std::endl;

        std::cout << "Pushing quote to storage!!!" << std::endl;
        store_vec.push_back(data);
        std::cout << "Vector size: " << store_vec.size() << std::endl;
        if (store_vec.size() > 2){
            break;
        }
    }
}

void print_quotes(std::vector<Quotes> store_vec){
    int idx = 0;
    for (int i = 0; i < store_vec.size(); i++){
        std::cout << "Quote: " << i + 1 << std::endl;
        std::cout << "Quote is: " << store_vec[i].quote << std::endl;
        std::cout << "Author is: " << store_vec[i].author << std::endl;
        idx += 1;
    }
}


void save_quotes(std::vector<Quotes> store_vec, std::string file_name){
    std::ofstream storage;
    storage.open(file_name);
    int idx = 0;
    for (int i = 0; i < store_vec.size(); i++){
        storage << "Quote: " << i + 1 << std::endl;
        storage << "Quote is: " << store_vec[i].quote << std::endl;
        storage << "Author is: " << store_vec[i].author << std::endl;
        idx += 1;
    }
    storage << "Thats all here... \n";
}