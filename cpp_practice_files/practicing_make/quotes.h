#ifndef QUOTES
#define QUOTES
#include <iostream>
#include <vector>

struct Quotes{
    std::string quote;
    std::string author;
};

void fill_quotes(std::vector<Quotes>& quote_vec);
void print_quotes(std::vector<Quotes> quote_vec);
void save_quotes(std::vector<Quotes> quote_vec, std::string file_name);
#endif